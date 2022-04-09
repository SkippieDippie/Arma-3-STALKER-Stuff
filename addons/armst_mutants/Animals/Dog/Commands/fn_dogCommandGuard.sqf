/*
	Author: Aloe 
	Description: Команда - охранять
	Environment: Client
	
	Parameter(s):
	_unit 			<Object> - юнит (собака)
	_caller 		<Object> - юнит
	
	Return:  Nothing
*/		
	params ["_target", "_caller"];

	[_caller, "dog_whistle_2"] remoteExecCall ["say3D", 0];
	
	[_target, ""] remoteExecCall ["switchMove", 0];
	_target setVariable ["ARM_FollowTo", objNull, true];
	_target setVariable ["ARM_WaitCommand", false, true];
	_target setVariable ["ARM_Home", getPosATL _target, true];
	_target setVariable ["ARM_Radius", 20, true];
	_target setVariable ["ARM_GuardCommand", true, true];
	
	private _sounds = [_target] call ARMST_fnc_mutGetConfigSounds;
	private _animations = [_target] call ARMST_fnc_mutGetConfigAnims;
		
	[_target, "AWARE"] call ARMST_fnc_mutBehaviourSet;
	
	[
		_target,
		objNull,
		-2,
		[_animations, "attack_1", [""]] call BIS_fnc_getFromPairs,
		[[_sounds, "idle", [""]] call BIS_fnc_getFromPairs, 50],
		false
	] spawn ARMST_fnc_mutPlayAttackRemote;
	
	[_target, localize "STR_armst_animal_guard"] call ARMST_fnc_dogLastCommand;