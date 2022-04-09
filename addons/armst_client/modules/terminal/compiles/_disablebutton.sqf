/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Отключение кнопки
	
	Parameter(s):
		_control		(Control) - кнопка
		_timeout		(Number) - задержка
	
*/
	#include "..\module.sqf";
	
	params ["_control", "_timeout"];
	
	[_control, _timeout] spawn {
		(_this select 0) ctrlEnable false;
		
		uiSleep (_this select 1);
		(_this select 0) ctrlEnable true;
	};
	