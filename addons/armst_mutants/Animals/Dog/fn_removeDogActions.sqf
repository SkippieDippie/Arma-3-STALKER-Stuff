/*
	Author: Aloe 
	Description: Удаление действий
	Environment: Client
	
	Parameter(s):
	_unit 		<Object> - юнит
	
	Return:  Nothing
*/		
	params ["_unit"];

	{
		
		_unit removeAction _x
		
	} foreach (_unit getVariable ["ARM_CommandActions", []]);
	