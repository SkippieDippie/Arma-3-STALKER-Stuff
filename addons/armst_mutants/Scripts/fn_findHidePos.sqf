/*
	Author: Aloe  (itfruit@mail.ru)
		
	Description:
	Поиск позиции для укрытия

	Parameter(s):
	<Object> - субъект (кто укрывается)
	<Array> - массив объектов (от кого укрывается)
	<Number> - максимальная дистанция для поиска
	
	Return: <Position> - позиция для укрытия
	TODO:  нужна оптимизация  - бегущие лучи без пошаговой дистанции
*/	
	
	params ["_forHide", "_fromHide", "_disMax"];
	private ["_coverPos", "_coverPosNew", "_dirMax", "_disMin", "_disStep", "_dirStep", 
	"_dangerous", "_close", "_far", "_center", "_dirTo", "_dirToNew", "_tryCount"];
	
	_coverPos = getPosATL _forHide;
	
	_dirMax = 90;
	_disMin = 15;	
	_disStep = (_disMax * 10 / 100);		//%  от максимальной дистанции
	_dirStep =  (_dirMax * 30 / 100);		//%  от максимального  градуса
	
	_dangerous = [_fromHide, [_forHide],{_input0 distance _x}, "ASCEND"] call BIS_fnc_sortBy;
	_close = getPosATL (_dangerous select 0);
	_far = getPosATL (_dangerous select (count _dangerous - 1));
	_center = [_close, (_close distance _far) / 2, (_close getDir _far)] call BIS_fnc_relPos;
	
	_dirTo = _forHide getDir _center;
	_dirToNew = _dirTo - _dirMax;
	
    _tryCount = 0;
    
	while {_dirToNew - _dirTo < _dirMax && _disMin < _disMax} do {
    
		_tryCount =_tryCount + 1;
        
		_coverPosNew = [_coverPos,  -_disMin,  _dirToNew] call BIS_fnc_relPos;
		
		if ((
                ({[_x, "FIRE", _forHide] checkVisibility [
                    eyePos _x, 
                    [
                        _coverPosNew select 0,
                        _coverPosNew select 1,
                        (ATLToASL _coverPosNew select 2) + 1.5
                    ]
                ] > 0} count  _dangerous) isEqualTo 0 
                && {
                    nearestTerrainObjects [
                        _coverPosNew,
                        [],
                        sizeOf typeOf _forHide / 2,
                        false,
                        true
                    ] isEqualTo [] 
                && _coverPosNew isFlatEmpty [10, -1, -1, -1, 0, false] isEqualTo []
                }
            )
            || _tryCount > 50
        ) exitWith {
			_coverPos = _coverPosNew;
		};
	
		if (_dirToNew - _dirTo + _dirStep > _dirMax ) then {
			_disMin = _disMin + _disStep;
			_dirToNew = _dirTo - _dirMax;
			_dirStep = _dirStep - (_dirStep * 25 / 100);
		};
		
		_dirToNew = _dirToNew + _dirStep;
    
	};
    
    
	_coverPos