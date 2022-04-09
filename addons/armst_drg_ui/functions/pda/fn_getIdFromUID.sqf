/*
	author: 		Dragster
	e-mail:			1dragsteron@gmail.com
	file: 			fn_getIdFromUID.sqf
	version: 		1.00
	date: 			09.09.2018	
	purpose: 			
	arguments: 		_uid - <String> - UID player
	return value:	_id - ID player

	example call: 		["76561198110994934"] call drg_fnc_getIdFromUID;
*/
params ["_uid"];
private ["_id"];

_id = toArray _uid;
reverse _id;
_id resize 10;
reverse _id;
_id = toString _id;

_id