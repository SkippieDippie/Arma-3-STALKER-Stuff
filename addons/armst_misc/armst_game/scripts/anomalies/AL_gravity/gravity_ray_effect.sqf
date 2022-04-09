private ["player","_eko_impact","_grav_raza","_grav_raza_v","_li1","_val","_bolovani","_lemne","_zid","_pietre"];

player = _this select 0;

player say3D "up_impact";

[] spawn {
	_light = "#lightpoint" createVehicleLocal getpos player;
	_light setpos getpos player;
	_light setLightDayLight true;
	_light setLightBrightness 10000;
	_light setLightAmbient [0.5, 0.5, 1];
	_light setlightcolor [1, 1, random 2];
	sleep 0.5;
	deletevehicle _light;	
};
_eko_impact = "Land_HelipadEmpty_F" createVehicle [getposATL player select 0,getposATL player select 1,30];

_grav_raza = "#particlesource" createVehicleLocal (getpos player);
_grav_raza setParticleCircle [0, [0, 0, -3]];
_grav_raza setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
_grav_raza setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 8, [0, 0, 0], [0, 0, 0], 13, 1, 5, 0, [15,11,7,3], [[1, 1, 1, 1],[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1]], [0.08], 1, 0, "", "", player];
_grav_raza setDropInterval 0.008;

_grav_raza_v = "#particlesource" createVehicleLocal (getpos player);
_grav_raza_v setParticleCircle [0, [0, 0, -3]];
_grav_raza_v setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
_grav_raza_v setParticleParams [["\A3\data_f\VolumeLight", 1, 0, 1], "", "SpaceObject", 1, 8, [0, 0, 0], [0, 0, 0], 13, 1, 5, 0, [15,5,7,1], [[1, 1, 1, 1],[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1]], [0.08], 1, 0, "", "", player];
_grav_raza_v setDropInterval 0.01;


_li1 = "#lightpoint" createVehicle getpos player;
_li1 setLightBrightness 300;
_li1 setLightAmbient[1,0.6,0.2];
//_li1 setLightAmbient[1,1,1];
_li1 setLightColor[1,0,0];
_li1 lightAttachObject [player, [50,50,30]];

[_li1,player] spawn {
	_obj_sound = _this select 0;
	_osil_sound = _this select 1;
	while {alive _obj_sound} do {
		_osil_sound say3d "oscilatie";
		sleep 10;
	};
};

sleep 60;
_eko_impact say3D "ecou";

_val = "#particlesource" createVehicleLocal getPos player;
_val setParticleParams [["A3\Data_F\ParticleEffects\Universal\universal.p3d", 16, 7, 48], "", "Billboard", 1, 7, [0, 0, 0],[0, 0, 0], 0, 1.5, 1, 0, [50, 100], [[0.1, 0.1, 0.1, 0.5], [0.5, 0.5, 0.5, 0.5], [1, 1, 1, 0.3], [1, 1, 1, 0]], [1,0.5], 0.1, 1, "", "", player];
_val setParticleRandom [2, [20, 20, 20], [5, 5, 0], 0, 0, [0, 0, 0, 0.1], 0, 0];
_val setParticleCircle [50, [-80, -80, 2.5]];
_val setDropInterval 0.0002;

[_val] spawn {
	_val_de_sters= _this select 0;
	sleep 1.5;
	deleteVehicle _val_de_sters;
};

deleteVehicle _grav_raza;
deleteVehicle _grav_raza_v;
