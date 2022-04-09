/*
	Author: Aloe 
	Description: Изменяет режим поведения мутанта
	Environment: Client
	
	Parameter(s):
	_unit	 			<Object> - юнит
	_mode 				<String> - поведение
	
	Return:  Bool
*/		
	params ["_unit", "_mode"];
	
	_mode = toUpper _mode;
	
	private _return = false;
	if (_mode in ["SAFE", "COMBAT", "AWARE"]) then {
		
		_unit setVariable ["ARM_MutantBehaviour", _mode, true];
		
		_return = true;
		
	};
	
	_return;