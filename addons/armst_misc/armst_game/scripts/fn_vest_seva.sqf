/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
[] spawn {
while {true} do {
	if ((vest player) in ["Armst_old_sevastalk","Armst_old_sevastalk2","Armst_old_sevastalk3","Armst_old_sevadolg","Armst_old_sevanaemnik","Armst_old_sevamonolith","Armst_old_sevasvoboda","Armst_old_sevastalk_rain","Armst_old_sevastalk2_rain","Armst_old_sevastalk3_rain","Armst_old_sevadolg_rain","Armst_old_sevanaemnik_rain","Armst_old_sevamonolith_rain","Armst_old_sevasvoboda_rain"]) then 
		{
			[0] call ARMST_Radiation_SetInfection;	
			player setVariable ["ARMST_BODYTEMP", 1];
			ARMST_BODYTEMP = 38;					
		};
	uiSleep 5;
};

};
while {true} do {
	if ((vest player) in ["Armst_sevastalk_rain","Armst_sevastalk2_rain","Armst_sevastalk3_rain","Armst_sevaclearsky_rain","Armst_sevamonolith_rain","Armst_sevadolg_rain","Armst_sevasvoboda_rain","Armst_sevasvoboda2_rain","Armst_sevanaemnik_rain","Armst_sevavoen_rain","Armst_science_2_rain","Armst_science2_rain"]) then 
		{
		if ((goggles player)=="armst_seva_visor") then 
			{
			if ((headgear player) in ["armst_seva_shlem_freedom_rain","armst_seva_shlem_freedom2_rain","armst_seva_shlem_merc_rain","armst_seva_shlem_monolith_rain","armst_seva_shlem2_rain","armst_seva_shlem_rain","armst_seva_shlem3_rain","armst_seva_shlem_clearsky_rain","armst_seva_shlem_dolg_rain","armst_seva_science_shlem_rain","armst_seva_science_shlem_2_rain"]) then 
				{
				if ((backpack player) in ["armst_seva_backpack2","armst_seva_backpack3","armst_seva_backpack_army","armst_seva_backpack_clearsky","armst_seva_backpack_dolg","armst_seva_backpack_freedom","armst_seva_backpack_freedom2","armst_seva_backpack_monolith","armst_seva_backpack_merc","armst_seva_backpack","armst_backpack_ballon","armst_seva_science_backpack","armst_seva_science_backpack_2","armst_seva_backpack2_rain","armst_seva_backpack3_rain","armst_seva_backpack_army_rain","armst_seva_backpack_clearsky_rain","armst_seva_backpack_dolg_rain","armst_seva_backpack_freedom_rain","armst_seva_backpack_freedom2_rain","armst_seva_backpack_monolith_rain","armst_seva_backpack_merc_rain","armst_seva_backpack_rain","armst_backpack_ballon_rain","armst_seva_science_backpack_rain","armst_seva_science_backpack_2_rain"]) then 
					{
						[0] call ARMST_Radiation_SetInfection;	
						player setVariable ["ARMST_BODYTEMP", 1];
						ARMST_BODYTEMP = 38;	
					};				
				};			
			};		
		};
	uiSleep 2;
};