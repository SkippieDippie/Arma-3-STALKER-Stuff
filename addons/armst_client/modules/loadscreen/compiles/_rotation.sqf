/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Обновляет фоновую картинку загрузочного экрана
  
*/

	#include "..\module.sqf";

	private ["_display"];
	
	disableserialization;
	
	_display = uiNameSpace getVariable "ARMST_loadingScreen";
	if !(isNil "_display") then {
		waitUntil {

			(_display displayCtrl IDC_LOADSCREEN_PIC) ctrlSetText (module(_RotateImgs) select floor random count module(_RotateImgs));

		uiSleep module(_RotateTime);
		!(module(_LoadscreenID) in (missionnamespace getvariable ["BIS_fnc_startLoadingScreen_ids",[]]))
		};
	}else {
		[stringify(MODULE_NAME), format["loadscreen not started"], "Error"] call ARMST_fnc_report;
	};

