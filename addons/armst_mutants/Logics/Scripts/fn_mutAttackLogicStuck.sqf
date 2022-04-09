/*
	Author: Aloe  (itfruit@mail.ru)
	Description: Функция проверки позиций ИИ (Застревание)
	Environment: Client
	
	Parameter(s):
	_unit			<Object> - юнит
	_lastPos		<Position> - позиция для проверки
	
	Return:  Bool (Соответствие позиций)
*/
	params ["_unit", "_lastPos"];
	
	private _thisPos = getPosATL _unit;	
	
	private _thisPosF = [(_thisPos select 0) toFixed 3, (_thisPos select 1) toFixed 3, (_thisPos select 2) toFixed 3];
	private _lastPosF = [(_lastPos select 0) toFixed 3, (_lastPos select 1) toFixed 3, (_lastPos select 2) toFixed 3];

	(_thisPosF isEqualTo _lastPosF);
	