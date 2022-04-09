/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Расположение иконок рабочего стола
	
	Parameter(s):
		_display		(Display) - дисплей
	
*/
	#include "..\module.sqf";
	
	disableSerialization;
	params ["_display"];
	
	private _x0 = 0.01;
	private _y0 = 0.1;
	private _maxRows = 6;
	private _gridSize = 0.1;
	private _lastCol = 0;
	private _lastRow = 0;
	private _allowedApps = [];
	
	{
		private _key = _x select 0;
		private _access = _x select 2;
		
		(_display displayCtrl _key) ctrlShow false;
		
		if (module(Status) in _access) then {
			_allowedApps pushBack _key;
		};
		
	} foreach (module(Terminal) getVariable ["Access", []]);
	
	for "_i" from 0 to ((count _allowedApps)-1) step 1 do {
		private _app = _allowedApps select _i;
		private _control = (_display displayCtrl _app);
		
		private _colCnt = floor ((_i + 1) / _maxRows);
		if (_lastCol < _colCnt) then {_lastRow = 0};
		
		_control ctrlSetPosition [_x0 + (_gridSize * _colCnt), _y0 + (_gridSize *  _lastRow)];
		_control ctrlCommit 0;
		
		_control ctrlShow true;
		
		_lastCol = _colCnt;
		_lastRow = _lastRow + 1;
	};
	