/*
	Author: Aloe <itfruit@mail.ru>
	Description:  Создание объекта со стороны клиента
	Environment: Client
	
	Parameter(s):
		_type	 		(String) - класс
		_position	 	(Array) - позиция
		_vector	 		(Array) - вектор

	Return: (Object)
*/
	
	#include "..\module.sqf";
	
	params [
		["_type", "", [""]],
		["_position", [], [[]]],
		["_vector", [], [[]]],
		["_direction", 0, [0]]
	];
	
	private _object = objNull;
	
	_object = createVehicle [_type, _position, [], 0, "CAN_COLLIDE"];
	if !(isNull _object) then {

		_object setVariable ["BIS_enableRandomization", false];
		//_object setVectorDirAndUp _vector;
		_object setDir _direction;
	
		["createObject", _object call BIS_fnc_objectVar] call module(ServerSync);
	};

	_object;
