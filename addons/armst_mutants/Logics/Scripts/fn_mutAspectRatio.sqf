/*
	Author: Aloe  (itfruit@mail.ru)
	Environment: Client
	
	Description:
	Расчёт соотношения сил

	Parameter(s):
	<Object> - юнит
	<Array> - враги
	<Array> - союзники
	
	Return: <Number> - результат
*/		
	
	params ["_unit", "_enemies", "_allies"];
	private ["_courage", "_tactful", "_countA", "_countE", "_aspectRatio"];
	
	_courage = _unit getVariable ["ARM_Courage", 0];
	_tactful = _unit getVariable ["ARM_Tactful", false];
	
	_aspectRatio = (1 - getDammage _unit) + _courage;
	if (_tactful) then {
		_countA = _aspectRatio;
		_countE = 0;
		
		{_countA = _countA + 1 - getDammage _x} foreach _allies;
		{_countE = _countE + 1 - getDammage _x} foreach _enemies;

		_aspectRatio = _countA / (_countA + _countE);
	};
	
	_aspectRatio