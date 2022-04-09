/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Загружает страницу
	
	Parameter(s):
		_display 		(Display) - диалог терминала
		_control 		(Control) - страница (группа элементов)
		
*/
	#include "..\module.sqf";
	
	params ["_display", "_control"];
	
	module(CurrentPageApp) = ctrlIDC _control;
	
	(_display displayCtrl IDC_TERMINAL_DESKTOP) ctrlEnable false;
	["CURRENT_APP"] call module(SetLayerFocus);
	
	if !(module(Faction) isEqualTo "") then {
		
		private _factionConfig = configFile >> "CfgFactionClasses" >> module(Faction);
		if !(isNull _factionConfig) then {
			
			private _factionName = configName _factionConfig;
			
			switch (module(CurrentPageApp)) do {
			
				//APP: SUMMARY
				case IDC_TERMINAL_PAGE_SUMMARY : {
					
					(_display displayCtrl IDC_TERMINAL_APP_TITLE) ctrlSetText localize "STR_TERMINAL_TOOLTIP_SUMMARY";
					
					[_display] spawn {
					
						disableSerialization;
						params ["_display"];
						
						[_display, "SUMMARY", "FACTIONS_GET_INFO", module(ActiveFactions)] call module(LoadPageRequest);
						
						//Build List
						private _ctrlFactionsList = (_display displayCtrl IDC_TERMINAL_PAGE_SUM_LIST);
						lbClear _ctrlFactionsList;
						{
							private _cfgFactionName = configName _x;
							if (_cfgFactionName in module(ActiveFactions)) then {
								private _index = _ctrlFactionsList lbAdd (format ["%1", getText (configFile >> "CfgFactionClasses" >> _cfgFactionName >> "displayName")]);
								_ctrlFactionsList lbSetPicture [_index, (getText (configFile >> "CfgFactionClasses" >> _cfgFactionName >> "flag")) call BIS_fnc_textureMarker];
								_ctrlFactionsList lbSetPictureColor [_index, [1,1,1,1]];
								_ctrlFactionsList lbSetData [_index, _cfgFactionName];
								
								if (_cfgFactionName == module(Faction)) then {
									_ctrlFactionsList lbSetCurSel  _index;
								};
							};
						} foreach ([missionConfigFile >> "ARMST_Factions", 0, true] call BIS_fnc_returnChildren);
								
					};
					
				};
				
				case IDC_TERMINAL_PAGE_PER_BARRACK : {
					
					 (_display displayCtrl IDC_TERMINAL_APP_TITLE) ctrlSetText format ["%1:  %2", 
						localize "STR_TERMINAL_TOOLTIP_PERSONNEL",
						localize "STR_TERMINAL_BUTTON_PERSONNEL_BARRACK"
					 ];
					 
					private _ctrlUserList = (_display displayCtrl IDC_TERMINAL_PAGE_PER_BAR_LIST);
					private _ctrlExclude= (_display displayCtrl IDC_TERMINAL_PAGE_PER_BAR_EXCLUDE_BUTTON);
					private _ctrlFindMsg= (_display displayCtrl IDC_TERMINAL_PAGE_PER_BAR_FIND_RESULT);
					private _ctrlAbout= (_display displayCtrl IDC_TERMINAL_PAGE_PER_BAR_ABOUT);
					private _ctrlExcludeMsg= (_display displayCtrl IDC_TERMINAL_PAGE_PER_BAR_EXCLUDE_INPUT);
					
					lbClear _ctrlUserList;
					{
						if (faction _x isEqualTo _factionName) then {
							private _index = _ctrlUserList lbAdd (format ["%1. %2", (lbSize _ctrlUserList) + 1, name _x]);
							_ctrlUserList lbSetData [_index, _x call BIS_fnc_netId];
						}; 
					} foreach ([switchableUnits, call BIS_fnc_listPlayers] select (isMultiplayer));
					
					_ctrlUserList ctrlSetEventHandler  ["LBSelChanged", "call ARMST_Terminal_ActionBarrackSelectUser"]; 
					_ctrlExclude ctrlSetEventHandler  ["MouseButtonDown", "call ARMST_Terminal_ActionBarrackExcludeUser"]; 
					
					_ctrlFindMsg ctrlSetText  localize "STR_TERMINAL_TITTLE_PERSONNEL_BARRACK_FIND_DEFAULT"; 
					_ctrlAbout ctrlSetText  ""; 
					_ctrlExcludeMsg ctrlSetText  ""; 
					
					if (lbSize _ctrlUserList > 0) then {
						_ctrlUserList lbSetCurSel  0;
					};
				};
				
				case IDC_TERMINAL_PAGE_PER_SQUADS : {
				
					 (_display displayCtrl IDC_TERMINAL_APP_TITLE) ctrlSetText format ["%1:  %2", 
						localize "STR_TERMINAL_TOOLTIP_PERSONNEL",
						localize "STR_TERMINAL_BUTTON_PERSONNEL_SQUADS"
					 ];
					 
					 //TODO: TO Server
					private  _groups = module(Terminal) getVariable ["ARM_Groups", []];

					private _ctrlGrpCombo = (_display displayCtrl IDC_TERMINAL_PAGE_PER_SQD_COMBO_GROUPS);
					private _ctrlGrpTree = (_display displayCtrl IDC_TERMINAL_PAGE_PER_SQD_LIST_SQUADS);
					
					lbClear _ctrlGrpCombo;
					tvClear _ctrlGrpTree;
					{
						private _groupNetId = _x call BIS_fnc_netId;
						private _index = _ctrlGrpCombo lbAdd (format ["%1", groupId _x]);
						_ctrlGrpCombo lbSetData [_index, _groupNetId];
						
						private _index0 = _ctrlGrpTree tvAdd [ [], groupId _x];
						_ctrlGrpTree tvSetData [[_index0], _groupNetId];
						{
							private _index1 = _ctrlGrpTree tvAdd [[_index0], format ["%1 %2", name _x, ["", localize "STR_TERMINAL_TITLE_PERSONNEL_SQUADS_ISLEADER"] select (isFormationLeader _x)]];
							_ctrlGrpTree tvSetData [[_index0, _index1], _x call BIS_fnc_netId];
							_ctrlGrpTree tvSetValue [[_index0, _index1], [0, 1] select (isFormationLeader _x)];
						} foreach (units _x);
						_ctrlGrpTree tvSortByValue [[_index0], false];
						_ctrlGrpTree tvExpand [_index0];
						
					} foreach _groups;
					 
					 //User list
					 private _ctrlUserlList = (_display displayCtrl IDC_TERMINAL_PAGE_PER_SQD_LIST_USERS);
					 lbClear _ctrlUserlList;
					{
						private _unit = _x;
						if (faction _unit isEqualTo _factionName && {_unit in units _x} count _groups isEqualTo 0) then {
							private _index = _ctrlUserlList lbAdd (format ["%1", name _unit]);
							_ctrlUserlList lbSetData [_index, _unit call BIS_fnc_netId];
							_ctrlUserlList lbSetPicture [_index, getText (configFile >> "CfgWeapons" >> primaryWeapon _unit >> "picture")];
						}; 
					} foreach ([switchableUnits, call BIS_fnc_listPlayers] select (isMultiplayer));
					
					//Buffer
					private _ctrlGrpName = (_display displayCtrl IDC_TERMINAL_PAGE_PER_SQD_NAME_INPUT);
					_ctrlGrpName ctrlSetText format ["%1 %2", localize "STR_TERMINAL_BUTTON_PERSONNEL_SQUADS_SQUAD", count _groups + 1];
					
					private _ctrlGrpColors = (_display displayCtrl IDC_TERMINAL_PAGE_PER_SQD_COMBO_COLORS);
					lbClear _ctrlGrpColors;
					{
						private _index = _ctrlGrpColors lbAdd (format ["%1", getText (configFile >> "CfgWorlds" >> "GroupColors" >> _x >> "name")]);
						_ctrlGrpColors lbSetData [_index, _x];
					} foreach ["GroupColor1","GroupColor2", "GroupColor3", "GroupColor4", "GroupColor5", "GroupColor6", "GroupColor7"];
					_ctrlGrpColors lbSetCurSel  0;
					
				};
				
				case IDC_TERMINAL_PAGE_PER_RECRUITS : {
					 (_display displayCtrl IDC_TERMINAL_APP_TITLE) ctrlSetText format ["%1:  %2", 
						localize "STR_TERMINAL_TOOLTIP_PERSONNEL",
						localize "STR_TERMINAL_BUTTON_PERSONNEL_RECRUITS"
					 ];
					 
					private _recruitsCount = 0;
					 private _ctrlRecruitslList = (_display displayCtrl IDC_TERMINAL_PAGE_PER_REC_LIST);
					 private _ctrlShapeslList = (_display displayCtrl IDC_TERMINAL_PAGE_PER_REC_SHAPES);
					 private _ctrlAbout = (_display displayCtrl IDC_TERMINAL_PAGE_PER_REC_ABOUT);
					 
					  //Recruits list
					 lbClear _ctrlRecruitslList;
					{
						private _unit = _x;
						if (_unit getVariable ["RequestFaction", ""] isEqualTo _factionName) then {
							private _index = _ctrlRecruitslList lbAdd (format ["%1", name _unit]);
							_ctrlRecruitslList lbSetData [_index, _unit call BIS_fnc_netId];
							_ctrlRecruitslList lbSetPicture [_index, (getText (configFile >> "CfgFactionClasses" >> faction _unit >> "flag")) call BIS_fnc_textureMarker];
							_ctrlRecruitslList lbSetPictureColor [_index, [1,1,1,1]];
							_recruitsCount = _recruitsCount + 1;
						}; 
					} foreach ([switchableUnits, call BIS_fnc_listPlayers] select (isMultiplayer));
					
					//Forms combo
					lbClear _ctrlShapeslList;
					{
						private _index = _ctrlShapeslList lbAdd (format ["%1", getText (configFile >> "CfgVehicles" >> _x >> "displayName")]);
						_ctrlShapeslList lbSetData [_index, _x];
						_ctrlShapeslList lbSetPicture [_index, getText (configFile >> "CfgVehicles" >> _x >> "editorPreview")];
						_ctrlShapeslList lbSetPictureColor [_index, [1,1,1,1]];
					} foreach getArray (missionConfigFile >> "ARMST_Factions" >> _factionName >> "playableUnits");
					 
					if (lbSize _ctrlRecruitslList > 0) then {_ctrlRecruitslList lbSetCurSel  0};
					if (lbSize _ctrlShapeslList > 0) then {_ctrlShapeslList lbSetCurSel  0};
					_ctrlAbout ctrlSetText "";
					
					if (_recruitsCount isEqualTo 0) then {
						(_display displayCtrl IDC_TERMINAL_PAGE_PER_RECRUITS) ctrlShow false;
						[IDC_TERMINAL_PAGE_PER_MAINMENU] call module(SetLayerFocus);
					};
				};
				
				case IDC_TERMINAL_PAGE_LOC_MAIN : {
					 (_display displayCtrl IDC_TERMINAL_APP_TITLE) ctrlSetText format ["%1:  %2", 
						localize "STR_TERMINAL_TOOLTIP_LOCATIONS",
						localize "STR_TERMINAL_BUTTON_LOCATIONS_MAP"
					 ];
					 
					private _ctrlLocationList = (_display displayCtrl IDC_TERMINAL_PAGE_LOC_MAIN_LIST);
					lbClear _ctrlLocationList;

					{
						private _index = _ctrlLocationList lbAdd (format ["%1", _x getVariable "Name"]);
						_ctrlLocationList lbSetData [_index, _x call BIS_fnc_objectVar];
						_ctrlLocationList lbSetPicture [_index, (getText (configFile >> "CfgFactionClasses" >> _x getVariable ["Owner", ""] >> "flag")) call BIS_fnc_textureMarker];
						
						_ctrlLocationList lbSetValue [_index, 0];
						if (_x getVariable ["Owner", ""] isEqualTo _factionName) then {
							_ctrlLocationList lbSetValue [_index, 1];
						};
					} foreach (missionNamespace getVariable ["ARMST_fnc_moduleLocation_locations", []]);
					
					lbSortByValue _ctrlLocationList;
					if (lbSize _ctrlLocationList > 0) then {_ctrlLocationList lbSetCurSel  0};
				};
				
				case IDC_TERMINAL_PAGE_BUD_WITHDRAW : {
					(_display displayCtrl IDC_TERMINAL_APP_TITLE) ctrlSetText format ["%1:  %2", 
						localize "STR_TERMINAL_TOOLTIP_BUDGET",
						localize "STR_TERMINAL_BUTTON_BUDGET_WITHDRAW"
					 ];
					 
					 [_display, _factionName] spawn {
					
						disableSerialization;
						params ["_display", "_factionName"];
						
						[_display, "BUDGET", "FACTION_BUDGET_GET"] call module(LoadPageRequest);
						
						private _ctrlBudget = (_display displayCtrl IDC_TERMINAL_PAGE_BUD_WDW_BUDGET);
						private _ctrlReceivers = (_display displayCtrl IDC_TERMINAL_PAGE_BUD_WDW_RECEIVER);
						private _ctrlHistory = (_display displayCtrl IDC_TERMINAL_PAGE_BUD_WDW_HISTORY);
						private _ctrlHistoryType = (_display displayCtrl IDC_TERMINAL_PAGE_BUD_WDW_HISTORYTYPE);
						
						_ctrlBudget ctrlSetText format ["%1", ["BUDGET", "BUDGET", 0] call module(AppData)];
						
						lbClear _ctrlReceivers;
						{
							if (faction _x isEqualTo _factionName) then {
								private _index = _ctrlReceivers lbAdd (format ["%1", name _x]);
								_ctrlReceivers lbSetData [_index, _x call BIS_fnc_netId];
								_ctrlReceivers lbSetValue [_index, 1];
								if (_x isEqualTo player) then {
									_ctrlReceivers lbSetValue [_index, 0];
								};
							}; 
						} foreach ([switchableUnits, call BIS_fnc_listPlayers] select (isMultiplayer));
						
						lbSortByValue _ctrlReceivers;
						if (lbSize _ctrlReceivers > 0) then {_ctrlReceivers lbSetCurSel  0};
						
						
						lbClear _ctrlHistoryType;
						{
							private _index = _ctrlHistoryType lbAdd (format ["%1", localize (_x select 0)]);
							_ctrlHistoryType lbSetData [_index, _x select 1];
						} foreach [
							["STR_TERMINAL_TITLE_BUDGET_WDW_TYPEHISORY_WITHDRAW", "W"],
							["STR_TERMINAL_TITLE_BUDGET_WDW_TYPEHISORY_REPLENISHMENT", "R"]
						];
						_ctrlHistoryType lbSetCurSel  0;
						
					};
					 
				};
				
				case IDC_TERMINAL_PAGE_TRANSFER : {
					(_display displayCtrl IDC_TERMINAL_APP_TITLE) ctrlSetText localize "STR_TERMINAL_TOOLTIP_TRANSFER";
					
					private _ctrlAbout = (_display displayCtrl IDC_TERMINAL_PAGE_TFR_ABOUT);
					private _ctrlInput = (_display displayCtrl IDC_TERMINAL_PAGE_TFR_INPUT);
					private _ctrlReceivers = (_display displayCtrl IDC_TERMINAL_PAGE_TFR_RECEIVER);
					
					_ctrlAbout ctrlSetText format ["%1", player getVariable ["Money", 0]];
					_ctrlInput ctrlSetText "";
					
					lbClear _ctrlReceivers;
					private _index = _ctrlReceivers lbAdd (format ["%1", localize "STR_TERMINAL_TITTLE_TRANSFER_BUDGET"]);
					_ctrlReceivers lbSetData [_index, "B"];
					{
						if (faction _x isEqualTo _factionName && !isPlayer _x) then {
							private _index = _ctrlReceivers lbAdd (format ["%1", name _x]);
							_ctrlReceivers lbSetData [_index, _x call BIS_fnc_netId];
						}; 
					} foreach ([switchableUnits, call BIS_fnc_listPlayers] select (isMultiplayer));
					if (lbSize _ctrlReceivers > 0) then {_ctrlReceivers lbSetCurSel  0};
					
				};
				
				case IDC_TERMINAL_PAGE_ACCESS : {
					(_display displayCtrl IDC_TERMINAL_APP_TITLE) ctrlSetText localize "STR_TERMINAL_TOOLTIP_ACCESS";
					
					private _ctrlAppList = (_display displayCtrl IDC_TERMINAL_PAGE_ACS_LIST);
					
					lbClear _ctrlAppList;
					{
						if !((_x select 0) isEqualTo IDC_TERMINAL_DESKTOP_ACCESS) then {
							private _index = _ctrlAppList lbAdd (format ["%1", localize (_x select 1)]);
							_ctrlAppList lbSetValue [_index, _x select 0];
						};
					} foreach (module(Terminal) getVariable ["Access", []]);
					if (lbSize _ctrlAppList > 0) then {_ctrlAppList lbSetCurSel  0};
					
				};
				/*
				case IDC_TERMINAL_PAGE_PERSONNEL : {
					
					//User list
					private _userListControl = (_display displayCtrl IDC_TERMINAL_PAGE_PER_LIST);
					lbClear _userListControl;
					{
						if (faction _x isEqualTo _factionName) then {
							private _index = _userListControl lbAdd (format ["%1. %2", (lbSize _userListControl) + 1, name _x]);
							_userListControl lbSetData [_index, _x call KK_fnc_netId];
						}; 
					} foreach (call BIS_fnc_listPlayers);
					//} foreach (switchableUnits);
					
					if (lbSize _userListControl > 0) then {
						_userListControl lbSetCurSel  0;
					} else {
						(_display displayCtrl IDC_TERMINAL_PAGE_PER_USER) ctrlShow false;
						(_display displayCtrl IDC_TERMINAL_PAGE_PER_USER_EXCLUDE) ctrlShow false;
					};
					
				};
				
				case IDC_TERMINAL_PAGE_RECRUITS : {
					//User list
					private _userListControl = (_display displayCtrl IDC_TERMINAL_PAGE_REC_LIST);
					lbClear _userListControl;
					{
						if (_factionName isEqualTo (_x getVariable ["RequestFaction", ""])) then {
							_index = _userListControl lbAdd (format ["%1. %2", (lbSize _userListControl) + 1, name _x]);
							_userListControl lbSetData [_index, _x call KK_fnc_netId];
						};
					} foreach (call BIS_fnc_listPlayers);
					//} foreach (switchableUnits);
					
					if (lbSize _userListControl > 0) then {
						_userListControl lbSetCurSel  0;
					} else {
						(_display displayCtrl IDC_TERMINAL_PAGE_REC_USER) ctrlShow false;
						(_display displayCtrl IDC_TERMINAL_PAGE_REC_LIST_ACCEPT) ctrlShow false;
						(_display displayCtrl IDC_TERMINAL_PAGE_REC_LIST_REJECT) ctrlShow false;
					};
				};
				
				case IDC_TERMINAL_PAGE_DIPLOMACY;
				case IDC_TERMINAL_PAGE_DIP_BUTTON_GROUP_A : {
					
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_OUTBOX_ACT) ctrlSetText localize "STR_TERMINAL_DIPLOMACY_DECLAREWAR"; 
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_OUTBOX_ACT) ctrlSetEventHandler  ["MouseButtonDown", "call ARMST_Terminal_DeclareWar"]; 
					
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_ACT_ACCEPT) ctrlSetText localize "STR_TERMINAL_DIPLOMACY_ACCEPT"; 
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_ACT_ACCEPT) ctrlSetEventHandler  ["MouseButtonDown", "call ARMST_Terminal_OfferUnionAccept"]; 
					
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_ACT_CANCEL) ctrlSetText localize "STR_TERMINAL_DIPLOMACY_REFUSE"; 
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_ACT_CANCEL) ctrlSetEventHandler  ["MouseButtonDown", "call ARMST_Terminal_OfferUnionRefuse"]; 
					
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_MESSAGE) ctrlSetText localize ""; 
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_INBOX_TITLE) ctrlSetText localize "STR_TERMINAL_DIPLOMACY_INOFFERS"; 
					
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_INBOX_LIST) ctrlSetEventHandler  ["LBSelChanged", "call ARMST_Terminal_SelectOfferIncoming"]; 
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_INBOX_MESSAGE) ctrlSetText  ""; 
					
					//Список союзников
					private _alliesListControl = (_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_LIST);
					lbClear _alliesListControl;
					
					{
						private _index = _alliesListControl lbAdd (format ["%1", getText (configFile >> "CfgFactionClasses" >> _x >> "displayName")]);
						_alliesListControl lbSetData [_index, _x];
					} foreach ([_factionName] call ARMST_fnc_friendlyFactions);
					
					if (lbSize _alliesListControl > 0) then {
						_alliesListControl lbSetCurSel  0;
					} else {
						(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_OUTBOX_ACT) ctrlShow false; 
						(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_MESSAGE) ctrlShow false; 
					};
					
					//Входящие предложения
					private _offersListControl = (_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_INBOX_LIST);
					lbClear _offersListControl;
					
					{
						private _findFor = [_x getVariable ["UnionOffers", []], _factionName, false] call BIS_fnc_getFromPairs;
						if !(_findFor isEqualTo false) then {
							private _index = _offersListControl lbAdd (format ["%1", getText (configFile >> "CfgFactionClasses" >> _x getVariable ["Faction", ""] >> "displayName")]);
							_offersListControl lbSetData [_index, _x call BIS_fnc_objectVar];
						};
					} foreach (module(All)-[module(Terminal)]);
					
					if (lbSize _offersListControl > 0) then {
						_offersListControl lbSetCurSel  0;
					} else {
						(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_ACT_ACCEPT) ctrlShow false; 
						(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_ACT_CANCEL) ctrlShow false; 
					};
				};
				
				case IDC_TERMINAL_PAGE_DIP_BUTTON_GROUP_E : {
				
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_OUTBOX_ACT) ctrlSetText localize "STR_TERMINAL_DIPLOMACY_OFFERUNION"; 
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_OUTBOX_ACT) ctrlSetEventHandler  ["MouseButtonDown", "call ARMST_Terminal_OfferUnion"];
					
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_ACT_ACCEPT) ctrlSetText localize "STR_TERMINAL_DIPLOMACY_CANCEL"; 
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_ACT_ACCEPT) ctrlSetEventHandler  ["MouseButtonDown", "call ARMST_Terminal_OfferUnionCancel"]; 
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_ACT_CANCEL) ctrlShow false; 
					
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_MESSAGE) ctrlSetText ""; 
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_INBOX_TITLE) ctrlSetText localize "STR_TERMINAL_DIPLOMACY_OUTOFFERS";
					
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_INBOX_LIST) ctrlSetEventHandler  ["LBSelChanged", "call ARMST_Terminal_SelectOfferOutgoing"]; 
					(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_INBOX_MESSAGE) ctrlSetText  ""; 
					
					
					//Список врагов
					private _enemiesListControl = (_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_LIST);
					lbClear _enemiesListControl;
					
					private _allies = [_factionName] call ARMST_fnc_friendlyFactions;
					{
						private _name = configName _x;
						if (!(_name in _allies) and !(_name isEqualTo _factionName) and (([module(Terminal) getVariable ["UnionOffers", []], _name, false] call BIS_fnc_getFromPairs) isEqualTo false)) then {
							private _index = _enemiesListControl lbAdd (format ["%1", getText (configFile >> "CfgFactionClasses" >> _name >> "displayName")]);
							_enemiesListControl lbSetData [_index, _name];
						};
					} foreach ([missionConfigFile >> "ARMST_Factions", 0, true] call BIS_fnc_returnChildren);
					
					if (lbSize _enemiesListControl > 0) then { 
						_enemiesListControl lbSetCurSel  0;
					} else {
						(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_OUTBOX_ACT) ctrlShow false; 
					};
					
					//Исходящие предложения
					private _offersListControl = (_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_INBOX_LIST);
					lbClear _offersListControl;
					
					{
						private _offerFaction = _x select 0;
						private _index = _offersListControl lbAdd (format ["%1", getText (configFile >> "CfgFactionClasses" >> _offerFaction >> "displayName")]);
						_offersListControl lbSetData [_index, _offerFaction];
					} foreach (module(Terminal) getVariable ["UnionOffers", []]);
					
					if (lbSize _offersListControl > 0) then {
						_offersListControl lbSetCurSel  0;
					} else {
						(_display displayCtrl IDC_TERMINAL_PAGE_DIP_GROUP_ACT_ACCEPT) ctrlShow false; 
					};
				};
				*/
				default {
					call module(CloseTerminal);
				};
			};
		} else {
			call module(CloseTerminal);
		};		
	} else {
		call module(CloseTerminal);
	};

	
	