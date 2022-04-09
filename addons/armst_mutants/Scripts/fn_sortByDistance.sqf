/*
	Author: Aloe (itfruit@mail.ru)
		
	Description:
	Сортировка объектов

	Parameter(s):
	<Object> - субъект
	<Array> - массив объектов
	
	Return: <Array> - отсортированный массив объектов
*/
	
	params ["_subject", "_objects"];
	
	private _sortedObjects = _objects apply {[_subject distance _x, _x]};
	_sortedObjects sort true;
	_objects = [];
	{
		_objects pushBack (_x select 1);
	} foreach _sortedObjects;
	
	_objects