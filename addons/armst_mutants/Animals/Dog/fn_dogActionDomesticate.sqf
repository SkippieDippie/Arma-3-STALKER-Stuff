/*
	Author: Aloe 
	Description: Приручение пса
	Environment: Client
	
	Parameter(s):
	_unit 			<Object> - юнит
	_caller 		<Object> - актор
	
	Return:  Nothing
*/		
	params ["_unit", "_caller"];
	
	private _domesticate = _caller getVariable ["ARM_Domesticate", ["", 0]];
	_domesticate params ["_tame", "_percent"];
	
	private _unitVar = [_unit] call BIS_fnc_objectVar;
	if !(_tame isEqualTo _unitVar) then {
		_tame = _unitVar; 
		_percent = 0
	};
	
	hintSilent parseText format [
		localize "STR_STST_func_dog_tameHint", 
		format["%1%2", _percent, "%"]
	];
	
	if (random 1 < 0.5) then {
		_percent = (_percent + random [10, 15, 20]) min 100 max 0;
	} else {
		_percent = (_percent - random [1, 5, 10]) min 100 max 0;
	};
	
	_caller setVariable ["ARM_Domesticate", [_tame, _percent]];
	
	switch (true) do {
		case (_percent > 70): {
			[_unit, _caller] call ARMST_fnc_dogCommandFollow;
		};
		case (_percent > 30): {
			private _animations = [_unit] call ARMST_fnc_mutGetConfigAnims;
			private _sounds = [_unit] call ARMST_fnc_mutGetConfigSounds;
			
			[
				_unit,
				_caller,
				-2,
				[_animations, "attack_1", [""]] call BIS_fnc_getFromPairs,
				[[_sounds, "idle", [""]] call BIS_fnc_getFromPairs, 100],
				false
			] spawn ARMST_fnc_mutPlayAttackRemote;
		};
		default {};
	};
	
	if (_percent isEqualTo 100 && !(_unit getVariable ["ARM_Domesticated", false])) then {
		
		if ([format [localize "STR_STST_func_dog_tame_confirm", getText (configFile >> "CfgVehicles" >> typeOf _unit >> "displayName")], "Confirm", true, true] call BIS_fnc_guiMessage) then {
			
			[_unit] call ARMST_Companien_Domesticate;
			
		};
	};
	