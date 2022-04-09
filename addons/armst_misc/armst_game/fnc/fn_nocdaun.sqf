/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
private ["_num"];
  addCamShake [10, 1, 25];
  _num = floor random 10;
  if (_num >7) then {
  disableUserInput true;
  [player, random 300, 10] spawn armst_fnc_Ragdoll;
  sleep 8;
  disableUserInput false;  
  };