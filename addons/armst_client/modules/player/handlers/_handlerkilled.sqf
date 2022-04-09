/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Обработчик события - убийство игрока
	
	Parameter(s):
		_killed 		(Object) - убитый
		_killer 			(Object) - убийца
		
      Return: Nothing
*/
	#include "..\module.sqf";
	
	params ["_killed", "_killer"];
	
	//Fix uniform
	removeUniform _killed; 
	
	//Rating etc.
	player setVariable ["Deaths", (_killed getVariable ["Deaths", 0]) + 1, true];
	[] call app(Rating,OnKilled);
	
	if !(_killer isEqualTo _killed) then {
		_killer setVariable ["Kills", (_killer getVariable ["Kills", 0]) + 1, true];
		if (isPlayer _killer) then {
			[_killed] remoteExecCall ["ARMST_Rating_OnKill", _killer];
		};
	};
	