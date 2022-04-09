/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
		player removeitem "ARMST_handwarmer";
		player setvariable ["ARMST_BODYTEMP",1];
		ARMST_BODYTEMP = ARMST_BODYTEMP + 10;
		["Uuuuh so warm..."] call ace_common_fnc_displayTextStructured;    