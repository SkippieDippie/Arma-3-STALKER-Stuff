	/*
	Author: Aloe
		
	Description:
	Initalize spawn module
		
	Parameter(s):
	_this select 0: <object> module

	*/
	if (isServer) then {
    
		params ["_module"];
		
		private ["_module", "_synchedObjects", "_sensors", "_orders"];

		_synchedObjects = synchronizedObjects _module;

		_sensors = [];
		_orders = [];

		for "_i" from 0 to ((count _synchedObjects)-1) do {
		
			private _sync = _synchedObjects select _i;
			
			if (_sync isKindof "EmptyDetector") then {
				
				_sync setTriggerInterval (_module getVariable ["ConditionInterval", 5]);
				
				private _trgCondition = (triggerStatements _sync) select 0;
				if !(isNil "CBA_fnc_trim") then {
					_trgCondition = _trgCondition call  CBA_fnc_trim;
				};
				
				switch (_module getVariable "ActivationCond") do {
					case 1 : {
						_sync setTriggerActivation ["ANYPLAYER", "PRESENT", true];
						if (_trgCondition != "this") then {
							_trgCondition = format ["{isPlayer _x && vehicle _x isKindof 'Man'} count thisList > 0 and (%1)", _trgCondition];
						} else {
							_trgCondition = format ["{isPlayer _x && vehicle _x isKindof 'Man'} count thisList > 0", _trgCondition];
						};
					};
					default {};
				};
				
				_sync setTriggerStatements [
					_trgCondition, 
					format ["[thisTrigger] call ARMST_fnc_mutantsSensorOnActivate; %1", (triggerStatements _sync) select 1], 
					format ["[thisTrigger] spawn ARMST_fnc_mutantsSensorOnDeactivate; %1", (triggerStatements _sync) select 2]
				];
								
				_sensors set [count _sensors, _sync];
				[_module, format ["Synced Area #%1 Active: %2 ", str count _sensors, triggerActivated _sync]] call ARMST_fnc_mutantsModuleLog;
				
				//Prepare sensor orders
				{
					_x setVariable  ["unitTypes", getArray (configFile >> "cfgVehicles" >> typeOf _x >> "unitTypes")];
				} foreach ([_sync] call ARMST_fnc_mutantsSensorGetOrders);
				
                
                _sync setVariable ["AreaMode", _module getVariable ["AreaMode", 1]];
			};
			
		};
		
		[_module] call ARMST_fnc_mutantsModuleUpdateOrders;
		
	};