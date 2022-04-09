/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 08.04.2016
 * Time     : 21:30
`*/


#include "..\..\__module.sqf";

/* ----------------------------------------------------------------------------
Function:   >>> _ParticlesGravy

Description:
	

Parameters:
	>>> _this {model_position}

Returns:
	>>> {particleSourceObject[]}

---------------------------------------------------------------------------- */


_PS3 = "#particlesource" createVehiclelocal _this;
_PS3 setParticleCircle [0, [0, 0, 0.6]];
_PS3 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0,0,0,0], 0, 0];
_PS3 setDropInterval 4;
_PS3 setParticleParams  [["\A3\data_f\ParticleEffects\Universal\Refract", 1, 0, 1],"","Billboard",1,5,[0,0,1],[0,0,0],  0,  0.5,  0.395,  0,         [2, 3],       [[1,1,1,1],[1,1,1,0.9], [1,1,1,0]],[1],0,0,"","",""];
 
  
_sparkParticleSource1 = "#particlesource" createVehiclelocal _this;
_sparkParticleSource1 setParticleCircle [0, [0, 0, 0]]; 
_sparkParticleSource1 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0]; 
_sparkParticleSource1 setDropInterval 0.1; 
_sparkParticleSource1 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.4,  5,  [0,0,1.4],  [0,0,0],  0,0.3,0.235,0,  [0.009,0.008,0.009],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true]; 

 
_sparkParticleSource3 = "#particlesource" createVehiclelocal _this;
_sparkParticleSource3 setParticleCircle [8, [0, 0, 0]];
_sparkParticleSource3 setParticleRandom [0, [0, 0, 1], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_sparkParticleSource3 setDropInterval 0.075;
_sparkParticleSource3 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.27,  0.27,  [0,0,0.6],  [0,0,0],  0,0.3,0.233,0,  [0.011,0.01,0.011],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];

_sparkParticleSource4 = "armst_idle_teleport_idle" createVehiclelocal _this;

_light = "#lightpoint" createVehiclelocal _this;
_light setLightBrightness 1;  
_light setLightAmbient[0,0,0];  
_light setLightColor[0,0.604,0.804];  
_light lightAttachObject [_PS3, [0,0,1.5]];  
_light setLightUseFlare true;  
_light setLightFlareSize 5;  
_light setLightDayLight true;  
_light setLightFlareMaxDistance 50;

[_sparkParticleSource1, _sparkParticleSource3, _sparkParticleSource4, _PS3, _light];

 