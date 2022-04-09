/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

private["_landFire", "_l"];
sleep 1;
disableUserInput true;
["Unpacking my sleeping bag..."] call ace_common_fnc_displayTextStructured;
player say2d "craft";
player playMove "AinvPknlMstpSnonWnonDnon_medic_1";    
sleep 6; 
player playMove "AinvPknlMstpSnonWnonDnon_medic_1";    
["Done..."] call ace_common_fnc_displayTextStructured;
disableUserInput false;
player removeitem "ARMST_sleepingbag";
_landFire = player modeltoworld [0,1.8,0.1];
_landFire set [2,0];
_l = createVehicle ["Land_sleeping_bag_brown_f", _landFire, [], 0, "NONE"];
_l setPos _landFire;
_l setDir getDir player + 180;
_l addAction ["Pack up sleeping bag", {player additem "ARMST_sleepingbag";player playMove "AinvPknlMstpSnonWnonDnon_medic_1";deleteVehicle cursortarget;player say2d "craft";}];
