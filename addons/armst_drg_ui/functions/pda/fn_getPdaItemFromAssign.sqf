/*
	author: 		Vladimir Vorobev <Dragster>
	E-mail:			1dragsteron@gmail.com
	file: 			fn_getPdaItemFromAssign.sqf
	version: 		1.00
	date: 			08.12.2019
	purpose: 			
	arguments: 		none
	return value:	_item

	example call: 		[] call drg_fnc_getPdaItemFromAssign;
*/
params [
	["_unit",player]
];
private _assignItems = assignedItems _unit;
private _itemPda = "";
{
	_item = _x;
	_a = toArray _item;
	_a resize 14;
	if (toString _a == "armst_item_pda") exitWith {
		_itemPda = _item;
	};
} forEach _assignItems;
_itemPda