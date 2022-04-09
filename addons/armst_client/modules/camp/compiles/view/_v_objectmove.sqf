/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Перемещение объекта
	
	Parameter(s):
		_object			(Object) - объект
	
	Return: (Nothing)
*/
	#include "..\..\module.sqf";
	
	params ["_object"];
	
	private _display = findDisplay IDC_RSCDISPLAYCAMPVIEWER;
	
	module(_ObjectIsMoving) = _object;

	if ((_object call BIS_fnc_objectVar) in module(Objects)) then {

		_object hideObject true;
		
		private _local = (typeOf _object) createVehicleLocal [0, 0, 0];
		//_local setVectorDirAndUp [vectorDir _object, vectorUp _object];
		_local setDir (direction _object);
		
		private _handle = [_local] spawn module(V_ObjectPlacement);
		waitUntil {scriptDone _handle};
		
		disableserialization;
		if (["Изменить позицию?", "Великолепный лагерь", nil, true, _display] call BIS_fnc_guiMessage) then {
			
			hint "Подождите некоторое время, если объект не изменил свою позицию";
			[_local, _object] call module(ObjectMove);
			
		} else {
		
			deleteVehicle _local;
			
		};
		
		_object hideObject false;
	};

	module(_ObjectIsMoving) = objNull;
	
	
	