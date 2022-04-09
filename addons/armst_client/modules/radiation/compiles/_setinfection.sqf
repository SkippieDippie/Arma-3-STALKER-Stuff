/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Изменение уровня облучения
	
	Parameter(s):
		_level			(Number)		- уровень облучения
		
	Return: Nothing
*/
	#include "..\module.sqf";
	
	params ["_level"];
	
	module(Infection) = _level;
	
	