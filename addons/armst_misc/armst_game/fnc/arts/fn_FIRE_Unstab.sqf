/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

	player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
	player removemagazine "Item_FIRE_Unstab";
	sleep 4;

  		_a=0;
  		while {_a < 60} do {
			player setVariable ["ARMST_HUNGER", (player getVariable "ARMST_HUNGER") + 0.005];
			_a = _a + 1; _fatigue = getFatigue player;
			player setFatigue (_fatigue + 1);
			[0] call ARMST_Radiation_SetInfection;
			sleep 2;
		};	