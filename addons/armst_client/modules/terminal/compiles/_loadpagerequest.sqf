/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Запрос данных сервера для приложения
	
	Parameter(s):
		_display 			(Display) - дисплей
		_app 				(String) - приложение
		_request 			(String) - запрос
		_arguments 		(Array) -  (Optional) аргументы
	
	Return: Nothing
*/
	#include "..\module.sqf";
	
	params ["_display", "_app", "_request", ["_arguments", []]];
	
	private _appTitle = ctrlText  (_display displayCtrl IDC_TERMINAL_APP_TITLE);
	private _currentApp = _display displayCtrl module(CurrentPageApp);
	
	_currentApp ctrlSetFade 1; _currentApp ctrlCommit 0;
	 (_display displayCtrl IDC_TERMINAL_APP_TITLE) ctrlSetText format ["%1 %2", _appTitle, localize "STR_TERMINAL_APP_LOADING"];
	
	private _requestDone = [_app, _request, _arguments, true] spawn module(AppRequest);
	waitUntil {scriptDone _requestDone};
	
	_currentApp ctrlSetFade 0; _currentApp ctrlCommit 1;
	(_display displayCtrl IDC_TERMINAL_APP_TITLE) ctrlSetText _appTitle;
	
	
	
	