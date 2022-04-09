/*
	Author: Aloe  (itfruit@mail.ru)
		
	Description:
	Поиск позиции для бегства

	Parameter(s):
	<Object> - субъект (кто бежит)
	<Array> - массив объектов (от кого бежит)
	<Number> - минимальная дистанция для поиска
	<Number> - максимальная дистанция для поиска
	
	Return: <Position> - позиция для бегства
*/	
		
	params ["_forSafe", "_fromSafe", ["_disMin", 0], ["_disMax", 0]];
		
	private _safePos = getPosATL _forSafe;
	private _blackList = [];
    
	if (count _fromSafe > 0) then {
	
		private _dangerous = [_forSafe,  _fromSafe] call ARMST_fnc_sortByDistance;
		
		private _dClose = getPosATL (_dangerous select 0);
		private _dFar = getPosATL (_dangerous select (count _dangerous - 1));
		private _dRad = (_dClose distance _dFar) / 2;
		private _dCenter = [_dClose, _dRad, [_dClose, _dFar] call BIS_fnc_dirTo] call BIS_fnc_relPos;
		
		private _dTopLeft = [(_dCenter select 0)-_dRad, (_dCenter select 1)+_dRad];
		private _dBotRight = [(_dCenter select 0)+_dRad, (_dCenter select 1)-_dRad];
		
		_blackList = [[_dTopLeft, _dBotRight]];
	};

	_safePos = [_safePos, _disMin max 1, _disMax max 1, 10, 0, 0.7, 0, _blackList, [_safePos, _safePos]] call BIS_fnc_findSafePos;

	_safePos