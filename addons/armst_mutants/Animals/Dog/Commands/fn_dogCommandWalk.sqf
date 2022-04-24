/*
	Author: Aloe 
	Description: Команда - гулять
	Environment: Client
	
	Parameter(s):
	_unit 			<Object> - юнит (собака)
	_caller 		<Object> - юнит
	
	Return:  Nothing
*/		
	params ["_target", "_caller"];

	[_caller, "dog_whistle_3"] remoteExecCall ["say3D", 0];
	
	[_target, ""] remoteExecCall ["switchMove", 0];
	_target setVariable ["ARM_FollowTo", objNull, true];
	_target setVariable ["ARM_WaitCommand", false, true];
	_target setVariable ["ARM_Home", getPosATL _target, true];
	_target setVariable ["ARM_Radius", (configFile >> "cfgVehicles" >> typeOf _target >> "Character" >> "radius") call BIS_fnc_getCfgData];
	_target setVariable ["ARM_GuardCommand", false, true];
	
	[_target, localize "STR_STST_func_dog_command_walk"] call ARMST_fnc_dogLastCommand;