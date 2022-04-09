/*
    Author: Vladimir Vorobev <Dragster>
    E-mail:1dragsteron@gmail.com

    Description:
    Count items that can be added to inventory

    Parameter(s):
        _item - Classname of item(s) to remove [String]
        _count - Number of items that a person need add [Number]

    Returns:
    	[count vest items,count backpack items] [Array] or false [bool] if not can add
*/
	params ["_item","_count"];
	private ["_toVest","_toBackpack","_caitv","_caitb","_ret"];
	_toVest=0;
	_toBackpack=0;
	_caitv = player canAddItemToVest [_item,_count];
	if (_caitv) then {
		_ret = [_count,0];
	} else {
		for "_i" from _count to 0 step -1 do {
			_caitv = player canAddItemToVest [_item,_i];
			if (_caitv) exitWith {
				_toVest = _i;
			};
		};
		_toBackpack = _count - _toVest;
		_caitb = player canAddItemToBackpack [_item,_toBackpack];
		if (_caitb) then {
			_ret = [_toVest,_toBackpack];
		} else {
			_ret = false;
		};
	};
	_ret