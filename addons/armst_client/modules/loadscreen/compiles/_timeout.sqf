/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Таймаут загрузочного экрана
  
*/

	#include "..\module.sqf";

	private ["_timeOut"];
	
	_timeOut = module(_Timeout);
	
	waitUntil {
	uiSleep 1;
		_timeOut = _timeOut - 1;
		if (_timeOut <= 0) then {
			(localize "str_loadscreen_LoadingTimeout") call module(Title);
			uiSleep 3;
			
			call module(End); 
			call app(Initialization,MissionEnd);
		};
		
	!(module(_LoadscreenID) in (missionnamespace getvariable ["BIS_fnc_startLoadingScreen_ids",[]]))
	};
