/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Return player by name

	Parameter(s):
		_name

	Returns:
		None
*/

params ["_name"];
private ["_player"];
_player=objNull;
{
	if ((!isNull _x) && (isPlayer _x) && ((name _x)==_name)) exitWith {
			_player=_x;
	};	    
} count playableUnits;
_player