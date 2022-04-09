/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Открытие терминала
	
	Parameter(s):
		_terminal	(Object) - терминал
*/
	#include "..\module.sqf";
	
	params ["_terminal"];
	
	if (!isNull _terminal and {!isNil {_terminal getVariable "Faction"}}) then {
		
		module(Terminal) = _terminal;
		module(Faction) = module(Terminal) getVariable "Faction";
		
		["ACCESS", "FACTION_ACCESS_GET", []] spawn module(AppRequest);

		player playAction "Civil";
	
		cutText ["","BLACK OUT"];
		cutText ["","BLACK IN", 2];
		
		module(Camera) = "camera" camCreate [getPosATL player select 0, getPosATL player select 1, 1.5];
		module(Camera) cameraEffect ["internal", "Back"];
		module(Camera) camSetTarget module(Terminal);
		module(Camera) camSetRelPos [0, 0.3, 0.035];
		module(Camera) camSetFOV .7;
		module(Camera) camSetFocus [0,0.3];
		module(Camera) camCommit 0.75;
		
		showCinemaBorder false; 
		
		uiSleep 0.75;
		
		if (isMultiplayer) then {
			[] spawn {
				waitUntil {!isNil stringify(module(DataAccess))};
				if !(module(DataAccess) isEqualTo []) then {
					module(Terminal) setVariable ["Access", module(DataAccess)];
					module(DataAccess) = nil;
				};
				
				uiNamespace setVariable  ["ARMST_Terminal_Dialog", createDialog "FactionTerminalDialog"];
			};
		} else {
			uiNamespace setVariable  ["ARMST_Terminal_Dialog", createDialog "FactionTerminalDialog"];
		};
	};
	
	
	
	