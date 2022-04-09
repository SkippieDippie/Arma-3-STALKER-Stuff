/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 08.04.2016
 * Time     : 20:57
`*/


#include "..\__module.sqf";

/* ----------------------------------------------------------------------------
Function:   >>> _AnomalyParticlesCreate

Description:
	

Parameters:
	>>> _this {model_anomaly}

Returns:
	>>> {nil}

---------------------------------------------------------------------------- */

(_this select model_anomaly_position) call compile format["call %1_%2_Particles%3;",stringify(MODULE_FUNC_PREFIX), stringify(MODULE_NAME), (_this select model_anomaly_type)];