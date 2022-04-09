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
_sharParticleSource1 = "#particlesource" createVehicleLocal _this;
_sharParticleSource1 setParticleParams [["armst_anomalies\anomaly\particles\RefractCaustic.p3d", 5, 0, 16, 1], "","Billboard",1,4,[0,0,0],[0,0,0],0, 1.275, 1, 0,[4.5, 4.6, 4.7, 4.8, 4, 4.8, 4.7, 4.6, 4.5],[[0,0,1,0.5], [0,0,1,1], [0,0,1,3], [0,0,1,5], [0,0,1,4], [1,1,0,5], [0,0,1,3], [0,0,1,1], [0,0,1,0.5]],[1, 1.5, 2, 3, 4, 3, 2, 1.5, 1],0,	1,"","","", 0];
_sharParticleSource1 setParticleRandom [0,[0, 0, 0],[0,0,0],2,0,[0,0,0,0],0,1,360];	
_sharParticleSource1 setDropInterval 2;

_sparkParticleSource1 = "#particlesource" createVehicleLocal _this;
_sparkParticleSource1 setParticleCircle [0, [0, 0, 0]];
_sparkParticleSource1 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_sparkParticleSource1 setDropInterval 0.15;
_sparkParticleSource1 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.4,  0.4,  [0,0,2],  [0,0,0],  0,0.3,0.233,0,  [0.077,0.08,0.077],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];

_sparkParticleSource2 = "#particlesource" createVehicleLocal _this;
_sparkParticleSource2 setParticleCircle [0, [0, 0, 0]];
_sparkParticleSource2 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_sparkParticleSource2 setDropInterval 0.1;
_sparkParticleSource2 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.3,  0.3,  [0,0,2],  [0,0,0],  0,0.3,0.233,0,  [0.065,0.055,0.052],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];

_sparkParticleSource3 = "#particlesource" createVehicleLocal _this;
_sparkParticleSource3 setParticleCircle [0, [0, 0, 0]];
_sparkParticleSource3 setParticleRandom [0, [0, 0, 1], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_sparkParticleSource3 setDropInterval 0.075;
_sparkParticleSource3 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.27,  0.27,  [0,0,2],  [0,0,0],  0,0.3,0.233,0,  [0.03,0.04,0.03],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true];

// [7, _this] call module(TestLandCircle);

[_sharParticleSource1,_sparkParticleSource1, _sparkParticleSource2, _sparkParticleSource3];