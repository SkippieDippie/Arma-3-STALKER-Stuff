/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Исключить члена из фракции (Онлайн/Оффлайн)
	
	Parameter(s):
		_userId 		(String/Number) - идентификатор объекта или идентификатор пользователя
	
*/
	#include "..\..\module.sqf";
	
	params ["_userId"];

	private _requestDone = ["PERSONNEL", "FACTION_USER_EXCLUDE", [_userId]] spawn module(AppRequest);
