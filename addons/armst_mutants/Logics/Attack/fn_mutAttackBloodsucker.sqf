/*
	Author: Aloe  (itfruit@mail.ru)
	Description: Функция атаки мутанта (Кровосос)

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
	private _suckAttackDist = _handAttackDist / 1.5;
	
	private _attackDistance = _handAttackDist;
	private _attackDone = false;
	
	private _debugState = {
		[_unit, format ["State Fight: %1", _this]] call ARMST_fnc_mutDebugState;
	};
	
	private _currentTexture = (getObjectTextures _unit) select 0;
	private _visible = [
		"armst\armst_char\char_mut\krovosos_old\krovosos.rvmat", 
		"armst\armst_char\char_mut\krovosos_old\krovosos4.paa"
	];
	private _invisible = [
		"a3\data_f\default_alpha.rvmat",
		"armst\armst_char\char_mut\krovosos_old\krovosos4.paa"
	];
	
	switch (true) do {
	
		case (_unit distance _victim  <= _suckAttackDist && vehicle _victim == _victim) : {
			"Suck attack" call _debugState;
			
			if !(isDamageAllowed _unit) then {_unit allowDammage true};
			
			if !(_currentTexture isEqualTo (_visible select 1)) then {
				_unit setObjectMaterialGlobal [0, _visible select 0];
				_unit setObjectTextureGlobal [0, _visible select 1];
			};
			

			private _animSuckAttacks = [_animations, "attack_3", [""]] call BIS_fnc_getFromPairs;
			private _animSuckAttack_1 = ["",_animSuckAttacks select 0] select (count _animSuckAttacks > 0);
			private _animSuckAttack_2 = ["",_animSuckAttacks select 1] select (count _animSuckAttacks > 1);
			
			_unit setDir (_unit getDir _victim);
			
			if !(_unit getVariable ["StateSucking", false]) then {
			
				_attackDone = [
					_unit,
					_victim,
					_victims,
					[_animSuckAttack_1]
				] call ARMST_fnc_mutPlayAttackRemote;
				
				_unit setVariable ["StateSucking", true];
				
			} else {
			
				if (alive _victim && stance _victim == "STAND" && lifeState _victim != "INCAPACITATED") then {
					_attackDone = [
						_unit, 
						_victim, 
						_victims, 
						[_animSuckAttack_2],
                        nil,
                        true,
                        false,
                        true
					] call ARMST_fnc_mutPlayAttackRemote;
				} else {
					_attackDone = [
						_unit,
						_victim,
						_victims,
						[_animations, "eat", [""]] call BIS_fnc_getFromPairs,
                        nil,
                        true,
                        false,
                        true
					] call ARMST_fnc_mutPlayAttackRemote;
				};
				
				_unit setDammage ((getDammage _unit - 0.5) max 0);
			};
			
			_attackDistance = _suckAttackDist;
			
			//force DC for AI
			[_unit, _victim] call ARMST_fnc_mutAttackAnother;
		};
		
		case (_unit distance _victim  <= _handAttackDist) : {
			"Close attack" call _debugState;
			
			_unit setVariable ["StateSucking", false];
			
			if !(isDamageAllowed _unit) then {_unit allowDammage true};
			
			if !(_currentTexture isEqualTo (_visible select 1)) then {
				_unit setObjectMaterialGlobal [0, _visible select 0];
				_unit setObjectTextureGlobal [0, _visible select 1];
			};

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

			_attackDistance = _handAttackDist;
			
			//force DC for AI
			[_unit, _victim] call ARMST_fnc_mutAttackAnother;
		};
		
		default {
			"Pursue" call _debugState;
			
			_unit setVariable ["StateSucking", false];
			
			if !(_currentTexture isEqualTo (_invisible select 1)) then {
				_unit setObjectMaterialGlobal [0, _invisible select 0];
				_unit setObjectTextureGlobal [0, _invisible select 1];
			};
			
			private _distance = _unit distance _victim;

			if (isDamageAllowed _unit) then {
				if (_distance > 15) then {
					_unit allowDammage false;
				} else {
					_unit allowDammage true;
				};
			};
			
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
	
	