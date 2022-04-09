/*
	Author: Aloe 
	Description: Функция "создать тайник"

	Parameter(s):
		_itemClass <String> - класс предмета
		
	Return: Bool
*/	
	#include "..\module.sqf";
	
	params ["_itemClass"];
	
	if ([_itemClass] call module(CheckPlaceAction)) then {
	
		module(PrepareHandle) = [_itemClass] spawn module(PreparePlace);
		
	};