/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/


_target = _this select 0;
_type = _this select 1;

_resp = _type select floor random count _type;
[_target, _resp,3] call CBA_fnc_globalSay3d;