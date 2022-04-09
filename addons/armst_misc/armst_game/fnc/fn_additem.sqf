/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
	private["_item","_barricade", "_l", "_pos"];
		_item = _this select 0;
		if (player canAdd _item) then {
		deleteVehicle cursorTarget;
		player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player additem _item;
		} 
		else 
		{
		  ["Нет места."] call ace_common_fnc_displayTextStructured;  
		};
