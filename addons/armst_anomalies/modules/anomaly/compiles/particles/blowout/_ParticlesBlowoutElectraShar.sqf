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

_sparkParticleSource1 = "#particlesource" createVehicleLocal _this;
_sparkParticleSource1 setParticleCircle [0, [0, 0, 0]];
_sparkParticleSource1 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_sparkParticleSource1 setDropInterval 0.15;
_sparkParticleSource1 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.4,  0.4,  [0,0,1],  [0,0,0],  0,0.3,0.233,0,  [0.1717,0.161,0.107],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true]; 

_sparkParticleSource3 = "#particlesource" createVehicleLocal _this;
_sparkParticleSource3 setParticleCircle [0, [0, 0, 0]];
_sparkParticleSource3 setParticleRandom [0, [0, 0, 1], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_sparkParticleSource3 setDropInterval 0.075;
_sparkParticleSource3 setParticleParams  [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject",  0.27,  0.27,  [0,0,1],  [0,0,0],  0,0.3,0.233,0,  [0.262,0.283,0.282],  [[1,1,1,0.5],[1,1,1,0.1]],  [1],  0,  0,  "",  "",  "",0,true]; 

	_this spawn {
			_empty = "#particlesource" createVehicleLocal _this;
			_empty say3d "anomaly_electra_blowout";
			uiSleep 5;
			deleteVehicle _empty;
	};

	uiSleep 0.5;	
	deleteVehicle _sparkParticleSource1;
	deleteVehicle _sparkParticleSource3;

};