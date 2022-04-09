/*
	Author: Aloe <itfruit@mail.ru>
	Description:  Изменение позиции объекта
	Environment: Client
	
	Parameter(s):
		_local	 		(Object) - локальный объект
		_object	 		(Object) - глобальный объект

	Return: (Nothing)
*/
	
	#include "..\module.sqf";
	
	params [["_local", objNull, [objNull]], ["_object", objNull, [objNull]]];		
	
	if !(isNull _local || isNull _object) then {
		
		private _type = typeOf _local;
		private _position = ASLToATL (getPosASL _local);
		private _direction = direction _local;
		private _vector = [vectorDir _local, vectorUp _local];
		deleteVehicle _local;
		
		//_object setPosATL _position;
		//_object setDir _direction;
		//_object setVectorDirAndUp _vector;
		
		["updateObject", [_object, _position, _vector, _direction]] call module(ServerSync);
		
	};
	