
_object = _this select 0;
_anomaly = _this select 1;

switch (_anomaly) do {

	case "electra": {
		
		_sparkParticleSource1 = "#particlesource" createVehicleLocal getPosWorld _object;
		_sparkParticleSource2 = "#particlesource" createVehicleLocal getPosWorld _object;
		_sparkParticleSource3 = "#particlesource" createVehicleLocal getPosWorld _object;
		
		_sparkParticleSource1 setParticleCircle [0.3, [0, 0, 0]];
		_sparkParticleSource1 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
		_sparkParticleSource1 setDropInterval 0.15;
		_sparkParticleSource1 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.4,  0.4,  [0,0,0.3],  [0,0,0],  0,0.3,0.233,0,  [0.067,0.07,0.067],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];

		_sparkParticleSource2 setParticleCircle [5, [0, 0, 0]];
		_sparkParticleSource2 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
		_sparkParticleSource2 setDropInterval 0.1;
		_sparkParticleSource2 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.3,  0.3,  [0,0,0.3],  [0,0,0],  0,0.3,0.233,0,  [0.042,0.045,0.042],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];

		_sparkParticleSource3 setParticleCircle [4, [0, 0, 0]];
		_sparkParticleSource3 setParticleRandom [0, [0, 0, 1], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
		_sparkParticleSource3 setDropInterval 0.075;
		_sparkParticleSource3 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.27,  0.27,  [0,0,0.3],  [0,0,0],  0,0.3,0.233,0,  [0.018,0.02,0.018],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];

		_object setVariable ["effects", [_sparkParticleSource1, _sparkParticleSource2, _sparkParticleSource2]];
		
	};
	
	case "gravitation": {
		_gravi1 = "#particlesource" createVehicleLocal getPosWorld _object;
		_gravi2 = "#particlesource" createVehicleLocal getPosWorld _object;
		_gravi3 = "#particlesource" createVehicleLocal getPosWorld _object;

		_gravi1 setParticleCircle [3, [0, 0, 0]];
		_gravi1 setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
		_gravi1 setParticleParams [["\A3\data_f\cl_rock1", 1, 0, 1], "", "SpaceObject", 1, 7, [0, 0, 0], [0, 0, 0.75], 0, 10, 7.9, 0.075, [10, 2, 4], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _object];
		_gravi1 setDropInterval 0.05;

		_gravi2 setParticleCircle [0, [0, 0, 0]];
		_gravi2 setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
		_gravi2 setParticleParams [["\A3\data_f\cl_grass2", 1, 0, 1], "", "SpaceObject", 1, 12.5, [0, 0, 0], [0, 0, 0.75], 0, 10, 7.9, 0.075, [5, 2, 4], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _object];
		_gravi2 setDropInterval 0.05;

		_gravi3 setParticleCircle [1, [0, 0, 0]];
		_gravi3 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0.2, [0, 0, 0, 0], 0, 0];
		_gravi3 setParticleParams [["\A3\data_f\ParticleEffects\Pstone\PStone.p3d", 8, 3, 1], "", "SpaceObject", 2, 7, [0, 0, 0], [0, 0, 3], 0.5, 4, 1, 0, [1, 1, 1], [[1, 1, 1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _object];
		_gravi3 setDropInterval 0.1;
		
		_object setVariable ["effects", [_gravi1, _gravi2, _gravi3]];
	};
	
	//	Жарка
	case "frying": {
		_jarka1 = "#particlesource" createVehicleLocal getPosWorld _object;
		_jarka2 = "#particlesource" createVehicleLocal getPosWorld _object;

		_jarka1 setParticleCircle [3, [0, 0, 0]];
		_jarka1 setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
		_jarka1 setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 4, [0, 0, 0], [0, 0, 0.75], 0, 10, 7.9, 0.075, [1, 2, 4], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _object];
		_jarka1 setDropInterval 0.05;

		_jarka2 setParticleCircle [0, [0, 0, 0]];
		_jarka2 setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
		_jarka2 setParticleParams [["\A3\data_f\kouleSvetlo", 1, 0, 1], "", "Billboard", 1, 12.5, [0, 0, 0], [0, 0, 0.75], 0, 10, 7.9, 0.075, [1.2, 2, 4], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _object];
		_jarka2 setDropInterval 0.05;
		
		_object setVariable ["effects", [_jarka1, _jarka2]];
	};
	
	case "meat_grinder": {
		_meat1 = "#particlesource" createVehicleLocal getPosWorld _object;
		_meat2 = "#particlesource" createVehicleLocal getPosWorld _object;
		_meat3 = "#particlesource" createVehicleLocal getPosWorld _object;

		_meat1 setParticleCircle [2, [0, 0, 0]];
		_meat1 setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
		_meat1 setParticleParams [["\A3\data_f\Cl_fire", 16, 0, 16], "", "Billboard", 1, 4, [0, 0, 0], [0, 0, 0], 0, 10, 7.9, 0.075, [10, 2, 4], [[1, 0.3, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _object];
		_meat1 setDropInterval 0.1;

		_meat2 setParticleCircle [2, [0, 0, 0]];
		_meat2 setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
		_meat2 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Meat_ca.p3d", 1, 0, 1], "", "SpaceObject", 1, 5, [0, 0, 0], [0, 0, 3], 2, 12, 7.9, 0.075, [10, 2, 4], [[1, 0.3, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _object];
		_meat2 setDropInterval 0.1;

		_meat3 setParticleCircle [3, [0, 0, 0]];
		_meat3	setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
		_meat3 setParticleParams [["\A3\data_f\cl_grass2", 1, 0, 1], "", "SpaceObject", 1, 12.5, [0, 0, 0], [0, 0, 0], 3, 10, 7.9, 0.075, [12, 2, 4], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _object];
		_meat3 setDropInterval 0.05;
		
		_object setVariable ["effects", [_meat1, _meat2, _meat3]];
	};
	
	//	Жгучий пух
	case "burning_down": {
		_puch = "#particlesource" createVehicleLocal getPosWorld _object;

		_puch setParticleCircle [2, [0, 0, 0]];
		_puch setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
		_puch setParticleParams [["\A3\data_f\cl_feathers2", 1, 0, 1], "", "SpaceObject", 1, 12.5, [0, 0, 0], [0, 0, 0.75], 0, 10, 7.9, 0.075, [8, 2, 4], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _object];
		_puch setDropInterval 0.1;
		
		_object setVariable ["effects", [_puch]];
	};
};