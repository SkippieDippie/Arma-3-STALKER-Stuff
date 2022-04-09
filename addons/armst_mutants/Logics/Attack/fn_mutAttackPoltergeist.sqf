/*
	Author: Aloe  (itfruit@mail.ru)
	Description: Функция атаки мутанта (Полтергейст)

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
	
	private _victim = _victims select 0;
	
	private _debugState = {
		[_unit, format ["State Fight: %1", _this]] call ARMST_fnc_mutDebugState;
	};
	
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
		
		/*
		case (
			!(currentWeapon _victim isEqualTo "") 
			&& [position _victim, getdir _victim, 45, position _unit] call BIS_fnc_inAngleSector
		) : {
		
			{
				if ([objNull, "VIEW"] checkVisibility [eyePos _unit, eyePos _x] > 0) then {
					if (random 1 > 0.5) then {
					
						_unit setDir ([_unit, _x] call BIS_fnc_dirTo);
						_attackDone = [
							_unit,
							_x,
							_victims,
							[_animations, "attack_1", [""]] call BIS_fnc_getFromPairs,
							[[_sounds, "attack", []] call BIS_fnc_getFromPairs, 100]
						] call ARMST_fnc_mutPlayAttackRemote;
						
						[_x, currentWeapon _x] remoteExec ["ARMST_fnc_unitDropWeapon", _x];
					
					};
				};
			} foreach _victims;
			
		};
		*/
		
		case (
			_victim getVariable ["ARM_mKnockOffTimeout", 0] < diag_tickTime 
			&& [position _victim, (getdir _victim) - 180, 45, position _unit] call BIS_fnc_inAngleSector 
			&& vehicle _victim == _victim
		) : {
		
			_unit setDir (_unit getDir _victim);
			_attackDone = [
				_unit,
				_victim,
				_victims,
				[_animations, "attack_1", [""]] call BIS_fnc_getFromPairs,
				[[_sounds, "attack", []] call BIS_fnc_getFromPairs, 200],
                false,
                false,
                false
			] call ARMST_fnc_mutPlayAttackRemote;
			
			[_victim, "spotikanie_anim"] remoteExec ["ARMST_fnc_unitPlayMove", 0];
			
			_victim setVariable ["ARM_mKnockOffTimeout", diag_tickTime + 10];
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
			
			_unit setDir (_unit getDir _victim);
			_attackDone = [
				_unit,
				_victim,
				_victims,
				[_animations, "attack_1", [""]] call BIS_fnc_getFromPairs,
				[[_sounds, "attack", []] call BIS_fnc_getFromPairs, 200],
                true,
                false,
                true
			] call ARMST_fnc_mutPlayAttackRemote;
			
			[_unit, _victim] remoteExec ["ARMST_fnc_psyAttackThrow", _victim];

			//Drop weapon
			{
				if ([objNull, "VIEW"] checkVisibility [eyePos _unit, eyePos _x] > 0) then {
					if (random 1 > 0.7 && (_x distance _unit) > 30) then {
					
						_unit setDir (_unit getDir _victim);
						_attackDone = [
							_unit,
							_x,
							_victims,
							[_animations, "attack_1", [""]] call BIS_fnc_getFromPairs,
							[[_sounds, "attack", []] call BIS_fnc_getFromPairs, 200],
                            false,
                            false,
                            false
						] call ARMST_fnc_mutPlayAttackRemote;
						
						[_x, currentWeapon _x] remoteExec ["ARMST_fnc_unitDropWeapon", _x];
					
					};
				};
			} foreach _victims;
		};
		
		
		default {
			"Pursue" call _debugState;
			
			private _distance = _unit distance _victim;
			
			_unit doMove (getPosATL _victim);
			
			if (_distance > _psyAttackDist) then {
				_unit setPosATL (_victim getPos [_psyAttackDist - 1, random 360]);
			};
			
			private _pursueTimeOut = diag_tickTime + ((round _distance / 10) max 0.1 min 1);
			waitUntil {diag_tickTime > _pursueTimeOut};
		};
		
	};
	
	if (_attackDone) then {
		"Attack completed" call _debugState;
		_unit setVariable ["ARM_HandAttackDone", nil];
	};
	
	_attackDone;
	
	