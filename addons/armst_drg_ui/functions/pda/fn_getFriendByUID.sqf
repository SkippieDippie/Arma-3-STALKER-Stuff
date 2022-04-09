/*
	author: 		Dragster
	e-mail:			1dragsteron@gmail.com
	file: 			fn_getIdFromUID.sqf
	version: 		1.00
	date: 			09.09.2018	
	purpose: 			
	arguments: 		_uid - <String> - UID player
	return value:	_id - ID player

	example call: 		["76561198110994934"] call drg_fnc_getFriendByUID;
*/
params ["_uid"];
if (_uid == "") exitWith {};
private ["_idWithName"];
private _playersFriends = profileNamespace getVariable ["DRG_allPlayerFriends",[[]]];
_c = {(_x select 0) == _uid} count _playersFriends;
private _id = [_uid] call drg_fnc_getIdFromUID;
if (_c isEqualTo 0) then {
  	_idWithName = _id;
} else {
	{
		if ((_x select 0) == _uid) exitWith {
			_idWithName = format ["%1(%2)",(_x select 1),_id];
		};
	} count _playersFriends;
};
_idWithName