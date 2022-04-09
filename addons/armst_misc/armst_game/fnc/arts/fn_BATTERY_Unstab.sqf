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
	if (_CHANCE >= 3) then 	{
		_a=0;
  		while {_a < 60} do 	{
			_a = _a + 1; _fatigue = getFatigue player;
			player setFatigue (_fatigue - 1);
			[0] call ARMST_Radiation_SetInfection;
			player setVariable ["ARMST_THIRST", (player getVariable "ARMST_THIRST") + 0.005];
			
			sleep 2;
			};	
		}
		else 
		{	
			player removemagazine "Item_BATTERY_Unstab";
			_fatigue = getFatigue player;
			player setVariable ["ARMST_THIRST", (player getVariable "ARMST_THIRST") - 0.05];
			player setVariable ["ARMST_HUNGER", (player getVariable "ARMST_HUNGER") - 0.04];
			player setFatigue (_fatigue + 1);
			player setDammage 0.8;
			
		};