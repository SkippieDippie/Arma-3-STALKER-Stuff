/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Определяет радиметр
	
	Parameter(s):
	Return: String - ключ
	
*/
	#include "..\module.sqf";
	
	private _radimetr = "";
	
	if !(module(SelectedRadimetr) isEqualTo "") then {
		if (assocGet(module(_Radimetrs), module(SelectedRadimetr)) call module(IssetRadimetr)) then {
			_radimetr = module(SelectedRadimetr);
		};
	} else {
		{
			if (_x in (weapons player + magazines player)) exitWith {
				_radimetr = (module(_Radimetrs) select 0) select _foreachIndex;
			};
		} foreach (module(_Radimetrs) select 1);
	};
	
	_radimetr;