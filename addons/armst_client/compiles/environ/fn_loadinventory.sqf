/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Загружает инвентарь юнита
	
	Parameters:
	 _unit  			(Object) - юнит
	 _loadout	  		(formatted Array) - Массив в формате возвращаемый  функциями:
						 (ARMST_fnc_getInventory ИЛИ BIS_fnc_saveInventory)
	 
	Return: Nothing
*/
	
	if (params [["_unit", objNull, [objNull]], ["_loadout", [], [[]]]]) then {
		private ["_blacklist"];
		_blacklist = _this param [2, []];
				
		//--- Remove
		if !("uniform" in _blacklist) then {removeuniform _unit;};
		if !("vest" in _blacklist) then {removevest _unit;};
		if !("headgear" in _blacklist) then {removeheadgear _unit;};
		if !("goggles" in _blacklist) then {removegoggles _unit;};
		if !("backpack" in _blacklist) then {removebackpack _unit;};
		if !("items" in _blacklist) then {removeallitems _unit;};
		if !("linkeditems" in _blacklist) then {
			private["_headgear","_goggles"];

			//store headgear & goggles to prevent uncontrolled removal
			_headgear = headgear _unit;
			_goggles = goggles _unit;

			removeallassigneditems _unit;

			//re-store headgear & goggles
			if !(_headgear isEqualTo "") then {_unit addheadgear _headgear;};
			if !(_goggles isEqualTo "") then {_unit addgoggles _goggles;};
		};
		if !("weapons" in _blacklist) then {removeallweapons _unit;};
		
		//--Add		
		#define IDX_UNIFORM 0
		#define IDX_VEST 1
		#define IDX_BACKPACK 2
		#define IDX_HEADGEAR 3
		#define IDX_GOGGLES 4
		#define IDX_BINOCULAR 5
		#define IDX_PRIMARY_W 6
		#define IDX_SECONDARY_W 7
		#define IDX_HANDGUN_W 8
		#define IDX_LINKEDITEMS 9
		
		{
			switch (_foreachIndex) do {
				case IDX_UNIFORM : {
					if !("uniform" in _blacklist) then {
						private ["_uniform", "_uniformItems"];
						
						_uniform = _x select 0;
						_uniformItems = _x select 1;
						
						if !(_uniform isEqualTo "") then {
							if (isClass (configFile >> "cfgWeapons" >> _uniform)) then {
								_unit forceadduniform _uniform;
								{(uniformContainer _unit) addItemCargoGlobal [_x,1];} foreach _uniformItems;
							} else {
								["Uniform '%1' does not exist in CfgWeapons",_uniform] call bis_fnc_error;
							};
						};
					};
				};
				case IDX_VEST : {
					if !("vest" in _blacklist) then {
						private ["_vest", "_vestItems"];
						
						_vest = _x select 0;
						_vestItems = _x select 1;
						
						if !(_vest isEqualTo "") then {
							if (isClass (configFile >> "cfgWeapons" >> _vest)) then {
								_unit addvest _vest;
								{(vestContainer _unit) addItemCargoGlobal [_x,1];} foreach _vestItems;
							} else {
								["Vest '%1' does not exist in CfgWeapons",_vest] call bis_fnc_error;
							};
						};
					};
				};
				case IDX_BACKPACK : {
					if !("backpack" in _blacklist) then {
						private ["_backpack", "_backpackItems"];
						
						_backpack = _x select 0;
						_backpackItems = _x select 1;
						
						if !(_backpack isEqualTo "") then {
							if (isClass (configFile >> "cfgVehicles" >> _backpack)) then {
								_unit addbackpack _backpack;
								{(backpackContainer _unit) addItemCargoGlobal [_x,1];} foreach _backpackItems;
							} else {
								["Backpack '%1' does not exist in CfgVehicles",_backpack] call bis_fnc_error;
							};
						};
					};
				};
				case IDX_HEADGEAR : {
					if !("headgear" in _blacklist) then {
						if !(_x isEqualTo "") then {
							if (isClass (configFile >> "cfgWeapons" >> _x)) then {
								_unit addheadgear _x;
							} else {
								["Headgear '%1' does not exist in CfgWeapons",_x] call bis_fnc_error;
							};
						};
					};
				};
				case IDX_GOGGLES : {
					if !("goggles" in _blacklist) then {
						if !(_x isEqualTo "") then {
							if (isClass (configFile >> "cfgGlasses" >> _x)) then {
								_unit addgoggles _x;
							} else {
								["Goggles '%1' does not exist in CfgGlasses",_x] call bis_fnc_error;
							};
						};
					};
				};
				case IDX_BINOCULAR : {
					if !("binocular" in _blacklist) then {
						if !(_x isEqualTo "") then {
							_unit addWeapon _x;
						};
					};
				};
				case IDX_PRIMARY_W : {
					if !("weapon" in _blacklist) then {
						private ["_primaryWeapon", "_primaryWeaponItems", "_primaryWeaponMag"];
						
						_primaryWeapon = _x select 0;
						_primaryWeaponItems = _x select 1;
						_primaryWeaponMag = if (count _x > 2) then {_x select 2} else {""};
						
						if !(_primaryWeapon isEqualTo "") then {
							if !(_primaryWeaponMag isEqualTo "") then {_unit addMagazine _primaryWeaponMag;};
											
							_unit addWeapon _primaryWeapon;
							{
								if !(_x isEqualTo "") then {_unit addPrimaryWeaponItem _x;};
							} foreach _primaryWeaponItems;
						};
					};
				};
				case IDX_SECONDARY_W : {
					if !("weapon" in _blacklist) then {
						private ["_secondaryWeapon", "_secondaryWeaponItems", "_secondaryWeaponMag"];
						
						_secondaryWeapon = _x select 0;
						_secondaryWeaponItems = _x select 1;
						_secondaryWeaponMag = if (count _x > 2) then {_x select 2} else {""};
						
						if !(_secondaryWeapon isEqualTo "") then {
							if !(_secondaryWeaponMag isEqualTo "") then {_unit addMagazine _secondaryWeaponMag;};
											
							_unit addWeapon _secondaryWeapon;
							{
								if !(_x isEqualTo "") then {_unit addSecondaryWeaponItem _x;};
							} foreach _secondaryWeaponItems;
						};
					};
				};
				case IDX_HANDGUN_W : {
					if !("weapon" in _blacklist) then {
						private ["_handgunWeapon", "_handgunWeaponItems", "_handgunWeaponMag"];
						
						_handgunWeapon = _x select 0;
						_handgunWeaponItems = _x select 1;
						_handgunWeaponMag = if (count _x > 2) then {_x select 2} else {""};
						
						if !(_handgunWeapon isEqualTo "") then {
							if !(_handgunWeaponMag isEqualTo "") then {_unit addMagazine _handgunWeaponMag;};
											
							_unit addWeapon _handgunWeapon;
							{
								if !(_x isEqualTo "") then {_unit addHandgunItem _x;};
							} foreach _handgunWeaponItems;
						};
					};
				};
				case IDX_LINKEDITEMS : {
					if !("linkeditems" in _blacklist) then {
						{
							if (_x != "") then {_unit linkitem _x;};
						} foreach _x;
					};
				};
				default {};
			};
		} foreach _loadout;
	} else {
		["Incorrect params for ARMST_fnc_loadInventory: %1", _this] call bis_fnc_error;
	};
	
	