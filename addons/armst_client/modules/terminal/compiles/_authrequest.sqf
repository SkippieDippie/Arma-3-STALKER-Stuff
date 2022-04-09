/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Запрос аутентификации
	
	Parameter(s):
		_control 		(Control) - Контрол
	
*/
	#include "..\module.sqf";
	
	params ["_control"];
	
	private _display =  ctrlParent _control;
	private _password = ctrlText (_display displayCtrl IDC_TERMINAL_AUTH_INPUT);
	
	[_display displayCtrl IDC_TERMINAL_AUTH_CONFIRM, 5] call module(DisableButton);
	
	if (isMultiplayer) then {
	
		(_display displayCtrl IDC_TERMINAL_AUTH_STATUS) ctrlSetText localize "STR_TERMINAL_AUTH_STATUS_WAIT";
		
		[module(Faction), player, _password] remoteExecCall ["ARMST_Faction_TerminalRequestAuth", 2];
		
	} else {
		[true, "ADMIN"] call module(AuthResponse);
	};
	