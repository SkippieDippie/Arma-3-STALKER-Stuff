/*
	Author: Aloe 
	Description: Проверка на возможность размещения тайника

	Parameter(s):
		_itemClass <String> - класс предмета
		
	Return: Bool
*/	
	#include "..\module.sqf";
	
	params ["_itemClass"];
	
	(([_itemClass] call module(CheckInventory)) && isNull module(Stash) && scriptDone module(PrepareHandle));