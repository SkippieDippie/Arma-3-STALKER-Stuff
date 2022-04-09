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
private _playersArr=[];
{
	if ((!isNull _x) && (isPlayer _x) && ((faction _x)==_faction)) exitWith {
			_playersArr pushBack _x;
	};	    
} count playableUnits;
_playersArr