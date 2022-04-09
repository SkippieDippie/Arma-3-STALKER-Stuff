/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Модуль пользовательских записок

*/

	#include "module.sqf";

	moduleInitStart();
	
	module(EmptyPaperClass) = "ARMST_bumaga";	//On server side need change too
	module(ctrlPaperLastTextVar) = "ctrlPaperLastText";
	
	#define MODULE_FUNC_PATH \compiles
	
		moduleCompileFunction(OpenItem);
		moduleCompileFunction(OpenItemDialog);
		
		moduleCompileFunction(EHTypeText);

	//Добавление шаблона логов
	[stringify(MODULE_NAME), 
		["[module] Paper:", "[module] Paper ERROR:"],
		(configFile >> "ARMST_ClientModules" >> stringify(MODULE_NAME) >> "log") call BIS_fnc_getCfgDataBool
	] call ARMST_fnc_reportAdd;
	
	
	moduleInitEnd();


