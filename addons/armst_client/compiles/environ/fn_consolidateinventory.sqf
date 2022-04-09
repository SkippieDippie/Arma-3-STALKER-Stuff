/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Группирует  / Распускает структуру снаряжения
	
	Parameters:
	 _loadout  		(Array) -  снаряжение
	 _consolidate  	(Bool) -  (Optional) группировать. Default: true
	 
	Return: Array - результат
*/

	params [["_loadout", [], [[]]], ["_consolidate", true, [true]]];
	
	private _return =+ _loadout;
	
	{
		if (_x isEqualType []) then {
			private _current = _x;
			{
				if (_x isEqualType [] and {!(_x isEqualTo [])}) then {
					private _element = _x;
					private _result = [];
					
					if (_consolidate) then {
						private _cnt = count _element;
						{_result append [[_x, _cnt - count (_element - [_x])]]} count (_element arrayIntersect _element);
					} else {
						{
							for "_i" from 1 to (_x select 1) do {_result pushBack (_x select 0)};
						} foreach _element;
					};
					
					_current set [_foreachIndex, _result];
				};
			} foreach _current;
		};
	} foreach _return;
	
	_return;