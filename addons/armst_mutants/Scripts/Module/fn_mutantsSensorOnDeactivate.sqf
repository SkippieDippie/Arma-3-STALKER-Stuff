	/*
	Author: Aloe
		
	Description:
	On deactivate trigger script
		
	Parameter(s):
	_this select 0: <object> trigger

	*/
	if (isServer) then {
		params ["_sensor"];
		private ["_module"];

		_module = [_sensor] call ARMST_fnc_mutantsSensorGetModule;
		
		if !(isNull _module) then {

			[_module, format ["Sensor deactivating. time-out: %1", _module getVariable ["DeactiavateDelay",  0.1]]] call ARMST_fnc_mutantsModuleLog;
			uiSleep (_module getVariable ["DeactiavateDelay", 0.1]);
			
			if !(triggerActivated _sensor) then {

				private ["_spawnedUnits", "_spawnedGroups"];
				
				_spawnedUnits = (_sensor getVariable ["SpawnedUnits", []]) - [objNull];
				_spawnedGroups = (_sensor getVariable ["SpawnedGroups", []]) - [grpNull];
				
				[_module, format ["Sensor cleaned"]] call ARMST_fnc_mutantsModuleLog;
				{
					if (isNull (_x getVariable ["Victim", objNull]) && 
					(alive _x or (!alive _x and (_x getVariable ["DeleteTimeout", 0]) < 1))) then {
						deleteVehicle _x;
					};
				} foreach _spawnedUnits;
				
				uiSleep 1;
				{
					if (count units _x < 1) then {deleteGroup _x};
				} foreach _spawnedGroups;

				_sensor setVariable ["SpawnedUnits", _spawnedUnits - [objNull]];
				_sensor setVariable ["SpawnedGroups", _spawnedGroups - [grpNull]];
				
				if (count (_sensor getVariable "SpawnedGroups") > 0) then {
					_sensor setVariable ["ReceivedGroups", _sensor getVariable "SpawnedGroups"];
					[_module, format ["Received groups: %1", _sensor getVariable "SpawnedGroups"]] call ARMST_fnc_mutantsModuleLog;
				};

				_sensor setVariable ["isClean", true];
			};
		};
	};