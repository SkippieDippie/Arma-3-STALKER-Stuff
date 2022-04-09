/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Ищет детектор у игрока и возвращает (Класс диалога или класс объекта)
	
	Parameter(s):
		_this select 0 (String) - возвращаемый класс (DIALOG | OBJECT), диалог или объект
									по умолчанию DIALOG
									
	Return: String - класс
	
*/
	#include "..\module.sqf";
	
	params [["_type", "DIALOG"]];
	
	private _detector = "";
	
	{
		if (_x == (currentWeapon player)) exitWith {
			switch (_type) do {
				case "OBJECT" : {_detector = _x};
				default {
					_detector = (module(_Detectors) select 0) select _foreachIndex;
				};
			};
		};
	} foreach (module(_Detectors) select 1);

	

	
	_detector