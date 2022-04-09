/*
	File: sendLog.sqf
	Author: Aloe <itfruit@mail.ru>

	Description:  Запускает загрузочный экран
  
*/

	#include "..\module.sqf";
	
	private ["_started", "_id", "_rsc", "_title", "_progress"];
	
	_started = false;
	_id = 			module(_LoadscreenID);
	_rsc = 			module(_ClassName);
	_title = 		module(_MainTitle);
	_progress = 	module(_Progress);
	
	disableserialization;
	with uinamespace do {
		_ids = missionnamespace getvariable ["BIS_fnc_startLoadingScreen_ids",[]];

		if !(_id in _ids) then {
			_ids set [count _ids, _id];
			missionnamespace setvariable ["BIS_fnc_startLoadingScreen_ids",_ids];

			startloadingscreen [_title, _rsc];
			progressloadingscreen _progress;
			_started = true;
		};
	};
	
	if (_started) then {
		[stringify(MODULE_NAME), "Started!"] call ARMST_fnc_report;
		
		[] spawn module(Rotation);
		[] spawn module(Timeout);
	};
	
	_started;