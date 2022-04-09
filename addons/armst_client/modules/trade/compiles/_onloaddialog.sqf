	/*
	Author: Aloe
	Description: Onload
	
	Parameter(s):
	_this: <Display> display
	
	*/
	
	#include "..\module.sqf";
	
	params ["_display"];
	private ["_modeConfig"];
	
	if !(isNull _display) then {
	
		disableSerialization;
		private _listBox = _display displayCtrl IDC_TRADEDIALOG_LIST;
		
		uiNamespace setVariable ["ARMST_Trade_Dialog", _display];
		
		private _trade = [];
		
		switch (module(_CurrentTradeMode)) do {
			case 1 : {
				 (_display displayCtrl IDC_TRADEDIALOG_BUTTON_FULLBUY) ctrlShow false;
				 (_display displayCtrl IDC_TRADEDIALOG_LIST_FULLBUY) ctrlShow false;
				
				_trade = module(_CurrentTrader) getVariable ["Trade", []];
				_modeConfig = (module(_Config) >> vehicleVarname module(_CurrentTrader) >> "Sale");
			};
			case 2 : {
				 (_display displayCtrl IDC_TRADEDIALOG_LIST_FULLBUY) ctrlShow false;
				 
				_trade = module(_CurrentTrader) getVariable ["Buy", []];
				_modeConfig = (module(_Config) >> vehicleVarname module(_CurrentTrader) >> "Buy");
			};
			default {[]};
		};
		
		if !(_trade isEqualTo []) then {
			{
				private _index = _listBox lbAdd getText(_modeConfig >> _x select 0 >> "displayName");
				_listBox lbSetData [_index, _x select 0];
			} foreach _trade;
		};
		
	};
