/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Построение списка ресурсов лагеря
	
	Parameter(s):
		_control 			(Сontrol) - контрол

	Return: (Nothing)
*/
		
	#include "..\..\module.sqf";
	
	params ["_control"];
	
	_display = findDisplay IDC_RSCDISPLAYCAMPVIEWER;
	if !(_display isEqualTo displayNull) then {
		
		{ctrlDelete _x} foreach module(RscControlsGroup_StorageList);

		private _windowMainGroup = ["ctrlGroup", [
			0.80 * safezoneW + safezoneX,
			0.03 * safezoneH + safezoneY,
			0.20 * safezoneW,
			0.97 * safezoneH
		], IDC_RSCCONTROL_STORAGE_LISTBOX_GROUP] call module(Ui_CtrlCreate);
		
		_windowMainGroup setVariable ["ARM_CurrentThis", _this];
		module(RscControlsGroup_StorageList) pushBack _windowMainGroup;
		
		private _ctrlListBox = ["ctrlListBox", 
			[0, 0, 0.20 * safezoneW, 0.94 * safezoneH],
			IDC_RSCCONTROL_STORAGE_LISTBOX,
			_windowMainGroup
		] call module(Ui_CtrlCreate);
		
		{
			_x params ["_resource", "_count"];
			
			private _displayName = getText (configFile >> "CfgWeapons" >> _resource >> "displayName");
			
			private _idx = _ctrlListBox lbAdd format ["%1  %2",
				_count,
				_displayName
			];
			
			_ctrlListBox lbSetToolTip [_idx, _displayName];
			_ctrlListBox lbSetPicture [_idx, getText (configFile >> "CfgWeapons" >> _resource >> "picture")];
			_ctrlListBox lbSetData [_idx, _resource];
		
		} foreach module(StorageResources);
		
		
		_ctrlTransferButton = ["ctrlButton", 
			[0.04, 0.94 * safezoneH, 0.17 * safezoneW, 0.03 * safezoneH],
			IDC_RSCCONTROL_STORAGE_TRANSFER_BUTTON, 
			_windowMainGroup
		] call module(Ui_CtrlCreate);
		_ctrlTransferButton ctrlSetText "Переместить в ящик";
		_ctrlTransferButton ctrlEnable true;
		_ctrlTransferButton ctrlAddEventHandler ["ButtonClick", {
			
			params ["_control"];
		
			private _display = findDisplay IDC_RSCDISPLAYCAMPVIEWER;
			private _listBox = _display displayCtrl IDC_RSCCONTROL_STORAGE_LISTBOX;
			private _editBox = _display displayCtrl IDC_RSCCONTROL_STORAGE_TRANSFER_EDIT;
			private _resource = _listBox lbData (lbCurSel _listBox);
			
			if !(_resource isEqualTo "") then {
				
				private _count = parseNumber ctrlText _editBox;
				if (_count > 0 && _count <= [_resource] call module(GetStorageResource)) then {
					
					if ([[[_resource, _count]]] call module(DelStorageResources)) then {
					
						[_resource, _count] call module(AddBoxResource);
						
						private _params = (ctrlParentControlsGroup _control) getVariable "ARM_CurrentThis";
						_params spawn module(Ui_Resource_BuildList);
					};
					
				} else {
				
					_editBox ctrlSetBackgroundColor [0.6, 0, 0, 1];
					[_editBox] spawn {
						params ["_editBox"];
						sleep 1;
						_editBox ctrlSetBackgroundColor [0,0,0,1];
					};
					
				};
			};
			
		}];
		
		_ctrlTransferEdit = ["ctrlEdit", 
			[0, 0.94 * safezoneH, 0.03 * safezoneW, 0.03 * safezoneH],
			IDC_RSCCONTROL_STORAGE_TRANSFER_EDIT, 
			_windowMainGroup
		] call module(Ui_CtrlCreate);
		_ctrlTransferEdit ctrlSetText "1";
		_ctrlTransferEdit ctrlSetBackgroundColor [0,0,0,1];
		_ctrlTransferEdit ctrlSetTextColor [1,1,1,0.8];
		_ctrlTransferEdit ctrlEnable true;
		
	};