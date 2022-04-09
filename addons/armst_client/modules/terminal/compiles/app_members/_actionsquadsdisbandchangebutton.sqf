/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Просто изменение надписи кнопки
					рассформировать отряд / исключить из отряда
	
	Parameter(s):
		_control 		(Control) - списка
		_index 		(Number) - индекс
		
*/
	#include "..\..\module.sqf";
	
	params ["_control", "_index"];
	
	private _display =  ctrlParent _control;
	
	try {
		if (count _index isEqualTo 1) throw "STR_TERMINAL_BUTTON_PERSONNEL_SQUADS_DISBAND";
		if (count _index > 1) throw "STR_TERMINAL_BUTTON_PERSONNEL_SQUADS_DISBAND_USER";
	} catch {
		(_display displayCtrl IDC_TERMINAL_PAGE_PER_SQD_DISBAND_BUTTON) ctrlSetText localize _exception;
	};
	