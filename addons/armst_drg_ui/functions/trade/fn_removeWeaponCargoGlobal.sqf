/*
    Author: Vladimir Vorobev <Dragster>
    E-mail:1dragsteron@gmail.com

    Description:
     Removes specific weapon(s) from cargo space.MP synchronized.

    Parameter(s):
        _box - Object with cargo [Object]
        _item - Classname of item(s) to remove [String]
        _count - Number of item(s) to remove [Number] (Default: 1)

    Returns:
    NONE
*/
params ["_box","_item", ["_count",1]];


_count = round _count;

(getWeaponCargo _box) params ["_allItemsType", "_allItemsCount"];

private _returnVar = false;
clearWeaponCargoGlobal _box;
{
    private _itemCount = _allItemsCount select _forEachIndex;

    if (_x == _item) then {
        _returnVar = true;

        _itemCount = _itemCount - _count;
        if (_itemCount > 0) then {
            _box addWeaponCargoGlobal [_x, _itemCount];
        };
    } else {
        _box addWeaponCargoGlobal [_x, _itemCount];
    };
} forEach _allItemsType;

_returnVar
