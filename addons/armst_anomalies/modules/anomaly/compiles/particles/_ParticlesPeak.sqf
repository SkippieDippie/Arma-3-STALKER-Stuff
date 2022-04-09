/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 13.04.2016
 * Time     : 14:07
`*/


#include "..\..\__module.sqf";

/* ----------------------------------------------------------------------------
Function:   >>> _ParticlesBuzz

Description:
	

Parameters:
	>>> _this {model_position}

Returns:
	>>> {nil}

---------------------------------------------------------------------------- */

_source = "#particlesource" createVehicleLocal _this; 
_source setParticleCircle [0, [0, 0, 0]]; 
_source setParticleRandom [0, [10, 10, 0], [0.25, 0.25, 0], 0, 1.5, [0, 0, 0, 0], 0, 0]; 
_source setParticleParams [["\a3\data_f\ParticleEffects\Pstone\Pstone.p3d", 8, 3, 1], "", "SpaceObject", 1, 5, [0, 0, 2], [0, 0, -2], 1, 1.17, 1, 0.2, [0.1, 0.3, 0.1], [[1, 1, 1 ,1], [1, 1, 1, 1], [1, 1, 1, 1]], [0, 1], 1, 0, "", "", true]; 
_source setDropInterval 0.02;
_light = "armst_silovoepole2" createVehiclelocal _this;

	// [4, _this] call module(TestLandCircle);

[_source, _light];