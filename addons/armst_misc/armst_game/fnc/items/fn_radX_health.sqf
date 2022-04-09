/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

	params["_player"];
	uiSleep 0.2;
	_player switchmove 'AinvPknlMstpSnonWnonDnon_medic1';
	armst_radiation_infection = 0;
 	if ("armst_item_antirad" in (backpackItems _player)) then {
		_player removeItemFromBackpack "armst_item_antirad"; 
	} else {
 		if ("armst_item_antirad" in (vestItems _player)) then {
			_player removeItemFromVest "armst_item_antirad"; 
		};
	};
	player setVariable ["ARMST_THIRST",((player getVariable ["ARMST_THIRST",0]) - 0.3),true];
	
	[] spawn {
	_smash = 0;
			while {true} do
			{ 
				_smash = _smash + 1;
				[0] call ARMST_Radiation_SetInfection;
				sleep 1;
				if (_smash>60) exitWith {["Anti-rad effect depleted"] call ace_common_fnc_displayTextStructured;  }
			};
		};