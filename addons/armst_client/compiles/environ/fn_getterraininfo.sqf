	/*
	Author: Aloe
		
	Description:
	Get terrain info on position, as pairs
		
	Parameter(s):
		_this: <Array> Position. Center terrain 
	*/

private ["_pos", "_resultInfo", "_nearestLocs"];

_pos = _this;
_resultInfo = [
	["worldName", getText (configFile>>"CfgWorlds">>worldName>>"description")],
	["nearLocation", localize "str_player_wilderness_title"] 
];

if(count _pos > 0 and {!([_pos, [0,0,0]] call BIS_fnc_arrayCompare)})then{
	_nearestLocs = nearestLocations [_pos, ["NameCityCapital","NameCity","NameVillage","NameLocal"], 1000];
	if(count _nearestLocs > 0)then{
		_resultInfo = [_resultInfo, "nearLocation", text (_nearestLocs select 0)] call BIS_fnc_setToPairs;
	};
};

_resultInfo