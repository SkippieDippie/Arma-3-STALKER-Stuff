/*
	author: 		Dragster
	file: 			loadUniform.sqf
	version: 		1.00
	date: 			20.08.2018
	arguments: 		
					_unit - player
					_uniformArr - ARRAY loadout
	return value:	none

*/
 	params [["_unit",objNull],["_uniformArr",[]]];
	if !(_uniformArr isEqualTo []) then {
		_uniformArr params [["_uniform",""],["_uniWeap",[]],["_uniMags",[]],["_uniItems",[]]];
		if !(_uniform isEqualTo "") then {
			_unit forceAddUniform _uniform;
		};
		if !(_uniWeap isEqualTo []) then {
			{
				_unit addItemToUniform _x;
			} count _uniWeap;
		};
		if !(_uniMags isEqualTo []) then {
			_uniCont = uniformContainer _unit;
			{
				_uniCont addMagazineAmmoCargo [_x select 0,1,_x select 1];
			} count _uniMags;
		};
		if !(_uniItems isEqualTo []) then {
			{
				_unit addItemToUniform _x;
			} count _uniItems;
		};
	};

true