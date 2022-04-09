/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Инкрементирует прогрессбар лоадскрина (;
	
	Parameter(s):
      _progress (Number)  Прогресс (Проценты)
      
      Return: Nothing
*/
	
	#include "..\module.sqf";
	
	params ["_progress", "_title"];
	
	if (_progress > 0) then {_progress = _progress / 100};
	module(_Progress) = [_progress] call BIS_fnc_progressLoadingScreen;
	
	if !(isNil "_title") then {
		((uiNameSpace getVariable "ARMST_loadingScreen") displayCtrl IDC_LOADSCREEN_TITLE) ctrlSetText _title;
	};
	