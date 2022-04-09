/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 08.04.2016
 * Time     : 21:33
`*/


#include "..\..\..\__module.sqf";

/* ----------------------------------------------------------------------------
Function:   >>> _ParticlesBlowoutGravy

Description:
	

Parameters:
	>>> _this {model_position}

Returns:
	>>> {nil}

---------------------------------------------------------------------------- */


// взрыв в центре аномалии
_this spawn {
	uiSleep(2);
	_blowoutParticleSource = "#particlesource" createVehicleLocal _this;
	_blowoutParticleSource setParticleCircle [0, [0, 0, 0]];
	_blowoutParticleSource setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
	_blowoutParticleSource setParticleParams [["armst_anomalies\particleeffects\AnomalySpriteSet", 16, 3, 8, 1], "", "Billboard", 0.05, 0.4, [0, 0, 1.5], [0, 0, 0], 0, 10, 7.83, 0, [2], [[1, 1, 1, 0.3]], [4], 0, 0, "", "", ""];
	_blowoutParticleSource setDropInterval 0.4;

	uiSleep 0.4;
	deleteVehicle _blowoutParticleSource;
};

// todo : добавить пыль?
_this spawn {
	_source = "#particlesource" createVehicleLocal _this;
		_source setParticleCircle [0, [0, 0, 0]];
		_source setParticleRandom [0, [0.25, 0.25, 0], [0, 0, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
		_source setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d", 1, 0, 1], "", "Billboard", 2, 1, [0, 0, 1], [0, 0, 0], 0, 10, 7.9, 0.075, [0, 10, 5], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", true];
		_source setDropInterval 0.05;

	uiSleep 2;
	deleteVehicle _source;
};

_this spawn {
	// проигрывание звука аномалии.
	_empty = "#particlesource" createVehicleLocal _this;
	_empty say3d "azSndAnomGraviHitPlus";
	uiSleep 5;
	deleteVehicle _empty;
};

nil;
 