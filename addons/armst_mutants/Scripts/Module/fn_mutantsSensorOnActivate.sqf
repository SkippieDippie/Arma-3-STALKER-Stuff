	/*
	Author: Aloe
		
	Description:
	On activate trigger script
		
	Parameter(s):
	_this select 0: <object> trigger

	*/
	if (isServer) then {
	
		params ["_sensor"];
		
		if (_sensor getVariable ["isClean", true]) then {
			_sensor setVariable ["isClean", false];
			
			private _module = [_sensor] call ARMST_fnc_mutantsSensorGetModule;
			private _orderList = [_sensor] call ARMST_fnc_mutantsSensorGetOrders;
			
			private _spawnMode = _module getVariable ["SpawnMode", 0];
			private _timeout = _module getVariable ["ActivationTimeout", 0];
			private _lastActivated = _sensor getVariable ["LastActivated", 0];
			
			if !(_orderList isEqualTo []) then {
				if ((diag_tickTime - _lastActivated) / 60 > _timeout || _lastActivated isEqualTo 0) then {
					
					if (_spawnMode isEqualTo 1) then {

						private _n = 0;
						private _idx = 0;
						private _sum = 0;
						
						{_sum = _sum + (_x getVariable ["Chances", 1])} foreach _orderList;
						private _random = random _sum;
						
						{
							_n = _n + (_x getVariable ["Chances", 1]);
							if (_n >= _random) exitWith {_idx = _foreachIndex};
							
						} foreach _orderList;
							
						
						_orderList = [_orderList select _idx];
					};
					
					[_sensor, _orderList] spawn ARMST_fnc_mutantsModuleSpawn;
					
					_sensor setVariable ["LastActivated", diag_tickTime];
				};
				
				[_module, format ["Sensor activated. Orders: %1 Timeout: %2", count _orderList, _timeout]] call ARMST_fnc_mutantsModuleLog;
			};
		};
		
	};
	