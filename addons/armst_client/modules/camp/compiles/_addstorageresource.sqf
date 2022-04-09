/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Добавляет ресурсы
					при совпадении в ресурсах - добавляет
	
	Parameter(s):
		_key 		(String) - ресурс
		_val 		(Array) - количество

	Return: (Nothing)
*/
	#include "..\module.sqf";
	
	params [["_key", "", [""]], ["_val", 0, [0]]];
	
	private _resource = [module(StorageResources), _key, -1] call BIS_fnc_getFromPairs;
	if (_resource > -1) then {
		
		[module(StorageResources), _key, _resource + _val] call BIS_fnc_setToPairs;
		
	} else {
		
		[module(StorageResources), _key, _val] call BIS_fnc_addToPairs;
	
	};

