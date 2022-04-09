/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
private ["_unit", "_dir", "_bag"];
  sleep 60;
  _unit = _this select 0;
  _pos= getPos _unit;
  _dir= getDir _unit;
  _bag = "xcam_Mrtvola_Army3" createVehicle _pos;
  _bag setDir _dir;
  deleteVehicle _unit;