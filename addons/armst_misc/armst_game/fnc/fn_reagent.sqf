/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

_unit = _this select 0;
_unit removeitem "ARMST_kosyak_reagent";
//disableUserInput true;
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;
sleep 3;
_unit playactionnow "Gesturecigaretes";
enableCamShake true;
_unit playactionnow "Gesturecigaretes";

resetCamShake;
disableUserInput false;
[player] spawn {
_unit = _this select 0;
_smash = 0;
while {true} do
	{ 
	[] spawn armmiss_fnc_lsd;
	
	_smash = _smash + 1;
	sleep 10;
	};
	
	if (_smash>10) exitWith {["Эффект реагента окончен."] call AGM_Core_fnc_displayTextStructured;[] spawn armmiss_fnc_lsd;}
};