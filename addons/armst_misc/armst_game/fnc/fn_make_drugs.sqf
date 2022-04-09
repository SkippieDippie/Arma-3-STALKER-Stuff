/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
	
["Метамфетамин готов."] call ace_common_fnc_displayTextStructured;
_nearestTargets = nearestObjects [player, ["Box_FIA_Ammo_F"], 80];

player removeitem "armst_item_medkit3";
{ _x addItemCargoGlobal  ["ARMST_meta", 2]; } forEach _nearestTargets;