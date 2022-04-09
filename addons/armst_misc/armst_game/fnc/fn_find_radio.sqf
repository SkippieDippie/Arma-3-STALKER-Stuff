/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
params ["_unit"];
private ["_return"];
_return = false;
{
_a = toArray _x;
_a resize 3;
if (toString _a == "tf_") exitWith {
_return = true;
};
} forEach (assignedItems _unit);
_return