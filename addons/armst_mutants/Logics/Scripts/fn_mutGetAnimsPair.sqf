/*
	Author: Aloe  (itfruit@mail.ru)
	Description: Функция составляет соответсвие названия анимации и её продолжительности :\
	
	Parameter(s):
	_unit 				<Object> - юнит
	_list 				<Array> - список анимаций
	
	Return:  Array ([наименование, продолжительность])
*/	
	
	params ["_unit", ["_list", []]];
	
	private _pairs = [];
	
	if !(_list isEqualTo []) then {
		{
			if !(_x isEqualTo "") then {
				
				private _cfg = getNumber (configFile >> getText (configFile >> "cfgVehicles" >> typeOf _unit >> "moves") >> "States" >> _x >> "speed");
				_cfg = if (_cfg > 0) then {abs (1 / _cfg)} else {1};
				
				_pairs pushBack [_x, _cfg];
			
			} else {
				
				_pairs pushBack [_x, 0];
				
			};
		} foreach _list;
	};
	
	
	_pairs;