/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Обновляет приложение
	
	Parameter(s):
		_display	(Display) - дисплей
		
*/
	#include "..\module.sqf";
	
	params ["_display"];
	
	[_display displayCtrl IDC_TERMINAL_APP_REFRESH, 5] call module(DisableButton);
	
	[_display, _display displayCtrl module(CurrentPageApp)] call module(LoadPage);
	