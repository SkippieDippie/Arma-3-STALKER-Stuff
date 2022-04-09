/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Исключить члена из фракции (Оффлайн)
	
	Parameter(s):
		_control 		(Control)
	
*/
	#include "..\..\module.sqf";
	
	params ["_control"];

	private _display =  ctrlParent _control;
	private _list = _display displayCtrl IDC_TERMINAL_PAGE_PER_BAR_LIST;
	private _index = lbCurSel _list;
	
	if (_index >= 0) then {
		
		[parseNumber (_list lbData _index)] call module(ExcludeUser);
		_list lbDelete  _index;
		
	};