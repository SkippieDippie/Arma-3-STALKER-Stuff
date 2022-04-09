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

	_underWaterParticleSource = "#particlesource" createVehicleLocal _this;
	_smokeParticleSource = "#particlesource" createVehicleLocal _this;
	_light = "#lightpoint" createVehicleLocal _this;
	_underWaterParticleSource setParticleCircle [2, [0, 0, 0]];
	_underWaterParticleSource setParticleRandom [0, [2, 2, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
	_underWaterParticleSource setDropInterval 0.1;
	_underWaterParticleSource setParticleParams [["\A3\data_f\ParticleEffects\Universal\UnderWaterSmoke",4,0,15,1], "",
	"Billboard", 10, 10, [0,0,-0.3], [0,0,0], 0, 0.3, 0.2353, 0, [1], [[1,1,1,1]], [1], 0, 0, "", "", "",0,true];

	_smokeParticleSource setParticleCircle [2, [0, 0, 0]];
	_smokeParticleSource setParticleRandom [0, [2, 2, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
	_smokeParticleSource setDropInterval 0.1;
	_smokeParticleSource setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal",16,12,8,1], "",
	"Billboard", 10, 10, [0,0,0], [0,0,0], 0, 0.3, 0.2353, 0, [1.2], [[1,1,1,1]], [0.5], 0, 0, "", "", "",0,true];

	_light = "armst_idle_studen" createVehiclelocal _this;

	// [4, _this] call module(TestLandCircle);

[_underWaterParticleSource, _smokeParticleSource, _light];