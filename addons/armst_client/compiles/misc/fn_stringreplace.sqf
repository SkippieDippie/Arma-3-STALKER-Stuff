/*
Author: Aloe
    
Description:
Replace all occurrences of the search string with the replacement string
    
Parameter(s):
_this select 0: <string> subject string
_this select 1: <string> search string. default: ","
_this select 2: <string> replace string. default: "|"
    
Returns: String

Depricated! Faster but not reliable with some data
*/

private ["_string","_search","_replace","_stringCnt","_searchCnt","_sector","_prevSec","_befoSec"];

_string = [_this, 0, "", [""]] call BIS_fnc_param;
_search = [_this, 1, ",", [""]] call BIS_fnc_param;
_replace = [_this, 2, "|", [""]] call BIS_fnc_param;

_stringCnt = count _string;
_searchCnt = count _search;

for "_i" from 0 to (_stringCnt-1) do {
	_sector = _string select [_i, _searchCnt];
	if(_sector == _search)then{
		_prevSec = _string select [0, _i];
		_befoSec = _string select [_i+_searchCnt, _stringCnt];
		_string = format ["%1%2%3", _prevSec, _replace, _befoSec];
	};
};

_string