/*
	Author: Aloe <itfruit@mail.ru>
	Description:  Добавление участника лагеря
	Environment: Client
	
	Parameter(s):
		_uid 		(String) - GUID игрока

	Return: (Nothing)
*/
	
	#include "..\module.sqf";
	
	params [["_uid", "", [""]]];
	
	if !(_uid isEqualTo "") then {
	
		["addPartyMember", _uid] call module(ServerSync);
		
	};