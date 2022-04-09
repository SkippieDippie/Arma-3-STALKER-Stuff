/*
	Author: Aloe 
	Description: Команда - следовать
	Environment: Client
	
	Parameter(s):
	_target 			<Object> - юнит (собака)
	_caller 			<Object> - юнит
	
	Return:  Nothing
*/		
	params ["_target", "_caller"];

	[_caller, "dog_whistle_1"] remoteExecCall ["say3D", 0];
	
	[_target, _caller] spawn {
		params ["_target", "_caller"];
		
		private _sounds = [_target] call ARMST_fnc_mutGetConfigSounds;
		private _animations = [_target] call ARMST_fnc_mutGetConfigAnims;
		
		uiSleep 1;
		[_target, ""] remoteExecCall ["switchMove", 0];
		_target setVariable ["ARM_FollowTo", _caller, true];
		_target setDir ([_target, _caller] call BIS_fnc_dirTo);
		
		[_target, "AWARE"] call ARMST_fnc_mutBehaviourSet;
		
		[
			_target,
			objNull,
			-2,
			[_animations, "attack_1", [""]] call BIS_fnc_getFromPairs,
			[[_sounds, "idle", [""]] call BIS_fnc_getFromPairs, 50],
			false
		] spawn ARMST_fnc_mutPlayAttackRemote;
		
		[_target, format ["Следовать за %1", name _caller]] call ARMST_fnc_dogLastCommand;
	};
