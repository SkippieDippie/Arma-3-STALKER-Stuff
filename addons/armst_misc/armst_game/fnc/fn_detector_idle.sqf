/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
	while {true} do
	{ 
		_weaponClass = currentWeapon player;
		if ((_weaponClass == "armst_map_east_north") or (_weaponClass == "armst_map_east_south") or (_weaponClass == "armst_map_west_north") or (_weaponClass == "armst_map_west_south") or (_weaponClass == "armst_map_chimik") or (_weaponClass == "armst_map_orden") or (_weaponClass == "armst_map_monolith")) then 
		{
		player playactionnow "Armst_GestureMAP";
		};
		_weaponClass = currentWeapon player;
		if ((_weaponClass == "armst_det_otklick") or (_weaponClass == "armst_det_medved") or (_weaponClass == "armst_det_svarog") or (_weaponClass == "armst_det_TRLife")) then 
		{
		uisleep 5;
		call ARMST_Detectors_ShowDetector; 
		//player playactionnow "armst_detector_idle";
		}
		else
		{
		uisleep 5;
		};
	};