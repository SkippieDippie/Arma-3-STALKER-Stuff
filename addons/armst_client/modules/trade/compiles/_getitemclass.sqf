/*
	Author: Aloe
	Description:
	Get base parent configname of item
	
	Parameter(s):
	item <String> - typename of item
	
	Returns: <String> base parent configname
*/
	#include "..\module.sqf";
	
	params [["_item", ""]];
	private ["_class"];

	{
		if(count ("configName _x == _item" configClasses (configFile >> _x)) > 0) exitWith {
			_class = _x;
		};
	} foreach (["cfgWeapons", "cfgMagazines", "cfgVehicles", "cfgGlasses"]);

	if (isNil "_class") then {
		["ARMST TRADE: Can`t find configName ""%1"" in: cfgWeapons, cfgMagazines, cfgVehicles, cfgGlasses", _item] call BIS_fnc_error;
		_class = "";
	};

	_class;