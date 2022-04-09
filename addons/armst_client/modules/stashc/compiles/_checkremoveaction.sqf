/*
	Author: Aloe 
	Description: Проверка на возможность убрать тайник 

	Parameter(s):
		_stashObject <Object> - объект тайника
		
	Return: Bool
*/	
	#include "..\module.sqf";
	
	params ["_stashObject"];
	
	(!isNull _stashObject && {_stashObject getVariable ["ARM_StashOwnerUID", ""] isEqualTo getPlayerUID player});
	
	