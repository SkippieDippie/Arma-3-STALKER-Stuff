/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
player setvariable ["ARMST_BODYTEMP",1];
ARMST_BODYTEMP = 37.6;
ARMST_BODYTEMP_CC = ppEffectCreate ["ColorCorrections", 4208];
ARMST_BODYTEMP_CC ppEffectForceInNVG True;
ARMST_BODYTEMP_CC ppEffectAdjust [1,1,0, [0,0,0,0], [1,1,1,1], [0.2,0.2,0.2,0]];
ARMST_BODYTEMP_CC ppEffectCommit 0;


0 spawn {
  _time = time;
  _timeBlood = 0;
  _blind = False;
  while {True} do {
    // Detect if curator interface is open and then disable effects
    if (!isNull(findDisplay 312)) then {
     ARMST_BODYTEMP_CC ppEffectEnable False;
      waitUntil {isNull(findDisplay 312)};
    };

    // Detect if player is not alive and then disable effects and enable input
    if (!(alive AGM_player)) then {
      ARMST_BODYTEMP_CC ppEffectEnable False;
      if !(isNull (uiNamespace getVariable ["AGM_Core_dlgDisableMouse", displayNull])) then {
        [False] call AGM_Core_fnc_disableUserInput;
      };
      waitUntil {alive AGM_player};
    };
    // BODYTEMP Effect
    _currentBODYTEMP = AGM_player getVariable ["ARMST_BODYTEMP", 1];
    if (_currentBODYTEMP > 0.99) then {
      ARMST_BODYTEMP_CC ppEffectEnable False;
    } else {
	 if (_currentBODYTEMP < 0) then {_currentBODYTEMP=0;};
      ARMST_BODYTEMP_CC ppEffectEnable True;
      ARMST_BODYTEMP_CC ppEffectAdjust [1, 1, 0, [0.0, 0.0, 0.0, 0.0], [1, 1, 1,_currentBODYTEMP],  [0.2, 0.2, 0.2, 0]];
      ARMST_BODYTEMP_CC ppEffectCommit 0;
    };

    _time = time;
    _damage = damage AGM_player;
	sleep 10;
  };
};


[] execvm "\armst\armst_misc\armst_game\scripts\fn_tempbody_cycle.sqf";

sleep 10;
[] spawn {
_ARMST_INFECTED = profileNamespace getVariable "ARMST_INFECTED";
	while {_ARMST_INFECTED} do 
	{
	systemChat "Я болею...";
	ARMST_BODYTEMP = 35;

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
	sleep 60 + random 20;
	};
};