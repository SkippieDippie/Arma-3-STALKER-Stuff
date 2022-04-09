/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Изменение настроек доступа
	
	Parameter(s):
		_control 		(Control) - контрол
		
*/
	#include "..\..\module.sqf";
	
	params ["_control"];
	
	private _display = ctrlParent _control;
	private _ctrlApps = (_display displayCtrl IDC_TERMINAL_PAGE_ACS_LIST);
	private _ctrlUserAllow = (_display displayCtrl IDC_TERMINAL_PAGE_ACS_CHECKUSER);
	private _ctrlGuestAllow = (_display displayCtrl IDC_TERMINAL_PAGE_ACS_CHECKGUEST);
	
	private _appIDC =  (_ctrlApps lbValue (lbCurSel _ctrlApps));
	private _access = module(Terminal) getVariable ["Access", []];
	
	{
		if ((_x select 0) isEqualTo _appIDC) exitWith {
			private _allowed = ["ADMIN"];
			if (ctrlChecked _ctrlUserAllow) then {_allowed pushBack "USER"};
			if (ctrlChecked _ctrlGuestAllow) then {_allowed pushBack "GUEST"};
			
			_x set [2, _allowed];
		};
	} foreach _access;
	
	module(Terminal) setVariable ["Access", _access];
	["ACCESS", "FACTION_ACCESS_UPDATE", [_access]] spawn module(AppRequest);
	
	[_display, _display displayCtrl module(CurrentPageApp)] call module(LoadPage);
	