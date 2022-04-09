/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Отображает детектор
	
	Parameter(s):
	
	TODO: Наличие батареек
*/

	#include "..\module.sqf";
	
	private _detectorDialog = ["DIALOG"] call module(GetDetector);
	
	if !(_detectorDialog isEqualTo "") then {
		
		try {
			if (module(Energy) > 0) throw 1;
			if (module(Energy) <= 0 && module(Batteries) in items player) then {
				player removeitem module(Batteries);
				module(Energy) = 300;
				systemChat "Using another battery";
				throw -1;
			};
			if (module(Energy) <= 0) throw 0;
		} catch {
			switch (_exception) do {
				case 0 : {
					private _pic = getText (configFile >> "CfgWeapons" >> module(Batteries) >> "picture");
					hintSilent parseText format ["<img size='4' image='%1'/><br/><br/><t>Need batteries</t>", _pic];
				};
				case -1;
				default {
					disableSerialization;
					module(Layer) cutRsc [_detectorDialog, "PLAIN"];
				};
			};
		};

	};

	