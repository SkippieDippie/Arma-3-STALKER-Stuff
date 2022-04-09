/*
	Author: Aloe  (itfruit@mail.ru)
	Description: Функция атаки мутанта (По умолчанию)

	Parameter(s):
	_unit 					<Object> - юнит
	_victim 				<Object> - жертва
	_victims 				<Object> - враги
	_animations 			<Array> - анимации
	_sounds 				<Array> - звуки
	
	Return:  Bool (Атака совершена)
*/	

	params ["_unit", "_victim", "_victims", ["_animations", []], ["_sounds", []]];
	
	private _handAttackDist = (_unit getVariable ["ARM_AttackDistances", 0]) select 0;
	private _jumpAttackDist = (_unit getVariable ["ARM_AttackDistances", 0]) select 1;
	private _suckAttackDist = _handAttackDist / 1.5;
	
	private _attackDistance = _handAttackDist max 1.3;
	private _attackDone = false;

	private _debugState = {
		[_unit, format ["State Fight: %1", _this]] call ARMST_fnc_mutDebugState;
	};
    	
	switch (true) do {
		case (_unit distance _victim  <= _handAttackDist) : {
			"Close attack" call _debugState;
			
			_unit doWatch _victim;
			_unit setDir (_unit getDir _victim);
			
			_attackDone = [
				_unit,
				_victim,
				_victims,
				[_animations, "attack_1", [""]] call BIS_fnc_getFromPairs,
				[[_sounds, "attack", []] call BIS_fnc_getFromPairs, 100],
                true,
                false,
                true
			] call ARMST_fnc_mutPlayAttackRemote;
			
            _unit allowDammage true;
            
			//force DC for AI
			[_unit, _victim] call ARMST_fnc_mutAttackAnother;
            
            if (random 1 > 0.6) then {
            
                private _detour = _victim getPos [5, (_unit getDir _victim) + random [-90, 0, 90]];
                _unit doMove _detour;
                
                private _pursueTimeOut = diag_tickTime + 3;
                waitUntil {diag_tickTime > _pursueTimeOut || _unit distance _detour < 1};
                
            };
		};
        
        case (_unit distance _victim  <= _handAttackDist + 3 && random 1 > 0.6 && vehicle _victim == _victim) : {
			"Jump attack" call _debugState;
			
			_unit doWatch _victim;
			_unit setDir (_unit getDir _victim);
			
            _unit allowDammage false;

			private _vel = velocity _unit;
			private _dir = direction _unit;
			private _speed = 3; 
			_unit setVelocity [
				(_vel select 0) + (sin _dir * _speed), 
				(_vel select 1) + (cos _dir * _speed), 
				(_vel select 2) + 2
			];
            
			_attackDone = [
				_unit,
				_victim,
				_victims,
				[_animations, "attack_1", [""]] call BIS_fnc_getFromPairs,
				[[_sounds, "attack", []] call BIS_fnc_getFromPairs, 100],
                false,
                false,
                true
			] call ARMST_fnc_mutPlayAttackRemote;
			
            _unit allowDammage true;
            
			//force DC for AI
			[_unit, _victim] call ARMST_fnc_mutAttackAnother;
            
		};
		
		default {
			"Pursue" call _debugState;
			
			//_unit setDestination [getPosATL _victim, "LEADER PLANNED", true];
			_unit doMove (_victim getPos [0.2, _victim getDir _unit]);
			_unit doWatch _victim;
						
			private _pursueTimeOut = diag_tickTime + ((round (_unit distance _victim) / 10) max 0.1 min 1);
			waitUntil {diag_tickTime > _pursueTimeOut};
			
			//Костыль на воспроизведение предупреждающего звука атаки
			/*
			if (_unit distance _victim < 5 && diag_tickTime > (_unit getVariable ["ARM_NextWarningScreamTime", 0])) then {
				
				if (count _attackSounds > 0) then {
					[
						_unit,
						[
							_attackSounds select floor random count _attackSounds,
							100
						]
					] remoteExecCall ["Say3D", _victims];
					
					_unit setVariable ["ARM_NextWarningScreamTime", diag_tickTime + 15];
				};

			};
			*/
		};
		
	};
	
	if (_attackDone) then {
		"Attack completed" call _debugState;
		/* Moved to ARMST_fnc_mutPlayAttack
		if (alive _unit && _setDammage) then {
			
			[_victim, _damage, _damageHitPoints] call ARMST_fnc_mutSetDammageRemote;

		};
        */
		_unit setVariable ["ARM_HandAttackDone", nil, true];
	};
	
	_attackDone;
	
	