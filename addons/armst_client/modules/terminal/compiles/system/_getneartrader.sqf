/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Возвращает ближайшего торговца
	
	Parameter(s):
		_position 			(Position) - позиция
	
	Return: (Object) Торговец
*/
	#include "..\..\module.sqf";
	
	params ["_position"];
	
	private _nearTrader = objNull;
	private _traders = app(Trade,Traders);
	
	if !(_traders isEqualTo []) then {
		_nearTrader = ([_traders, [_position], {_input0 distance _x},"ASCEND"] call BIS_fnc_sortBy) select 0;
	};
	
	_nearTrader;