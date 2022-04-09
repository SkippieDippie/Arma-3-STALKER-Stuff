/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

        private["_unit", "_player"];      
        _unit = _this select 0;        
     0 = [[_unit, vehicle player,_unitID],"H8_fnc_detach",true] call BIS_fnc_MP;