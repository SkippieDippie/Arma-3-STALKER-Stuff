/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Обновление рейтинга при убийстве
	
	Parameter(s):
		_killed 		(Object) - объект жертвы
		
*/
	#include "..\module.sqf";
	
/*	params ["_killed"];
	
	private _scoreFriendly = getNumber (module(_Config) >> "Score" >> "killFriendly");
	private _scoreMember = getNumber (module(_Config) >> "Score" >> "killMember");
	private _scoreEnemy = getNumber (module(_Config) >> "Score" >> "killEnemy");
	
	private _playerFaction = faction player;
	private _killedFaction = faction _killed;
	
	private _friendly = [_playerFaction] call ARMST_fnc_friendlyFactions;
	
	if (_killedFaction in _friendly) then {
		player setVariable ["Score", player getVariable ["Score", 0] + _scoreFriendly, true];
	} else {
		if (_playerFaction isEqualTo _killedFaction) then {
			player setVariable ["Score", player getVariable ["Score", 0] + _scoreMember, true];
		} else {
			player setVariable ["Score", player getVariable ["Score", 0] + _scoreEnemy, true];
		};
	};*/