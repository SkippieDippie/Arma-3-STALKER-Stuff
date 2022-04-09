	/*
		Author: Aloe
		Description:
		Add local items to box cargo.
		
		Parameter(s):
		box <Object> - box
		items <Array format pairs> - array of items format [[class item, count]]
		
	*/
	
	params ["_box", "_items"];

	{
		private["_itemType", "_itemCount"];
		
		_itemType = _x select 0;
		_itemCount = _x select 1;
		
		switch ((_itemType call BIS_fnc_itemType) select 0) do {
			case "VehicleWeapon";
			case "Weapon" : {
				_box addWeaponCargo [_itemType, _itemCount];
			};
			case "Magazine" : {
				_box addMagazineCargo [_itemType, _itemCount];
			};
			case "Item";
			case "Mine";
			case "Equipment" : {
				if((_itemType call BIS_fnc_itemType) select 1 == "Backpack") then {
					_box addBackpackCargo [_itemType, _itemCount];
				}else{
					_box addItemCargo [_itemType, _itemCount];
				};
			};
		};
	} foreach _items;
