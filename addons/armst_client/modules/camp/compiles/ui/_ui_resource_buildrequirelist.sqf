/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Построение списка необходимых предметов для создания / обновления объекта
	
	Parameter(s):
		_control 			(Сontrol) - контрол
		_index 				(Scalar) - индекс объекта

	Return: (Nothing)
*/
		
	#include "..\..\module.sqf";
	
	params ["_handle", "_mode"];
	_handle params ["_control", "_index"];
	
	disableserialization;
	_display = findDisplay IDC_RSCDISPLAYCAMPVIEWER;
	_type = _control tvData _index;
	
	{
		private _ctrlButton = _display displayCtrl _x;
		_ctrlButton setVariable ["ARM_ObjectCreating", nil];
		_ctrlButton setVariable ["ARM_ObjectDelete", nil];
		_ctrlButton ctrlEnable false;
	} foreach [
		IDC_RSCCONTROL_RESOURCES_CREATE,
		IDC_RSCCONTROL_RESOURCES_UPDATE,
		IDC_RSCCONTROL_RESOURCES_DELETE
	];

	if !(_display isEqualTo displayNull || _type isEqualTo "") then {
		
		{ctrlDelete _x} foreach module(RscControlsGroup_ResourcesList);

		private _windowMainGroup = ["ctrlGroup", [
			0.14 * safezoneW + safezoneX,
			0.03 * safezoneH + safezoneY,
			0.15 * safezoneW,
			0.97 * safezoneH
		], IDC_RSCCONTROL_RESOURCES_LISTBOX_GRUUP] call module(Ui_CtrlCreate);
		
		module(RscControlsGroup_ResourcesList) pushBack _windowMainGroup;
		
		
		switch (toLower _mode) do {
			
			case "create" : {
			
				private _ctrlListBox = ["ctrlListBox", 
					[0, 0, 0.15 * safezoneW, 0.97 * safezoneH], 
					IDC_RSCCONTROL_RESOURCES_LISTBOX, 
					_windowMainGroup
				] call module(Ui_CtrlCreate);
				
				//Список необходимых предметов
				private _cfgRequired = getArray (module(Config) >> "Objects" >> _type >> "requiredItems");
				private _listFullness = true;
				{
					private _item = _x select 0;
					private _count = _x select 1;
					private _countR = [_item] call module(GetStorageResource);
					
					//Элемент списка
					private _idx = _ctrlListBox lbAdd format ["%1 [%2]",
						getText (configFile >> "CfgWeapons" >> _item >> "displayName"),
						_count
					];
					
					if (_countR < _count) then {
						_ctrlListBox lbSetColor [_idx, [1,1,1,0.5]];
						_listFullness = false;
					};
					
				} foreach _cfgRequired;
				
				//Доступность кнопки
				private _ctrlButton = _display displayCtrl IDC_RSCCONTROL_RESOURCES_CREATE;
				if (_listFullness) then {
					_ctrlButton setVariable ["ARM_ObjectCreating", _type];
					_ctrlButton ctrlEnable true;
				} else {
					_ctrlButton setVariable ["ARM_ObjectCreating", ""];
					_ctrlButton ctrlEnable false;
				};
			
			};
			
			case "upgrade" : {
				
				private _object = missionNamespace getVariable [_type, objNull];
				
				if !(_object isEqualTo objNull) then {
					
					private _cfgUpgrade =  module(Config) >> "Objects" >> typeOf _object >> "Upgrade";
					if (isClass _cfgUpgrade) then {
					
						private _cfgRequired = getArray (_cfgUpgrade >> "requiredItems");
						private _cfgUpgradeTitle = getText (module(Config) >> "Objects" >> getText (_cfgUpgrade >> "className") >> "title");
						
						_ctrlTitle = ["ctrlButton", 
							[0, 0.01, 0.15 * safezoneW, 0.03 * safezoneH],
							IDC_RSCCONTROL_RESOURCES_LISTBOX_TITLE, 
							_windowMainGroup
						] call module(Ui_CtrlCreate);
						_ctrlTitle ctrlEnable true;
						_ctrlTitle ctrlSetBackgroundColor [1,1,1,0];
						_ctrlTitle ctrlSetTextColor [0,0,0,1];
						_ctrlTitle ctrlSetText format ["%1:", _cfgUpgradeTitle];
						
						
						private _ctrlListBox = ["ctrlListBox", 
							[0, 0.05, 0.15 * safezoneW, 0.95 * safezoneH], 
							IDC_RSCCONTROL_RESOURCES_LISTBOX, 
							_windowMainGroup
						] call module(Ui_CtrlCreate);
						
						
						private _listFullness = true;
						{
							private _item = _x select 0;
							private _count = _x select 1;
							private _countR = [_item] call module(GetStorageResource);
							
							//Элемент списка
							private _idx = _ctrlListBox lbAdd format ["%1 [%2]",
								getText (configFile >> "CfgWeapons" >> _item >> "displayName"),
								_count
							];
							
							if (_countR < _count) then {
								_ctrlListBox lbSetColor [_idx, [1,1,1,0.5]];
								_listFullness = false;
							};
							
						} foreach _cfgRequired;
						
						//Доступность кнопки				
						private _ctrlButton = _display displayCtrl IDC_RSCCONTROL_RESOURCES_UPDATE;
						if (_listFullness) then {
							_ctrlButton setVariable ["ARM_ObjectCreating", _type];
							_ctrlButton ctrlEnable true;
						};
						
					};
					
					private _ctrlButtonDel = _display displayCtrl IDC_RSCCONTROL_RESOURCES_DELETE;
					_ctrlButtonDel setVariable ["ARM_ObjectDelete", _type];
					_ctrlButtonDel ctrlEnable true;
				};

			};
		};
	} else {
		{ctrlDelete _x} foreach module(RscControlsGroup_ResourcesList);
	};