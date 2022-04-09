/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Обработчик события - авторизация игрока
	
	Parameter(s):
		_character 		(Array) - данные игрока
		
      Return: Nothing
*/
	//#include "..\module.sqf";
	params ["_character"];

	//Handlers set    ARMST_Player_HandlerRespawn
	player addEventHandler ["Killed", ARMST_Player_HandlerKilled];
	player addEventHandler ["Respawn", ARMST_Player_HandlerRespawn];
	//player addEventHandler ["HandleRating", module(HandlerRating)];		Не достаточно данных
	// diag_log format ["%1",(_character select 1)];
	//Set response data
	private _isNew = _character select 0;
	
	if !((_character select 1) isEqualTo []) then {
		[player,_character select 1] call ARMST_fnc_loadInventoryToUnit;
	};
	player setVariable ["Money", _character select 2, true];
	player setVariable ["Kills", _character select 4, true];
	player setVariable ["Deaths", _character select 5, true];
	player setVariable ["Score", _character select 3, true];
	player setVariable ["Datestamp", _character select 6, true];
	player setVariable ["FactionEntry", _character select 7, true];
	
	player setVariable ["ARMST_HUNGER", _character select 8,true];
	player setVariable ["ARMST_THIRST", _character select 9,true];
	player setVariable ["Alcohol", _character select 10,true];
	[_character select 11] call ARMST_Radiation_SetInfection;
	
	
	if !(_isNew) then {
	
		player setDir (_character select 12);
		[player, _character select 15] remoteExecCall ["switchMove"];
		
		player setDamage (_character select 13);
		private _hitpoints = _character select 14;
		if !(_hitpoints isEqualTo []) then {
			{
				player setHitPointDamage [_x, (_hitpoints select 1) select _foreachIndex];
			} foreach (_hitpoints select 0);
		};
		
	};
	
	player setVariable ["Authed", true, true];		//Рекомендация - сохранять игрока или не стоит, не более
	player setVariable ["New", _isNew];
	
	player setVariable ["ARMST_Rentier", (profileNamespace getVariable ["ARMST_Rentier", [""]]) select 0];