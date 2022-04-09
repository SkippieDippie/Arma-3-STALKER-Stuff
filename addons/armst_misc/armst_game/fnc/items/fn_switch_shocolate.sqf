
/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
private ["_unit","_eat","_drink","_binocs"];

_unit = _this select 0;  
_eat = _this select 1;  
  
_hunger=_unit getVariable ["ARMST_HUNGER",1];
_goggles = goggles _unit;

if ((_hunger>1) or (_goggles in ARMST_MASK)) exitwith {
  hint localize "str_stop";
};

disableUserInput true;
_unit removeitem "Armst_item_shocolate";  

_unit addweapon "armst_switch_shocolate"; 
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;  
sleep 1; 
_unit selectWeapon "armst_switch_shocolate"; 
_unit switchmove "AmovPercMstpSoptWbinDnon";  
_unit playactionnow "GestureEat";  
_unit say2d "eating0";  
_unit setVariable ["ARMST_HUNGER", (_unit getVariable "ARMST_HUNGER") + _eat];  
sleep 7;  
_unit removeweapon "armst_switch_shocolate";  
disableUserInput false;
