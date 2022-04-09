/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Return player by uid

	Parameter(s):
		_uid

	Returns:
		None
*/

params ["_uid"];
private ["_player"];
_player=objNull;
{
	if ((!isNull _x) && (isPlayer _x) && ((getPlayerUID _x)==_uid)) exitWith {
			_player=_x;
	};	    
} count playableUnits;
_player