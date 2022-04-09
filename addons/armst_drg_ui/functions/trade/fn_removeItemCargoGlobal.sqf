/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	 Removes specific item(s) from cargo space.MP synchronized.

	Parameter(s):
    	_box - Object with cargo [Object]
    	_item - Classname of item(s) to remove [String]
    	_count - Number of item(s) to remove [Number] (Default: 1)

	Returns:
	NONE
*/
params ["_box", "_item", ["_count", 1]];

// Ensure proper count
_count = round _count;

// Returns array containing two arrays: [[type1, typeN, ...], [count1, countN, ...]]
(getItemCargo _box) params ["_allItemsType", "_allItemsCount"];

// Clear cargo space and readd the items as long it's not the type in question
private _returnVar = false;
clearItemCargoGlobal _box;
{
    private _itemCount = _allItemsCount select _forEachIndex;

    if (_x == _item) then {
        // Process removal
        _returnVar = true;

        _itemCount = _itemCount - _count;
        if (_itemCount > 0) then {
            // Add with new count
            _box addItemCargoGlobal [_x, _itemCount];
        };
    } else {
        // Readd only
        _box addItemCargoGlobal [_x, _itemCount];
    };
} forEach _allItemsType;
_returnVar