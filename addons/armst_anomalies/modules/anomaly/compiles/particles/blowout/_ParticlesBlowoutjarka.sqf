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



// todo : добавить пыль?
_this spawn {

	_PS = "#particlesource" createVehicleLocal _this;
  _PS setParticleCircle [0.1, [0, 0, 0]]; 
  _PS setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0]; 
  _PS setParticleParams [["\armst_anomalies\anomaly\particles\flame", 1, 0, 1],
  "", "Billboard", 2,  0.8, [0, 0, 0], [0, 0, 0.75], 0, 2, 7, 1, [0.1, 0.2, 0.1], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 1], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", true]; 
  _PS setDropInterval 0.01;
  
_PS3 = "#particlesource" createVehicleLocal _this;
_PS3 setParticleCircle [0.01, [0, 0, 0]]; 
_PS3 setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0]; 
_PS3 setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],
 "", "Billboard", 2,  0.8, [0, 0, 0], [0, 0, 0.75], 0, 3, 7, 1, [0.5, 1, 0.5], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 1], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", true]; 
_PS3 setDropInterval 0.01;

_PS2 = "#particlesource" createVehicleLocal _this;
 _PS2 setParticleCircle [0.2, [0, 0, 0]]; 
  _PS2 setParticleCircle [0.2, [0, 0, 0]]; 
  _PS2 setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0]; 
  _PS2 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract", 1, 0, 1],
  "", "Billboard", 2,  0.8, [0, 0, 0], [0, 0, 0.75], 0, 4, 8, 1, [0.6, 1.4, 1], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 1], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", true]; 
  _PS2 setDropInterval 0.05;
  
_light = "#lightpoint" createVehicleLocal _this;
	_light setLightBrightness 0.5;
	_light setLightAmbient[1,0.498,0.141];
	_light setLightColor[1,0.498,0.141];
	_light lightAttachObject [_PS2, [0,0,1]];
	
	uiSleep 1.6;
	deleteVehicle _PS;
	deleteVehicle _PS3;
	uiSleep 0.6;
	deleteVehicle _PS2;
	deleteVehicle _light;
};

_this spawn {
	// проигрывание звука аномалии.
	_empty = "#particlesource" createVehicleLocal _this;
	_empty say3d "azSndAnomBurnHit";
	uiSleep 1.8;
	deleteVehicle _empty;
};

nil;
 