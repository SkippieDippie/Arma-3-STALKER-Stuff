	/*
	Author: Aloe
		
	Description:
	Spawn units
		
	Parameter(s):
	_this select 0: <object> trigger
	_this select 1: <array> orders list

	*/
	if (isServer) then {
	
		params ["_sensor", "_orders"];
		
		{

			private _group = [WEST, _sensor, _x] call ARMST_fnc_mutantsModuleSpawnGroup;
			
			if !(isNull _group) then {
				_sensor setVariable ["SpawnedGroups", [_sensor getVariable ["SpawnedGroups", []], _group] call BIS_fnc_arrayPush];
			};
		
		} foreach _orders;
	};