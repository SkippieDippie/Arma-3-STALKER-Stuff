/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
	
["Металлическая трубка готова."] call ace_common_fnc_displayTextStructured;
player removeitem "ARMST_metalolom";
_nearestTargets = nearestObjects [player, ["Box_FIA_Ammo_F"], 80];
{ _x addItemCargoGlobal ["ARMST_steelpipe", 1]; } forEach _nearestTargets;