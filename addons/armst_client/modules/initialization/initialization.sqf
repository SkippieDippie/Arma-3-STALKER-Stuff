/*
	Author: Aloe <itfruit@mail.ru>
	Description:  Модуль инициализации клиента 
  
*/

	#include "module.sqf";
	
	moduleInitStart();
	
	module(MissionStarted) = false;
	
	module(_MissionPreLoaded) = false;
	["PreloadFinished", "onPreloadFinished", {module(_MissionPreLoaded) = true}] call BIS_fnc_addStackedEventHandler;
	["PreloadStarted", "onPreloadStarted", {module(_MissionPreLoaded) = true}] call BIS_fnc_addStackedEventHandler;
	
	addMissionEventHandler  ["PreloadFinished" ,  {module(_MissionPreLoaded) = true}];
	
	moduleCompileFunction(MissionEnd);
	moduleCompileFunction(SetDone);
	
	
	//Добавление шаблона логов
	[stringify(MODULE_NAME), 
		["[module] Initialization:", "[module] Initialization ERROR:"], 
		(configFile >> "ARMST_ClientModules" >> stringify(MODULE_NAME) >> "log") call BIS_fnc_getCfgDataBool
	] call ARMST_fnc_reportAdd;
	
	//--------------------------------Процесс инициализации	
	
	[] spawn {
		waitUntil {/*module(_MissionPreLoaded) and */time > 0};
		module(MissionStarted) = true;
		if (call app(Loadscreen,Start)) then {
			enableEnvironment false;
			
			[0, localize "str_loadscreen_ClientReadyWait"] call app(Loadscreen,Progress);
				waitUntil { uiSleep 1; !isNull player };
			[5, localize "str_loadscreen_ClientReady"] call app(Loadscreen,Progress);
			
			if (false) then {
				if !(isNil "ARMST_Instance_ServerFound") then {
					[5, localize "str_loadscreen_ServerReadyWait"] call app(Loadscreen,Progress);
						waitUntil { uiSleep 1; !isNil "ARMST_Instance_ServerReady" };	
					[10, localize "str_loadscreen_ServerReady"] call app(Loadscreen,Progress);		
					[25, localize "str_loadscreen_RequestAuth"] call app(Loadscreen,Progress);
						//[player] remoteExec ["ARMST_account_Authorization", 2];	used Dragster code		
					if !(missionNamespace getVariable [stringify(app(Instance,WithoutDatabase)), true]) then {			
						[50, localize "str_loadscreen_ResponseWaiting"] call app(Loadscreen,Progress);
						//waitUntil { uiSleep 3; missionNamespace getVariable ["ARMST_Player_Authed", false]};
						waitUntil { uiSleep 3; true};				
						[99, localize "str_loadscreen_ResponseReceive"] call app(Loadscreen,Progress);
						waitUntil { uiSleep 1; true};
					};		
				} else {
					[10, localize "str_loadscreen_ServerNotFinded"] call app(Loadscreen,Progress);
					waitUntil { uiSleep 3; true};
				};
			};	
			call app(Loadscreen,End);

			enableEnvironment true;
			
			private _terrainInfo = (getPosATL player) call ARMST_fnc_getTerrainInfo;
			[
				[_terrainInfo, "worldName", ""] call BIS_fnc_getFromPairs,
				[_terrainInfo, "nearLocation", ""] call BIS_fnc_getFromPairs
			] spawn BIS_fnc_infoText;
			
		} else {
			[stringify(MODULE_NAME), "Failed - Loadscreen not started.", "Error"] call ARMST_fnc_report;
			call module(MissionEnd);
		};
		
	};
	
	moduleInitEnd();
