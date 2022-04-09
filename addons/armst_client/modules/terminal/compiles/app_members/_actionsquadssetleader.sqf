/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Назначение лидера отряда
	
	Parameter(s):
		_control 		(Control) - списка
		_index 		(Number) - индекс
		
*/
	#include "..\..\module.sqf";
	
	params ["_control", "_index"];
	
	private _display = ctrlParent _control;
	
	if (count _index > 1) then {
		private _user = (_control tvData _index) call BIS_fnc_objectFromNetId;
		if !(isFormationLeader _user) then {
			
			[group _user, _user] call module(SquadSetLeader);
			
			[_display, _display displayCtrl module(CurrentPageApp)] call module(LoadPage);
		};
	};
	