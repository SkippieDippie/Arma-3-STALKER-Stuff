/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Отклонить запрос рекрута на вступление
	
	Parameter(s):
		_userId 			(String) - идентификатор юнита
		
*/
	#include "..\..\module.sqf";
	
	params ["_userId"];
	
	private _unit = _userId call BIS_fnc_objectFromNetId;
	if !(isNull _unit) then {
		_unit setVariable ["RequestFaction", nil];
		
		(format [localize "STR_TERMINAL_HINT_FACTION_REJECTMEMBER",
			getText(configFile >> "CfgFactionClasses" >> module(Faction) >> "displayName")
		]) remoteExecCall ["Hint", _unit];
		
	};