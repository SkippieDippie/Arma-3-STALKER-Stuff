/*
	Author: Aloe <itfruit@mail.ru>
	Description: Возвращает UID, Имя создателя лагеря
	Environment: Client
	
	Parameter(s):
		
	Return: (Array)
*/
	
	#include "..\module.sqf";
	
	private _return = [];
	
	{
		_x params [["_uid", ""], ["_pair", []]];
		_pair params [["_name", ""], ["_isCreator", 0]];
		
		if (_isCreator isEqualTo 1) exitWith {
		
			_return set [0, _uid];
			_return set [1, _name];
			
		};
	} foreach module(Party);
	
	_return