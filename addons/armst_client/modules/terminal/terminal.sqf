/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Модуль терминала
  
*/

	#include "module.sqf";
	
	moduleInitStart();
	
	module(Camera) = objNull;
	module(Terminal) = objNull;
	module(Faction) = "";
	module(Authed) = false;
	module(Status) = "";
	module(All) = [];
	module(CurrentPageApp) = -1;
	module(DataResponse) = [];
	module(DataAccess) = nil;
	
	module(ActiveFactions) = [
		"ARMST_SCIENCE",
		"ARMST_FREEDOM",
		"ARMST_DOLG",
		"ARMST_BANDITS",
		"ARMST_ARMY",
		"ARMST_MONOLITH",
		"ARMST_MERCENARIES"
	];
	
	module(Apps) = [
		["SUMMARY", []],
		["PERSONNEL", []],
		["LOCATIONS", []],
		["BUDGET", []],
		["TRANSFER", []],
		["COMMUNICATE", []],
		["RESOURCES", []],
		["OBJECTIVES", []],
		["BASE", []],
		["NOTEBOOK", []],
		["ACCESS", []],
		["EXIT", []],
		["DESC", []]
	];
	
	module(AppAccessDefault) = [
		[IDC_TERMINAL_DESKTOP_SUMMARY, "STR_TERMINAL_TOOLTIP_SUMMARY", ["ADMIN", "USER"]],
		[IDC_TERMINAL_DESKTOP_PERSONNEL, "STR_TERMINAL_TOOLTIP_PERSONNEL", ["ADMIN", "USER"]],
		[IDC_TERMINAL_DESKTOP_LOCATIONS, "STR_TERMINAL_TOOLTIP_LOCATIONS", ["ADMIN", "USER"]],
		[IDC_TERMINAL_DESKTOP_BUDGET, "STR_TERMINAL_TOOLTIP_BUDGET", ["ADMIN"]],
		[IDC_TERMINAL_DESKTOP_TRANSFER, "STR_TERMINAL_TOOLTIP_TRANSFER", ["ADMIN", "USER", "GUEST"]],
		[IDC_TERMINAL_DESKTOP_COMMUNICATE, "STR_TERMINAL_TOOLTIP_COMMUNICATE",  ["ADMIN", "USER"]],
		[IDC_TERMINAL_DESKTOP_RESOURCES, "STR_TERMINAL_TOOLTIP_RESOURCES", ["ADMIN"]],
		[IDC_TERMINAL_DESKTOP_OBJECTIVES, "STR_TERMINAL_TOOLTIP_OBJECTIVES", ["ADMIN"]],
		[IDC_TERMINAL_DESKTOP_BASE, "STR_TERMINAL_TOOLTIP_BASE", ["ADMIN", "USER"]],
		[IDC_TERMINAL_DESKTOP_NOTEBOOK, "STR_TERMINAL_TOOLTIP_NOTEBOOK", ["ADMIN", "USER"]],
		[IDC_TERMINAL_DESKTOP_ACCESS, "STR_TERMINAL_TOOLTIP_ACCESS", ["ADMIN"]],
		[IDC_TERMINAL_DESKTOP_EXIT, "STR_TERMINAL_TOOLTIP_EXIT", ["ADMIN", "USER", "GUEST"]],
		[IDC_TERMINAL_DESKTOP_DESC, "STR_TERMINAL_TOOLTIP_DESC", ["ADMIN", "USER", "GUEST"]]
	];
	
	 #define MODULE_FUNC_PATH \compiles
	 
		moduleCompileFunction(OnLoad);
		moduleCompileFunction(OpenTerminal);
		moduleCompileFunction(CloseTerminal);
		moduleCompileFunction(AuthRequest);
		moduleCompileFunction(AuthResponse);
		moduleCompileFunction(AppData);
		moduleCompileFunction(AppRequest);
		
		moduleCompileFunction(BuildDesktop);
		moduleCompileFunction(ChangePage);
		moduleCompileFunction(LoadPage);
		moduleCompileFunction(LoadPageRequest);
		moduleCompileFunction(RefreshPage);
		moduleCompileFunction(DisableButton);
		moduleCompileFunction(ShowNotice);
		moduleCompileFunction(SetLayerFocus);

	
	 #define MODULE_FUNC_PATH \compiles\system
	
		moduleCompileFunction(ExcludeUser);
		moduleCompileFunction(SquadForm);
		moduleCompileFunction(SquadSetLeader);
		moduleCompileFunction(SquadDisband);
		moduleCompileFunction(SquadAssignUser);
		moduleCompileFunction(ConfirmRecruit);
		moduleCompileFunction(RejectRecruit);
		moduleCompileFunction(GetNearTrader);
	
	 #define MODULE_FUNC_PATH \compiles\app_info
		moduleCompileFunction(ActionSummarySelectFaction);
		
	 #define MODULE_FUNC_PATH \compiles\app_members
		moduleCompileFunction(ActionBarrackSelectUser);
		moduleCompileFunction(ActionBarrackSelectUserArchive);
		moduleCompileFunction(ActionBarrackExcludeUser);
		moduleCompileFunction(ActionBarrackExcludeUserArchive);
		moduleCompileFunction(ActionBarrackFindUser);
		moduleCompileFunction(ActionBarrackFindUserResponse);
		
		moduleCompileFunction(ActionSquadsUserToBuffer);
		moduleCompileFunction(ActionSquadsBufferToUser);
		moduleCompileFunction(ActionSquadsForm);
		moduleCompileFunction(ActionSquadsSetLeader);
		moduleCompileFunction(ActionSquadsDisband);
		moduleCompileFunction(ActionSquadsDisbandChangeButton);
		moduleCompileFunction(ActionSquadsAssignUser);
		
		moduleCompileFunction(ActionRecruitsSelectRecruit);
		moduleCompileFunction(ActionRecruitsConfirm);
	
	 #define MODULE_FUNC_PATH \compiles\app_locations
		moduleCompileFunction(ActionLocationsSelect);
	
	 #define MODULE_FUNC_PATH \compiles\app_budget
		moduleCompileFunction(ActionBudgetWithdraw);
		moduleCompileFunction(ActionBudgetHistory);
	
	#define MODULE_FUNC_PATH \compiles\app_transfer
		moduleCompileFunction(ActionTransferConfirm);
		
	 #define MODULE_FUNC_PATH \compiles\app_access
		moduleCompileFunction(ActionAccessSelectApp);
		moduleCompileFunction(ActionAccessConfirm);
	 
	 
	//Добавление шаблона логов
	/**/
	[stringify(MODULE_NAME), 
		["[module] Terminal:", "[module] Terminal ERROR:"], 
		(configFile >> "ARMST_ClientModules" >> stringify(MODULE_NAME) >> "log") call BIS_fnc_getCfgDataBool
	] call ARMST_fnc_reportAdd;
	
	
	{
		private _factionName = configName _x;
		private _baseposition = getMarkerPos getText (_x >> "baseMarker");
		private _terminal = missionNamespace getVariable [getText (_x >> "terminal"), objNull];
		
		if (!isNull _terminal and !(_baseposition isEqualTo [0,0,0])) then {
			
			_terminal setVariable ["Faction", _factionName];
			_terminal setVariable ["Access", module(AppAccessDefault)];
			
			_terminal setObjectTextureGlobal  [0, "armst_client\GUI\Images\terminal\loadscreen.jpg"];
			
			module(All) pushBack _terminal;
			
			_terminal addaction [localize "STR_ACTION_INTERACT", module(OpenTerminal), [], 1.5, true, true, "", "alive _target"];
			
			_terminal addAction [
				format [localize "STR_ACTION_JOINFACTION", getText (configFile >> "CfgFactionClasses" >> _factionName >> "displayName")],
				{
					hint parseText format [localize "STR_HINT_REQUESTFACTIONJOIN", getText (configFile >> "CfgFactionClasses" >>  ((_this select 0) getVariable "Faction") >> "displayName")];
					(_this select 1) setVariable ["RequestFaction", ((_this select 0) getVariable "Faction"), true];
				},[], 1.5, true, true, "",
				format ["alive _this and !('%1' isEqualTo (faction _this)) and !(_this getVariable ['RequestFaction', ''] isEqualTo '%1')", _factionName]
			];
			
		};
	} foreach ([missionConfigFile >> "ARMST_Factions", 0, true] call BIS_fnc_returnChildren);
	
	
	moduleInitEnd();


