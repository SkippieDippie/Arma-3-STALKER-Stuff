/*
	Author: Aloe  (itfruit@mail.ru)
	Description: Функция атаки мутанта (Собака)

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
	
	private _followTo = _unit getVariable ["ARM_FollowTo", objNull];
	
	private _debugState = {
		[_unit, format ["State Fight: %1", _this]] call ARMST_fnc_mutDebugState;
	};
	
	if ([_unit, 'AWARE'] call ARMST_fnc_mutBehaviour) then {
	
		switch (true) do {
		
			case (_unit distance _victim  <= _handAttackDist) : {
				"Close attack AWARE" call _debugState;
				
				_unit doWatch _victim;
				_unit setDir (_unit getDir _victim);
				
				_attackDone = [
					_unit,
					_victim,
					_victims,
					[_animations, "attack_1", []] call BIS_fnc_getFromPairs,
					[[_sounds, "attack", []] call BIS_fnc_getFromPairs, 100],
                    true,
                    false,
                    true
				] call ARMST_fnc_mutPlayAttackRemote;
				
				//force DC for AI
				[_unit, _victim] call ARMST_fnc_mutAttackAnother;
			};
			/*
			case (!isNull (_unit getVariable ["ARM_AttackedAnother", objNull])) : {
				"Close attack" call _debugState;
				
				_unit doWatch _victim;
				_unit setDir ([_unit, _victim] call BIS_fnc_dirTo);
				
				_attackDone = [
					_unit,
					_victim,
					_victims,
					[_animations, "attack_1", []] call BIS_fnc_getFromPairs,
					[[_sounds, "attack", []] call BIS_fnc_getFromPairs, 100]
				] call ARMST_fnc_mutPlayAttackRemote;
				
				//force DC for AI
				[_unit, _victim] call ARMST_fnc_mutAttackAnother;
			};
			*/
			default {
				"Follow / Bark AWARE" call _debugState;
				
				if !(isNull _followTo) then {
				
					_unit doMove (getPosATL _followTo);
					_unit doWatch _followTo;
					
					if (diag_tickTime > (_unit getVariable ["ARM_DogBarkTimeout", 0])) then {
						_attackDone = [
							_unit,
							_victim,
							-2,
							nil,
							[[_sounds, "attack", []] call BIS_fnc_getFromPairs, 50],
							false,
                            false,
                            false
						] call ARMST_fnc_mutPlayAttackRemote;
						
                        _unit setVariable ["ARM_DogBarkTimeout", diag_tickTime + (random [10, 20, 30])];
					};
					
				} else {
					
					doStop _unit;
					_unit doWatch _victim;
					_unit setFormDir (_unit getDir _victim);

					if (diag_tickTime > (_unit getVariable ["ARM_DogBarkTimeout", 0])) then {
						_attackDone = [
							_unit,
							_victim,
							-2,
							[_animations, "attack_1", []] call BIS_fnc_getFromPairs,
							[[_sounds, "other", []] call BIS_fnc_getFromPairs, 200],
							false,
                            false,
                            false
						] call ARMST_fnc_mutPlayAttackRemote;
                        
						_unit setVariable ["ARM_DogBarkTimeout", diag_tickTime + (random [1, 5, 10])];
					};
					
				};

	
				private _pursueTimeOut = diag_tickTime + ((round (_unit distance _victim) / 10) max 0.1 min 1);
				waitUntil {diag_tickTime > _pursueTimeOut};
				
			};
			
		};
	
	
	} else {
	
		switch (true) do {
		
			case (_unit distance _victim  <= _handAttackDist) : {
				"Close attack" call _debugState;
				
				_unit doWatch _victim;
				_unit setDir (_unit getDir _victim);
				
				_attackDone = [
					_unit,
					_victim,
					_victims,
					[_animations, "attack_1", []] call BIS_fnc_getFromPairs,
					[[_sounds, "attack", []] call BIS_fnc_getFromPairs, 100],
                    true,
                    false,
                    true
				] call ARMST_fnc_mutPlayAttackRemote;
				
				//force DC for AI
				[_unit, _victim] call ARMST_fnc_mutAttackAnother;
			};
			
			default {
				"Pursue" call _debugState;
				
				_unit doMove (getPosATL _victim);
				_unit doWatch _victim;
							
				private _pursueTimeOut = diag_tickTime + ((round (_unit distance _victim) / 10) max 0.1 min 1);
				waitUntil {diag_tickTime > _pursueTimeOut};

			};
			
		};
	
	};

	
	if (_attackDone) then {
		"Attack completed" call _debugState;
		_unit setVariable ["ARM_HandAttackDone", nil, true];
	};
	
	_attackDone;
	
	