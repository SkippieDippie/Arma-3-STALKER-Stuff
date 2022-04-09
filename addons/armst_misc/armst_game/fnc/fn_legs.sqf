/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

 
        private["_unit", "_player"];      
        _unit = _this select 0;        
		[player, _unit, 'bandage', 'HitLeftLeg'] call AGM_Medical_fnc_treat;
		player addItem "AGM_Bandage";
		[player, _unit, 'bandage', 'HitRightLeg'] call AGM_Medical_fnc_treat;