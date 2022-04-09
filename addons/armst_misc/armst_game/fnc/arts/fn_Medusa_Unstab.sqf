/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

	player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
	player removemagazine "Item_Medusa_Unstab";
	sleep 4;
   _a=0;
	while {_a < 30} do {
		_a = _a + 1;
		player setVariable ["AGM_Pain", (player getVariable "AGM_Pain") - 0.005];
		player setVariable ["AGM_Blood", (player getVariable "AGM_Blood") - 0.005];
		player setVariable ["ARMST_THIRST", (player getVariable "ARMST_THIRST") - 0.005];
		_death = player getVariable ["AGM_Blood",1];
		if (_death == 0) then {player setDammage 1};
		sleep 2;
		};	