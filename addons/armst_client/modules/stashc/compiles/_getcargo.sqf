/*
	Author: Aloe 
	Description: Возвращает содержимое тайника

	Parameter(s):
		_stashObject <Object> - объект тайника
	
	Return: Array
*/	
	#include "..\module.sqf";
	
	params ["_stashObject"];
	
	[[
		getWeaponCargo _stashObject,
		getMagazineCargo _stashObject,
		getItemCargo _stashObject,
		getBackpackCargo _stashObject
	], []] select (isNull _stashObject);

	