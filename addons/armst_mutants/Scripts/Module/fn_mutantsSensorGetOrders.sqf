	/*
	Author: Aloe
		
	Description:
	Collect orders list from sensor
		
	Parameter(s):
	_this select 0: <trigger> sensor
	
	Return: <array> Orders list
	*/

	params ["_sensor"];
	private ["_orderList"];

	_orderList = [];
	
	{
		if (_x isKindOf "ARMST_mutantsModuleBase") then {_orderList set [count _orderList, _x]};
	} foreach (synchronizedObjects _sensor);

	_orderList