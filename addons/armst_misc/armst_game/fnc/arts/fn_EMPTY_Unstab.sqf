/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

	player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
	sleep 4;
	_CHANCE = selectRandom [0,1,2,3,4,5];
	if (_CHANCE >= 4) then 	{
		 _a=0;
  		while {_a < 60} do 	{
			_a = _a + 1;
			player setVariable ["AGM_Pain", (player getVariable "AGM_Pain") - 0.005];
			player setVariable ["ARMST_THIRST", (player getVariable "ARMST_THIRST") + 0.005];
			player setVariable ["ARMST_HUNGER", (player getVariable "ARMST_HUNGER") - 0.005];
			sleep 2;
			};	
		}
		else 
		{	
			player removemagazine "Item_EMPTY_Unstab";
			player setVariable ["AGM_Blood", (player getVariable "AGM_Blood") - 0.8];
			player setVariable ["ARMST_THIRST", (player getVariable "ARMST_THIRST") - 0.2];
			player setVariable ["ARMST_HUNGER", (player getVariable "ARMST_HUNGER") - 0.7];
		_death = player getVariable ["AGM_Blood",1];
		if (_death == 0) then {player setDammage 1};
			
		};