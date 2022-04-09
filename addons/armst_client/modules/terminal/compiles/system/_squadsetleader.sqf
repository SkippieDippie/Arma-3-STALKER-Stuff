/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Назначение нового лидера отряда
	
	Parameter(s):
		_group 		(Group) - группа
		_leader 		(Object) - новый лидер
	
*/
	#include "..\..\module.sqf";
	
	params ["_group", "_leader"];
	
	_group selectLeader _leader;