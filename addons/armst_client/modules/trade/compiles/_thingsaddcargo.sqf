	
	#include "..\module.sqf";
	
	params ["_box", "_things"];
	private ["_weapons", "_magazines", "_backpacks", "_items"];
	
	_weapons = [];
	_magazines = [];
	_backpacks = [];
	_items = [];
	
	{
		switch ((_x call BIS_fnc_itemType) select 0) do {
			case "VehicleWeapon";
			case "Weapon" : {
				_weapons pushBack _x;
			};
			case "Magazine" : {
				_magazines pushBack _x;
			};
			case "Item";
			case "Mine";
			case "Equipment" : {
				if((_x call BIS_fnc_itemType) select 1 == "Backpack") then {
					_backpacks pushBack _x;
				}else{
					_items pushBack _x;
				};
			};
		};
		
	} foreach _things;
	
	{_box addWeaponCargo [_x, 1]}forEach _weapons;
	{_box addMagazineCargo [_x, 1]}forEach _magazines;
	{_box addItemCargo [_x, 1]}forEach _items;
	{_box addBackpackCargo  [_x, 1]}forEach _backpacks;