/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Обновляет информацию о фракции из списка
	
	Parameter(s):
		_control 		(Control) - списка
		_index 		(Number) - индекс
		
*/
	#include "..\..\module.sqf";
	
	params ["_control", "_index"];
	
	private _display = ctrlParent _control;
	private _faction =  (_control lbData _index);
	private _factionConfig = configFile >> "CfgFactionClasses" >> _faction;
	
	//About faction
	private _aboutFactionControl = (_display displayCtrl IDC_TERMINAL_PAGE_SUM_ABOUTMAIN);
	private _factionPairs = [["SUMMARY", "INFO", []] call module(AppData), _faction, []] call BIS_fnc_getFromPairs;
	
	private _datestamp = [_factionPairs, "Datestamp", date] call BIS_fnc_getFromPairs;
	private _locations = [_factionPairs, "Locations", [0,0]] call BIS_fnc_getFromPairs;
	private _allies = [_factionPairs, "Allies", []] call BIS_fnc_getFromPairs;
	
	private _locationsRatioStr = "0%";
	if (_locations select 0 > 0 && _locations select 1 > 0 ) then {
		_locationsRatioStr = format ["%1%2", round (((_locations select 0) / (_locations select 1)) * 100), "%"];
	};
	
	private _alliesNamesStr = "";
	{
		_alliesNamesStr = _alliesNamesStr + format ["<br/>  %1", getText (configFile >> "CfgFactionClasses" >> _x >> "displayName")];
	} foreach _allies;
	
	_aboutFactionControl ctrlSetStructuredText (parseText format [localize "STR_TERMINAL_ABOUTFACTION", 
		getText(_factionConfig >> "displayName"),
		format ["%1.%2.%3", _datestamp select 2, _datestamp select 1, _datestamp select 0],
		[_factionPairs, "Rating", 0] call BIS_fnc_getFromPairs,
		[_factionPairs, "Contingent", 0] call BIS_fnc_getFromPairs,
		_locations select 0,
		_locationsRatioStr,
		_alliesNamesStr
	]);
		

						
	/*
	private _display = ctrlParent _control;
	private _MapControl = _display displayCtrl IDC_TERMINAL_PAGE_FAC_LOCATION_ABOUT;
	
	private _location = missionNamespace getVariable [_control lbData  _index, objNull];
	
	if !(isNull _location) then {
		_MapControl ctrlMapAnimAdd [1, 0.05,  _location];
		ctrlMapAnimCommit _MapControl;
	};
	*/