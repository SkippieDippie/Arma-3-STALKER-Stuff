	/*
	Author: Aloe
		
	Description:
	Update count units in module
		
	_this select 0 <Object> module
	*/

	params ["_module"];

	while {!isNull _module} do {

		{
            private _sensor = _x;
            
			if !(_sensor getVariable ["isClean", true]) then {
				
				private _sensorGroups = (_sensor getVariable ["SpawnedGroups", []]) - [grpNull];
				private _receivedGroups = (_sensor getVariable ["ReceivedGroups", []]) - [grpNull];
								
				for "_i" from 0 to ((count _sensorGroups) - 1) step 1 do {

					private _group = _sensorGroups select _i;
					
					if !(_group in _receivedGroups) then {
						
						private _countTotal = _group getVariable ["CountTotal", 0];
						private _order = _group getVariable ["Order", objNull];
                        
						if !(isNull _order) then {

                            private _countType = _order getVariable ["CountUnitsType", 1];
							private _updPerc = _order getVariable ["UnitsUpdatePercentage", 0];
							private _updateDelay = _order getVariable ["UpdateDelay", 0];
                            private _toUpdCount = floor (_countTotal  * _updPerc / 100);

                            if (_countType isEqualTo 2) then {
                                _toUpdCount = _toUpdCount * (count ((call BIS_fnc_listPlayers) inAreaArray _sensor) max 1);
                            };
                            
                            if (diag_tickTime > _group getVariable ["UpdateDelayTimeout", 0]) then {
                                
                                _group setVariable ["UpdateDelayTimeout", diag_tickTime + (_updateDelay * 60)];
                                
                                private _aliveCount = {alive _x} count units _group;
                                if (_aliveCount < _toUpdCount) then {
                                   
                                    [_module, format ["Update group %1. Total: %4 Count: %2 for Update: %3", 
                                        str _group, 
                                        _aliveCount,
                                        _toUpdCount - _aliveCount,
                                        _countTotal
                                    ]] call ARMST_fnc_mutantsModuleLog;
                                    
                                    [_sensor, _order, _group, _toUpdCount - _aliveCount] call ARMST_fnc_mutantsModuleSpawnOrder;

                                    [_module, format ["Update group. Add %1 units", _toUpdCount - _aliveCount]] call ARMST_fnc_mutantsModuleLog;

                                };
                            };
						};			
					};
					
				};
			};
            
            uiSleep 1;
            
		} foreach ([_module] call ARMST_fnc_mutantsModuleGetSensorsActivated);
		
	uiSleep 5;
	};
