/*
	Author: Aloe <itfruit@mail.ru>

	Description:  display onload EH
	Parameter(s):
		_display 		(Display) - дисплей
		
*/
	#include "..\module.sqf";
	
	params ["_display"];
	
	uiNameSpace setVariable ['ARMST_loadingScreen', _display];
	
	/*
	module(KeyDownEH) = _display displayAddEventHandler ["KeyDown", {
		private _continue = true;
		if ((_this select 1) isEqualTo 1) then {
			call app(Initialization,MissionEnd);
			_continue = false;
		};
		_continue;
	}];
	*/
	