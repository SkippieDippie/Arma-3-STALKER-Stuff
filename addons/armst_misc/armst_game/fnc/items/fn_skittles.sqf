/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

		player removeitem "ARMST_skittles";
		player say2d "sladost";
		player setVariable ["ARMST_HUNGER", (player getVariable "ARMST_HUNGER") + 0.10];
		["Я с легкостью открываю упаковку и закидываю в рот всю пачку конфет."] call ace_common_fnc_displayTextStructured;   
	