/*
	Author: Aloe  (itfruit@mail.ru)
	Description: Функция атаки мутанта (Снорк)

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
	private _jumpAttackDist = (_unit getVariable ["ARM_AttackDistances", 0]) select 1;
	
	private _attackDone = false;
	
	private _victim = _victims select 0;
	
	private _debugState = {
		[_unit, format ["State Fight: %1", _this]] call ARMST_fnc_mutDebugState;
	};
	
	switch (true) do {
		case (_unit distance _victim  <= _handAttackDist) : {
			"Close attack" call _debugState;
			
			_unit setDir (_unit getDir _victim);
			_attackDone = [
				_unit,
				_victim,
				_victims,
				[_animations, "attack_1", [""]] call BIS_fnc_getFromPairs,
				[[_sounds, "attack", []] call BIS_fnc_getFromPairs, 150],
                true,
                false,
                true
			] call ARMST_fnc_mutPlayAttackRemote;

			//force DC for AI
			[_unit, _victim] call ARMST_fnc_mutAttackAnother;
		};
		
		case (_unit distance _victim  <= _jumpAttackDist && vehicle _victim == _victim) : {
			"Jump attack" call _debugState;
			
			_unit setDir (_unit getDir _victim);

			_unit allowDammage false;

			private _vel = velocity _unit;
			private _dir = direction _unit;
			private _speed = 15; 
			_unit setVelocity [
				(_vel select 0) + (sin _dir * _speed), 
				(_vel select 1) + (cos _dir * _speed), 
				(_vel select 2) + 3
			];
			
			_attackDone = [
				_unit,
				_victim,
				_victims,
				[_animations, "attack_2", [""]] call BIS_fnc_getFromPairs,
				[[_sounds, "attack", []] call BIS_fnc_getFromPairs, 150],
				false,
                false,
                true
			] call ARMST_fnc_mutPlayAttackRemote;
			
			if (_unit distance _victim  <= _handAttackDist) then {
				_unit setDir (_unit getDir _victim);
				_attackDone = [
					_unit,
					_victim,
					_victims,
					[_animations, "attack_1", [""]] call BIS_fnc_getFromPairs,
					[[_sounds, "attack", []] call BIS_fnc_getFromPairs, 150],
                    true,
                    false,
                    true
				] call ARMST_fnc_mutPlayAttackRemote;
			};
			
            _unit allowDammage true;
            
			//force DC for AI
			[_unit, _victim] call ARMST_fnc_mutAttackAnother;
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
	
	