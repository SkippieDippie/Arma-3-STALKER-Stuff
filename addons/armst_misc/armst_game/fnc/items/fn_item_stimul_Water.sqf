
/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
private ["_unit","_eat","_drink","_binocs"];

player removeitem "armst_item_stimul_Water";
player playMove "AinvPknlMstpSnonWnonDnon_medic_1";    
sleep 4;  


[player] spawn {
_unit = _this select 0;
_smash = 0;
while {true} do
	{ 
	_smash = _smash + 1;
	sleep 1;
	if (_smash>180) exitWith {["Effect of stimulator has stopped."] call ace_common_fnc_displayTextStructured; player setFatigue 1; }
	};
};