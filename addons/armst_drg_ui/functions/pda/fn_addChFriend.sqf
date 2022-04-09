/*
	author: 		Dragster
	e-mail:			1dragsteron@gmail.com
	file: 			fn_addChFriend.sqf
	version: 		1.00
	date: 			10.06.2017	
	purpose: 			
	arguments: 		_uid - <String> - UID player
	return value:	_ret - true or false

	example call: 		["76561198110994934", "egor"] spawn drg_fnc_addChFriend;
*/


params ["_uid", "_nick"];
if (_uid == "") exitWith {};
private ["_id"];
private _playersFriends = profileNamespace getVariable ["DRG_allPlayerFriends",[]];
private _realNick = name ([_uid] call drg_fnc_findPlayerByUID);
private _c = {(_x select 0) == _uid} count _playersFriends;
if (_c == 0) then {
  	// _playersFriends pushBack [_uid,_nick];
  	_playersFriends pushBack [_uid,_nick,_realNick];
  	// _playersFriends set [0,[_uid,_nick,_realNick]];
} else {
	{
		if ((_x select 0) == _uid) exitWith {
			_playersFriends set [_forEachIndex,[_uid,_nick,_realNick]];
		};
	} forEach _playersFriends;
};
profileNamespace setVariable ["DRG_allPlayerFriends",_playersFriends];
saveProfileNamespace;