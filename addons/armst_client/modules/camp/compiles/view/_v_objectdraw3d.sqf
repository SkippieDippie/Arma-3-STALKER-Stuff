	/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Обработчик отрисовки габаритов модели объекта
	
	Parameter(s):
		_arr	(Array) - габариты модели
		_color	(Array) - цает рамки (По умолчанию: красный) 
	
	Return: (Nothing)
*/
	
	params ["_arr", ["_color", [1,0,0,1], []]];
	
	for "_i" from 0 to 7 step 2 do {
		drawLine3D [
			_arr select _i,
			_arr select (_i + 2),
			_color
		];
		drawLine3D [
			_arr select (_i + 2),
			_arr select (_i + 3),
			_color
		];
		drawLine3D [
			_arr select (_i + 3),
			_arr select (_i + 1),
			_color
		];
	};