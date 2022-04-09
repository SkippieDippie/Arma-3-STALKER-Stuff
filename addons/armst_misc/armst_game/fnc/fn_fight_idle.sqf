/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
    while {true} do 
	{
	   if (player getVariable ["armst_fight", 1] == 1) then 
	   {
	   [player] call AGM_WeaponSelect_fnc_putWeaponAway;
	    player playActionNow "armst_fight_idl";
	    sleep 2;
	   };
	};
