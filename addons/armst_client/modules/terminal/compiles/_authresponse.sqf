/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Ответ на запрос аутентификации
	
	Parameter(s):
		_response	 (Bool) - аутентификация
		_status		(String) - статус
	
*/
	#include "..\module.sqf";
	
	params ["_response", "_status"];
	
	private _display = uiNamespace getVariable ["ARMST_Terminal_Display", displayNull];
	
	if !(isNull _display) then {
	
		switch (_response) do {
			case true : {
				module(Authed) = true;
				module(Status) = _status;
				
				
				[_display displayCtrl IDC_TERMINAL_DESKTOP] call module(ChangePage);
				
				if !(module(Status) isEqualTo "") then {
					[localize format ["STR_TERMINAL_AUTH_LOGGEDAS_%1",  _status], 10] call module(ShowNotice);
				};
				
			};
			case false : {
				(_display displayCtrl IDC_TERMINAL_AUTH_STATUS) ctrlSetText localize "STR_TERMINAL_AUTH_STATUS_ERROR_PASSWORD";
			};
			default {
				(_display displayCtrl IDC_TERMINAL_AUTH_STATUS) ctrlSetText localize "STR_TERMINAL_AUTH_STATUS_ERROR_UNKNOWN";
			};
		};
		
	};
	
