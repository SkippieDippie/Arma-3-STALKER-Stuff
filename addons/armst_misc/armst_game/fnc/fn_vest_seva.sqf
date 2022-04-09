/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
[] spawn {
while {true} do {
	
				if ((vest player) in ["Armst_sevastalk","Armst_sevastalk2","Armst_sevastalk3","Armst_sevastalk4","Armst_sevastalk5","Armst_sevastalk6","Armst_sevaclearsky","Armst_sevamonolith","Armst_sevadolg","Armst_sevasvoboda","Armst_sevanaemnik","Armst_sevavoen","Armst_science_2","Armst_science2","Armst_sevasvoboda2","Armst_seva_order"]) then {			
					if ((goggles player)=="armst_seva_visor") then {
						if ((headgear player) in ["armst_seva_shlem","armst_seva_shlem2","armst_seva_shlem3","armst_seva_shlem4","armst_seva_shlem5","armst_seva_shlem6","armst_seva_shlem_merc","armst_seva_shlem_monolith","armst_seva_shlem_army","armst_seva_shlem_clearsky","armst_seva_shlem_freedom","armst_seva_shlem_freedom2","armst_seva_science_shlem","armst_seva_science_shlem2"]) then {
							if ((backpack player) in ["armst_seva_backpack","armst_seva_backpack2","armst_seva_backpack3","armst_seva_backpack4","armst_seva_backpack5","armst_seva_backpack6","armst_seva_backpack_army","armst_seva_backpack_clearsky","armst_seva_backpack_freedom","armst_seva_backpack_merc","armst_seva_backpack_monolith","armst_seva_science_backpack","armst_seva_science_backpack_2"]) then {
								_ifff=true;
								[0] call ARMST_Radiation_SetInfection;	
								player setVariable ["ARMST_BODYTEMP", 1];
								ARMST_BODYTEMP = 37.6;					
							};				
						};			
					};		
				};
				if ((goggles player) in ["armst_R5","armst_R5_P","armst_R5_SH2"]) then {
					if ((backpack player) == "armst_backpack_ballon") then {
						_ifff=true;
						player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 20000)];
					};
				};	
				uiSleep 1;
};