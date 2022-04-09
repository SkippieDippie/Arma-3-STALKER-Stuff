/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Отображение историй операций  бюджа
	
	Parameter(s):
		_control 		(Control) - списка
		_index 		(Number) - индекс
		
*/
	#include "..\..\module.sqf";
	
	params ["_control", "_index"];
	
	private _display = ctrlParent _control;
	private _ctrlHistory = (_display displayCtrl IDC_TERMINAL_PAGE_BUD_WDW_HISTORY);
	private _type = _control lbData _index;
	private _history = ["BUDGET", "HISTORY", []] call module(AppData);
	
	lbClear _ctrlHistory;
	{
		private _hType = _x select 0;
		if (_type isEqualTo _hType) then {
			private _hDate = _x select 1;
			private _hActor = _x select 2;
			private _hUser = _x select 3;
			private _hCount = _x select 4;

			switch (_hType) do {
				case "W" : {
					private _lbIdx = _ctrlHistory  lbAdd format [localize "STR_TERMINAL_TITLE_BUDGET_WDW_HISTORYFORMAT_W", 
						_hDate, _hActor, _hCount, _hUser
					];
				};
				case "R" : {
					private _lbIdx = _ctrlHistory  lbAdd format [localize "STR_TERMINAL_TITLE_BUDGET_WDW_HISTORYFORMAT_R", 
						_hDate, _hActor, _hCount
					];
				};
				default {};
			};
			
		};
	} foreach _history;
	
	