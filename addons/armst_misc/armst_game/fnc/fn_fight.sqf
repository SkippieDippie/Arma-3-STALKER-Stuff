/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
if ((getFatigue player) < 0.7) then 
	{
	armst_udar = ["cross1","armst_fight_1"];
	armst_udar_comp = armst_udar select floor random count armst_udar;
	_fatigue = getFatigue player;
	player playactionnow armst_udar_comp;
	player setFatigue (_fatigue + 0.15);
	sleep 0.5;
	_fatigue2 = getFatigue player;
	if (_fatigue2 < 0.9) then 
	{
	_distance = player distance cursortarget;
		if(_distance <= 2) then 
			{
				if (alive cursortarget && cursortarget isKindOf "armst_human") then 
					{
					[cursortarget] spawn armst_fnc_nocdaun2;
					};
			};
	}
	else
	{
	};
};