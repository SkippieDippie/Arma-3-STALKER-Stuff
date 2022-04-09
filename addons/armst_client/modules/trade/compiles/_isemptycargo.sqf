	/*
		Author: Aloe
		Description:
		Check empty vehicle cargo
		
		Parameter(s):
		box <Object> - vehicle for check
		
		Returns: <Bool>  empty
	*/
	#include "..\module.sqf";
	
	params ["_vehicle"];
	private ["_empty"];

	_empty = true;

	{
		if (count _x > 0) exitWith { _empty = false };
	} foreach [
		(getWeaponCargo _vehicle) select 1,
		(getMagazineCargo _vehicle) select 1,
		(getItemCargo _vehicle) select 1,
		(getBackpackCargo _vehicle) select 1
	];

	_empty;