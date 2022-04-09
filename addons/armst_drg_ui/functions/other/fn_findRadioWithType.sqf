/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Check tfar radio, return the availability in inventory and the current radio

	Parameter(s):
		0 :	unit - player

	Returns:
	BOOL - true or false
	TYPE - type radio
*/
	params ["_unit"];
	private ["_return"];
	_return = [false,""];
	{
		_a = toArray _x;
		_a resize 3;
		if (toString _a == "tf_") exitWith {
			_return set [0, true];
			_return set [1, _x];
		};
	} forEach (assignedItems _unit);
	_return