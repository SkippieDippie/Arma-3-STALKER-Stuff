/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Обновляет информацию о выбранной локации
	
	Parameter(s):
		_control 		(Control) - списка
		_index 		(Number) - индекс
	
*/
	#include "..\..\module.sqf";
	
	params ["_control", "_index"];
	
	private _display = ctrlParent _control;
	private _controlMap = _display displayCtrl IDC_TERMINAL_PAGE_LOC_MAIN_MAP;
	private _controlAbout = _display displayCtrl IDC_TERMINAL_PAGE_LOC_MAIN_ABOUT;
	
	private _location = missionNamespace getVariable [_control lbData  _index, objNull];
	if !(isNull _location) then {
	
		_controlMap ctrlMapAnimAdd [1, 0.05,  _location];
		ctrlMapAnimCommit _controlMap;

		_controlAbout ctrlSetStructuredText (parseText format [localize "STR_TERMINAL_ABOUTLOCATION", 
			_location getVariable ["Name", ""],
			_location getVariable ["Dominance", 1],
			format ["%1", getText (configFile >> "CfgFactionClasses" >> _location getVariable ["Owner", ""] >> "displayName")],
			format ["%1", getText (configFile >> "CfgVehicles" >> typeOf ([getPosATL _location] call module(GetNearTrader)) >> "displayName")]
		]);
	};
	