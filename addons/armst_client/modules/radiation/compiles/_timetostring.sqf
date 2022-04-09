/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Форматирование секунд в строку
	
	Parameter(s):
		_sec 				(Number) - число, секунды
		_format 			(String) - Optional. форматирующая строка
	
	Return: (String)
*/

	#include "..\module.sqf";
	
	params ["_sec"];
	private _format = _this param [1, "%1:%2:%3"];
	
	private ["_s", "_m", "_h"];
		
	_h = floor(_sec / 3600);
	_m = (_sec / 3600 - _h)* 60;
	_s = round((_m - floor _m)* 60);
	
	_h = if(_h < 10) then {format ["0%1", _h]} else {format["%1", _h]};
	_m = if(_m < 10) then {format ["0%1", floor _m]} else {format["%1", floor _m]};
	_s = if(_s < 10) then {format ["0%1", _s]} else {format["%1", _s]};

	format [_format, _h, _m, _s];