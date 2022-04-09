/*
	Author: Aloe 
	Description: Возвращает класс предмета по классу объекта

	Parameter(s):
		_itemClass <String> - класс объекта
	
	Return:  String
*/
	#include "..\module.sqf";
	
	params ["_objectClass"];
	
	private _itemClass = "";
	
	{
		if (_objectClass isEqualTo (_x select 1)) exitWith {_itemClass = _x select 0};
	} foreach module(Conformity);

	_itemClass;