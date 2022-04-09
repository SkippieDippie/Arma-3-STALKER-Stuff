/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Запрос данных с сервера для приложения 
	
	Parameter(s):
		_app 				(String) - приложение
		_request 			(String) - запрос
		_arguments 		(Array) - передаваемые аргументы
		_update 			(Bool) - (Optional: false)  Если true новые данные с сервера будут замещены текущими.
														Если false запрос будет выполнен, но без ожидания ответа.
	
	Return: Nothing
*/
	#include "..\module.sqf";
	
	params ["_app", "_request", "_arguments", ["_update", false]];
	
	module(DataResponse) = nil;
	
	if (isMultiplayer) then {
	
		[player,  module(Faction), _request, _arguments] remoteExec ["ARMST_Faction_TerminalRequest", 2];
		
		if (_update) then {
			waitUntil {!isNil stringify(module(DataResponse))};
			[module(Apps), _app, module(DataResponse)] call BIS_fnc_setToPairs;
		};
		
	};