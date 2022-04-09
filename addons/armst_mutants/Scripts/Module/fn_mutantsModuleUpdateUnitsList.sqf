/*
	Author: Aloe
		
	Description:
	Update list spawned units for sensor
		
	Parameter(s):
	_this select 0: <Object> unit
	_this select 1: <Object> sensor
	
	Return: <Nothing>
*/

	params [["_units", []], ["_sensor", objNull]];
	
	_sensor setVariable ["SpawnedUnits", (_sensor getVariable ["SpawnedUnits", []]) + _units];