/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

player removeitem "ARMST_amfetamin";
player playMove "AinvPknlMstpSnonWnonDnon_medic_1";    
sleep 4;
player setFatigue 1;
[player, 0] call ace_medical_fnc_adjustPainLevel;
player setvariable ["ARMST_BODYTEMP",1];
ARMST_BODYTEMP = ARMST_BODYTEMP + 10;
addcamshake [6,180,2];

[player] spawn {
_unit = _this select 0;
_smash = 0;
while {true} do
	{ 
	_smash = _smash + 1;
	player setFatigue 0;
	sleep 1;
	if (_smash>240) exitWith {["Effect of the amphetamine has stopped"] call ace_common_fnc_displayTextStructured; player setFatigue 1;player setDammage (getDammage player + 0.1);}
	};
};