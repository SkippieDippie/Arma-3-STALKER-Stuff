/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Checks for the presence of the radio at the object

	Parameter(s):
		0 :	unit - player

	Returns:
	BOOL - true or false
*/
	params ["_unit"];
	private ["_return"];
	_return = false;
	{
		_a = toArray _x;
		_a resize 3;
		if (toString _a == "tf_") exitWith {
			_return = true;
		};
	} forEach (assignedItems _unit);
	_return