/*
    Author: Vladimir Vorobev <Dragster>
    E-mail:1dragsteron@gmail.com

    Description:
    Count items in vest and backpack

    Parameter(s):
        _item - Classname of item(s) to remove [String]
        _count - Number of items that a person has [Number]

    Returns:
    	[count vest items,count backpack items] [Array]
*/
params ["_item","_count"];
private ["_cv","_arr"];
_arr = [0,0];
_cv = {_x == _item} count vestItems player;
if (_count > _cv) then {
	_arr set [0,_cv];
	_arr set [1,_count - _cv];
} else {
  _arr set [0,_count];
};
_arr