/*
	Author: Dragster <dragsteron@gmail.com>
	Description:  Покупка предметов в торговле
	
	Parameters:
	_unit - игрок который покупает
	_item - предмет который хочет купить игрок 
	_cash - кол-во денег игрока
	_itemPrice - стоимость предмета

	Return: Nothing
*/

// ARMST_dragster_trader_buy={
// 	params ["_unit", "_item","_cash","_itemPrice"];
// 	_player = _unit;
// 	_itemInformation = [_item] call BIS_fnc_itemType;
// 	_itemCategory = _itemInformation select 0;
// 	_itemType = _itemInformation select 1;
// 	_canAdd=false;
// 	_itemPrevTypeCount = 1;
// 	switch (_itemCategory) do 
// 	{
// 		case "Weapon":
// 		{
// 			_weaponType = getNumber( configFile >> "CfgWeapons" >> _item >> "type"); 
// 			switch (_weaponType) do 
// 			{
// 				case 1: 	{ _canAdd = ((primaryWeapon _player) isEqualTo ""); 	if (_canAdd) then {_player addWeapon _item;		} else {["У вас уже есть данный тип оружия", -1, 0.85, 60, 0.5, 0, 764] spawn BIS_fnc_dynamicText;}; 	}; 
// 				case 4: 	{ _canAdd = ((secondaryWeapon _player) isEqualTo "");	if (_canAdd) then {_player addWeapon _item;		} else {["У вас уже есть данный тип оружия", -1, 0.85, 60, 0.5, 0, 764] spawn BIS_fnc_dynamicText;}; 	}; 
// 				case 2: 	{ _canAdd = ((handgunWeapon _player) isEqualTo ""); 	if (_canAdd) then {_player addWeapon _item;		} else {["У вас уже есть данный тип оружия", -1, 0.85, 60, 0.5, 0, 764] spawn BIS_fnc_dynamicText;}; 	}; 
// 			};
// 		};
// 		case "Equipment":
// 		{
// 			switch (_itemType) do
// 			{
// 				case "Glasses": 	{ _canAdd = ((goggles _player isEqualTo "")); 	if (_canAdd) then {_player linkItem _item;		} else {["У вас уже есть на лице что-то", -1, 0.85, 60, 0.5, 0, 764] spawn BIS_fnc_dynamicText;};	}; 
// 				case "Headgear": 	{ _canAdd = ((headgear _player) isEqualTo "");	if (_canAdd) then {_player addHeadgear _item;	} else {["У вас уже есть шлем", -1, 0.85, 60, 0.5, 0, 764] spawn BIS_fnc_dynamicText;};	}; 
// 				case "Vest": 		{ _canAdd = ((vest _player) isEqualTo ""); 		if (_canAdd) then {_player addVest _item; 		} else {["У вас уже есть разгруз", -1, 0.85, 60, 0.5, 0, 764] spawn BIS_fnc_dynamicText;};	}; 
// 				case "Backpack": 	{ _canAdd = ((backpack _player) isEqualTo ""); 	if (_canAdd) then {_player addBackpack _item;	} else {["У вас уже есть сумка", -1, 0.85, 60, 0.5, 0, 764] spawn BIS_fnc_dynamicText;};	}; 
// 			};
// 		};
// 		case "Magazine",
// 		case "Mine",
// 		case "Item":
// 		{ 
// 			_caitv = player canAddItemToVest _item;
// 			_caitb = player canAddItemToBackpack _item;
// 			if (_caitv) then {
// 				player addItemToVest _item;
// 					_canAdd=true;
// 			} else {
// 				if (_caitb) then {
// 					player addItemToBackpack _item;
// 					_canAdd=true;
// 				} else {
// 					["Нет места для покупки", -1, 0.85, 60, 0.5, 0, 764] spawn BIS_fnc_dynamicText;
// 				};
// 			};
// 		};
// 	};
// 	if (_canAdd) then {
// 		player setVariable ["Money", _cash - _itemPrice];
// 		["Куплено", -1, 0.85, 60, 0.5, 0, 764] spawn BIS_fnc_dynamicText;


// 		if(_itemPrice >= 10000) then {
// 			player say2d "tradergood";
// 		};	
// 	};
// };
/*
ARMST_create_stash={
	_unit=_this select 0;
	_classname="Box_Syndicate_Wps_F";
	_unitUID = getPlayerUID _unit;
	_objs=nearestObjects [_unit, ["Box_Syndicate_Wps_F"], 8000];
	_cntobj=0;
	{
	  	_objOwner=_x getVariable ["OwnerUID",""];
	  	if (_unitUID==_objOwner) then {
	  		_cntobj=_cntobj+1;
	  	};
	} forEach _objs;
	if (_cntobj > 0) exitWith {
	  	hint "У вас уже есть тайник!";
	};
	
	_stash = _classname createVehicle [0,0,0];
	clearWeaponCargoGlobal _stash;
	clearMagazineCargoGlobal _stash;
	clearItemCargoGlobal _stash;
	clearBackpackCargoGlobal _stash;
	_stash setPosATL (getPosATL player);
	_stash setVariable ["OwnerUID",_unitUID,true];
	
	ARMST_querydragster = [6,_stash]; 
	publicVariableServer "ARMST_querydragster"; 
};
ARMST_update_Stash={
	_stash=_this select 0;
	ARMST_querydragster = [7,_stash]; 
	publicVariableServer "ARMST_querydragster"; 
};
ARMST_remove_Stash={
	_stash=_this select 0;
	_ownerUID = _stash getVariable ["OwnerUID",""];
	ARMST_querydragster = [8,_stash,_ownerUID]; 
	publicVariableServer "ARMST_querydragster"; 
	deleteVehicle _stash;
};
*/