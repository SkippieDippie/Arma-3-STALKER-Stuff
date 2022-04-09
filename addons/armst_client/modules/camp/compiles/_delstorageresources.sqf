/*
	Author: Aloe <itfruit@mail.ru>
	Description:  Удаление ресурсов из хранилища
	Environment: Client
	
	Parameter(s):
		_type	 		(Array) - [[тип, количество], [тип, количество], ...]

	Return: (Bool)
*/
	
	#include "..\module.sqf";
	
	params [["_forDelete", [], [[]]]];		
	
	private _return = true;
	
	{
		private _class = _x select 0;
		private _count = _x select 1;
		
		private _countStorage =  [_class] call module(GetStorageResource);
		[_class, (_countStorage - _count) max 0] call module(SetStorageResource);

	} foreach _forDelete;
	
	_return;