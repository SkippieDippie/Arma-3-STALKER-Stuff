/*
	Author: Aloe 
	Description: Логика атаки
	Environment: Client
	
	Parameter(s):
	<Object> - юнит
	<Array> - потенциальные враги
	
	Return:  Nothing
*/		
	params ["_unit", "_nearEnemies"];
    
    if (alive _unit) then {[_unit, ""] remoteExecCall ["switchMove", 0]};
    
	private _behaviour = behaviour _unit;

	_unit disableAI "TARGET";
	_unit disableAI "AUTOTARGET";
	_unit disableAI "FSM";
	_unit setBehaviour "CARELESS";
	
	private _detectionRadius = _unit getVariable ["ARM_Detection", 0];
	private _chase = _unit getVariable ["ARM_Chase", 0];
	
	private _sounds = [_unit] call ARMST_fnc_mutGetConfigSounds;
	private _animations = [_unit] call ARMST_fnc_mutGetConfigAnims;
	
	private _animAgry = [_animations, "agry", [""]] call BIS_fnc_getFromPairs; 
	private _attackSounds = [_sounds, "attack", [""]] call BIS_fnc_getFromPairs;
	
	private _selectTimeout = diag_tickTime;
	private _updateTimeout = diag_tickTime;
	private _giveTimeout = diag_tickTime;
	private _stuckCheck = 0;
	
	private _resetAttack = false;
	private _updated = false;
	private _insetTry = true;
	private _insetAttack = true;
	
	private _thisPos = getPosATL _unit;
	private _victims = [];
	private _victim = objNull;

	private _attackScript = ARMST_fnc_mutAttackDefault;
    private _checkPosition = true;
	private _parents = [configFile >> "CfgVehicles" >> typeOf _unit, true] call BIS_fnc_returnParents;
    
	switch (true) do {
		/* Закомментировал для оптимизации
		case ("boar_old_test" in _parents);
		case ("PLOT_old_test" in _parents);
		case ("cat_old_test" in _parents);
		case ("izlom_old_test" in _parents);
		case ("tushkano_old_test" in _parents);
		case ("pseudodog_old_test" in _parents);
		case ("blinddog_old_test" in _parents) : {
			_attackScript = ARMST_fnc_mutAttackDefault;
		};
		*/
		case ("dog_old_test" in _parents) : {
			_attackScript = ARMST_fnc_mutAttackDog;
		};
		
		case ("krovosos_old_test" in _parents) : {
			_attackScript = ARMST_fnc_mutAttackBloodsucker;
		};
		
		case ("poltergeist_old_test" in _parents) : {
			_attackScript = ARMST_fnc_mutAttackPoltergeist;
            _checkPosition = false;
		};
		case ("controller_test" in _parents);
		case ("controler_old_test" in _parents) : {
			_attackScript = ARMST_fnc_mutAttackController;
            _checkPosition = false;
		};
		case ("burer_test" in _parents) : {
			
			_attackScript = ARMST_fnc_mutAttackBurrer;
            _checkPosition = false;
            
            if ((_unit getVariable ["ARM_BurrerHitEH", -1]) < 0) then {
                _unit setVariable ["ARM_BurrerHitEH", _unit addEventHandler ["Hit", {
                    _this call ARMST_fnc_mutAttackBurrerHit;
                }]];
            };
			
		};
		
		case ("snork_old_test" in _parents) : {
			_attackScript = ARMST_fnc_mutAttackSnork;
		};
		case ("psevdogigant_old_test" in _parents) : {
			_attackScript = ARMST_fnc_mutAttackGiant;
		};
		
		default {};
	};
	
	_debugState = {
		[_unit, format ["State Fight (Logic): %1", _this]] call ARMST_fnc_mutDebugState;
	};
	
	while {!_resetAttack && !isNull _unit && {alive _unit}} do {
		
		try {
			if (_insetTry) then {
				_insetTry = false;
				throw "SELECT";
			};
			
			if (_stuckCheck > 10) throw "ESCAPE";
			if (_stuckCheck > 50) throw "STUCK";
			
			if (diag_tickTime - _updateTimeout > 10) throw "UPDATE";
			
			if (diag_tickTime - _selectTimeout > 5 || _updated) then {
				_updated = false;
				throw "SELECT";
			};
			
			if (!isNull _victim && {alive _victim}) then {
				throw "ATTACK";
			} else {
				throw "UPDATE";
			};
			
		} catch {
			
			switch (_exception) do {
				
				case "ESCAPE" : {
				
					"Escape check" call _debugState;
					
					if (!isNull _victim && ([_unit, _thisPos] call ARMST_fnc_mutAttackLogicStuck)) then {
						_unit setDir (getDir _unit + 180);
						_unit doMove ([_unit, _victims, 100] call ARMST_fnc_findHidePos);
						_resetAttack = true;
					};
					
					_stuckCheck = 0;
				};
				
				case "STUCK" : {
				
					"Stuck check" call _debugState;

					if (!isNull _victim && ([_unit, _thisPos] call ARMST_fnc_mutAttackLogicStuck)) then {
						"Reset attack: stuck" call _debugState;
						_unit setDammage 1;
						_resetAttack = true;
					};
					
					_stuckCheck = 0;
				};
				
				case "UPDATE" : {
									
					"Update victims" call _debugState;
					
					//Сканирование
					private _enties = [_unit, _detectionRadius, ["CAManBase"], _nearEnemies, _checkPosition] call ARMST_fnc_mutFindUnits;
					private _allies = _enties select 0;
					private _enemies = _enties select 1;
					
					_nearEnemies = _enemies;
					
					private _aspectRatio = [_unit, _nearEnemies, _allies] call ARMST_fnc_mutAspectRatio;
					private _aspectFight = [_unit, "AGGRESSIVE", [_aspectRatio]] call ARMST_fnc_mutAspectCalculate;

					if (_aspectFight < 1 || ([_unit, "SAFE"] call ARMST_fnc_mutBehaviour)) then {
						"Update victims: Reset" call _debugState;
						_resetAttack = true;
					} else {
						_updated = true;
						format ["Update victims: now %1", count _nearEnemies] call _debugState;
					};
					
					_updateTimeout = diag_tickTime;
				};
				
				case "SELECT" : {
				
					"Select victim" call _debugState;
					
					_victims = [];
					_victim = objNull;
					
					//Отчистка
					private _fordelete = [];
					{
						if (
                            isNull _x 
                            || !alive _x 
                            || _unit distance _x > _chase 
                        //    || !isNil {_x getVariable "ARM_INCAPACITATED"}
                        ) then {_fordelete pushBack _x};
					} foreach _nearEnemies;
					
					_nearEnemies = _nearEnemies - _fordelete;
					
					//Сортировка
					if (count _nearEnemies > 0) then {
						_victims = [_unit, _nearEnemies] call ARMST_fnc_sortByDistance;
						_victim = _victims select 0;
					};
					
					if !((_unit getVariable ["Victim", objNull]) isEqualTo _victim) then {
						_unit setVariable ["Victim", _victim, true];
					};
					_unit doWatch _victim;
					
					if (isNull _victim || ([_unit, "SAFE"] call ARMST_fnc_mutBehaviour)) then {_resetAttack = true};
					
					_selectTimeout = diag_tickTime;
				};
				
				case "ATTACK" : {
					
					_thisPos = getPosATL _unit;
					_stuckCheck = _stuckCheck + 1;
					
					if (_insetAttack &&  !(_animAgry isEqualTo [])) then {
					
						_insetAttack = false;
						
						_unit setDir (_unit getDir _victim);
						[_unit, _victim, _victims, _animAgry, [_attackSounds, 300], false] call ARMST_fnc_mutPlayAttackRemote;
					
						
					} else {
						if ([_unit, _victim, _victims, _animations, _sounds] call _attackScript) then {
							_stuckCheck = 0;
						};
					};
					
					
				};
				
				default {};
			};
		};
		
		uiSleep 0.1;
	};
	
	if (isObjectHidden _unit) then {_unit hideObjectGlobal false};
	
	_unit enableAI "TARGET";
	_unit enableAI "AUTOTARGET";
	_unit enableAI "FSM";
	_unit setBehaviour _behaviour;
	
	_unit setVariable ["Victim", nil, true];
	
	if (alive _unit) then {[_unit, ""] remoteExecCall ["switchMove", 0]};

	"Exit attack script" call _debugState;
	