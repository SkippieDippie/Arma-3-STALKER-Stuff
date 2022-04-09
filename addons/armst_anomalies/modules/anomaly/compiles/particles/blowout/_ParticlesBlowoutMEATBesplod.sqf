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

	_PS2 = "#particlesource" createVehicleLocal _this;
	 
	_PS2 setParticleCircle [2, [1.1, -2, 5.3]];
	_PS2 setParticleRandom [0, [0.1, 0.1, 0.1], [0.1, 0.1, 0.1], 0, 0, [0, 0, 0, 0], 0, 0];
	_PS2 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Meat_ca.p3d", 1, 0, 1], "", "SpaceObject", 1, 1.01, [0, 0, 0], [0, 0, 0], 0.4, 150, 6, 0, [0.01,4,5,0.01], [[1, 1, 0.1, 1]], [1], 0.1, 0.03, "", "", ""];
	_PS2 setDropInterval 0.01;
 
	_PS1 = "#particlesource" createVehicleLocal _this;
 
	 _PS1 setParticleCircle [0, [0, 0, 0.6]];
	 _PS1 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0,0,0,0], 0, 0];
	 _PS1 setDropInterval 0.1;
	 _PS1 setParticleParams  [["\A3\data_f\ParticleEffects\Universal\Refract", 1, 0, 1],"","Billboard",1,1,[0,0,1],[0,0,0],  0,  0.5,  0.395,  0,[2, 3],[[1,1,1,1],[1,1,1,0.9], [1,1,1,0]],[1],0,0,"","",""];
	 
	uiSleep 1.6;
	// удаляем листья перед взрывом
	deleteVehicle _PS2;
	deleteVehicle _PS1;

	// ВЗРЫВ! (на 2 секунде)

	// искажение (ударная волна) todo: может удалить?
	_refractParticleSource = "#particlesource" createVehicleLocal _this;
	_refractParticleSource setParticleCircle [0, [0, 0, 0.3]];
	_refractParticleSource setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0,0,0,0], 0, 0];
	_refractParticleSource setDropInterval 1;
	_refractParticleSource setParticleParams  [["\A3\data_f\ParticleEffects\Universal\Refract", 1, 0, 1],"","Billboard",1,1,[0,0,1.5],[0,0,0],  0,  0.5,  0.395,  0,         [0, 12],       [[1,1,1,1],[1,1,1,0.9], [1,1,1,0]],[1],0,0,"","",""];

	_source = "#particlesource" createVehicleLocal _this;
	_source setParticleCircle [0, [0, 0, 0]];
	_source setParticleRandom [0, [0.25, 0.25, 0], [3, 3, 5], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
	_source setParticleParams [["\A3\data_f\ParticleEffects\Universal\Meat_ca.p3d", 1, 0, 1], "", "SpaceObject", 0.5, 5, [0, 0, 0.5], [0, 0, 10], 0.5, 50, 7.9, 0.075, [10, 10, 10], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", 0,0,true,0.1];
	_source setDropInterval 0.2;
	uiSleep 4;
	deleteVehicle _source;
	deleteVehicle _refractParticleSource;
};

_this spawn {
	// проигрывание звука аномалии.
	_empty = "#particlesource" createVehicleLocal _this;
	_empty say3d "MEAT_ACTIVATE";
	uiSleep 2;
	_empty say3d "MEAT_HIT";
	uiSleep 5;
	deleteVehicle _empty;
};

nil;
 