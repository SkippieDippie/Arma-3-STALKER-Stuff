/*
	Author: Aloe 
	Description: Проверяет режим поведения мутанта
	Environment: Client
	
	Parameter(s):
	_unit	 			<Object> - юнит
	_mode	 			<String> - поведение SAFE || AWARE || COMBAT
	
	Return:  <Bool> 
*/		
	params ["_unit",  "_mode"];
	
	((_unit getVariable ["ARM_MutantBehaviour", ""]) isEqualTo (toUpper _mode))