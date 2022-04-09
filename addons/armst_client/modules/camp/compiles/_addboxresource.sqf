/*
	Author: Aloe <itfruit@mail.ru>

	Description: Добавляет предмет в ящик
	
	Parameter(s):
		_itemClass 		(String) - тип предмета
		_itemCount 		(Scalar)(Optional) - количество

	Return: (Nothinf)
*/
	
	#include "..\module.sqf";
	
	params [["_itemClass", "", [""]], ["_itemCount", 0, [0]]];
	
	module(MainBox) addItemCargoGlobal [_itemClass, _itemCount];
	