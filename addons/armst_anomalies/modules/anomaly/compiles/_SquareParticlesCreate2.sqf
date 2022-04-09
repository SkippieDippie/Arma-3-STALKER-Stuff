/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 28.03.2016
 * Time     : 14:21
`*/


#include "../__module.sqf";

/* ----------------------------------------------------------------------------
Function:   >>> _SquareParticlesSpawn

Description:
	Создает партиклы аномалий для определенного квадрата.
	Все объекты паритклов складываются в массив _squareParticles

Parameters:
	>>> _this (number) - id квадрата, в котором нужно отрисовать партиклы

Returns:
	>>> (nil)

---------------------------------------------------------------------------- */

private ["_squareAnomalyList","_particleSourcesArray"];

// Выполняем код, только если в этом квадрате есть аномалии
if ((_this >=0) AND (_this < module(_squaresCount))) then {
	if (not (isNil {module(_squareAnomalies) select _this})) then {

			// список аномалий для этого квадрата
	    _squareAnomalyList = module(_squareAnomalies) select _this;

	    // перебираем аномалии, находящиеся в текущем квадрате и создаем партиклы, складывая указатели в глобальный массив _squareParticles
	    {

	      _position = (_x select model_anomaly_position);
	      _particleSourcesArray = _position call compile format["call %1_%2_Particles%3;", stringify(MODULE_FUNC_PREFIX), stringify(MODULE_NAME), (_x select model_anomaly_type)];

				// foreach _particleSourcesArray
				{
					module(_squareParticles) select _this pushBack _x;
				} foreach _particleSourcesArray;

	    } foreach _squareAnomalyList;
	};
};