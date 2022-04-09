/*
	Author: Dragster   (1dragsteron@gmail.com)
		
	Description: 
	Конвертирование массива позиции в строку без потерь точности
	
	Parameter(s):
	_this - <ARRAY> - массив позиции
	
	Return: STRING
*/
	
		format [ "[%1,%2,%3]", _this select 0 toFixed 8, _this select 1 toFixed 8, _this select 2 toFixed 8 ]
	
