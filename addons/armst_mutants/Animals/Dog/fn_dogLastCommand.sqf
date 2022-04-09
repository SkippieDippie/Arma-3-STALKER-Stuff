/*
	Author: Aloe 
	Description: Сохранение последней команды
	Environment: Client
	
	Parameter(s):
	_unit 			<Object> - юнит (собака)
	_command 		<String> - команда
	
	Return:  Nothing
*/		
	params ["_unit", "_command"];
	
	_unit setVariable ["ARM_dogLastCommandString", _command];
	
	