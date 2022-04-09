/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Запрос на поиск игрока по нику в пределах фракции
	
	Parameter(s):
		_control 		(Control) - контрол
		
*/
	#include "..\..\module.sqf";
	
	params ["_control"];
	
	private _display = ctrlParent _control;
	private _findStr = format ["%1", ctrlText (_display displayCtrl IDC_TERMINAL_PAGE_PER_BAR_FIND_INPUT)];
	
	//Ошибка с русскими символами
	//_findStr =  if !(isNil "CBA_fnc_trim") then {[_findStr] call CBA_fnc_trim} else {_findStr};
	
	if !(_findStr isEqualTo "") then {
		
		[_display, _findStr] spawn {
			disableSerialization;
			params ["_display", "_findStr"];
			
			private _requestDone = ["PERSONNEL", "FACTION_USER_FIND", [_findStr], true] spawn module(AppRequest);
			waitUntil {scriptDone _requestDone};
			
			[_display, ["PERSONNEL", "FIND", []] call module(AppData)] call module(ActionBarrackFindUserResponse);
			
			
			(_display displayCtrl IDC_TERMINAL_PAGE_PER_BAR_FIND_INPUT) ctrlSetText "";
		};
		
	};
