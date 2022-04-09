/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
	private ["_unit", "_dir", "_unitPos", "_force", "_o", "_projPos"];
	
    
_smash = 0;

while {true} do
	{ 
	player forceWalk true;
[player] call AGM_WeaponSelect_fnc_putWeaponAway;
sleep 5;
[player, random 300, 10] spawn armst_fnc_Ragdoll;
["DynamicBlur", 200, [10]] spawn
{
	params ["_name", "_priority", "_effect", "_handle"];
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
	uiSleep 3;
	_handle ppEffectEnable false;
	ppEffectDestroy _handle;
};

		ARMST_NAME = name player;
		ARMST_TEXT3 = format [ARMST_NAME];
		ARMST_DICE = "не держится на ногах";
		ARMST_TEXT2 = format [ARMST_DICE];
		_near = [];
		{
			if (alive _x) then {_near pushBack _x};
			
		} foreach (nearestObjects [player, ["ARMST_HUMAN"], 10]);
	composeText [parseText ARMST_TEXT3, parseText ARMST_TEXT2] remoteExec ["hint", _near];
	_smash = _smash + 1;
	sleep 10;
	if (_smash>10) exitWith {["Опьянение прошло..."] call ace_common_fnc_displayTextStructured;player forceWalk false;}
	};