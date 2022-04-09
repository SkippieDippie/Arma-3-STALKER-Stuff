/*
	Author: Aloe 
	Description: Отображение подсказки игроку
	Environment: Client or Server
	
	Parameter(s):
	_unit 			<Object> - компаньен
	_caller 		<Object> - игрок
	_message 		<String> - сообщение
	
	Return:  Nothing
*/		
	params ["_unit", "_caller", "_message"];
	
	[format ["%1 %2", name _unit, _message]] remoteExecCall ["systemChat", _caller];
