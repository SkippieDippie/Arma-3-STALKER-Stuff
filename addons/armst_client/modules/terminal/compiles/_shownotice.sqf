/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Отображение подсказки
	
	Parameter(s):
		_message		(String) - сообщение
		_timeout		(Number) - таймаут
	
*/
	#include "..\module.sqf";
	
	params ["_message", "_timeout"];
	
	[_message, _timeout] spawn {
		params ["_message", "_timeout"];
		
		disableSerialization;
		private _display = uiNamespace getVariable ["ARMST_Terminal_Display", displayNull];
		if !(isNull _display) then {
			private _control = _display displayCtrl IDC_TERMINAL_DESKTOP_NOTICE;
			_control ctrlSetText _message;
			_control ctrlSetFade 0; _control ctrlCommit 0;
			
			_control ctrlSetFade 1;
			_control ctrlCommit _timeout;
		};
	};
