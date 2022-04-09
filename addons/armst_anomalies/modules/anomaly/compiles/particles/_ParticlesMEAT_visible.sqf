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

  _PS setParticleCircle [0.5, [0.05, -0.5, 0.1]];  
  _PS setParticleRandom [0, [0.1,0.1, 0.1], [0.1,0.1, 0.1], 0, 0, [0, 0, 0, 0], 0, 0];
  _PS setParticleParams [["\A3\data_f\ParticleEffects\Universal\Meat_ca.p3d", 1, 0, 1], "", "SpaceObject", 1, 0.95, [0, 0, 1], [0, 0, 0], 0.1, 10, 8.3, 0, [1,4,1], [[1, 1, 0.1, 1]], [1], 0.1, 0.03, "", "", ""]; 
 _PS setDropInterval 0.01; 
  
_PS2 = "#particlesource" createVehiclelocal _this;
_PS2 setParticleCircle [0, [0, 0, 0]];  
 _PS2 setParticleRandom [0, [0, 0, 0], [0, 0, 0.1], 0, 0, [0, 0, 0, 0], 0, 0];  
 _PS2 setParticleParams  [["\A3\data_f\ParticleEffects\Universal\Refract", 1, 0, 1],"","Billboard",1,5,[0,0,1.2],[0,0,0],12,0.5,0.395,0,[0.1,1.5,0.5,1],[[1,1,1,1],[1,1,1,0.7],[1,1,1,0]],[0.1,0.8],0,0, "","",""];  
 _PS2 setDropInterval 5; 

 _light = "armst_idle_gravi2" createVehiclelocal _this;
[_PS, _PS2, _light];

 