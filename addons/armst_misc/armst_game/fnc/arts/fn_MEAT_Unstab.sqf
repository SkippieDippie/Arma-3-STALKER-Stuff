/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

	player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
	player removemagazine "Item_MEAT_Unstab";
	sleep 4;
	player setVariable ["AGM_Pain", 0, True];
	player setVariable ["AGM_Blood", (player getVariable "AGM_Blood") - 0.2];
	player setVariable ["ARMST_THIRST", (player getVariable "ARMST_THIRST") + 0.02];