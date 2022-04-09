/*	
	Author: Aloe
	Description:
	
	Parameter(s):
	_trader <Object> - торговец
*/

	#include "..\module.sqf";
	
	private ["_trader", "_tradeData", "_buyData"];
	
	_trader = _this;
	_tradeData = [];
	_buyData = [];
	
	//Продажа
	{
		private _items = getArray (_x >> "items");
		private _totalPrice = getNumber (_x >> "totalPrice");
		
		{_x set [1, (_x select 1) * _totalPrice]} foreach _items;
		
		[_tradeData, configName _x, _items] call BIS_fnc_addToPairs;
		
	} foreach ([module(_Config) >> _traderName >> "Sale", 0, true] call BIS_fnc_returnChildren);
	
	//Покупка
	{
		private _items = getArray (_x >> "items");
		private _totalConsume = getNumber (_x >> "totalConsume");
		
		{_x set [1, (_x select 1) * _totalConsume]} foreach _items;
		
		[_buyData, configName _x, _items] call BIS_fnc_addToPairs;
	} foreach ([module(_Config) >> _traderName >> "Buy", 0, true] call BIS_fnc_returnChildren);
	
	_trader setVariable ["Trade", _tradeData];
	_trader setVariable ["Buy", _buyData];
		