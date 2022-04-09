/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 17.04.2016
 * Time     : 15:28
`*/


#include "..\..\__module.sqf";

/* ----------------------------------------------------------------------------
Function:   >>> _TestLandCircle

Description:
	Огружность из желтого дыма над землей (для обозначения границ аномалий в время отладки)

Parameters:
	>>> _radius   {number}          - радиус окружности
	>>> _position {model_position}  - координаты центра

Returns:
	>>> {particleSourceObject}

---------------------------------------------------------------------------- */

private ["_radius", "_position"];

_radius   = _this select 0;
_position = _this select 1;

_testCircleParticle = "#particlesource" createVehicleLocal _position;
_testCircleParticle setParticleCircle [_radius, [0, 0, 0]];
_testCircleParticle setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_testCircleParticle setDropInterval 0.1;
_testCircleParticle setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal",16,12,8,1], "",
"Billboard", 10, 10, [0,0,0], [0,0,0], 0, 0.3, 0.2353, 0, [0.5], [[0.7,0.7,0.1,1]], [0.5], 0, 0, "", "", "",0,true];

_testCircleParticle;