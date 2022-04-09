/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

		player removeitem "ARMST_eyedrops";
		["Drops fell into my eye, i feel eye little burning now."] call ace_common_fnc_displayTextStructured;    
			0 = ["RadialBlur", 100, [100, 0.5, 0.1, 0.5]] spawn {
			params ["_name", "_priority", "_effect", "_handle"];
			while {
				_handle = ppEffectCreate [_name, _priority];
				_handle < 0
			} do {
				_priority = _priority + 1;
			};
			_handle ppEffectEnable true;
			_handle ppEffectAdjust _effect;
			_handle ppEffectCommit 5;
			waitUntil {ppEffectCommitted _handle};
			uiSleep 3; 
			comment "admire effect for a sec";
			_handle ppEffectEnable false;
			ppEffectDestroy _handle;
		};
		0 = ["DynamicBlur", 200, [10]] spawn {
			params ["_name", "_priority", "_effect", "_handle"];
			while {
				_handle = ppEffectCreate [_name, _priority];
				_handle < 0
			} do {
				_priority = _priority + 1;
			};
			_handle ppEffectEnable true;
			_handle ppEffectAdjust _effect;
			_handle ppEffectCommit 5;
			waitUntil {ppEffectCommitted _handle};
			uiSleep 3; 
			comment "admire effect for a sec";
			_handle ppEffectEnable false;
			ppEffectDestroy _handle;
		};
	sleep 6;
		["I rubbed my eye, now i can see much better."] call ace_common_fnc_displayTextStructured;   
	