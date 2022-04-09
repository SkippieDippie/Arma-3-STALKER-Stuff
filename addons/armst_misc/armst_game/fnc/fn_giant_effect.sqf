/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
	_object = _this select 0;

    while {true} do 
	{
		if (alive _object) then 
		{
		_near = [];
		{
			if (alive _x) then {_near pushBack _x};
		} foreach (nearestObjects [_object, ["ARMST_HUMAN"], 30]);
		
		if (count _near > 0) then {
		
			[_object] spawn armst_fnc_giant_sound;
			};
		};
		if (!alive _object) exitWith {};
		sleep 1;
	};