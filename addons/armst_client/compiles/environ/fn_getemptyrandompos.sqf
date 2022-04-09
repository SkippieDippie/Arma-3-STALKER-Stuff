	/*
	Author: Aloe
		
	Description:
	Selects random empty position within radius

	Parameter(s):
	_this select 0: <Array> position
	_this select 1: <Scalar>  radius
	_this select 2: (Optional) Minimal distance from another object, default: 3
		
	Return: <Array> Empty position	
	*/
	
	private ["_center", "_radius", "_position", "_distance", "_positionF", "_tryC"];
	
	_center = _this select 0;
	_radius = _this select 1;
	_distance = if(count _this > 2)then{_this select 2}else{3};
	_position = +(_center);
	_positionF = [];
	_tryC = 0;

	while{_tryC < 100 and (count _positionF == 0)} do {
		_position set [0,(_position select 0) + (_radius - (random (2*_radius)))];
		_position set [1,(_position select 1) + (_radius - (random (2*_radius)))];
		_positionF = _position isFlatEmpty [_distance, 1];
		
	_tryC = _tryC + 1;
	};

_positionF