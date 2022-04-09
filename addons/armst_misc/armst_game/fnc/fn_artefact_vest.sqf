
	_freq = 5; //задержка проверки и нанесения урона
	_activeClasses = [
		// 							здоровье, 	тепло, 		боль, 		кровь, 		выносливость, радиация
		//при положительном значении - восстановление

		//артефакты 1ого уровня
		["Item_Medusa_Unstab", 		0,			-0.005,		0.002,		0,			0,			-0.06],
		["Item_GRAVI_Unstab",  		0,			0,			0,			0,			0,			0.07],
		["Item_STONEBLOOD_Unstab",  -0.002,		0,			0,			0.0025,		0,			0.07],
		["Item_TEARS_Unstab",   	0.002,		0,			0,			0,			0.125,		-0.07],

		//артефакты 2ого уровня
		["Item_SPIKES_Unstab",  	0.008,		0,			0.009,		-0.005,		0,			-0.09],
		["Item_Slude_Unstab", 		0,			0,			-0.015,		0,			0,			0.08],
		["Item_EMPTY_Unstab", 		0,			0,			0,			0,			0,			0.04],
		["Item_FIRE_Unstab",  		0.005,		0.05,		0.006,		-0.002,		0.1,		0.08],
		["Item_MEAT_Unstab", 		-0.006,		0,			0,			0.005,		0,			0.08],

		//артефакты 3ого уровня
		["Item_ELECTRA_Unstab", 	0.008,		-0.005,		0.004,		0,			-0.11,		0.06],
		["Item_BATTERY_Unstab", 	0.013,		-0.01,		0,			0,			-0.17,		0.09],
		["Item_CRYSTALL_Unstab", 	0,			0,			0,			0,			0.15,		-0.12],
		["Item_SOUL_Unstab", 		-0.003,		0.03,		-0.008,		0.0075,		-0.06,		0.1]
	];

		
	while{true}do{
		waitUntil{_gmvcp=getMagazineCargo vestContainer player;alive player && {(_x select 0) in (_gmvcp select 0)} count _activeClasses > 0};
		
		(getMagazineCargo vestContainer player) params ["_mags","_cntmags"];
		{
			_x params ["_art","_dammage","_Infection","_Pain","_Blood","_stamina","_rad"];
			if (_art in _mags) then {
				_count = 0;{if(_x==_art) exitWith {_count = (_cntmags select _forEachIndex);}} forEach _mags;
				if (_dammage != 0) then {
					player setDammage (getDammage player + (_dammage * _count));
				};
				if (_Infection != 0) then {
					player setVariable ["ARMST_BODYTEMP", (player getVariable ["ARMST_BODYTEMP",0]) + (_Infection * _count)];
				};
				if (_Pain != 0) then {
					player setVariable ["AGM_Pain", (player getVariable ["AGM_Pain",0]) + (_Pain * _count)];
				};
				if (_Blood != 0) then {
					player setVariable ["AGM_Blood", (player getVariable ["AGM_Blood",1]) + (_Blood * _count)];
				};
				if (_stamina != 0) then {
					player setFatigue (getFatigue player + (_stamina * _count));
				};
				if (_rad != 0) then {
					armst_radiation_infection = armst_radiation_infection + (_rad * _count);
					if (armst_radiation_infection < 0) then {armst_radiation_infection = 0;};
				};
			};
		} forEach _activeClasses;
		_AGM_Blood = player getVariable ["AGM_Blood",1];
		_AGM_Pain = player getVariable ["AGM_Pain",0];
		
		if (_AGM_Blood > 1) then {player setvariable ["AGM_Blood",1];};
		if (armst_radiation_infection < 0) then {armst_radiation_infection = 0;};
		if (_AGM_Blood < 0) then {player setdammage 1;};
		if (_AGM_Pain < 0) then {player setvariable ["AGM_Pain",0];};
		uisleep _freq;
	};