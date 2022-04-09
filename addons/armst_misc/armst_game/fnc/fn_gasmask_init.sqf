/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

private["_unite", "_nowProt"];      
_unite = _this select 0;
	while {alive _unite} do 
	{ 
	_visible = player call AGM_Goggles_fnc_isGogglesVisible; 
	if (_visible) then 
		{
			_unite playactionnow "GestureGasmaskUp";
			[[_unite, "kapushon_on"], "say3D", true, false, true] call BIS_fnc_MP;
			playSound "gasmask_on";
			_nowProt = goggles _unite;
			//[_unite, _nowProt] execVM "armst\armst_misc\armst_game\scripts\fn_breath.sqf";
			waitUntil {!(goggles _unite == _nowProt)};
			//2292 cutFadeOut 0;
			_unite playactionnow "GestureGasmaskDown";
			[[_unite, "kapushon_off"], "say3D", true, false, true] call BIS_fnc_MP;
			playSound "gasmask_off";
		};
	};