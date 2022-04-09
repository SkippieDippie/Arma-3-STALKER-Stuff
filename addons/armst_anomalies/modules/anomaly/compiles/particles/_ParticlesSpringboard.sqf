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
_refractParticleSource = "#particlesource" createVehicleLocal _this;
_refractParticleSource setParticleCircle [0, [0, 0, 0.3]];
_refractParticleSource setParticleRandom [0.5, [0.5, 0.5, 0.2], [0.1, 0.1, 0.1], 0.1, 0.1, [0.1, 0.1, 0.1, 0.1], 0.1, 0.1];
_refractParticleSource setParticleParams  [
	["\A3\data_f\ParticleEffects\Universal\Refract", 1, 0, 1],"","Billboard",1,5,[0,0,1],[0,0,0],12,0.5,0.395,0,[0.3,4,3,4],[[1,1,1,1],[1,1,1,0.7],[1,1,1,0]],[0.1,0.8],0,0,"","",""];
_refractParticleSource setDropInterval 4;

// листва (медленнно кружатся)

_source = "#particlesource" createVehicleLocal _this;
		_source setParticleCircle [2, [0, 0, 0]];
		_source setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.5, [0, 0, 0, 0.1], 0, 0];
		_source setParticleParams [["\A3\data_f\cl_leaf", 1, 0, 1], "", "SpaceObject", 1, 7, [0, 0, 0], [0, 0, 0.5], 0, 10, 7.9, 0.075, [2, 2, 0.01], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [6, 5, 5], 1, 0, "", "", true];
		_source setDropInterval 0.2;

// [5, _this] call module(TestLandCircle);


 _light = "armst_idle_emi_idle" createVehiclelocal _this;
[_refractParticleSource, _source, _light];

 