/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

	private["_landFire", "_l"];
	_landFire = player modeltoworld [0,1.8,0];
	_landFire set [2,0];
	_l = createVehicle ["Campfire_burning_F", _landFire, [], 0, "NONE"];
	_l setPos _landFire;
	_l setDir getDir player + 180 ;
	player removeitem "armst_spicki";
	_a=0;
	while {_a < 360} do {
	_inflamed = inflamed _l;
	if (_inflamed) then {
	_a = _a + 1;
	sleep 1;
	};
	};
	if (_a==360) then {
	deleteVehicle _l;
	};