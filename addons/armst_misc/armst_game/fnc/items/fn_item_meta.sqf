/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

player removeitem "ARMST_meta";
player playMove "AinvPknlMstpSnonWnonDnon_medic_1";    
sleep 4;
player setFatigue 1;
[player, 0] call ace_medical_fnc_adjustPainLevel;
		player setvariable ["ARMST_BODYTEMP",1];
		ARMST_BODYTEMP = ARMST_BODYTEMP + 10;
addcamshake [6,600,2];

sleep 600;

player setDammage (getDammage player + 0.2);