/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 13.04.2016
 * Time     : 14:07
`*/


#include "..\..\..\__module.sqf";

/* ----------------------------------------------------------------------------
Function:   >>> _ParticlesHitBuzz

Description:
	

Parameters:
	>>> _this {model_position}

Returns:
	>>> {nil}

---------------------------------------------------------------------------- */

_this spawn {

	private ["_underWaterSmokeParticleSource"];

	_underWaterSmokeParticlesource  = "#particlesource" createVehicleLocal _this;
	_light                          = "#lightpoint" createVehicleLocal _this;

	_underWaterSmokeParticleSource setParticleCircle [0.1, [0, 0, 0]];
	_underWaterSmokeParticleSource setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
	_underWaterSmokeParticleSource setDropInterval 0.1;
	_underWaterSmokeParticleSource setParticleParams [["\A3\data_f\ParticleEffects\Universal\UnderWaterSmoke",4,0,15,1], "",
	"Billboard", 1, 1, [0,0,-0.3], [0,0,0], 0, 0.3, 0.27, 0, [1], [[1,1,1,1]], [1], 0, 0, "", "", "",0,true];

  _light setLightBrightness 0.1;
  _light setLightAmbient[0,20,0];
  _light setLightColor[0, 1, 0];
  _light lightAttachObject [_underWaterSmokeParticleSource, [0,0,1]];

	uiSleep 0.5;
	deleteVehicle _underWaterSmokeParticleSource;
	uiSleep 0.5;
	deleteVehicle _light;
};

_this spawn {
			_empty = "#particlesource" createVehicleLocal _this;
      _empty say3d "anomaly_buzz_hit";
      uiSleep 2;
      deleteVehicle _empty;
};

