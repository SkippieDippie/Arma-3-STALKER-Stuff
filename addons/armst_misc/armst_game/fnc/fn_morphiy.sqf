/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
 private["_unit", "_player"];      
        _unit = _this select 0;        
        [player, _unit, 'morphine'] call AGM_Medical_fnc_treat;
		_unit playactionnow "GestureOUT";
		sleep 7;
		_unit playactionnow "GestureOUT";