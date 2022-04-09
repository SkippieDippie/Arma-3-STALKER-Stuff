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
	if (_hunger>1) exitwith {
	  hint 'Я не хочу больше кушать';
	};
	_unit setVariable ["ARMST_HUNGER", (_unit getVariable "ARMST_HUNGER") + _eat];
	_unit removeMagazine "armst_item_stimulFood";
	disableUserInput true;
	[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;
	sleep 2;
    player playMove "AinvPknlMstpSnonWnonDnon_medic_1";   
	disableUserInput false;