/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
_object = _this select 0;

_teleportPos = getPosATL _object;

_snow = "burn_decal_2" createVehicleLocal _teleportPos;
_snow setPosATL _teleportPos;
_snow say3D "giant_hit";
sleep 2;
deletevehicle _snow;