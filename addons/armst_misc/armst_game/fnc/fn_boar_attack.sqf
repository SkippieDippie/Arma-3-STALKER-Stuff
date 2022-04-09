/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
	
				[[player, "boar_attack1"], "switchMove"] call bis_fnc_mp;
				[player, "boar_agressive",40] call CBA_fnc_globalSay3d;
				armst_udar = 0;
				private _b = player distance cursorObject;
				if(_b <= 2) then {
				cursorObject setdammage ((getDammage cursorObject) + 0.3);
				};
				sleep 2;
				[[player, ""], "switchMove"] call bis_fnc_mp;
				armst_udar = 1;