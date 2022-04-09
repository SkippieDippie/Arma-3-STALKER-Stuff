/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Перевести юзера в отряд
	
	Parameter(s):
		_control 		(Control)
	
*/
	#include "..\..\module.sqf";
	
	params ["_control"];

	private _display =  ctrlParent _control;
	
	private _controlUsers = (_display displayCtrl IDC_TERMINAL_PAGE_PER_SQD_LIST_USERS);
	private _controlGroups = (_display displayCtrl IDC_TERMINAL_PAGE_PER_SQD_COMBO_GROUPS);
	
	private _userIndex = lbCurSel _controlUsers;
	private _groupIndex = lbCurSel _controlGroups;
	
	if (_userIndex >= 0 && _groupIndex >= 0) then {
		private _user = (_controlUsers lbData  _userIndex) call BIS_fnc_objectFromNetId;
		private _group = (_controlGroups lbData  _groupIndex) call BIS_fnc_groupFromNetId;
		
		if (!isNull _user && !isNull _group) then {
			[_group, _user] call module(SquadAssignUser);
			[_display, _display displayCtrl module(CurrentPageApp)] call module(LoadPage);
		};
	};
	