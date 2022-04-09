/*
	author: 		Dragster
	file: 			fn_loadBackpack.sqf
	version: 		1.00
	date: 			20.08.2018
	arguments: 		
					_unit - player
					_backpackArr - ARRAY backpack
	return value:	none

*/
 	params [["_unit",objNull],["_backpackArr",[]]];
	if !(_backpackArr isEqualTo []) then {
		_backpackArr params [["_backpack",""],["_backWeap",[]],["_backMags",[]],["_backItems",[]]];
		if !(_backpack isEqualTo "") then {
			_unit addBackpack _backpack;
		};
		if !(_backWeap isEqualTo []) then {
			{
				_unit addItemToBackpack _x;
			} count _backWeap;
		};
		if !(_backMags isEqualTo []) then {
			_uniCont = backpackContainer _unit;
			{
				_uniCont addMagazineAmmoCargo [_x select 0,1,_x select 1];
			} count _backMags;
		};
		if !(_backItems isEqualTo []) then {
			{
				_unit addItemToBackpack _x;
			} count _backItems;
		};
	};
true