/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Формирование отряда
	
	Parameter(s):
		_control 		(Control)
	
*/
	#include "..\..\module.sqf";
	
	params ["_control"];

	private _display =  ctrlParent _control;
	private _listControl = _display displayCtrl IDC_TERMINAL_PAGE_PER_SQD_LIST_BUFFER;
	private _inputControl = _display displayCtrl IDC_TERMINAL_PAGE_PER_SQD_NAME_INPUT;
	private _colorControl = _display displayCtrl IDC_TERMINAL_PAGE_PER_SQD_COMBO_COLORS;
	
	private  _command = [];
	for "_i" from 0 to ((lbSize _listControl) -1) step 1 do {
		private _user = (_listControl lbData _i) call BIS_fnc_objectFromNetId;
		if !(isNull _user) then {
			_command pushBackUnique _user;
		};
	};
	
	if !(_command isEqualTo []) then {
	
		private _side = side (_command select 0);
		private _groupId = [format ["%1 (%2)", ctrlText _inputControl, "%GroupColors"], _colorControl lbData (lbCurSel _colorControl)];
		
		[_side, _command, _groupId] call module(SquadForm);
		
		lbClear _listControl;
		[_display, _display displayCtrl module(CurrentPageApp)] call module(LoadPage);
	};
	