/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 08.04.2016
 * Time     : 21:30
`*/


#include "..\..\__module.sqf";

/* ----------------------------------------------------------------------------
Function:   >>> _ParticlesGravy

Description:
	

Parameters:
	>>> _this {model_position}

Returns:
	>>> {particleSourceObject[]}

---------------------------------------------------------------------------- */

// искажения

_refractParticleSource = "#particlesource" createVehicleLocal _this;
_refractParticleSource setParticleCircle [0, [0, 0, 0]];   
_refractParticleSource setParticleRandom [0, [3, 3, 0], [0.2, 0.2, 0], 0, 0, [0, 0, 0, 0], 0, 0];    
_refractParticleSource setDropInterval 0.1;                                  
_refractParticleSource setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract",1,0,1,1], "",             
"Billboard", 10, 10, [0,0,-0.131], [0,0,0], 0, 0.3, 0.24, 0, [0.5, 0.4, 0], [[0.3,0.6,0.1,1]], [1], 0, 0, "", "", "",0,true]; 


// искры
_leafParticleSource = "#particlesource" createVehicleLocal _this;
_leafParticleSource setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal", 16, 2, 32, 1],"","Billboard",1,0.7,[0, 0, 0],[0, 0, 5],0,0.05,0.04,0.05,[0.05],[[1, 0.5, 0.4, 1],[1, 0.5, 0.4, 1],[1, 0.5, 0.4, 1], [1,1,1, 1]],[0.8, 0.3, 0.2],0.3,1,"","","", 0,false, 0,[[2000,2000,2000,0]]]; 
_leafParticleSource setParticleRandom [0.4,[3, 3, 0.2],[0.5, 0.5, 0.1],0.2,0.2,[0, 0, 0, 0],0.1,0.5];
_leafParticleSource setDropInterval (0.1);
// [5, _this] call module(TestLandCircle);


 _light = "armst_idle_BurnIdle" createVehiclelocal _this;





[_refractParticleSource, _leafParticleSource, _light];

 