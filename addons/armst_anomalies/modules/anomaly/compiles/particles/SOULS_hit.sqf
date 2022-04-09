
private ["_victims", "_pos", "_PS"];

_victims = nearestObjects [[(_this select 0),(_this select 1), 0], ["Man"], 1];
if({alive _x} count _victims != 0)then{
	_pos = [(_this select 0),(_this select 1), 0];
	_pos = getpos (_victims select 0);
	//(_victims select 0) say3d "anomal_activate_souls";
	_PS2 = "#particlesource" createVehicle _pos;
	 _PS2 setParticleCircle [2, [1, -1, 0.2]]; 
	 _PS2 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0]; 
	_PS2 setParticleParams ["ca\Data\kouleSvetlo", "", "billboard", 1, 5, [0,0,1.5], [0, 0, 0], 0.001, 10, 7.83, 0, [0.2,0.4,0.2], [[1,1,1,0.3],[0.5,0.46,0.81,0.4],[1,0,0,0]], [0.2], 0.2, 0.25, "", "", ""]; 
	_PS2 setDropInterval 0.1;
	_light = "#lightpoint" createVehicleLocal _pos; 
	_light setLightBrightness 0.3; 
	_light setLightAmbient[0,1,1]; 
	_light setLightColor[0,0.604,0.804]; 
	_light lightAttachObject [_PS2, [0,0,1.5]]; 
	_light setLightUseFlare true; 
	_light setLightFlareSize 4; 
	_light setLightDayLight true; 
	_light setLightFlareMaxDistance 80;
	sleep 3;
	_light setLightBrightness 1; 
	_light setLightFlareSize 20; 
	_light setLightFlareMaxDistance 100;
	_PS = "#particlesource" createVehicle _pos;
	_PS setParticleCircle [0, [0, 0, 0]];
	_PS setParticleRandom [0, [2, 2, 0], [0.25, 0.25, 0], 0, 1.5, [0, 0, 0, 0], 0, 0];
	_PS setParticleParams ["ca\Data\kouleSvetlo", "", "billboard", 1, 1, [0,0,1.7], [0, 0, 0], 5, 0.05, 0.04, 0, [0.5,5,15], [[1,0,0,1],[0,0,1,0.5],[1,1,1,0]], [0.2], 0.2, 0.25, "", "", _victims select 0];
	_PS setDropInterval 3;
	(_victims select 0) say3d "anomal_hit_souls";
	sleep 1;
	deleteVehicle _PS;
	deleteVehicle _PS2;
	deleteVehicle _light;
	(_victims select 0) setdammage 0.8;
};