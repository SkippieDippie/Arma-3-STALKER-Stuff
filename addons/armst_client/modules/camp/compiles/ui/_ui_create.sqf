/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Создания интерфейса лагеря
	
	Parameter(s):
		_action 			(String) - представление

	Return: (Nothing)
*/
	
	#include "..\..\module.sqf";
	
	params [["_action", "", [""]]];
	
	_display = findDisplay IDC_RSCDISPLAYCAMPVIEWER;
	if !(_display isEqualTo displayNull) then {
		
		{ctrlDelete _x} foreach module(RscControlsGroup_ResTree);
		{ctrlDelete _x} foreach module(RscControlsGroup_StorageList);
		{ctrlDelete _x} foreach module(RscControlsGroup_ResourcesList);
		{ctrlDelete _x} foreach module(RscControlsGroup_Members);
		
		removeMissionEventHandler ["Draw3D", module(_HandleDraw3D)];

		switch (toLower _action) do {
			
			case "resources" : {
			
				private _windowMainGroup = ["ctrlGroup", [
					0 * safezoneW + safezoneX,
					0.03 * safezoneH + safezoneY,
					0.14 * safezoneW,
					1 * safezoneH
				], IDC_RSCCONTROL_MAINCONTROLSAREA] call module(Ui_CtrlCreate);
				
				module(RscControlsGroup_ResTree) pushBack _windowMainGroup;
				
				private _ctrlTree = ["ctrlTree", 
					[0,0,1,0.94 * safezoneH], 
					IDC_RSCCONTROL_RESOURCES_TREE,
					_windowMainGroup
				] call module(Ui_CtrlCreate);
				{
					private _index = _ctrlTree tvAdd [[], getText (_x >> "title")];
					{
						if (isArray (_x >> "requiredItems")) then {
							
							private _idx = _ctrlTree tvAdd [[_index], getText (_x >> "title")];
							_ctrlTree tvSetData [[_index, _idx], configName _x];
							
							if !(isClass (configFile >> "CfgVehicles" >> configName _x)) then {
								_ctrlTree tvSetColor [[_index, _idx], [1, 0, 0, 0.4]];
							};
						
						};
					} foreach (format ["getText (_x >> 'type') == '%1'", configName _x] configClasses (module(Config) >> "Objects"));
				
				} foreach ("getNumber (_x >> 'scope') isEqualTo 1" configClasses (module(Config) >> "Types"));
				
				tvExpandAll _ctrlTree;
				
				_ctrlTree ctrlAddEventHandler ["TreeLButtonDown", {
					[_this, "Create"] call module(Ui_Resource_BuildRequireList);
				}];
				
				
				_ctrlCreate = ["ctrlButton", 
					[0, 0.94 * safezoneH, 1, 0.03 * safezoneH],
					IDC_RSCCONTROL_RESOURCES_CREATE, 
					_windowMainGroup
				] call module(Ui_CtrlCreate);
				_ctrlCreate ctrlSetText "Создать >>";
				_ctrlCreate ctrlAddEventHandler ["ButtonClick", {
					if (count module(Objects) < module(ObjectsLimit)) then {
					
						_this spawn module(V_ObjectCreate);
						
					} else {
						
						private _display = findDisplay IDC_RSCDISPLAYCAMPVIEWER;
						if !(_display isEqualTo displayNull) then {
							["Превышен лимит объектов для одного лагеря", "Великолепный лагерь", nil, false, _display] spawn BIS_fnc_guiMessage;
						};
					
					};
					
				}];
				
				
				[] call module(Ui_Resource_BuildList);
			};
			
			case "objects" : {
				
				private _windowMainGroup = ["ctrlGroup", [
					0 * safezoneW + safezoneX,
					0.03 * safezoneH + safezoneY,
					0.14 * safezoneW,
					1 * safezoneH
				], IDC_RSCCONTROL_MAINCONTROLSAREA] call module(Ui_CtrlCreate);
				
				module(RscControlsGroup_ResTree) pushBack _windowMainGroup;
				
				private _ctrlTree = ["ctrlTree", 
					[0,0,1,0.90 * safezoneH],
					IDC_RSCCONTROL_OBJECTS_TREE,
					_windowMainGroup
				] call module(Ui_CtrlCreate);
				
				{
					private _index = _ctrlTree tvAdd [[], getText (_x >> "title")];
					{
						private _oX = _x;
						{
							private _object = missionNamespace getVariable [_x, objNull];
							if (configName _oX == typeof _object) then {
							
								private _idx = _ctrlTree tvAdd [[_index], getText (_oX >> "title")];
								_ctrlTree tvSetData [[_index, _idx], _x];
								
							};
						} foreach module(Objects);
					
					} foreach (format ["getText (_x >> 'type') == '%1'", configName _x] configClasses (module(Config) >> "Objects"));
					
				} foreach ("true" configClasses (module(Config) >> "Types"));
				
				tvExpandAll _ctrlTree;
				
				_ctrlTree ctrlAddEventHandler ["TreeLButtonDown", {
					params ["_control", "_index"];
					
					[_control, _index] call module(V_ObjectSelect);
					[_this, "Upgrade"] call module(Ui_Resource_BuildRequireList);
					
				}];
				
				_ctrlCreate = ["ctrlButton", 
					[0, 0.90 * safezoneH, 1, 0.03  * safezoneH],
					IDC_RSCCONTROL_RESOURCES_UPDATE, 
					_windowMainGroup
				] call module(Ui_CtrlCreate);
				_ctrlCreate ctrlSetText "Обновить";
				_ctrlCreate ctrlAddEventHandler ["ButtonClick", {
				
					_this spawn module(V_ObjectUpgrade);
				
				}];
				
				
				_ctrlDelete = ["ctrlButton", 
					[0, 0.94 * safezoneH, 1, 0.03  * safezoneH],
					IDC_RSCCONTROL_RESOURCES_DELETE, 
					_windowMainGroup
				] call module(Ui_CtrlCreate);
				_ctrlDelete ctrlSetText "Удалить";
				_ctrlDelete ctrlAddEventHandler ["ButtonClick", {
				
					_this spawn module(V_ObjectDelete);
				
				}];
						
				
				//[] call module(Ui_Resource_BuildList);

				module(_HandleDraw3D) = addMissionEventHandler ["Draw3D", {
					private _object = uiNamespace getVariable [stringify(module(MouseObject)), objNull];
					if !(isNull _object) then {
						if ((_object call BIS_fnc_objectVar) in module(Objects)) then {
							[_object call module(V_ObjectBoundBox), [0,1,0,1]] call module(V_ObjectDraw3D);
						};
					};
				}];
			};
			
			case "party" : {
									
				private _windowMainGroup = ["ctrlGroup", [
					0 * safezoneW + safezoneX,
					0.03 * safezoneH + safezoneY,
					0.14 * safezoneW,
					1 * safezoneH
				], IDC_RSCCONTROL_MAINCONTROLSAREA] call module(Ui_CtrlCreate);
				
				module(RscControlsGroup_ResTree) pushBack _windowMainGroup;
				
				private _ctrlListBox = ["ctrlListBox", 
					[0, 0, 0.14 * safezoneW, 0.90 * safezoneH],
					IDC_RSCCONTROL_PARTY_LISTBOX,
					_windowMainGroup
				] call module(Ui_CtrlCreate);
				
				{
					_x params ["_key", "_val"];
					
					_name = _val select 0;
					_creator = _val select 1;
					
					private _idx = _ctrlListBox lbAdd format ["%1. %2",
						_foreachIndex + 1,
						_name
					];
					_ctrlListBox lbSetData [_idx, _key];
					
				} foreach module(Party);
				
				_ctrlListBox ctrlAddEventHandler ["LBSelChanged", {
					
					params ["_control", "_idx"];
					
					private _display = findDisplay IDC_RSCDISPLAYCAMPVIEWER;
					private _uid = _control lbData _idx;
					private _member = [module(Party), _uid, []] call BIS_fnc_getFromPairs;
					
					if !(_member isEqualTo []) then {
					
						private _isCreator = (_member select 1) isEqualTo 1;
						if (_isCreator) then {
							(_display displayCtrl IDC_RSCCONTROL_PARTY_DELETE) ctrlEnable false;
						} else {
							(_display displayCtrl IDC_RSCCONTROL_PARTY_DELETE) ctrlEnable true;
						};
						
					};
					
				}];
					
				_ctrlAdd = ["ctrlButton", 
					[0, 0.90 * safezoneH, 0.14 * safezoneW, 0.03 * safezoneH],
					IDC_RSCCONTROL_PARTY_TOGGLELIST, 
					_windowMainGroup
				] call module(Ui_CtrlCreate);
				_ctrlAdd ctrlSetText "Новый";
				_ctrlAdd ctrlEnable true;
				_ctrlAdd ctrlAddEventHandler ["ButtonClick", {
				
					_this spawn module(Ui_Members_BuildList);
					
				}];

				_ctrlDelete = ["ctrlButton", 
					[0, 0.94 * safezoneH, 0.14 * safezoneW, 0.03 * safezoneH],
					IDC_RSCCONTROL_PARTY_DELETE, 
					_windowMainGroup
				] call module(Ui_CtrlCreate);
				_ctrlDelete ctrlSetText "Удалить";
				_ctrlDelete ctrlEnable true;
				_ctrlDelete ctrlAddEventHandler ["ButtonClick", {
				
					params ["_control"];
					
					private _display = findDisplay IDC_RSCDISPLAYCAMPVIEWER;
					private _listBox = _display displayCtrl IDC_RSCCONTROL_PARTY_LISTBOX;
					private _uid = _listBox lbData (lbCurSel _listBox);
					
					[_uid] spawn {
						params ["_uid"];
						
						[_uid] call module(memberDel);
						
						["getParty"] call module(ServerSync);
						waitUntil {module(_ReceivedParty)};
						
						"party" call module(Ui_Create);
					};
					
				}];
			
			};
			
			case "delete" : {
				
				private _creator = call module(GetCreator);
				private _isCreator = (_creator select 0) isEqualTo getPlayerUID player;
				private _creatorName = _creator select 1;
				
				[_display, _isCreator, _creatorName] spawn {
					params ["_display", "_isCreator", "_creatorName"];
					
					disableserialization;
					if (_isCreator) then {
						if (["Удаление лагеря приведёт к уничтожению всех объектов!", "Великолепный лагерь", nil, true, _display] call BIS_fnc_guiMessage) then {
							
							["deleteCamp"] call module(ServerSync);
							_display closedisplay 2;
							
						};
					} else {
						[
							format ["Только основатель лагеря (%1) может его удалить", _creatorName],
							"Великолепный лагерь",
							nil,
							false,
							_display
						] call BIS_fnc_guiMessage;
					};
				};

			};
			
			case "help" : {
				
				private _windowMainGroup = ["ctrlGroup", [
					0.2 * safezoneW + safezoneX,
					0.03 * safezoneH + safezoneY,
					0.6 * safezoneW,
					1 * safezoneH
				], IDC_RSCCONTROL_MAINCONTROLSAREA] call module(Ui_CtrlCreate);
				
				module(RscControlsGroup_ResTree) pushBack _windowMainGroup;

				private _controlText = [
					_display,
					_windowMainGroup,
					-1,
					[0, 0, 0.6  * safezoneH, 1 * safezoneH],
					"",
					"PuristaMedium",
					0.03,
					[0,0,0,0.5],
					"center",
					false,
					1
				] call DRG_fnc_makeStructuredText;
				
				_controlText ctrlSetBackgroundColor [0,0,0,0];
				_controlText ctrlSetStructuredText parseText format ["<t shadow='1' align='center' size='1' color='#FFFFFF' >%1</t>", 
"``:``:``:``:``:``:``:``:``:``:``:``:``:``:``:``:``:``:``:``:``:<br/>
.____||_____. ˛..___||_____.˛....˛||_____.<br/>
../______/ ~＼.../______/ ~＼../______/ ~＼<br/>
 | 田 田｜門｜ | 田 田｜門｜｜ | 田 田｜門｜<br/>
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||<br/>
``:``:``:``:``:``:``:``:``:``:``:``:``:``:``:``:``:``:``:``:``:<br/>
Модуль лагеря v.099 By Aloe<br/><br/>

Ресурсы:<br/>
Отображает ресурсы и доступные для создания объекты.<br/>
Ресурсы автоматически добавляются из ящика в хранилище<br/>
при открытии интерфейса лагеря.<br/>
Ресурсы можно перемещать обратно в ящик.<br/><br/>
Объекты:<br/>
Отображает список объектов лагеря и доступные модификации.<br/>
Объекты можно перемещать кликом (ЛКМ) на объекте.<br/><br/>
Участники:<br/>
Отображает список учасников лагеря.<br/><br/>
Управление:<br/>
ЛКМ - Перемещение объекта<br/>
ПКМ - Вращение камеры<br/>
W,S,A,D - Перемещение камеры<br/>
Ctrl - Вращение объекта<br/>
Alt - Изменение высоты объекта<br/>
Esc - Выход<br/>
				"];

			};
			
			default {};
		};

	};
