
#include "..\..\..\__module.sqf";

/* ----------------------------------------------------------------------------
Function:   >>> _ParticlesBlowoutTrampoline

Description:
	

Parameters:
	>>> _this {model_position}

Returns:
	>>> {nil}

---------------------------------------------------------------------------- */

_this spawn {
	_hitParticleSource = "#particlesource" createVehicleLocal _this;
	_hitParticleSource setParticleCircle [0, [0, 0, 0]];
	_hitParticleSource setParticleRandom [0, [0, 0, 0], [0, 0, 0], 2, 0, [0, 0, 0, 0], 0, 0];
	_hitParticleSource setParticleParams [["armst_anomalies\particleeffects\AnomalySpriteSet", 8, 0, 1], "", "Billboard", 1, 1, [0, 0, 0], [0, 0, 0], 2, 10, 7.83, 0, [2], [[1, 1, 1, 0.4],[1, 1, 1, 0.2],[1, 1, 1, 0]], [1], 0, 0, "", "", ""];
	_hitParticleSource setDropInterval 1.2;

	uiSleep 0.4;
	deleteVehicle _hitParticleSource;
};

_this spawn {
	_empty = "#particlesource" createVehicleLocal _this;
  _empty say3d "anomaly_gravy_hit";
  uiSleep 0.4;
  deleteVehicle _empty;

};

nil;