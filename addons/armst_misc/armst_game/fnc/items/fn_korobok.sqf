/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

_unit = _this select 0;
_unit removeitem "armst_korobok";
//disableUserInput true;
[_unit] call ace_weaponselect_fnc_putWeaponAway;
sleep 3;
_unit playactionnow "Gesturecigaretes";
enableCamShake true;
_unit playactionnow "Gesturecigaretes";

resetCamShake;
disableUserInput false;
[player] spawn {
_unit = _this select 0;
_smash = 0;
_static = 1;
while {true} do
	{ 
	if (_static == 1) then {
	[] spawn armmiss_fnc_lsd;
	sleep 60 + (random 20);
	
		ARMST_NAME = name player;
		ARMST_TEXT3 = format [ARMST_NAME];
		_ARMST_DICE = [" Shaking like crazy..."," drooling... "," sniffling...","legs off..."," nosebleed...","numb lower jaw... "];
		ARMST_DICE = _ARMST_DICE select floor random count _ARMST_DICE;
		ARMST_TEXT2 = format [ARMST_DICE];
		_near = [];
		{
			if (alive _x) then {_near pushBack _x};
			
		} foreach (nearestObjects [player, ["ARMST_HUMAN"], 10]);
	composeText [parseText ARMST_TEXT3, parseText ARMST_TEXT2] remoteExec ["hint", _near];
	[] spawn armmiss_fnc_lsd;
	_smash = _smash + 1;
	_static = 0;
	}
	else
	{
	[] spawn armmiss_fnc_cocaine;
	sleep 60 + (random 20);
	
		ARMST_NAME = name player;
		ARMST_TEXT3 = format [ARMST_NAME];
		_ARMST_DICE = [" трясется как ненормальный... "," пускает слюни... "," хлюпает носом... "," отнимаются ноги... "," течет кровь из носа... "," занемела нижняя челюсть... "];
		ARMST_DICE = _ARMST_DICE select floor random count _ARMST_DICE;
		ARMST_TEXT2 = format [ARMST_DICE];
		_near = [];
		{
			if (alive _x) then {_near pushBack _x};
			
		} foreach (nearestObjects [player, ["ARMST_HUMAN"], 10]);
	composeText [parseText ARMST_TEXT3, parseText ARMST_TEXT2] remoteExec ["hint", _near];
	[] spawn armmiss_fnc_cocaine;
	_smash = _smash + 1;
	_static = 1;
	};
	
	if (_smash>10) exitWith {["Эффект коробка окончен."] call AGM_Core_fnc_displayTextStructured;}
	};
};