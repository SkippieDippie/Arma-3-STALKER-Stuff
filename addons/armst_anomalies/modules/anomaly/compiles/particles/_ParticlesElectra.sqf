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
_sparkParticleSource1 setParticleCircle [0.3, [0, 0, 0]];
_sparkParticleSource1 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_sparkParticleSource1 setDropInterval 0.019;
_sparkParticleSource1 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.4,  0.4,  [0,0,0.3],  [0,0,0],  0,0.3,0.233,0,  [0.067,0.07,0.067],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];

_sparkParticleSource2 = "#particlesource" createVehicleLocal _this;
_sparkParticleSource2 setParticleCircle [5, [0, 0, 0]];
_sparkParticleSource2 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_sparkParticleSource2 setDropInterval 0.01;
_sparkParticleSource2 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.3,  0.3,  [0,0,0.3],  [0,0,0],  0,0.3,0.233,0,  [0.042,0.045,0.042],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];

_sparkParticleSource3 = "#particlesource" createVehicleLocal _this;
_sparkParticleSource3 setParticleCircle [4, [0, 0, 0]];
_sparkParticleSource3 setParticleRandom [0, [0, 0, 1], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_sparkParticleSource3 setDropInterval 0.005;
_sparkParticleSource3 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.27,  0.27,  [0,0,0.3],  [0,0,0],  0,0.3,0.233,0,  [0.018,0.02,0.018],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];


_light = "#lightpoint" createVehiclelocal _this;
_light setLightBrightness 0.3;  
_light setLightAmbient[0,0,0];  
_light setLightColor[0,0.604,0.804];  
_light lightAttachObject [_sparkParticleSource3, [0,0,1.5]];  

	_light = "armst_idle_ElectraIdle" createVehiclelocal _this;

// [7, _this] call module(TestLandCircle);

[_sparkParticleSource1, _sparkParticleSource2, _sparkParticleSource3, _light];