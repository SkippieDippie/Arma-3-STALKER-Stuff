/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Модуль детекторов артефактов
  
*/

	#include "module.sqf";
	
	moduleInitStart();
	
	module(Layer) = 17;
	
	module(Batteries) = "ARMST_batteries";
	module(Energy) = 0;
	
	module(_Detectors) = [
		//Классы диалогов
		["DETECTOR_A_RESPOND", "DETECTOR_A_BEAR", "DETECTOR_A_SVAROG", "DETECTOR_TRLife_SVAROG"],
		//Классы объектов
		["armst_det_otklick", "armst_det_medved", "armst_det_svarog", "armst_det_TRLife"]
	];
	
	module(_DetectorParams) = [];
	
	#define MODULE_FUNC_PATH \compiles

		moduleCompileFunction(IssetDetector);
		moduleCompileFunction(GetDetector);
		
		moduleCompileFunction(ShowDetector);
		moduleCompileFunction(OnDetected);
		
		moduleCompileFunction(DetectCycle);
	
		
	//Добавление шаблона логов
	[stringify(MODULE_NAME), 
		["[module] Detector:", "[module] Detector ERROR:"], 
		(configFile >> "ARMST_ClientModules" >> stringify(MODULE_NAME) >> "log") call BIS_fnc_getCfgDataBool
	] call ARMST_fnc_reportAdd;
	

	[] spawn module(DetectCycle);

	
	moduleInitEnd();
