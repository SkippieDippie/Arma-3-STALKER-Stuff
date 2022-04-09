/*
	Author: Aloe  (itfruit@mail.ru)
	Description: Функция атаки мутанта (Бюррер)

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
	
	private _debugState = {
		[_unit, format ["State Fight: %1", _this]] call ARMST_fnc_mutDebugState;
	};
	
	/*
	{
		if (
			isNil {_x getVariable "underPoltergeistFiled"} 
			&& {_unit distance _x  < _psyAttackDist 
			&& lifeState _x != "INCAPACITATED"
			&& isPlayer _x}
		) then {
			[_unit, _psyAttackDist] remoteExec ["ARMST_fnc_poltergeistPsyField", _x];
		};
	} foreach _victims;
	*/
	
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
				true,
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

			_damage = 0;
			_unit setDir (_unit getDir _victim);
			
			_attackDone = [
				_unit,
				_victim,
				_victims,
				[_animations, "attack_1", [""]] call BIS_fnc_getFromPairs,
				[[_sounds, "attack", []] call BIS_fnc_getFromPairs, 100]
			] call ARMST_fnc_mutPlayAttackRemote;
			
			if (random 1 > 0.7) then {
				[_victim, currentWeapon _victim] remoteExec ["ARMST_fnc_unitDropWeapon", _victim];
			};

			//For all victims
			{
				if (
					[objNull, "VIEW"] checkVisibility [eyePos _unit, eyePos _x] > 0 
					&& lifeState _x != "INCAPACITATED" 
					&& isNil {_x getVariable "ARM_INCAPACITATED"}
				) then {

					[_unit, _x, true] remoteExec ["ARMST_fnc_psyAttackThrow", _x];
					
					[_x, 0.2, _unit getVariable ["ARM_DamageHitPoints", [["", 0]]]] call ARMST_fnc_mutSetDammageRemote;
					//_x setDammage ((getDammage _x + _damage) min 1);
				};
			} foreach _victims;

		};
		
				
		case (_unit getVariable ["ARM_LastTimeHit", 0] > 0) : {
			_unit setVariable ["ARM_LastTimeHit", 0];
			
			[_unit, true] remoteExecCall ["ARMST_fnc_togglePsyShield", _victims];
			
			_attackDone = [
				_unit,
				objNull,
				_victims,
				[_animations, "attack_2", [""]] call BIS_fnc_getFromPairs,
				nil,
				false,
				true
			] call ARMST_fnc_mutPlayAttackRemote;

		};
		
		default {
			"Pursue" call _debugState;
			
			[_unit, false] remoteExecCall ["ARMST_fnc_togglePsyShield", _victims];
			
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
