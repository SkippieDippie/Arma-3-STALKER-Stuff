/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Построение списка участников лагеря
	
	Parameter(s):
		_control 			(Сontrol) - контрол

	Return: (Nothing)
*/
		
	#include "..\..\module.sqf";
	
	params ["_control"];
	
	_display = findDisplay IDC_RSCDISPLAYCAMPVIEWER;
	if !(_display isEqualTo displayNull) then {

		if (count module(RscControlsGroup_Members) > 0) then {
		
			{ctrlDelete _x} foreach module(RscControlsGroup_Members);
			module(RscControlsGroup_Members) = [];
			
		} else {

			{ctrlDelete _x} foreach module(RscControlsGroup_Members);
			
			private _windowMainGroup = ["ctrlGroup", [
				0.14 * safezoneW + safezoneX,
				0.03 * safezoneH + safezoneY,
				0.14 * safezoneW,
				1 * safezoneH
			], IDC_RSCCONTROL_PARTY_LISTBOX_GRUUP_ADD] call module(Ui_CtrlCreate);
			
			module(RscControlsGroup_Members) pushBack _windowMainGroup;
			
			private _ctrlListBox = ["ctrlListBox", 
				[0, 0, 0.14 * safezoneW, 0.94 * safezoneH],
				IDC_RSCCONTROL_PARTY_LISTBOX_ADD,
				_windowMainGroup
			] call module(Ui_CtrlCreate);
			
			{
				if !(getPlayerUID player isEqualTo getPlayerUID _x) then {
					private _idx = _ctrlListBox lbAdd format ["%1. %2",
						_foreachIndex + 1,
						name _x
					];
					_ctrlListBox lbSetData [_idx, getPlayerUID _x];
				};				
			} foreach (call BIS_fnc_listPlayers);
			
			
			_ctrlAdd = ["ctrlButton", 
				[0, 0.94 * safezoneH, 0.14 * safezoneW, 0.03 * safezoneH],
				IDC_RSCCONTROL_PARTY_ADD, 
				_windowMainGroup
			] call module(Ui_CtrlCreate);
			_ctrlAdd ctrlSetText "Добавить";
			_ctrlAdd ctrlEnable true;
			_ctrlAdd ctrlAddEventHandler ["ButtonClick", {
			
				private _display = findDisplay IDC_RSCDISPLAYCAMPVIEWER;
				private _listBox = _display displayCtrl IDC_RSCCONTROL_PARTY_LISTBOX_ADD;
				private _uid = _listBox lbData (lbCurSel _listBox);
				
				[_uid] spawn {
					params ["_uid"];
					
					[_uid] call module(memberAdd);
					
					["getParty"] call module(ServerSync);
					waitUntil {module(_ReceivedParty)};
					
					"party" call module(Ui_Create);
				};
			}];

		};
		
		
	};