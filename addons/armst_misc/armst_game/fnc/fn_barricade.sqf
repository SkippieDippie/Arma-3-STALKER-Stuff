/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

	private["_item","_barricade", "_l", "_pos"];
	_item = _this select 0;
	_barricade = _this select 1;
	
	if (_item in (items player + assignedItems player)) then 
		{
			player playMove "AinvPknlMstpSnonWnonDnon_medic_1";    
			sleep 5;
			_pos = getPosASL player;
			_landFire = player modeltoworld [0,1.8,0];
			_landFire set [2,0];
			_l = createVehicle [_barricade, _pos, [], 0, "NONE"];
			_l setPos _landFire;
			_l setDir getDir player + 180 ;
			player removeitem _item;
		}
	else
		{
			["Нечего устанавливать."] call ace_common_fnc_displayTextStructured;  
		};