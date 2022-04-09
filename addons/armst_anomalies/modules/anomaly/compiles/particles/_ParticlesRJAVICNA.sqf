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

 _PS setParticleCircle [2, [1, -1, 0.2]]; 
 _PS setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0]; 
 _PS setParticleParams [["\xRay_objects\misc\garbarage\garbarage_musor7", 1, 0, 1], "", "SpaceObject", 0.6, 2.5, [0, 0, 1.1], [0, 0, 0], 0.001, 10, 7.83, 0, [0.1,0.2,0.1], [[0, 0, 0, 0]], [1], 50, 100.05, "", "", ""]; 
 _PS setDropInterval 0.1;
  
 
_PS2 = "#particlesource" createVehiclelocal _this;
 _PS2 setParticleCircle [2, [0, -1, 0.3]];  
 _PS2 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];  
 _PS2 setParticleParams [["\armst\armst_item\armst_bolts\Models\Bolt", 1, 0, 1], "", "SpaceObject", 1, 2.5, [0, 0, 0.9], [0, 0, 0], 3, 10, 7.83, 0, [0.1,1,0.1], [[0, 0, 0, 0]], [150], 0.2, 0.05, "", "", ""];  
 _PS2 setDropInterval 0.8;
 
_PS3 = "#particlesource" createVehiclelocal _this;
 _PS3 setParticleCircle [0, [0, 0, 0]]; 
 _PS3 setParticleRandom [0, [0, 0, 0], [0, 0, 0.1], 0, 0, [0, 0, 0, 0], 0, 0]; 
 _PS3 setParticleParams  [ 
  ["\A3\data_f\ParticleEffects\Universal\Refract", 1, 0, 1],"","Billboard",1,2,[0,0,1.2],[0,0,0],12,0.5,0.395,0,[0.1,1,0.5,1],[[1,1,1,1],[1,1,1,0.7],[1,1,1,0]],[0.1,0.8],0,0,"","",""]; 
 _PS3 setDropInterval 1;
// [5, _this] call module(TestLandCircle);

 _light = "armst_idle_monolith_idle" createVehiclelocal _this;
[_PS, _PS2, _PS3, _light];

 