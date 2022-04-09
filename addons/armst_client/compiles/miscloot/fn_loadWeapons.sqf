/*
	author: 		Dragster
	file: 			fn_loadWeapons.sqf
	version: 		1.00
	date: 			20.08.2018
	arguments: 		
					_unit - player
					_weapons - weapons ARRAY
	return value:	none

*/
 	params [["_unit",objNull],["_weaponsArr",[]]];
	if (_unit isEqualTo objNull) exitWith {};
	if !(_weaponsArr isEqualTo []) then {
		_weaponsArr params [["_primeWeap",[]],["_handWeap",[]],["_secWeap",[]],["_curWeap",""]];
  		_unit addBackpack "B_Kitbag_mcamo";
		if !(_primeWeap isEqualTo []) then {
			_primeWeap params [["_prWeap",""],["_prMags",[]],["_prItms",[]]];
			if !(_prWeap isEqualTo "") then {
				_prMags params [["_prPrMagArr",[]],["_prDopMag",""]];
				_prPrMagArr params [["_prMag",""],["_prMagCnt",0]];
				if !(_prMag isEqualTo "") then {
					_unit addMagazine [_prMag,_prMagCnt];
				};
				if !(_prDopMag isEqualTo "") then {
					_unit addMagazine [_prDopMag,1];
				};
				_unit addWeapon _prWeap;
			    if !(_prItms isEqualTo ["","","",""]) then {
			        {
			          _unit addPrimaryWeaponItem _x; 
			        } count _prItms;
			    };
			};
		};
		if !(_handWeap isEqualTo []) then {
			_handWeap params [["_handWeapon",""],["_handhandMagArr",[]],["_handItms",[]]];
			if !(_handWeapon isEqualTo "") then {
				_handhandMagArr params [["_handMag",""],["_handMagCnt",0]];
				if !(_handMag isEqualTo "") then {
					_unit addMagazine [_handMag,_handMagCnt];
				};
				_unit addWeapon _handWeapon;
			    if !(_handItms isEqualTo ["","","",""]) then {
			        {
			          _unit addHandgunItem _x; 
			        } count _handItms;
			    };
			};
		};
		if !(_secWeap isEqualTo []) then {
			_secWeap params [["_secWeapon",""],["_secMagArr",[]],["_secItms",[]]];
			if !(_secWeapon isEqualTo "") then {
				_secMagArr params [["_secMag",""],["_secMagCnt",0]];
				if !(_secMag isEqualTo "") then {
					_unit addMagazine [_secMag,_secMagCnt];
				};
				_unit addWeapon _secWeapon;
			    if !(_secItms isEqualTo ["","","",""]) then {
			        {
			          _unit addSecondaryWeaponItem _x; 
			        } count _secItms;
			    };
			};
		};
		if !(_curWeap isEqualTo "") then {
			_unit selectWeapon _curWeap;
		};
		removeBackpack _unit;
	};
	true