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
_PS setParticleCircle [1, [0, 0, 0]]; 
_PS setParticleRandom [0, [3, 3, 0], [0.25, 0.25, 0], 0, 1.5, [0, 0, 0, 0], 0, 0]; 
_PS setParticleParams ["ca\Data\kouleSvetlo", "", "billboard", 1, 5, [0,0,1.5], [0, 0, 0], 5, 0.05, 0.039, 0, [0.2,0.4,0.2], [[1,1,1,0.3],[0.5,0.46,0.81,0.4],[1,0,0,0]], [0.2], 0.2, 0.25, "\armst_anomalies\modules\anomaly\compiles\particles\SOULS_hit.sqf", "", ""]; 
_PS setDropInterval 0.9;

_PS2 = "armst_idle_monolith_idle" createVehiclelocal _this;

_light = "#lightpoint" createVehiclelocal _this;
_light setLightBrightness 0.3; 
_light setLightAmbient[0,1,1]; 
_light setLightColor[0,0.604,0.804]; 
_light lightAttachObject [_PS, [0,0,1.5]]; 
_light setLightUseFlare true; 
_light setLightFlareSize 1; 
_light setLightDayLight true; 
_light setLightFlareMaxDistance 20;

[_PS, _PS2,_light];

 