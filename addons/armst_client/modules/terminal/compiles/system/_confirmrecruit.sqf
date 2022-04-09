/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Принять запрос рекрута на вступление
	
	Parameter(s):
		_userId 			(String) - идентификатор юнита
		_userShape 		(String) - тип нового юнита
*/
	#include "..\..\module.sqf";
	
	params ["_userId", "_userShape"];
	
	private _unit = _userId call BIS_fnc_objectFromNetId;
	if !(isNull _unit) then {
		
		private _requestDone = ["PERSONNEL", "FACTION_USER_ADD", [_unit, _userShape]] spawn module(AppRequest);
		_unit setVariable ["RequestFaction", nil];
		
		(parseText format [localize "STR_TERMINAL_HINT_FACTION_ASSIGNMEMBER",
			(getText (configFile >> "CfgFactionClasses" >> module(Faction) >> "flag")) call BIS_fnc_textureMarker,
			getText(configFile >> "CfgFactionClasses" >> module(Faction) >> "displayName")
		]) remoteExecCall ["Hint", _unit];
	};
