/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
player removeitem "ARMST_psyblocade";
player playMove "AinvPknlMstpSnonWnonDnon_medic_1";    
sleep 4;
player setFatigue 1;
addcamshake [6,60,2];

[player] spawn {
_unit = _this select 0;
_smash = 0;
while {true} do
	{ 
	_smash = _smash + 1;
	_dmg = (player getVariable "ARMST_PSYDAMAGE");
	_dmg = (_dmg - 0.1);
	player setVariable ["ARMST_PSYDAMAGE",_dmg];
	sleep 1;
	};
	};
