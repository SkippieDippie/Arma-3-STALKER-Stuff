/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Добавление юнита в отряд фракции
	
	Parameter(s):
		_group 			(Group) - группа
		_unit 				(Object) - юнит
	
*/
	#include "..\..\module.sqf";
	
	params ["_group", "_unit"];
	
	[_unit] joinSilent _group;
	