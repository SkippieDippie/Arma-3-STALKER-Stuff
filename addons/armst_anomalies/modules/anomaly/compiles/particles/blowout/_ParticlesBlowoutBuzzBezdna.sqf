/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 13.04.2016
 * Time     : 14:06
`*/


#include "..\..\..\__module.sqf";

/* ----------------------------------------------------------------------------
Function:   >>> _ParticlesBlowoutBuzz

Description:
	

Parameters:
	>>> _this {model_position}

Returns:
	>>> {nil}

---------------------------------------------------------------------------- */
_this spawn {
			_empty = "#particlesource" createVehicleLocal _this;
      _empty say3d "anomaly_buzz_hit";
      uiSleep 2;
      deleteVehicle _empty;
};

 nil;