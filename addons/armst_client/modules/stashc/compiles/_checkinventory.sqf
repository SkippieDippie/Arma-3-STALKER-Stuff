/*
	Author: Aloe 
	Description: Проверка инвентаря игрока на наличие предмета тайника

	Parameter(s):
		_itemClass <String> - класс предмета
		
	Return: Bool
*/	
	#include "..\module.sqf";
	
	params ["_itemClass"];
	
	(_itemClass in backpackItems player || _itemClass in vestItems player); 