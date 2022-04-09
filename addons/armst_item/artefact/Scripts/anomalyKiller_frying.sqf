/*
	Author: Karel Moricky

	Description:
	Zeus lightning strike

	Parameter(s):
	http://community.bistudio.com/wiki/Arma_3_Modules

	Returns:
	NONE
	
	editor: SteelRat
*/

_logic = _this select 0;
_activated = true;
if (_activated) then {
	_pos = position _logic;
	_dir = getDir _logic;

	
	player setdamage 1;

	_light = "#lightpoint" createvehiclelocal _pos;
	//_light = "#lightpoint" createvehicle _pos;
	_light setposatl [_pos select 0,_pos select 1,(_pos select 2) + 10];
	_light setLightDayLight true;
	_light setLightBrightness 300;
	_light setLightAmbient [0.05, 0.05, 0.1];
	_light setlightcolor [1, 1, 2];

	sleep 0.1;
	_light setLightBrightness 0;
	sleep (random 0.1);

	_class = ["lightning1_F","lightning2_F"] call bis_Fnc_selectrandom;
	_lightning = _class createvehiclelocal [100,100,100];
	//_lightning = _class createvehicle [100,100,100];
	_lightning setdir _dir;
	_lightning setpos _pos;

	_cursorTarget = _logic;
	_duration = if (isnull _cursorTarget) then {(3 + random 1)} else {1};

	for "_i" from 0 to _duration do {
		_time = time + 0.1;
		_light setLightBrightness (100 + random 100);
		waituntil {
			//--- Attach to target under cursor
			if (!isnull _cursorTarget) then {_lightning setpos position _cursorTarget;};
			time > _time
		};
	};

	deletevehicle _lightning;
	deletevehicle _light;

	//--- Disable engine lightnings
	0 setlightnings 0;
};