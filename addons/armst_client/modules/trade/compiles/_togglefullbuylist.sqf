/*
	Author: Aloe <itfruit@mail.ru>
	Description:  Переключает отоброжание элемента
	
*/

	#include "..\module.sqf";
	
	disableSerialization;
	
	private _display = uiNamespace getVariable ["ARMST_Trade_Dialog", displayNull];
	if !(isNull _display) then {
		private _listBox = _display displayCtrl IDC_TRADEDIALOG_LIST_FULLBUY;
		
		if !(ctrlShown _listBox) then {
			private _itemList = module(_CurrentTrader) getVariable ["Buy", []];
			if !(_itemList isEqualTo []) then {
				lbClear _listBox;
				
				private _itemListSimply = [];
				{
					if !((_x select 1) isEqualTo []) then {_itemListSimply append (_x select 1)};
				} foreach _itemList;
				
				{
					private _itemType = _x select 0;
					private _itemConfig = [_itemType] call module(GetItemClass);
					private ["_index"];
					
					if !(_itemConfig isEqualTo "") then {
						_index = _listBox lbAdd (getText (configFile >> _itemConfig >> _itemType >> "displayName"));
						_listBox lbSetPicture [_index, (getText (configFile >> _itemConfig >> _itemType >> "picture"))];
					} else {
						_index = _listBox lbAdd _itemType;
					};		
				} foreach _itemListSimply;
			};
			
			_listBox ctrlShow true;
		} else {
			_listBox ctrlShow false;
		};
		
		//unset focus
		ctrlSetFocus (_display displayCtrl IDC_TRADEDIALOG_LIST);
		
	};
	
	
	