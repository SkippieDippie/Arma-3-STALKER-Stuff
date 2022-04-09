/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Проверяет наличие радиметра  в инвенторе по типу
	
	Parameter(s):
		_radimetr 			(String) - тип объекта 
		
	Return: (Bool)
*/
	#include "..\module.sqf";
	
	params ["_radimetr"];
	
	private _isset = false;
	
	{
		if (_x == _radimetr) exitWith {
			_isset = _x in (weapons player + magazines player);
		};
	} foreach (module(_Radimetrs) select 1);
	
	_isset;