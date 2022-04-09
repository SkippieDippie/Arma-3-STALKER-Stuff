/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Изъятие денег из бюджета
	
	Parameter(s):
		_control 		(Control) - контрол
	
*/
	#include "..\..\module.sqf";
	
	params ["_control"];
	
	private _display = ctrlParent _control;
	private _ctrlReceivers = (_display displayCtrl IDC_TERMINAL_PAGE_BUD_WDW_RECEIVER);
	private _ctrlInput = (_display displayCtrl IDC_TERMINAL_PAGE_BUD_WDW_INPUT);
	
	private _receiver =  (_ctrlReceivers lbData (lbCurSel _ctrlReceivers)) call BIS_fnc_objectFromNetId;
	private _budget =  ["BUDGET", "BUDGET", 0] call module(AppData);
	private _pay =  parseNumber ctrlText _ctrlInput;
	
	if (!(_pay isEqualTo 0) && {!isNull _receiver && _budget >= _pay}) then {
		[_display, _receiver, _pay] spawn {
			disableSerialization;
			params ["_display", "_receiver", "_pay"];
			
			private _requestDone = ["BUDGET", "FACTION_BUDGET_TO_USER", [_receiver, _pay]] spawn module(AppRequest);
			waitUntil {scriptDone _requestDone};
			[_display, _display displayCtrl module(CurrentPageApp)] call module(LoadPage);
		};
	};