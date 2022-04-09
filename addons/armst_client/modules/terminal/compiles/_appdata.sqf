/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Получение данных для приложения
	
	Parameter(s):
		_app 				(String) - приложение
		_val 				(String) - значение
		_default 			(Any) - значение по умолчанию
	
	Return: (Array) Данные
*/
	#include "..\module.sqf";
	
	params ["_app", "_val", "_default"];
	
	private _appData = [module(Apps), _app, []] call BIS_fnc_getFromPairs;
	private _data = [_appData, _val, _default] call BIS_fnc_getFromPairs;
	
	_data;