/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Исключить члена из фракции (Онлайн)
	
	Parameter(s):
		_control 		(Control)
	
*/
	#include "..\..\module.sqf";
	
	params ["_control"];

	private _display =  ctrlParent _control;
	private _list = _display displayCtrl IDC_TERMINAL_PAGE_PER_BAR_LIST;
	private _index = lbCurSel _list;
	
	if (_index >= 0) then {
		private _userNetId = _list lbData _index;

		[_userNetId] call module(ExcludeUser);
		_list lbDelete  _index;
		
		private _user = _userNetId call BIS_fnc_objectFromNetId;
		if !(isNull _user) then {
			format [
				localize "STR_TERMINAL_HINT_FACTION_EXCLUDEMEMBER", 
				getText (configFile >> "CfgFactionClasses" >> module(Faction) >> "displayName"),
				ctrlText (_display displayCtrl IDC_TERMINAL_PAGE_PER_BAR_EXCLUDE_INPUT)
			] remoteExecCall ["Hint", _user];
		};

	};
	
	
	