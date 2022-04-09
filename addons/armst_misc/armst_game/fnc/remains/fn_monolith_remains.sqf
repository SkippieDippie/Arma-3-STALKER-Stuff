/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

private["_unit", "_player"];      
_unit = _this select 0;      
_weapons = handgunWeapon player;  
if (("Hatchet3" == _weapons) && (_weapons == currentWeapon player)) then 
	{                      
	player say2d "sound_remains";
	[10, player, "armst_empty",localize "STR_man_progress", "armst_abort"] spawn AGM_Core_fnc_progressBar; 
	player playmove "AinvPknlMstpSnonWnonDnon_medic_1";
	waitUntil {animationState player != "AinvPknlMstpSnonWnonDnon_medic_1"}; 
	if (isNil {_unit getVariable "RemainsEmpty"} && (!alive _unit)) then 
		{ 
		player addItem "armst_nashivka_monolith";
		_unit setVariable ["RemainsEmpty", true, true];
		};
	};