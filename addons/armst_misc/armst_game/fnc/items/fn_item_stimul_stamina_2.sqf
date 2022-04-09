
/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
private ["_unit","_eat","_drink","_binocs"];

_goggles = goggles player;

if (_goggles in ARMST_MASK) exitwith {
  hint localize "str_stop";
};
player removeitem "Armst_item_waterbottle_stimul";
player playMove "AinvPknlMstpSnonWnonDnon_medic_1";    
player playactionnow "GestureDrink";  
sleep 4;
[player] spawn {
_unit = _this select 0;
_smash = 0;
while {true} do
	{ 
	_smash = _smash + 1;
	player setFatigue 0;
	sleep 1;
	if (_smash>600) exitWith {["Effect of stimulator has stopped."] call ace_common_fnc_displayTextStructured;   }
	};
};