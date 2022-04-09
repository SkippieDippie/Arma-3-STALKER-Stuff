/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
private ["_num"];
  _unit = _this select 0;      
  _unit playactionnow "Gestureheadkick";
  addCamShake [10, 1, 25];
  _num = floor random 10;
  //_unit setHitPointDamage ["HitHead", (_unit getHitPointDamage "HitHead") + 0.05];
   _fatigue = getFatigue player;
  _unit playactionnow "Gestureheadkick";
  sleep 4;
  if (_num >6) then {
  disableUserInput true;
  [_unit, random 300, 10] spawn armst_fnc_Ragdoll;
  sleep 8;
  disableUserInput false;  
  };