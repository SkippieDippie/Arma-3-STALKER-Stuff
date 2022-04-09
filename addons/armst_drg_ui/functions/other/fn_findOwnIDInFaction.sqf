/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Return player by faction

	Parameter(s):
		_faction

	Returns:
		None
*/

params ["_faction"];
private _playersIdArr=[];
{
	if ((!isNull _x) && (isPlayer _x) && ((faction _x)==_faction)) exitWith {
			_playersIdArr pushBack (owner _x);
	};	    
} count playableUnits;
_playersIdArr