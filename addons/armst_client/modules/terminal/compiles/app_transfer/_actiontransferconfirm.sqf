/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Перевод денег
	
	Parameter(s):
		_control 		(Control) - контрол
		
*/
	#include "..\..\module.sqf";
	
	params ["_control"];
	
	private _display = ctrlParent _control;
	private _ctrlReceivers = (_display displayCtrl IDC_TERMINAL_PAGE_TFR_RECEIVER);
	private _ctrlInput = (_display displayCtrl IDC_TERMINAL_PAGE_TFR_INPUT);
	
	private _receiverData = _ctrlReceivers lbData (lbCurSel _ctrlReceivers);
	private _money = player getVariable ["Money", 0];
	private _transfer =  parseNumber ctrlText _ctrlInput;
	
	if (!(_transfer isEqualTo 0) && {_money >= _transfer}) then {
	
		switch (_receiverData) do {
			
			case "B" : {
				["TRANSFER", "FACTION_BUDGET_FROM_USER", [_transfer]] spawn module(AppRequest);
			};
			
			default {
				private _receiver =  _receiverData call BIS_fnc_objectFromNetId;
				if !(isNull _receiver) then {
					_receiver setVariable ["Money", (_receiver getVariable ["Money", 0]) + _transfer, true];
				};
			};
		};
		
		player setVariable ["Money", _money - _transfer, true];
		[_display, _display displayCtrl module(CurrentPageApp)] call module(LoadPage);
	};
