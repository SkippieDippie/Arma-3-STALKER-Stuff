/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

_unit = _this select 0;
_unit removeitem "ARMST_kosyak";
disableUserInput true;
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;
sleep 3;
_unit playactionnow "Gesturecigaretes";
"chromAberration" ppEffectEnable true;
"radialBlur" ppEffectEnable true;
enableCamShake true;
_unit playactionnow "Gesturecigaretes";

//Let's go for 45secs of effetcs
for "_i" from 0 to 155 do
	{
	"chromAberration" ppEffectAdjust [random 0.25,random 0.25,true];
	"chromAberration" ppEffectCommit 1;   
	"radialBlur" ppEffectAdjust  [random 0.02,random 0.02,0.15,0.15];
	"radialBlur" ppEffectCommit 1;
	addcamShake[random 3, 1, random 3];
	
};

//Stop effects
"chromAberration" ppEffectAdjust [0,0,true];
"chromAberration" ppEffectCommit 5;
"radialBlur" ppEffectAdjust  [0,0,0,0];
"radialBlur" ppEffectCommit 5;
_unit playactionnow "Gesturecigaretes";
sleep 7;

//Deactivate ppEffects
"chromAberration" ppEffectEnable false;
"radialBlur" ppEffectEnable false;
resetCamShake;
_unit setFatigue 1;
disableUserInput false;
[player] spawn {
_unit = _this select 0;
_smash = 0;
while {true} do
	{ 
	_smash = _smash + 1;
	_unit setVariable ["AGM_Pain", 0 , True];
	sleep 1;
	if (_smash>180) exitWith {["Эффект косяка истощен."] call ace_common_fnc_displayTextStructured; _unit setVariable ["AGM_Pain", 0.9 , True]; player setDammage (getDammage player + 0.6)}
	};
};