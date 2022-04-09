/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/



		_unit = _this select 0;
		
		ARMST_NAME = name player;
		ARMST_TEXT3 = format [ARMST_NAME];
		_ARMST_DICE = ["One","Two","Three","Four","Five","Six"];
		ARMST_DICE = _ARMST_DICE select floor random count _ARMST_DICE;
		ARMST_TEXT1 = format ["Threw a dice"];
		ARMST_TEXT2 = format [ARMST_DICE];
		player playactionnow "GestureGameKamen";
		_near = [];
		{
			if (alive _x) then {_near pushBack _x};
			
		} foreach (nearestObjects [player, ["ARMST_HUMAN"], 10]);
	composeText [parseText ARMST_TEXT3, parseText ARMST_TEXT1, lineBreak, ARMST_TEXT2] remoteExec ["hint", _near];