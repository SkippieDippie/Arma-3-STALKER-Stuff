/*
	Functions for Keypad
	Author: Dragster <1dragsteron@gmail.com>
*/
ARMST_keypad_open={
	disableSerialization;
	createdialog "keypad";
};
ARMST_keypad_delete_one_symbol={
	private ["_text", "_t", "_tc", "_str"];
	disableSerialization;
	_text=_this select 0;
	_t=toArray _text;
	_tc=(count _t);
	if(_tc>0)then{
		_t resize (_tc-1);
		_str=toString _t;
	};
	ctrlSetText [8499, _str];
};
ARMST_keypad_check_kod={
	private ["_kod"];
	_kod=_this select 0;
	_dialog = findDisplay 88555;_dialog closeDisplay 1;
	switch (_kod) do {
   		case "8463575736": { _inposlab=(position player) inArea [[1271.563, 6316.811, 6.309],10,10,0,false];if (_inposlab) then {["Код верный."] call AGM_Core_fnc_displayTextStructured;[player] spawn armst_x17_in;} else {["Код не верен."] call AGM_Core_fnc_displayTextStructured;};};
   		case "2573465478": { _inposlab=(position player) inArea [[5307.916, 3496.265, 0],10,10,0,false];if (_inposlab) then {["Код верный."] call AGM_Core_fnc_displayTextStructured;[player] spawn armst_x18_in;} else {["Код не верен."] call AGM_Core_fnc_displayTextStructured;}; };
   		case "2463653632":  { _inposlab=(position player) inArea [[6754.122, 8189.998,1.343],10,10,0,false];if (_inposlab) then {["Код верный."] call AGM_Core_fnc_displayTextStructured;[player] spawn armst_perehod_in;} else {["Код не верен."] call AGM_Core_fnc_displayTextStructured;}; };
   		default { ["Код не верен."] call ace_common_fnc_displayTextStructured; };
	};
};
