/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 09.04.2016
 * Time     : 8:52
`*/


#include "..\..\..\__module.sqf";

/* ----------------------------------------------------------------------------
Function:   >>> _ParticlesBlowoutElectra

Description:
	

Parameters:
	>>> _this {model_position}

Returns:
	>>> {nil}

---------------------------------------------------------------------------- */


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
_this spawn {
	// проигрывание звука аномалии.
	_empty = "#particlesource" createVehicleLocal _this;
	_empty say3d "kostolom_activated";
	uiSleep 8;
	deleteVehicle _empty;
};


nil;