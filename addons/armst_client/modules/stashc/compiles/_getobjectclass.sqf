/*
	Author: Aloe 
	Description: Возвращает класс объекта по классу предмета

	Parameter(s):
	_itemClass <String> - класс предмета
	
	Return:  String
*/	
	#include "..\module.sqf";
	
	params ["_itemClass"];
	
	private _objectClass = "";
	
	{
		if (_itemClass isEqualTo (_x select 0)) exitWith {_objectClass = _x select 1};
	} foreach module(Conformity);

	_objectClass;