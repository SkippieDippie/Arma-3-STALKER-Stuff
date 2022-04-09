/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Обработчик события - возрождение игрока
	
	Parameter(s):
		_unit 			(Object) - новый игрок
		_corpse 		(Object) - тело
		
      Return: Nothing
*/
	#include "..\module.sqf";
	
	params ["_unit", "_corpse"];
	
	titleCut ["", "BLACK OUT", 0];
	
	//Reset variables
	_unit setVariable ["ARMST_HUNGER", 1];
	_unit setVariable ["ARMST_THIRST", 1];
	
	[0] call app(Radiation,SetInfection);
	
	//Loadout
	private _loadout = getArray(missionConfigfile >> "ARMST_Equipments" >> "Equipment_respawn");
	// [_unit, [_loadout]] call BIS_fnc_loadInventory;
	[_unit, _loadout] call ARMST_fnc_loadInventoryToUnit;
	
	//Respawn
	private _repawnType = getNumber (missionConfigfile >> "ARMST_Factions" >> faction _unit >> "respawn");
	switch (_repawnType) do {
		
		case 3 : {
			private _rentCfg = missionConfigfile >> "ARMST_Respawn" >> "Rent";
			private _rentVar = profileNamespace getVariable ["ARMST_Rentier", []];
			private _unitDeaths = _unit getVariable ["Deaths", 0];
			
			if !(_rentVar isEqualTo []) then {
				private _rentier = [];
				{
					if ((_x select 0) == (_rentVar select 0)) exitWith {_rentier = _x};
				} foreach (getArray (_rentCfg >> "rentiers"));
				
				try {
					if (!(_rentier isEqualTo []) && {_unitDeaths <= (_rentVar select 1) + (_rentier select 3)}) throw true;
					throw false;
				} catch {
					if (_exception) then {
						_unit setPosATL (_rentier select 1);
					} else {
						_unit setPosATL (getArray (_rentCfg >> "default"));
						
						_unit setVariable ["ARMST_Rentier", ""];
						profileNamespace setVariable ["ARMST_Rentier", []];
					};
				};
			} else {
				_unit setPosATL (getArray (_rentCfg >> "default"));
			};
		};
		
		case 2 : {
			private _customPoints = getArray (missionConfigfile >> "ARMST_Respawn" >> "custom");
			if !(_customPoints isEqualTo []) then {
				_customPoint = ([_customPoints, [], {player distance _x}] call BIS_fnc_sortBy) select 0;
				_unit setPosATL _customPoint;
			};
		};
		
		case 1;
		default {
			private _respawnBase = getText (missionConfigfile >> "ARMST_Factions" >> faction _unit >> "baseMarker");
			if !(_respawnBase isEqualTo "") then {
				_unit setPosATL (getMarkerPos _respawnBase);
			};
		};
	};
	
	//Infotext
	titleCut ["", "WHITE IN", 2];
	[([(getPosATL _unit) call ARMST_fnc_getTerrainInfo, "nearLocation"] call BIS_fnc_getFromPairs)] spawn  BIS_fnc_infoText;
	
	