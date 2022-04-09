/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
player setvariable ["ARMST_BODYTEMP",1];
ARMST_BODYTEMP = 36.6;
ARMST_BODYTEMP_CC = ppEffectCreate ["ColorCorrections", 4208];
ARMST_BODYTEMP_CC ppEffectForceInNVG True;
ARMST_BODYTEMP_CC ppEffectAdjust [1,1,0, [0,0,0,0], [1,1,1,1], [0.2,0.2,0.2,0]];
ARMST_BODYTEMP_CC ppEffectCommit 0;


[] execvm "scripts\fn_tempbody_cycle.sqf";

sleep 10;
[] spawn {
_ARMST_INFECTED = profileNamespace getVariable "ARMST_INFECTED";
if !(isNil "_ARMST_INFECTED") then {
	while {_ARMST_INFECTED} do 
	{
	systemChat "Я болею...";
	ARMST_BODYTEMP = 36.6;

	_ARMST_INFECTED = profileNamespace getVariable "ARMST_INFECTED";

	0 = ["DynamicBlur", 400, [10]] spawn 
	{
		params ["_name", "_priority", "_effect", "_handle"];
		enableCamShake true;
		addCamShake [2, 10, 10]; 
		while {
			_handle = ppEffectCreate [_name, _priority];
			_handle < 0
		} do {
			_priority = _priority + 1;
		};
		_handle ppEffectEnable true;
		_handle ppEffectAdjust _effect;
		_handle ppEffectCommit 5;
		waitUntil {ppEffectCommitted _handle};
		_handle ppEffectEnable false;
		ppEffectDestroy _handle;
	};
	[player, "kashel",50] call CBA_fnc_globalSay3d;
	sleep 30 + random 20;
	ARMST_BODYTEMP = 36.6;
	};
};
};