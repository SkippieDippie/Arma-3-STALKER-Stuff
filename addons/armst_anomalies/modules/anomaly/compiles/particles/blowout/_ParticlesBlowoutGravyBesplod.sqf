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

	// листья (низ)
	_leafParticleSource1 = "#particlesource" createVehicleLocal _this;
	_leafParticleSource1 setParticleCircle [4, [0.2, -4, -0.3]];
	_leafParticleSource1 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
	_leafParticleSource1 setParticleParams [["\A3\data_f\cl_leaf2", 1, 0, 1], "", "SpaceObject", 1, 0.95, [0, 0, 0], [0, 0, 0], 0.1, 10, 10, 0, [1,1], [[1, 1, 0.1, 1]], [1], 0.1, 0.03, "", "", ""];
	_leafParticleSource1 setDropInterval 0.01;
	// листья (верх)
	_leafParticleSource2 = "#particlesource" createVehicleLocal _this;
	_leafParticleSource2 setParticleCircle [3, [0.5, -1.7, 6.2]];
	_leafParticleSource2 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
	_leafParticleSource2 setParticleParams [["\A3\data_f\cl_leaf2", 1, 0, 1], "", "SpaceObject", 1, 1.01, [0, 0, 0], [0, 0, 0], 0.4, 100, 7.3, 0, [1,1], [[1, 1, 0.1, 1]], [1], 0.1, 0.03, "", "", ""];
	_leafParticleSource2 setDropInterval 0.01;
	
	uiSleep 1.6;
	// удаляем листья перед взрывом
	deleteVehicle _leafParticleSource1;
	deleteVehicle _leafParticleSource2;

	// ВЗРЫВ! (на 2 секунде)

	// искажение (ударная волна) todo: может удалить?
	_refractParticleSource = "#particlesource" createVehicleLocal _this;
	_refractParticleSource setParticleCircle [0, [0, 0, 0.3]];
	_refractParticleSource setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0,0,0,0], 0, 0];
	_refractParticleSource setDropInterval 1;
	_refractParticleSource setParticleParams  [["\A3\data_f\ParticleEffects\Universal\Refract", 1, 0, 1],"","Billboard",1,1,[0,0,1.5],[0,0,0],  0,  0.5,  0.395,  0,         [0, 12],       [[1,1,1,1],[1,1,1,0.9], [1,1,1,0]],[1],0,0,"","",""];

	// листья (много листьев разлетающиеся из центра аномалии)
	_leafParticleSource3 = "#particlesource" createVehicleLocal _this;
	_leafParticleSource3 setParticleCircle [0, [0, 0, 0]];
	_leafParticleSource3 setDropInterval 0.001;
	_leafParticleSource3 setParticleParams  [["\A3\data_f\cl_leaf2", 1, 0, 1],"","SpaceObject",1,4,[0,0,1.5],[0,0,0],  0.1,  0.5,  0.38,  0,  [1],  [[1,1,1,1]],[3],0.01,0.8,"","",""];
	uiSleep 0.4;
	deleteVehicle _leafParticleSource3;
	uiSleep 0.6;
	deleteVehicle _refractParticleSource;
};

_this spawn {
	// проигрывание звука аномалии.
	_empty = "#particlesource" createVehicleLocal _this;
	_empty say3d "anomaly_gravy_blowout";
	uiSleep 5;
	deleteVehicle _empty;
};

nil;
 