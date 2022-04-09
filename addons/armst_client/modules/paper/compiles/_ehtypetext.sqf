/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Обработчик события ввода текста
	
	Parameter(s):
		_control 			(Control) - текст
		_key 				(Scalar) - key
		_shift 				(Bool) - shift pressed 
		_ctrl 				(Bool) - ctrl pressed
		_alt 				(Bool) - alt pressed
	
	Return: (Nothing)
*/
	#include "..\module.sqf";
	
	params ["_control", "_key", "_shift", "_ctrl", "_alt"];
	
	private _tArr = toArray (ctrlText _control);
	private _tArrCnt = count _tArr;
	private _tArrL = toArray (missionNamespace getVariable [module(ctrlPaperLastTextVar), ""]);
	private _tArrLCnt = count _tArrL;
	private _newChars = [];

	if (_tArrCnt > _tArrLCnt) then {
		for "_i" from 0 to (count _tArr) - 1 step 1 do {
			if (_i < count _tArr) then {
				
				private _curEl = _tArr select _i;
				
				if (_i < _tArrLCnt) then {
					if !((_tArrL select _i) isEqualTo _curEl) then {
						_tArr deleteAt _i;
						_newChars pushBack _curEl;
					};
				} else {
					_newChars pushBack _curEl;
				};
				
			};
		};
	};

	_control ctrlSetText format ["%1%2", toString _tArrL, toString _newChars];
	missionNamespace setVariable [module(ctrlPaperLastTextVar), ctrlText _control];
