/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

		_unit = _this select 0;
		_unit removeitem "ARMST_cigar";
		disableUserInput true;
		[_unit] call ace_weaponselect_fnc_putWeaponAway;
		sleep 3;
		_unit playactionnow "Gesturecigaretes";
		
		_unit say2d "smoke";
		[_unit] spawn armst_fnc_cigs_smoke;
		sleep 3;
		
		_unit say2d "smoke";
		[_unit] spawn armst_fnc_cigs_smoke;
		sleep 3;
		
		_unit say2d "smoke";
		[_unit] spawn armst_fnc_cigs_smoke;
		sleep 3;
		
		_unit say2d "smoke";
		[_unit] spawn armst_fnc_cigs_smoke;
		sleep 3;
		_unit say2d "smoke";
		[_unit] spawn armst_fnc_cigs_smoke;
		sleep 3;
		
		_unit setFatigue 1;
		disableUserInput false;