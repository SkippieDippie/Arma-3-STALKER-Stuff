/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

	private["_container","_unit"];
	if(count _this == 1) exitWith {false};
	_unit = _this select 0;
	_container = _this select 1;

	_isPack = getNumber(configFile >> "CfgVehicles" >> (typeOf _container) >> "isBackpack");
	if(_isPack == 1) then {
		[localize "str_locked_bags"] call ace_common_fnc_displayTextStructured;
	[] spawn {
		waitUntil {!isNull (findDisplay 602)};
		closeDialog 0;
	};
						};