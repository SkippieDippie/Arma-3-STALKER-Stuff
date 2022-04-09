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

// искажения
_source = "#particlesource" createVehicleLocal _this;
		_source setParticleCircle [2, [0, 0, 0]];
		_source setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.5, [0, 0, 0, 0.1], 0, 0];
		_source setParticleParams [["\A3\data_f\cl_leaf", 1, 0, 1], "", "SpaceObject", 1, 7, [0, 0, 0], [0, 0, 0.5], 0, 10, 7.9, 0.075, [2, 2, 0.01], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [6, 5, 5], 1, 0, "", "", true];
		_source setDropInterval 0.2;

// листва (медленнно кружатся)

// листва (медленнно кружатся)
_leafParticleSource = "#particlesource" createVehicleLocal _this;
_leafParticleSource setParticleCircle [3.5, [0.7, -1, 0.4]];
_leafParticleSource setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_leafParticleSource setParticleParams [["\A3\data_f\cl_leaf2", 1, 0, 1], "", "SpaceObject", 1, 2.5, [0, 0, 0], [0, 0, 0], 0.2, 10, 7.83, 0, [1,1], [[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 0]], [1], 0.2, 0.05, "", "", ""];
_leafParticleSource setDropInterval 0.1;
// [5, _this] call module(TestLandCircle);

 _light = "armst_idle_kostolom_idle" createVehiclelocal _this;
 
[_source, _leafParticleSource, _light];

 