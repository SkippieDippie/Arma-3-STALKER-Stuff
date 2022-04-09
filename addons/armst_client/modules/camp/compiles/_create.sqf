/*
	Author: Aloe <itfruit@mail.ru>
	Description:  Создание лагеря
	Environment: Client
	
	Parameter(s):
		_item	 		(String) - предмет инвенторя

	Return: (Object)
*/
	
	#include "..\module.sqf";
	
	params [["_item", "", [""]]];
	
	player removeItem _item;
	
	//if (isMultiplayer) then {
		
		[
		
			getPlayerUID player,
			[player, 2, direction player] call BIS_fnc_relPos
		
		] remoteExecCall [stringify(app(Camps,Create_NewCamp)), 2];
	/*
	} else {
	
		[
		
			"76561198109202393",
			[player, 2, direction player] call BIS_fnc_relPos
		
		] remoteExecCall [stringify(app(Camps,Create_NewCamp)), 2];
	
	};
	*/
	

	
	

	