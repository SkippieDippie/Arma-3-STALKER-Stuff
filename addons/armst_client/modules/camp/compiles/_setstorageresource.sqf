/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Устанавливает сохраненные ресурсы
					при совпадении в ресурсах - заменяет
					при количестве 0 - удаляет
	
	Parameter(s):
		_key 		(String) - ресурс
		_val 		(Array) - количество

	Return: (Nothing)
*/
	#include "..\module.sqf";
	
	params [["_key", "", [""]], ["_val", 0, [0]]];
	
	if (_val > 0) then {
		
		if (([module(StorageResources), _key] call BIS_fnc_findInPairs) < 0) then {
			
			[module(StorageResources), _key, _val] call BIS_fnc_addToPairs;
			
		} else {
			
			[module(StorageResources), _key, _val] call BIS_fnc_setToPairs;
		
		};
		
	} else {
		
		[module(StorageResources), _key] call BIS_fnc_removeFromPairs;
		
	};
	
