/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Отображение ответа сервера на запрос поиска игрока по нику в пределах фракции
	
	Parameter(s):
		_display 			(Display) - дисплей
		_response 		(Array) - ответ
		
*/
	#include "..\..\module.sqf";
	
	disableSerialization;
	params ["_display", "_response"];
	
	if !(isNull _display && module(CurrentPageApp) isEqualTo IDC_TERMINAL_PAGE_PER_BARRACK) then {
		
		private _controlList = (_display displayctrl IDC_TERMINAL_PAGE_PER_BAR_LIST);
		private _controlExclude = (_display displayctrl IDC_TERMINAL_PAGE_PER_BAR_EXCLUDE_BUTTON);
		private _controlFindMsg = (_display displayctrl IDC_TERMINAL_PAGE_PER_BAR_FIND_RESULT);
		
		if (_response isEqualType  []) then {
			if (count _response > 0) then {
				
				lbClear _controlList;
				{
					private _index = _controlList lbAdd (format ["%1. %2", (lbSize _controlList) + 1, _x select 1]);
					_controlList lbSetData [_index, str ( _x select 0)];
				} foreach _response;
				
				_controlList ctrlSetEventHandler  ["LBSelChanged", "call ARMST_Terminal_ActionBarrackSelectUserArchive"]; 
				_controlExclude ctrlSetEventHandler  ["MouseButtonDown", "call ARMST_Terminal_ActionBarrackExcludeUserArchive"]; 
				
				_controlFindMsg ctrlSetText format [localize "STR_TERMINAL_TITTLE_PERSONNEL_BARRACK_FINDED", count _response];
				
			} else {
				_controlFindMsg ctrlSetText localize "STR_TERMINAL_TITTLE_PERSONNEL_BARRACK_FIND_EMPTY";
			};
		} else {
			_controlFindMsg ctrlSetText localize "STR_TERMINAL_TITTLE_PERSONNEL_BARRACK_FIND_ERROR";
		};
		
	};