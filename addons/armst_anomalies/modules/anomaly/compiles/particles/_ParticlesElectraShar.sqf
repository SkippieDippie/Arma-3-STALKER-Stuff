/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 09.04.2016
 * Time     : 8:47
`*/


#include "..\..\__module.sqf";

/* ----------------------------------------------------------------------------
Function:   >>> _ParticlesElectra

Description:
	

Parameters:
	>>> _this {model_position}

Returns:
	>>> {nil}

---------------------------------------------------------------------------- */


_sparkParticleSource1 = "#particlesource" createVehicleLocal _this;
_sparkParticleSource1 setParticleCircle [0, [0, 0, 0]];
_sparkParticleSource1 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_sparkParticleSource1 setDropInterval 0.01;
_sparkParticleSource1 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.4,  0.4,  [0,0,2],  [0,0,0],  0,0.3,0.233,0,  [0.077,0.08,0.077],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];

_light = "#lightpoint" createVehiclelocal _this;
_light setLightBrightness 1;  
_light setLightAmbient[0,0,0];  
_light setLightColor[0,0.604,0.804];  
_light lightAttachObject [_sparkParticleSource1, [0,0,1.5]];  
_light setLightUseFlare true;  
_light setLightFlareSize 10;  
_light setLightDayLight true;  
_light setLightFlareMaxDistance 50;

	_light = "armst_idle_ElectraIdle" createVehiclelocal _this;
// [7, _this] call module(TestLandCircle);

[_sparkParticleSource1,_light];