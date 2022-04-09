
RotatePosition = {
	private ["_array1", "_array2", "_rotMatrix", "_newRelPos", "_newPos"];
	_newPos = _this select 0;
	_array2 = _this select 1;
	_d = _this select 2;
	_rotMatrix =[[cos _d, sin _d],[-(sin _d), cos _d]];
	_array1 = _rotMatrix;
	_newRelPos = [(((_array1 select 0) select 0) * (_array2 select 0)) + (((_array1 select 0) select 1) * (_array2 select 1)),(((_array1 select 1) select 0) * (_array2 select 0)) + (((_array1 select 1) select 1) * (_array2 select 1))];
	_newPos = [(_newPos select 0) + (_newRelPos select 0), (_newPos select 1) + (_newRelPos select 1)];
	_newPos
};
{
	_marker = _x;
	_position = getMarkerPos _marker;
	_px = _position select 0;
	_py = _position select 1;
	_size = getMarkerSize _marker;
	_width = _size select 0;
	_depth = _size select 1;
	_angle = markerDir _marker;
	_dist = 20;
	hint "start";
	for "_w" from -_width to _width step 12 do {
		for "_h" from -_depth to _depth step 12 do {
			_newPos = [_position, [_w + (random _dist/2) - _dist/3, _h + (random _dist/2) - _dist/3], _angle] call RotatePosition;
			_snow = "snow" createVehicle _newPos
		}
	}
} forEach _this;