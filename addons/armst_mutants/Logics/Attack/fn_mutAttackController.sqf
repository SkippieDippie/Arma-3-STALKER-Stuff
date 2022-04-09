/*
	Author: Aloe  (itfruit@mail.ru)
	Description: Функция атаки мутанта (Контроллер)

	Parameter(s):
	_unit 					<Object> - юнит
	_victim 				<Object> - враг
	_victims 				<Object> - враги
	_animations 			<Array> - анимации
	_sounds 				<Array> - звуки
	
	Return:  Bool (Атака совершена)
*/	

	params ["_unit", "_victim", "_victims", ["_animations", []], ["_sounds", []]];
	
	private _handAttackDist = (_unit getVariable ["ARM_AttackDistances", 0]) select 0;
	private _psyAttackDist = (_unit getVariable ["ARM_AttackDistances", 0]) select 1;
	private _suckAttackDist = _handAttackDist / 1.5;
	
	private _attackDistance = _handAttackDist;
	private _attackDone = false;
	
	private _animDistAttacks = [_animations, "attack_2", [""]] call BIS_fnc_getFromPairs;
	private _animPsyAttack_1 = ["",_animDistAttacks select 0] select (count _animDistAttacks > 0);
	private _animPsyAttack_2 = ["",_animDistAttacks select 1] select (count _animDistAttacks > 1);
	
	private _debugState = {
		[_unit, format ["State Fight: %1", _this]] call ARMST_fnc_mutDebugState;
	};
	
	_unit forceWalk true;
	
	switch (true) do {
	
		case (_unit distance _victim  <= _handAttackDist) : {
			"Close attack" call _debugState;
			
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

			//force DC for AI
			[_unit, _victim] call ARMST_fnc_mutAttackAnother;
			
		};
		
		case (
			isNil {_victim getVariable "underPsyAttack"}
			&& _unit distance _victim  < _psyAttackDist 
			&& lifeState _victim != "INCAPACITATED" 
			&& isNil {_victim getVariable "ARM_INCAPACITATED"}
			&& ([objNull, "VIEW"] checkVisibility [eyePos _unit, eyePos _victim] > 0) 
			&& vehicle _victim == _victim
		) : {
			"Psy attack" call _debugState;
			
			_unit stop true;
			_unit setDir (_unit getDir _victim);

			// _attackDone = [
				// _unit,
				// _victim,
				// _victims,
				// [_animPsyAttack_1],
				// [[_sounds, "attack", []] call BIS_fnc_getFromPairs, 100]
			// ] call ARMST_fnc_mutPlayAttackRemote;
			
			//_unit allowDammage false;
			
			if  ([objNull, "VIEW"] checkVisibility [eyePos _unit, eyePos _victim] > 0) then {
				
					if (isPlayer _victim) then {
						[_unit] remoteExec ["ARMST_fnc_controllerDistanceAttack", _victim];
					} else {
						_victim setUnconscious true;
					};
					
					_unit setDir (_unit getDir _victim);
					_attackDone = [
						_unit,
						_victim,
						_victims,
						[_animPsyAttack_2],
						nil,
                        false,
                        false,
                        true
					] call ARMST_fnc_mutPlayAttackRemote;
									
					private _attackAnimTimeOut = diag_tickTime;
					waitUntil {
                    uiSleep 1; 
						isNull _victim 
						|| !alive _victim 
                        || (isPlayer _victim && isNil {_victim getVariable "underPsyAttack"}) 
                        || (!isPlayer _victim && diag_tickTime - _attackAnimTimeOut > 3)
                    };
				
					_damage = 0.3;
					
			};
				
			//Drop weapon
			{
				if ([objNull, "VIEW"] checkVisibility [eyePos _unit, eyePos _x] > 0) then {
					
					_unit setDir (_unit getDir _x);

					[_x, currentWeapon _x] remoteExec ["ARMST_fnc_unitDropWeapon", _x];
					
				};
			} foreach (_victims select {_x distance _unit <= 30});
							
			_unit stop false;
			_unit allowDammage true;			
		};
		
		default {
			"Pursue" call _debugState;
			
			private _distance = _unit distance _victim;
			
			_unit doMove (getPosATL _victim);
			
			private _pursueTimeOut = diag_tickTime + ((round _distance / 10) max 0.1 min 1);
			waitUntil {diag_tickTime > _pursueTimeOut};
		};
		
	};
	
	if (_attackDone) then {
		"Attack completed" call _debugState;
		_unit setVariable ["ARM_HandAttackDone", nil];
	};
	
	_attackDone;
	