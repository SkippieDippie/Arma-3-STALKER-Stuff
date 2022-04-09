/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
	
["Травка собрана."] call ace_common_fnc_displayTextStructured;
_nearestTargets = nearestObjects [player, ["Box_FIA_Ammo_F"], 80];
{ _x addItemCargoGlobal ["ARMST_kosyak", 5]; } forEach _nearestTargets;