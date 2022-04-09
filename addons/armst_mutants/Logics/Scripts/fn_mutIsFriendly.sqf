/*
	Author: Aloe  (itfruit@mail.ru)
		
	Description:
	Отношенеие мутанта к юниту
	
	Environment: Client

	Parameter(s):
	<Object> - юнит (Мутант)
	<Object> - юнит
	
	Return: <Bool> - Союзник
*/		
		
	
	params ["_mutant", "_unit"];
	
	({_unit isKindOf _x} count (_mutant getVariable ["ARM_FriendlyClasses", []]) > 0)