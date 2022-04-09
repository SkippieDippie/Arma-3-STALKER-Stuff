/*
	author: 		Dragster
	e-mail:			1dragsteron@gmail.com
	file: 			fn_getIdWithName.sqf
	version: 		1.00
	date: 			10.06.2017	
	purpose: 			
	arguments: 		_uid - <String> - UID player
	return value:	_id - ID player
					_name - saved name in profileNamespace

	example call: 		["76561198110994934"] spawn drg_fnc_getIdWithName;
*/


params ["_uid"];
if (_uid == "") exitWith {["",""]};
private ["_id"];
private _saved_name_player = profileNamespace getVariable ["DRG_player_oldName",""];
if !((name player) == _saved_name_player) then {
	profileNamespace setVariable ["DRG_allPlayerFriends",[]];
	profileNamespace setVariable ["DRG_player_oldName",name player];
	saveProfileNamespace;
};
_id = toArray _uid;
reverse _id;
_id resize 10;
reverse _id;
_id = toString _id;

private _nick = ""; 
private _realNick = name ([_uid] call drg_fnc_findPlayerByUID);
private _playersFriends = profileNamespace getVariable ["DRG_allPlayerFriends",[[]]];
{ 
 if (_uid isEqualTo (_x select 0)) exitWith { 
 	if ((_x select 2) == _realNick) then {
 		_nick = _x select 1; 
 	};   
 }; 
} count _playersFriends; 
[_id,_nick]