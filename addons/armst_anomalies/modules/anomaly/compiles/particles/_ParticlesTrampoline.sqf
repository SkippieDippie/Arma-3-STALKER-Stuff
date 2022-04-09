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
_leafParticleSource = "#particlesource" createVehicleLocal _this;
_leafParticleSource setParticleCircle [3.5, [0.7, -1, 0.4]];
_leafParticleSource setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_leafParticleSource setParticleParams [["\A3\data_f\cl_leaf2", 1, 0, 1], "", "SpaceObject", 1, 2.5, [0, 0, 0], [0, 0, 0], 0.2, 10, 7.83, 0, [1,1], [[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 0]], [1], 0.2, 0.05, "", "", ""];
_leafParticleSource setDropInterval 0.1;

 _light = "armst_idle_GraviIdle" createVehiclelocal _this;
 
 
[_refractParticleSource, _leafParticleSource, _light];

 