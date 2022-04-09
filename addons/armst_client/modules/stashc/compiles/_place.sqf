/*
	Author: Aloe 
	Description: Размещает тайник 

	Parameter(s):
	_objectClass <String> - класс объекта тайника
	_objectPlace <Position> - позиция
	_objectDir <Number> - азимут
	_objectVectorUp <Array> - наклон
	
	Return:  Object 
*/	
	#include "..\module.sqf";
	
	params ["_objectClass", "_objectPlace", "_objectDir", "_objectVectorUp"];
	
	private _itemClass = [_objectClass] call module(getItemClass);
	
	private _stashObject =  createVehicle [_objectClass, _objectPlace, [], 0, "CAN_COLLIDE"];
	if !(isNull _stashObject) then {
		
		_stashObject setDir _objectDir;
		_stashObject setVectorUp _objectVectorUp;
		
		if (isMultiplayer) then {
		
			[player, _stashObject] remoteExecCall ["ARMST_StashS_CreateStashRemote", 2];
			
		} else {
		
			_stashObject setVariable ["ARM_StashOwnerUID", getPlayerUID player, true];
			
		};
		
		player removeItemFromBackpack _itemClass;
		
		[_stashObject] call module(ClearCargo);
		//[_stashObject] call module(SetCargoLocal);
		
	};
	
	_stashObject;
	
	