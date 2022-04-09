/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Возвращает сохраненный ресурс, если нет 0
	
	Parameter(s):
		_resource 		(String) - тип ресурса

	Return: (Scalar)
*/
	
	#include "..\module.sqf";
	
	params [["_resource", "", [""]]];
	
	private _return = [module(StorageResources), _resource, 0] call BIS_fnc_getFromPairs;

	_return;
