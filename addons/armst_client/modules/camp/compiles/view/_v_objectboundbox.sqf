	/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Вычисляет вектора габаритов модели объекта
	
	Parameter(s):
		_obj	(Object) - объект
	
	Return: (Array)
*/
	
	params ["_obj"];
	private ["_bound","_bbx","_bby","_bbz","_arr","_y","_z"];
	
	_bound = boundingBoxReal _obj;
	_bbx = [_bound select 0 select 0, _bound select 1 select 0];
	_bby = [_bound select 0 select 1, _bound select 1 select 1];
	_bbz = [_bound select 0 select 2, _bound select 1 select 2];
	_arr = [];
	0 = {
		_y = _x;
		0 = {
			_z = _x;
			0 = {
				0 = _arr pushBack (_obj modelToWorld [_x,_y,_z]);
			} count _bbx;
		} count _bbz;
		reverse _bbz;
	} count _bby;
	_arr pushBack (_arr select 0);
	_arr pushBack (_arr select 1);
	
	_arr;