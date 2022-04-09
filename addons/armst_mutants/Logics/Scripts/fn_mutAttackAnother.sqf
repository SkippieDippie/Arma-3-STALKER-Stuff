/*
	Author: Aloe 
	Description: Атака не игрового персонажа
	Environment: Client
	
	Parameter(s):
	_unit 		<Object> - атакуемый
	
	Return:  Nothing
*/		
	params ["_attacker", "_attacked"];
	
	if (isNull (_attacked getVariable ["ARM_AttackedAnother", objNull])) then {
		_attacked setVariable ["ARM_AttackedAnother", _attacker, true];
	};
	