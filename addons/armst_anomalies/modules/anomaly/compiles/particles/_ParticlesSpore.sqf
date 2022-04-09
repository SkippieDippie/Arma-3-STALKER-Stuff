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


_PS = "#particlesource" createVehiclelocal _this;
        _PS setParticleParams [    
        ["\A3\Data_F\ParticleEffects\Universal\universal.p3d" , 16, 12, 15, 0], "", "Billboard", 1, 15,    
            [0, 0, 2], [0, 0, 0], 1, 1.275, 1, 0,    
            [7,6], [[0,0.2,0,0.1], [0,0.2,0,0.1], [0,0.2,0,0.1]], [1000], 1, 0, "", "", true    
        ];    
        _PS setParticleRandom [3, [30, 30, 0.2], [0, 0, -0.1], 2, 0.45, [0, 0, 0, 0.1], 0, 0];    
        _PS setParticleCircle [0.001, [0, 0, -0.12]];    
        _PS setDropInterval 0.01;

[_PS];

 