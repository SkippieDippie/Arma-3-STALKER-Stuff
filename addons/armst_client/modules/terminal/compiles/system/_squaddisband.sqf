/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Рассформирование отряда фракции / исключение из отряда
	
	Parameter(s):
		_group 			(Group) - группа
		_member 			(Object) - (Optional) член отряда
	
*/
	#include "..\..\module.sqf";
	
	params ["_group", ["_member", objNull]];
	
	if !(isNull _member) then {
		[_member] joinSilent grpNull;
	} else {
		{[_x]  joinSilent grpNull} foreach (units _group);
	};
	
	if (count units  _group isEqualTo 0 || isNull _group) then {
		 //TODO: TO Server
		private _groups = module(Terminal) getVariable ["ARM_Groups", []];
		module(Terminal) setVariable ["ARM_Groups", _groups - [_group], true];
		deleteGroup _group;	
		
	};