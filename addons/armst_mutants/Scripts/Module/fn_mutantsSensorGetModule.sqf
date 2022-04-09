	/*
	Author: Aloe
		
	Description:
	Return synced with trigger spawn module 
		
	Parameter(s):
	_this select 0: <object> trigger
	
	Return: <object> module
	*/
	
	params ["_sensor"];
	private ["_module"];

	_module = objNull;

	{
		if (_x isKindOf "ARMST_mutantsModuleBaseSpawn") exitWith {_module = _x};
	} foreach (synchronizedObjects _sensor);

	_module