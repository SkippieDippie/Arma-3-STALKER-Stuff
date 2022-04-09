/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Cycle for calculating radiation affecting the player
	
	Parameter(s):
	Return: Nothing
	
*/
#include "..\module.sqf";

//Search for radioactive objects
private _radiactiveObjects = [];
{
	if (_x getVariable ["radiationLevel", 0] > 0) then {
		_x setVariable ["radiationRadius", (_x getVariable ["radiationRadius", module(_DefaultDistance)])];
		_radiactiveObjects pushBack _x;
	};
} foreach (allMissionObjects "All");


if (count _radiactiveObjects > 0) then {

	while {true} do {
	
		if (!isNull player and {alive player}) then {
			
			//Search for radioactive objects closest to the player
			private _radiactiveObjectsNear = [];
			{
				if (!isNull _x and {player distance _x < _x getVariable ["radiationRadius", module(_DefaultDistance)]} ) then {
					
					//Радиус 
					private _r = _x getVariable "radiationRadius";	
					//Дистанция
					private _d = player distance _x;	
					//Уровень
					private _l = _x getVariable "radiationLevel";	
					
					_radiactiveObjectsNear pushBack [(1 * (_r - _d) / _r) * _l, _x];
					
				};
			} foreach _radiactiveObjects;
			
			//Identifying the influencing source
			if (count _radiactiveObjectsNear > 0) then {
			
				//Radiation Level Around (Sorted by Greatest Health Impact)
				_radiactiveObjectsNear sort false;
				module(Terrain) = (_radiactiveObjectsNear select 0) select 0;
				
				//Player exposure level (the current)
				module(Level) = [module(Terrain)] call module(CalculateProtect);
				
				//Player exposure level (infestations)
				if (module(Level) != 0 && module(Level) > module(Infection)) then {
					module(Infection) = module(Infection) + (module(Level) / 100000);
				};
				
				//Radiation exposure time
				module(SpentTime) = module(SpentTime) + 1;
				
				//Radiation effect on the view
				call module(DisplayEffect);
				
			} else {
			
				module(Terrain) = 0;
				module(Level) = 0;
				module(SpentTime) = 0;
				
			};
			
			//Radiation Damage per Second
			if (module(Infection) > 0.20000) then {
			
				//player setHitPointDamage ["hitBody", (player getHitPointDamage "hitBody") + ( module(Infection) / 20)];
				//[player, 0.2, "body", "unknown"] spawn ace_medical_fnc_addDamageToUnit;
				_selection = selectRandom ["body","head","hand_r","hand_l","leg_r","leg_l"];
				[player, 0.09 + ( module(Infection) / 20), _selection, "unknown"] spawn ace_medical_fnc_addDamageToUnit;
				/*
				hintSilent parseText format [
					"<t color='#FFD500' shadow='1'>Радиация - %1 мкР<br/>
					<t color='#61B35E'>Облучение - %5<br/>
					<t color='#61B35E'>Здоровье - %2%3<br/>
					<t color='#FB3600'>Заражение - %4 мкР</t>",
					module(Terrain),
					(1 - (player getHitPointDamage "hitBody")) * 100,
					"%",
					module(Infection),
					module(Level)
				];
				*/
			};
			
			
		} else {
		
			module(Terrain) = 0;
			module(Level) = 0;
			module(Infection) = 0;
			module(SpentTime) = 0;
			
		};
		
		uiSleep 1;	
	};
};

