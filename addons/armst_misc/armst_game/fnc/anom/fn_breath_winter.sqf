
private ["_footmobile","_alias_breath","_vapors","_stamina_pl","_stamina_pl_fresh","_obo"];

if (!hasInterface) exitWith {};
armst_winter = 1;

sleep 2+random 10;

_footmobile = _this select 0;

_alias_breath = "Land_HelipadEmpty_F" createVehicle (getpos _footmobile);
_alias_breath attachto [_footmobile,[0,0.17,0], "neck"];

_stamina_pl_fresh = getStamina player;

	while {armst_winter != 0} do {
		_stamina_pl = getStamina player;
		_obo = 3*(_stamina_pl/_stamina_pl_fresh)+0.25;
		sleep _obo;		
		_vapors = "#particlesource" createVehicleLocal getpos _alias_breath;
		_vapors setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 13,0],"","Billboard",0.5,0.5,[0,0,0],[0, 0.5, -0.2],1, 1.275,1, 0,[0, 0.2,0],[[1,1,1, random 0.05], [1,1,1, 0.01], [1,1,1, 0]],[1000],1,0.04,"","",_alias_breath];
		_vapors setParticleRandom [2, [0, 0, 0], [0.25, 0.25, 0.25], 0, 0.5, [0, 0, 0, 0.1], 0, 0, 10];
		_vapors setDropInterval 0.001;
		_armst_snow = "#particlesource" createVehicleLocal (position player);  
		_armst_snow setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal.p3d",16,12,8,1],"","Billboard",1,20,[0,0,0],[0,0,0],1,0.000001,0,1.4,[0.1,0.1],[[1,1,1,1]],[0,1],0.2,1.2,"","",vehicle player];
		_armst_snow setParticleRandom [0,[30,30,20],[0,0,0],0,0.01,[0,0,0,0.1],0,0];
		_armst_snow setParticleCircle [0,[0,0,0]];
		_armst_snow setDropInterval 0.0005;
		sleep 4+random 0.5;
		deleteVehicle _vapors;
		deleteVehicle _armst_snow;
	};
	deletevehicle _alias_breath;