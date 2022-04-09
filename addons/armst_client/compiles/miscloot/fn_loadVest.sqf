/*
	author: 		Dragster
	file: 			fn_loadVest.sqf
	version: 		1.00
	date: 			20.08.2018
	arguments: 		
					_unit - player
					_vestArr - ARRAY vest
	return value:	none

*/
 	params [["_unit",objNull],["_vestArr",[]]];
	if (_unit isEqualTo objNull) exitWith {};
	if !(_vestArr isEqualTo []) then {
		_vestArr params [["_vest",""],["_vestWeap",[]],["_vestMags",[]],["_vestItems",[]]];
		if !(_vest isEqualTo "") then {
			_unit addVest _vest;
		};
		if !(_vestWeap isEqualTo []) then {
			{
				_unit addItemToVest _x;
			} count _vestWeap;
		};
		if !(_vestMags isEqualTo []) then {
			_uniCont = vestContainer _unit;
			{
				_uniCont addMagazineAmmoCargo [_x select 0,1,_x select 1];
			} count _vestMags;
		};
		if !(_vestItems isEqualTo []) then {
			{
				_unit addItemToVest _x;
			} count _vestItems;
		};
	};
true