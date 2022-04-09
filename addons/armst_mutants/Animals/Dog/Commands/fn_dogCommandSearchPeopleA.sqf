/*
	Author: Aloe 
	Description: Команда - искать своих
	Environment: Client
	
	Parameter(s):
	_unit 			<Object> - юнит (собака)
	_caller 		<Object> - юнит
	
	Return:  Nothing
*/		
	params ["_target", "_caller"];

	[_target, ""] remoteExecCall ["switchMove", 0];
	[
		_target,
		_caller,
		_target getVariable ["ARM_FriendlyClasses", []]
	] call ARMST_fnc_dogActionSearch;
	
	
	private _sounds = [_target] call ARMST_fnc_mutGetConfigSounds;
	private _animations = [_target] call ARMST_fnc_mutGetConfigAnims;
	
	if !((_target getVariable ["ARM_FollowFor", []]) isEqualTo []) then {
		[_target, "SAFE"] call ARMST_fnc_mutBehaviourSet;
		
		_target setDir ([_target, _caller] call BIS_fnc_dirTo);
		[
			_target,
			objNull,
			-2,
			[_animations, "attack_1", [""]] call BIS_fnc_getFromPairs,
			[[_sounds, "idle", [""]] call BIS_fnc_getFromPairs, 50],
			false
		] spawn ARMST_fnc_mutPlayAttackRemote;
		
		[_target, _caller, "что-то нашёл..."] call ARMST_fnc_dogStateHint;
		
	} else {
	
		_target setDir ([_target, _caller] call BIS_fnc_dirTo);
		[
			_target,
			objNull,
			-2,
			[_animations, "idle", [""]] call BIS_fnc_getFromPairs,
			[],
			false
		] spawn ARMST_fnc_mutPlayAttackRemote;
		
		[_target, _caller, "ничего не нашёл..."] call ARMST_fnc_dogStateHint;
		
	};
		
	[_target, localize "STR_armst_animal_searchpeaple_a"] call ARMST_fnc_dogLastCommand;
	
	
	