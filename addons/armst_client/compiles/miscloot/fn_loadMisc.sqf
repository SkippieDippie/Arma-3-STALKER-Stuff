/*
	author: 		Dragster
	file: 			fn_loadMisc.sqf
	version: 		1.00
	date: 			20.08.2018
	arguments: 		
					_unit - player
					_miscArr - ARRAY misc
	return value:	none

*/
 	params [["_unit",objNull],["_miscArr",[]]];
	if !(_miscArr isEqualTo []) then {
		_miscArr params [["_headgear",""],["_goggles",""],["_binocular",""],["_assigneditems",[]]];
		if !(_headgear isEqualTo "") then {
			_unit addHeadgear _headgear;
		};
		if !(_goggles isEqualTo "") then {
			_unit addGoggles _goggles;
		};
		if !(_binocular isEqualTo "") then {
			_unit addWeapon _binocular;
		};
		if !(_assigneditems isEqualTo []) then {
			{
				_unit linkItem _x;
			} count _assigneditems;
		};
	};
true