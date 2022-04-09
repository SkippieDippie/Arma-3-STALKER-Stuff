/*
	Author: Aloe 
	Description: Команда - сидеть (Depricated)
	Environment: Client
	
	Parameter(s):
	_unit 			<Object> - юнит (собака)
	_caller 		<Object> - юнит
	
	Return:  Nothing
*/		
	params ["_target", "_caller"];

	_target setVariable ["ARM_FollowTo", objNull, true];
	_target setVariable ["ARM_WaitCommand", true, true];
	
	private _animations = [
		"Dog_Idle_Sitting"
	];
	[_target, _animations select floor random count _animations] remoteExecCall ["switchMove", 0];
	
	[_target, localize "STR_armst_animal_sit"] call ARMST_fnc_dogLastCommand;