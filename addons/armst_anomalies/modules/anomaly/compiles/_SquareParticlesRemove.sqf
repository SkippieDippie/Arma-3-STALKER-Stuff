/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 09.04.2016
 * Time     : 1:03
`*/


#include "..\__module.sqf";

/* ----------------------------------------------------------------------------
Function:   >>> _SquareParticlesRemove

Description:
	Удаляет все партиклы аномалий из заданного квадтата

Parameters:
	>>> _this {number} - id квадрата

Returns:
	>>> {nil}

---------------------------------------------------------------------------- */
if ((_this >=0) AND (_this < module(_squaresCount))) then {
	// foreach
	{
		deleteVehicle _x;
	} foreach (module(_squareParticles) select _this);

	// обнуляем массив с париклами
	module(_squareParticles) set [_this, []];
};