/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Модуль торговли
  
*/

	#include "module.sqf";
	
	moduleInitStart();
	
	module(Traders) = [];
	module(ControlIndex) = 0;
	
	module(_Config) = missionConfigFile >> "ARMST_Traders";
	module(_CurrentTrader) = objNull;
	module(_CurrentTradeMode) = 0;
	module(_ControlStream) = "Next";
	
	moduleCompileFunction(SetTraders);
	moduleCompileFunction(InitTrader);
	moduleCompileFunction(CamCreate);
	moduleCompileFunction(Buy);
	moduleCompileFunction(Sale);
	moduleCompileFunction(Control);
	moduleCompileFunction(ControlSelect);
	moduleCompileFunction(Gear);
	moduleCompileFunction(GetItemClass);
	moduleCompileFunction(IsEmptyCargo);
	moduleCompileFunction(ThingsAddCargo);
	
	moduleCompileFunction(onLoadDialog);
	moduleCompileFunction(onSelectGroup);
	moduleCompileFunction(DisplayGoodInfo);
	moduleCompileFunction(SetSectionSelected);
	moduleCompileFunction(SetSectionDisabled);
	moduleCompileFunction(ToggleFullBuyList);
	
	//Добавление шаблона логов
	//Добавление шаблона логов
	[stringify(MODULE_NAME), 
		["[module] Trade:", "[module] Trade ERROR:"], 
		(configFile >> "ARMST_ClientModules" >> stringify(MODULE_NAME) >> "log") call BIS_fnc_getCfgDataBool
	] call ARMST_fnc_reportAdd;
	
	//Инициализация торговцев после авторизации
	if (isMultiplayer) then {
		[] spawn {
			waitUntil {sleep 0.1; player getVariable ["Authed", false]};
			call module(SetTraders);
		};
	} else {
		call module(SetTraders);
	};

	
	moduleInitEnd();