/*
	author: 		Dragster
	file: 			fn_clearUnit.sqf
	version: 		1.00
	date: 			20.08.2018
	arguments: 		
					_unit - player
	return value:	none

*/
 	params [["_unit",objNull]];
	if (_unit isEqualTo objNull) exitWith {};
	removeAllWeapons _unit;
	removeAllContainers _unit;
	removeAllAssignedItems _unit;
	removeGoggles _unit;
	removeHeadgear _unit;
	true