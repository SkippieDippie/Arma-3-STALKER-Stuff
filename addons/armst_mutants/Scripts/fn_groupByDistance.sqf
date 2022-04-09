/*
	Author: Aloe  (itfruit@mail.ru)
		
	Description:
	Группировка объектов по дистанции

	Parameter(s):
	<Object> - субъект
	<Array> - массив объектов
	<Number> - шаг
	
	Return: <Array> - сгруппированные массвы объектов
*/
	params ["_subject", "_objects", ["_step", 10]];
	
	private _currentStep = [_step, 0];
	private _groups = [[]];
	private _i = 0;
	
	while {!(_objects isEqualTo [])} do {
				
		private _object = _objects select _i;
		
		if (_subject distance _object <= (_currentStep select 0)) then {

			(_groups select (_currentStep select 1)) pushBack _object;
			_objects deleteAt _i;
			
			_i = 0;
		} else {
			_i = _i + 1;
		};
		
		if (_i + 1  > count _objects) then {
			_currentStep set [0, (_currentStep select 0) + _step];
			_currentStep set [1, (_currentStep select 1) + 1];
			
			_groups set [_currentStep select 1, []];
			
			_i = 0;
		};
		
	};
	
	_groups