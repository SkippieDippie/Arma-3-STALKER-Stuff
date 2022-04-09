	
	#include "..\module.sqf";
	
	params ["_trader", "_unit", "_id", "_box"];

	_box setPosATL (getPosATL player);

	_unit action ["Gear", _box];

	waitUntil {dialog};
	waitUntil {sleep 0.3; !dialog};

	if(_box call module(IsEmptyCargo)) then {
		
		deleteVehicle _box;
		_trader setVariable ["Storage", nil];
		_trader setVariable ["StorageAction", nil];
		_trader removeAction _id;
		
	};