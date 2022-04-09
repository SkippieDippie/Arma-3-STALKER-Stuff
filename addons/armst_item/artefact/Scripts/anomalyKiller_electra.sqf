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

	_sparkParticleSource1 = "#particlesource" createVehicleLocal getPosWorld player;
	_sparkParticleSource1 setParticleCircle [0.3, [0, 0, 0]];
	_sparkParticleSource1 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
	_sparkParticleSource1 setDropInterval 0.01;
	_sparkParticleSource1 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.3,  0.3,  [0,0,0.3],  [0,0,0],  0,0.3,0.233,0,  [0.087,0.09,0.087],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];

	_sparkParticleSource2 = "#particlesource" createVehicleLocal getPosWorld player;
	_sparkParticleSource2 setParticleCircle [5, [0, 0, 0]];
	_sparkParticleSource2 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
	_sparkParticleSource2 setDropInterval 0.01;
	_sparkParticleSource2 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.3,  0.3,  [0,0,0.3],  [0,0,0],  0,0.3,0.233,0,  [0.052,0.065,0.052],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];

	_sparkParticleSource3 = "#particlesource" createVehicleLocal getPosWorld player;
	_sparkParticleSource3 setParticleCircle [4, [0, 0, 0]];
	_sparkParticleSource3 setParticleRandom [0, [0, 0, 1], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
	_sparkParticleSource3 setDropInterval 0.01;
	_sparkParticleSource3 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.3,  0.3,  [0,0,0.3],  [0,0,0],  0,0.3,0.233,0,  [0.02,0.03,0.02],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];

	_this spawn {
			_empty = "#particlesource" createVehicleLocal getPosWorld player;
			_empty say3d "anomaly_electra_blowout";
			uiSleep 5;
			deleteVehicle _empty;
	};
	player setdamage 1;
	uiSleep 0.5;

	deleteVehicle _sparkParticleSource1;
	deleteVehicle _sparkParticleSource2;
	deleteVehicle _sparkParticleSource3;
	
};