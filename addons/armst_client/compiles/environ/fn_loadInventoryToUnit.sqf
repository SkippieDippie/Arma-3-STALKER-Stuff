/*
	author: 		Dragster
	file: 			fn_loadInventoryToUnit.sqf
	version: 		1.00
	date: 			10.07.2018
	arguments: 		
					_unit - player
					_loadout - ARRAY loadout
	return value:	none

*/
 	params [["_unit",objNull],["_loadout",[]]];
 	diag_log format["GNIDABD 1: %1 , %2",_unit,_loadout];
	_mes1 = format ["Лут игрока принятый %1(%3), Лут: %2", name _unit, _loadout,getPlayerUID _unit];
	["LootLog",_mes1] remoteExec ["DRG_serverToLogFile",2];
	waitUntil {uisleep 2; player == player};
	if (_unit isEqualTo objNull) exitWith {};
	if (_loadout isEqualTo []) exitWith {};
	_loadout params [["_weaponsArr",[]],["_uniformArr",[]],["_vestArr",[]],["_backpackArr",[]],["_miscArr",[]]];
	private ["_clearUnit","_loadWeapons","_loadUniform","_loadVest","_loadBackpack","_loadMisc"];
	_clearUnit = [_unit] call armst_fnc_clearUnit;
	waitUntil { _clearUnit };
	waitUntil { uiSleep 2;true };

	_loadWeapons = [_unit,_weaponsArr] call armst_fnc_loadWeapons;
	waitUntil { _loadWeapons };

	_loadUniform = [_unit,_uniformArr] call armst_fnc_loadUniform;
	waitUntil { _loadUniform };

	_loadVest = [_unit,_vestArr] call armst_fnc_loadVest;
	waitUntil { _loadVest };

	_loadBackpack = [_unit,_backpackArr] call armst_fnc_loadBackpack;
	waitUntil { _loadBackpack };

	_loadMisc = [_unit,_miscArr] call armst_fnc_loadMisc;
	waitUntil { _loadMisc };
	_mes2 = format ["Лут с игрока в конце %1(%3), Лут: %2", name player, [player] call ARMST_fnc_getInventory,getPlayerUID player];
	["LootLog",_mes2] remoteExec ["DRG_serverToLogFile",2];
true