/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Обновляет информацию о рекруте
	
	Parameter(s):
		_control 		(Control) - списка
		_index 		(Number) - индекс
	
*/
	#include "..\..\module.sqf";
	
	params ["_control", "_index"];
	
	private _display = ctrlParent _control;
	private _aboutControl = _display displayCtrl IDC_TERMINAL_PAGE_PER_REC_ABOUT;
	
	private _user = (_control lbData  _index) call BIS_fnc_objectFromNetId;
	
	if !(isNull _user) then {
	
		private _score = _user getVariable ["Score", 0];
		private _datestamp = _user getVariable ["Datestamp", date];
		private _deaths = _user getVariable ["Deaths", 0];
		private _kills = _user getVariable ["Kills", 0];
		private _currentFaction = getText (configFile >> "CfgFactionClasses" >> faction _user >> "displayName");

		_aboutControl ctrlSetStructuredText (parseText format [localize "STR_TERMINAL_ABOUTRECRUIT", 
			(_score call ARMST_Rating_GetRank) select 1,
			_score,
			format ["%1%2", (100 - ((_deaths max 1) * 100 / (_kills max 1))) max 0, "%"],
			format ["%1.%2.%3", _datestamp select 2, _datestamp select 1, _datestamp select 0],
			_currentFaction
		]);
	};
	