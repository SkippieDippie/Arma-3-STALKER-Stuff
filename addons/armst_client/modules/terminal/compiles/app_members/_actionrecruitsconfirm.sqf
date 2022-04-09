/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Принять / Отклонить запрос рекрута на вступление
	
	Parameter(s):
		_control 		(Array) - 	контрол
		_confirm 		(Bool) - 	принять
	
*/
	#include "..\..\module.sqf";
	
	params ["_control", "_confirm"];
	
	private _display =  ctrlParent _control;
	private _controlList = _display displayCtrl IDC_TERMINAL_PAGE_PER_REC_LIST;
	private _shapeslList = _display displayCtrl IDC_TERMINAL_PAGE_PER_REC_SHAPES;
	
	private _userIndex = lbCurSel _controlList;
	if (_userIndex >= 0) then {
		if (_confirm) then {
			
			private _shapeIndex = lbCurSel _shapeslList;
			if (_shapeIndex >= 0) then {
				[_controlList lbData _userIndex, _shapeslList lbData _shapeIndex] call module(ConfirmRecruit);
			};
		} else {
			[_controlList lbData _userIndex] call module(RejectRecruit);
		};
		
		[_display, _display displayCtrl module(CurrentPageApp)] call module(LoadPage);
	};
	

	
