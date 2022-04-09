/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Отображение доступа к приложению
	
	Parameter(s):
		_control 		(Control) - списка
		_index 		(Number) - индекс
		
*/
	#include "..\..\module.sqf";
	
	params ["_control", "_index"];
	
	private _display = ctrlParent _control;
	private _ctrlUserAccess = (_display displayCtrl IDC_TERMINAL_PAGE_ACS_CHECKUSER);
	private _ctrlGuestAccess = (_display displayCtrl IDC_TERMINAL_PAGE_ACS_CHECKGUEST);
	
	private _accessList = module(Terminal) getVariable ["Access", []];
	private _appIDC = _control lbValue _index;
	
	{
		if (_appIDC isEqualTo (_x select 0)) exitWith {
			
			if ("USER" in (_x select 2)) then {
				_ctrlUserAccess ctrlSetChecked  true;
			} else {_ctrlUserAccess ctrlSetChecked  false};
			
			if ("GUEST" in (_x select 2)) then {
				_ctrlGuestAccess ctrlSetChecked  true;
			} else {_ctrlGuestAccess ctrlSetChecked  false};
			
		};
	} foreach _accessList;