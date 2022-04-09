/*
	Author: Aloe <itfruit@mail.ru>

	Description:  При загрузке диалога выбора фракции
	
	Parameter(s):
		_display 		(Display) - дисплей
		
*/
	#include "..\module.sqf";
	
	params ["_display"];

	module(SelectFactionKeyDownEH) = _display displayAddEventHandler ["KeyDown", {true}];