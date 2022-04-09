/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Проверяет наличие детектора  в инвенторе по типу
	
	Parameter(s):
		_detector 			(String) - тип объекта 
		
	Return: (Bool)
*/
	#include "..\module.sqf";
	
	params ["_detector"];
	
	private _isset = false;
	
	{
		if (_x == _detector) exitWith {
			_isset = _x in (weapons player);
		};
	} foreach (module(_Detectors) select 1);
	
	_isset