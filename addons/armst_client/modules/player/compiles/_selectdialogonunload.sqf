/*
	Author: Aloe <itfruit@mail.ru>

	Description:  При завершении диалога выбора фракции
	
	Parameter(s):
		_display 		(Display) - дисплей
		
*/
	#include "..\module.sqf";
	
	params ["_display"];

	_display displayRemoveEventHandler ["KeyDown", module(SelectFactionKeyDownEH)];