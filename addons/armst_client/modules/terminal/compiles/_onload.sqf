/*
	Author: Aloe <itfruit@mail.ru>

	Description:  По открытию диалога
	
	Parameter(s):
		_display 		(Display) - диалог терминала
		
*/
	#include "..\module.sqf";
	
	params ["_display"];
	
	uiNamespace setVariable ["ARMST_Terminal_Display", _display];

	
	if !(module(Authed)) then {
		[_display displayCtrl IDC_TERMINAL_AUTH] call module(ChangePage);
	} else {
		[module(Authed), module(Status)] call module(AuthResponse);
	};
	