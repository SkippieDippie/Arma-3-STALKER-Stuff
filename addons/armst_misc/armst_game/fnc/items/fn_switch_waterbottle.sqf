
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
  
_hunger=_unit getVariable ["ARMST_THIRST",1];
_goggles = goggles _unit;

if ((_hunger>1) or (_goggles in ARMST_MASK)) exitwith {
  hint localize "str_stop";
};

disableUserInput true;
_unit removeitem "armst_item_waterbottle";  

_unit addweapon "armst_switch_waterbottle"; 
[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;  
sleep 1; 
_unit selectWeapon "armst_switch_waterbottle"; 
_unit switchmove "AmovPercMstpSoptWbinDnon";  
_unit playactionnow "GestureDrink";  
_unit say2d "drinking";  
_unit setVariable ["ARMST_THIRST", (_unit getVariable "ARMST_THIRST") + _eat];  
sleep 7;  
_unit removeweapon "armst_switch_waterbottle";  
_unit additem "armst_item_waterbottle50";  
disableUserInput false;
