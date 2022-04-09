/*
	Author: Aloe
		
	Description:
	Get the default value in index of array (BIS_fnc_saveInventory)

	Parameter(s) (for Server only):
	_this: <Scalar> Index
	
	Returns:(<String> or <Array>) Element
*/

private ["_element"];
	_element = switch(_this)do{
		case 0 :{["",[]]};
		case 1 :{["",[]]};
		case 2 :{["",[]]};
		case 3 :{""};
		case 4 :{""};
		case 5 :{""};
		case 6 :{["",["","","",""],""]};
		case 7 :{["",["","","",""],""]};
		case 8 :{["",["","","",""],""]};
		case 9 :{[]};
		case 10 :{[]};
		default {};
	};
	
_element