/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Обновляет информацию о члене фракции (Оффлайн)
	
	Parameter(s):
		_control 		(Control) - списка
		_index 		(Number) - индекс
		
*/
	#include "..\..\module.sqf";
	
	params ["_control", "_index"];
	
	private _display = ctrlParent _control;
	private _aboutControl = _display displayCtrl IDC_TERMINAL_PAGE_PER_BAR_ABOUT;
	
	private _archiveData = ["PERSONNEL", "FIND", []] call module(AppData);
	if !(_archiveData isEqualTo []) then {

		{
			if (str (_x select 0) isEqualTo (_control lbData  _index)) exitWith {
				_archiveData = _x;
			};
		} foreach _archiveData;
		
		if !(_archiveData isEqualTo []) then {
		
			private _datestampEntry = _archiveData select 2;
			private _datestampLast = _archiveData select 3;
			
			_aboutControl ctrlSetStructuredText (parseText format [localize "STR_TERMINAL_ABOUTUSER_ARCHIVE", 
				format ["%1.%2.%3", _datestampEntry select 2, _datestampEntry select 1, _datestampEntry select 0],
				format ["%1.%2.%3", _datestampLast select 2, _datestampLast select 1, _datestampLast select 0]
			]);
			
		};

	};
	

