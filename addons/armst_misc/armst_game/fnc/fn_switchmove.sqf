/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

        private["_unit","_anim"];
        _unit = _this select 0;
        _anim = _this select 1;
		[_unit] call AGM_WeaponSelect_fnc_putWeaponAway;
        [[_unit, _anim], "switchMove"] call bis_fnc_mp;