/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Модуль загрузочного экрана 
  
*/
	
	#include "module.sqf";
	
	moduleInitStart();
	
	module(_RotateTime) = 	3;
	module(_RotateImgs) = 	(configFile >> "ARMST_ClientModules" >> stringify(MODULE_NAME) >> "loadscreen") call BIS_fnc_getCfgData;
	
	module(_ClassName) = 	"ARMST_loadingScreen";
	module(_MainTitle) = 	localize "str_loadscreen_TitleTop";
	module(_LoadscreenID) = "ARMST_loadingScreenID";
	module(_Timeout) = 120;
	
	module(_Progress) = 0;

	moduleCompileFunction(Start);
	moduleCompileFunction(End);
	moduleCompileFunction(Rotation);
	moduleCompileFunction(Timeout);
	moduleCompileFunction(Progress);
	moduleCompileFunction(Title);
	moduleCompileFunction(OnLoad);
	moduleCompileFunction(OnUnload);
	
	//Добавление шаблона логов
	[stringify(MODULE_NAME), 
		["[module] Loadscreen:", "[module] Loadscreen ERROR:"], 
		(configFile >> "ARMST_ClientModules" >> stringify(MODULE_NAME) >> "log") call BIS_fnc_getCfgDataBool
	] call ARMST_fnc_reportAdd;

	moduleInitEnd();
	
	