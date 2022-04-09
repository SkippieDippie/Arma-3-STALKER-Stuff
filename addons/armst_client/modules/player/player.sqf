/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Модуль игрока
  
*/

	#include "module.sqf";
	
	moduleInitStart();
	
	module(Authed) = missionNameSpace getVariable ["ARMST_Player_Authed", false];	//В некоторых случаях уже инициализированна
	module(AuthedResponse) = "";
	module(SelectedFaction) = "";
	
	module(_HungerHints) = [
		"...Я голоден...","...Как же хочется жрать...","...Похрумкать бы чего...","...В животе урчит...",
		"...Зона зоной, а обед по расписанию...","...Нужно перекусить...","...Where my borsch...","...Надо поесть..."
	];
	module(_ThirstHints) = [
		"...У меня жажда...","...Квасу бы сейчас холодного...","...Хочу пить...","...Воды...",
		"...Во рту сухо, выпить бы...","...Я сейчас сдохну, мне нужна вода..."
	];
	
	#define MODULE_FUNC_PATH \compiles
		moduleCompileFunction(ShowSummary);
		moduleCompileFunction(SelectFaction);
		moduleCompileFunction(SelectDialogOnload);
		moduleCompileFunction(SelectDialogOnUnload);
	
	#define MODULE_FUNC_PATH \routines
		moduleCompileFunction(RoutineSave);
		moduleCompileFunction(RoutineEnergy);
		moduleCompileFunction(RoutinePain);
		
	#define MODULE_FUNC_PATH \response
		moduleCompileFunction(Authorization);
		moduleCompileFunction(ServerNotice);
	
	#define MODULE_FUNC_PATH \handlers
		moduleCompileFunction(HandlerAuthed);
		moduleCompileFunction(HandlerKilled);
		moduleCompileFunction(HandlerRespawn);

	//Добавление шаблона логов
	[stringify(MODULE_NAME), 
		["[module] Player:", "[module] Player ERROR:"], 
		(configFile >> "ARMST_ClientModules" >> stringify(MODULE_NAME) >> "log") call BIS_fnc_getCfgDataBool
	] call ARMST_fnc_reportAdd;
	
	[] execFSM "\armst_client\modules\Player\Routines.fsm";
	
	//Without server
	[] spawn {
		waitUntil{uiSleep .1; true/*; app(Initialization,MissionStarted)*/};

		if (missionNamespace getVariable [stringify(app(Instance,WithoutDatabase)), true] or !isMultiplayer) then {
			player setVariable ["Money", getNumber(missionConfigFile >> "ARMST_DefaultCharacter" >> "money"), true];
			player setVariable ["Kills", 0, true];
			player setVariable ["Deaths", 0, true];
			player setVariable ["Score", 0, true];
			
			player setVariable ["ARMST_HUNGER", 1,true];
			player setVariable ["ARMST_THIRST", 1,true];
			
		};
	};

	//Для тестоа
	//if !(missionNamespace getVariable [stringify(app(Instance,WithoutDatabase)), true]) then {
	//	[["Досье",module(ShowSummary),[], 1.5, true, true, "","alive _target"]] call CBA_fnc_addPlayerAction;
	//};
	
	moduleInitEnd();
	
	
	
