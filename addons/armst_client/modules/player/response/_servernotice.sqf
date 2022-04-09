/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Отображает подсказку вызываемую сервером
	Note: Depricated психанул
	
	Parameter(s):
		_localize 		(String) - ключ строковой таблицы
		_params		(Array) - параметры
		
*/

	#include "..\module.sqf";
	
	params ["_localize", "_params"];
	
	hint parseText format ([localize _localize] + _params);