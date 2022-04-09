/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Определяет ранг по рейтингу
	
	Parameter(s):
		_rating 		(Number) - рейтинг
	
	Return: Array - [ранг, название]
	
*/
	#include "..\module.sqf";
	
	params ["_rating"];
	
	private _rank = "";
	
	{
		private ["_min", "_max"];
		
		if (isNumber(_x >> "ScoreMin")) then {_min = getNumber(_x >> "ScoreMin")} else {_min = -1E6};
		if (isNumber(_x >> "ScoreMax")) then {_max = getNumber(_x >> "ScoreMax")} else {_max = 1E6};
		
		if (_rating >= _min and _rating < _max) exitWith {
			_rank = [configName _x, getText(_x >> "displayName")];
		};
		
	} foreach ([module(_Config) >> "Rangs", 0, true] call BIS_fnc_returnChildren);
	
	_rank;