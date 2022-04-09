	/*
	Author: Aloe
		
	Description:
	change listBox inset
		
	Parameter(s):
	_this select 0: <Control> listbox control
	_this select 1: <Object> unit with items
	_this select 2: <String> inset name
	
	*/
	
	params ["_control", "_unit", "_type"];
	
	private _inventory = [player getVariable ['ARMST_storedInfo', []], 'Inventory', []] call BIS_fnc_getFromPairs;
	/*
		Array format:
		 0	- <Array> [String, Array] uniform and uniform items,
		 1	- <Array> [String, Array] vest and vest items,
		 2 	- <Array> [String, Array] backpack and backpack items,
		 3 	- <String> headgear,
		 4  - <String> goggles,
		 5  - <String> binocular,
		 6	- <Array> [String, Array, Array] primaryweapon, weaponaccessories, primary weapon magazines,
		 7 	- <Array> [String, Array, Array] secondary weapon, weaponaccessories, secondary weapon magazines,
		 8	- <Array> [String, Array, Array] handgunweapon, weaponaccessories, handgun magazines,
		 9  - <Array> assigneditems  [binocular],
		 10	- <Array> custom
		 
		 Example:
		 [
			["U_B_CombatUniform_mcam", ["AGM_Bandage","AGM_Bandage","AGM_Morphine","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag"]],
			["V_PlateCarrier1_rgr",["30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"]],
			["",[]],
			"H_HelmetB",
			"",
			"",
			["arifle_MX_ACO_pointer_F",["","acc_pointer_IR","optic_Aco",""],"30Rnd_65x39_caseless_mag"],
			["",["","","",""],""],
			["hgun_P07_F",["","","",""],"16Rnd_9x21_Mag"],
			["ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"],
			[]
		]
	*/
	
	
	
	lbClear _control;
	_items = [];
	
	if(count _inventory > 0) then {
	
		switch(_type)do{
		
			case 'Weapons': {
				_items pushBack ((_inventory select 6) select 0);
				_items pushBack ((_inventory select 7) select 0);
				_items pushBack ((_inventory select 8) select 0);

				[_control, _items call BIS_fnc_consolidateArray, ["CfgWeapons"]] call ARMST_fnc_addToListBox;
			};
			
			case 'Ammo': {
			
				[_items, (_inventory select 0) select 1] call BIS_fnc_arrayPushStack;
				[_items, (_inventory select 1) select 1] call BIS_fnc_arrayPushStack;
				[_items, (_inventory select 2) select 1] call BIS_fnc_arrayPushStack;
				
				for "_i" from 0 to ((count _items)-1) do {
					if not ( "CA_Magazine" in ([configFile >> "CfgMagazines" >> _items select _i, true] call BIS_fnc_returnParents) ) then {
						_items set [_i, ""];
					};
				};
				
				[_control, _items call BIS_fnc_consolidateArray, ["CfgMagazines"]] call ARMST_fnc_addToListBox;
			};
			
			case 'Outfit': {

				_items pushBack (backpack _unit);
				_items pushBack (vest _unit);
				_items pushBack (_inventory select 3);
				_items pushBack (_inventory select 4);
				
				[_control, _items call BIS_fnc_consolidateArray, ["CfgWeapons", "CfgVehicles"]] call ARMST_fnc_addToListBox;
			};
			
			case 'Other': {
				
				[_items, (_inventory select 0) select 1] call BIS_fnc_arrayPushStack;
				[_items, (_inventory select 1) select 1] call BIS_fnc_arrayPushStack;
				[_items, (_inventory select 2) select 1] call BIS_fnc_arrayPushStack;
				[_items, (_inventory select 6) select 1] call BIS_fnc_arrayPushStack;
				[_items, (_inventory select 7) select 1] call BIS_fnc_arrayPushStack;
				[_items, (_inventory select 8) select 1] call BIS_fnc_arrayPushStack;
				[_items, _inventory select 9] call BIS_fnc_arrayPushStack;
				_items pushBack (_inventory select 5);
				
				for "_i" from 0 to ((count _items)-1) do {
					if ( "CA_Magazine" in ([configFile >> "CfgMagazines" >> _items select _i, true] call BIS_fnc_returnParents) ) then {
						_items set [_i, ""];
					};
				};
				
				[_control, _items call BIS_fnc_consolidateArray, ["CfgWeapons"]] call ARMST_fnc_addToListBox;
			};

			
			default {};
		};
	};