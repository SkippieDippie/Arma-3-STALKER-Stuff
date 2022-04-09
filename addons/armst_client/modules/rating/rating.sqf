/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Модуль рейтинга
  
*/

	#include "module.sqf";
	
	moduleInitStart();
	
	module(_Config) = missionConfigfile >> "ARMST_Rating";
	
	#define MODULE_FUNC_PATH \compiles
		moduleCompileFunction(GetRank);
	
	#define MODULE_FUNC_PATH \handlers
		moduleCompileFunction(OnKill);
		moduleCompileFunction(OnKilled);
		
	//Добавление шаблона логов
	[stringify(MODULE_NAME), 
		["[module] Rating:", "[module] Rating ERROR:"], 
		(configFile >> "ARMST_ClientModules" >> stringify(MODULE_NAME) >> "log") call BIS_fnc_getCfgDataBool
	] call ARMST_fnc_reportAdd;
	
	
	moduleInitEnd();
