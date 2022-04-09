/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Цикл расчёта радиации влияющей на игрока
	
	Parameter(s):
	Return: Nothing
	
*/
	#include "..\module.sqf";
	
	//Поиск радиактивных объектов
	private _radiactiveObjects = [];
	{
		private _rLevelParam =  _x getVariable ["radiationLevel", 0];
			
		if (_rLevelParam > 0) then {
			_x setVariable ["radiationRadius", (_x getVariable ["radiationRadius", module(_DefaultDistance)])];
			_x setVariable ["radiationLevel", 110 - ( _rLevelParam min 109)];
			_radiactiveObjects pushBack _x;
		};
	} foreach (allMissionObjects "All");
	
	
	if (count _radiactiveObjects > 0) then {
	
		while {true} do {
		
			if (!isNull player and {alive player}) then {
				
				//Поиск ближайших к игроку радиактивных объектов
				private _radiactiveObjectsNear = [];
				{
					if (!isNull _x and {player distance _x <= _x getVariable ["radiationRadius", module(_DefaultDistance)]} ) then {
						_radiactiveObjectsNear pushBack [player distance _x, _x];
					};
				} foreach _radiactiveObjects;
				
				//Определение влияющего  источника 
				if (count _radiactiveObjectsNear > 0) then {
				
					_radiactiveObjectsNear sort true;
					private _nearSource = (_radiactiveObjectsNear select 0) select 1;

					_rLevel = ((_nearSource getVariable "radiationRadius") - (player distance _nearSource)) / (_nearSource getVariable "radiationLevel");
						
					//Уровень облучения вокруг
					module(Terrain) = _rLevel - ([_rLevel] call module(CalculateProtect)) + random 0.1;
					
					//Уровень облучения игрока
					if (_rLevel > module(Infection)) then {
						module(Infection) = module(Infection) + (_rLevel / 1000);
					};
					
					//Время воздействия радицаии
					module(SpentTime) = module(SpentTime) + 1;
					
					//Эффект радиции на лицо
					call module(DisplayEffect);
				};
				
				//Урон от облучения
				if (module(Infection) > 0) then {
					
				_ifff=false;
				switch (goggles player) do 
					{
						case "armst_respirator": 
							{	
								_ifff=true;
								player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 500)];
							};
						case "armst_M334",
						case "armst_gasmaskBastard": 
							{	
								_ifff=true;
								player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 2000)];
							};
						case "armst_R5_filter",						
						case "armst_Gasslon":
							{ 
								_ifff=true;
								player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 2500)];
							};
						case "armst_GasP5":
							{ 
								_ifff=true;
								player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 3000)];
							};
						case "armst_GasP7":
							{ 
								_ifff=true;
								player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 4000)];
							};
						case "armst_Gasscout":
							{ 	
								_ifff=true;
								player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 5000)];
							};
						case "armst_m33":
							{ 	
								_ifff=true;
								player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 6000)];
							};
						case "armst_BioGasMaskG25":
							{ 
								_ifff=true;
								player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 7000)];
							};
						case "armst_R5_P_filter":
							{ 
								_ifff=true;
								player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 9500)];
							};
						case "armst_R5_SH2_filter":
							{ 
								_ifff=true;
								player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 10500)];
							};
						case "armst_G100":
							{ 
								_ifff=true;
								player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 11000)];
							};
						case "armst_gasmaskM40":
							{ 
								_ifff=true;
								player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 12500)];
							};
						case "armst_gasm50",
						case "armst_gasmaskM50_2":
							{ 
								_ifff=true;
								player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 12000)];
							};
						case "armst_gasm20":
							{ 
								_ifff=true;
								player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 13000)];
							};
						case "armst_gasmaskm04":
							{ 
								_ifff=true;
								player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 15000)];
							};
						case "armst_gasmasks10",
						case "armst_gasmasks10black":
							{ 
								_ifff=true;
								player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 10000)];
							};
						default
							{
								_ifff=false;
							};
					};
					
				if ((vest player) in ["Armst_sevastalk","Armst_sevastalk2","Armst_sevastalk3","Armst_sevaclearsky","Armst_sevamonolith","Armst_sevadolg","Armst_sevasvoboda","Armst_sevanaemnik","Armst_sevavoen","Armst_science_2","Armst_science2","Armst_sevasvoboda2","Armst_seva_order"]) then {			
					if ((goggles player)=="armst_seva_visor") then {
						if ((headgear player) in ["armst_seva_shlem","armst_seva_shlem2","armst_seva_shlem3","armst_seva_shlem_merc","armst_seva_shlem_monolith","armst_seva_shlem_army","armst_seva_shlem_clearsky","armst_seva_shlem_freedom","armst_seva_shlem_freedom2","armst_seva_science_shlem","armst_seva_science_shlem2"]) then {
							if ((backpack player) in ["armst_seva_backpack","armst_seva_backpack2","armst_seva_backpack3","armst_seva_backpack_army","armst_seva_backpack_clearsky","armst_seva_backpack_freedom","armst_seva_backpack_merc","armst_seva_backpack_monolith","armst_seva_science_backpack","armst_seva_science_backpack_2"]) then {
								_ifff=true;
								[0] call ARMST_Radiation_SetInfection;	
								player setVariable ["ARMST_BODYTEMP", 1];
								ARMST_BODYTEMP = 38;					
							};				
						};			
					};		
				};
				if ((vest player) in ["Armst_old_sevastalk","Armst_old_sevastalk2","Armst_old_sevastalk3","Armst_old_sevadolg","Armst_old_sevanaemnik","Armst_old_sevamonolith","Armst_old_sevasvoboda"]) then {
					_ifff=true;
					player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 30000)];				
				};
				if ((goggles player) in ["armst_R5","armst_R5_P","armst_R5_SH2"]) then {
					if ((backpack player) == "armst_backpack_ballon") then {
						_ifff=true;
						player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + (armst_radiation_infection / 20000)];
					};
				};	
				
				if (_ifff) then {} else {player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + ( armst_radiation_infection / 100)];};
					
				
				};
				
				//hintSilent parseText format ["<t color='#FFD500' shadow='1'>Радиация - %1 мкР<br/><t color='#61B35E'>Здоровье - %2%3<br/><t color='#FB3600'>Заражение - %4 мкР</t>", module(Terrain), (1 - getDammage player) * 100, "%", module(Infection)];
				
			} else {
				module(Terrain) = 0;
				module(Infection) = 0;
				module(SpentTime) = 0;
			};
			
		uiSleep 1;	
		};
	};
	
	