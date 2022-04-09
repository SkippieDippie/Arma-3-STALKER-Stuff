/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Формирование отряда фракции
	
	Parameter(s):
		_side 				(Side) - сторона
		_command 		(Array) - игроки
		_groupId 			(Array) - идентификатор группы
	
*/
	#include "..\..\module.sqf";
	
	params ["_side", "_command", "_groupId"];
	
	//TODO: TO Server
	private _group = grpNull;
	
	_group = createGroup _side;
	if !(isNull _group) then {
	
		_command joinSilent _group;
		_group setGroupIdGlobal _groupId;
		
		_groups = module(Terminal) getVariable ["ARM_Groups", []];
		_groups pushBack _group;
		module(Terminal) setVariable ["ARM_Groups", _groups, true];
		
	};



