
	/*
		Author: Aloe
		Description:
		Removes any item from inventory. Given number of items. Returns which remains with given type count.
		
		Parameter(s):
		unit <Object> - unit removed from
		type <String> - name of class for remove
		inventory <formated Array> (Optional)- This array will be used instead of the {unit call ARMST_fnc_getInventory};.
		useful when deleting many items in cycle
		
		Returns:
		<Bool> it was executed delete command
	*/
	
	params [
		["_unit", objNull, [objNull]],
		["_type", "", [""]],
		["_array", [], [[]]]
	];
	private ["_delete", "_inventory", "_inventoryIndex"];
	
	_delete = true;
	
	if(count _array > 0) then {
		_inventory = _unit call ARMST_fnc_getInventory;
	}else{
		_inventory = _array;
	};
	
	_inventoryIndex = [_inventory, _type] call BIS_fnc_findNestedElement;

	if (!isNull _unit and count _inventoryIndex > 0) then {
		switch (_inventoryIndex select 0) do {
			case 0 : {
				switch (_inventoryIndex select 1) do {
					case 0 : { removeUniform _unit};
					case 1 : {
						_unit removeItemFromUniform _type;
					};
					default {_delete = false};
				};
			};
			case 1 : {
				switch (_inventoryIndex select 1) do {
					case 0 : { removeVest _unit};
					case 1 : {
						_unit removeItemFromVest _type;
					};
					default {_delete = false};
				};
			};
			case 2 : {
				switch (_inventoryIndex select 1) do {
					case 0 : { removeBackpack _unit};
					case 1 : {
						_unit removeItemFromBackpack _type;
					};
					default {_delete = false};
				};
			};
			case 3 : {
				removeHeadgear _unit;
			};
			case 4 : {
				removeGoggles _unit;
			};
			case 5 : {
				_unit removeWeaponGlobal  _type;
			};
			case 6 : {
				switch (_inventoryIndex select 1) do {
					case 0 : { _unit removeWeaponGlobal _type};
					case 1 : {_unit removePrimaryWeaponItem _type};
					case 2 : {_unit removeMagazineGlobal _type};
					default {_delete = false};
				};
			};
			case 7 : {
				switch (_inventoryIndex select 1) do {
					case 0 : { _unit removeWeaponGlobal _type};
					case 1 : { _unit removeSecondaryWeaponItem _type};
					case 2 : { _unit removeMagazineGlobal _type};
					default {_delete = false};
				};
			}; 
			case 8 : {
				switch (_inventoryIndex select 1) do {
					case 0 : { _unit removeWeaponGlobal _type};
					case 1 : { _unit removeHandgunItem _type};
					case 2 : { _unit removeMagazineGlobal _type};
					default {_delete = false};
				};
			};
			case 9 : {
				_unit unassignItem _type;
				_unit removeItem _type;
			};
			
			default {_delete = false};
		};
	}else{_delete = false};
	
_delete