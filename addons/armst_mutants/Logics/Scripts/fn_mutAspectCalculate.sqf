/*
	Author: Aloe  (itfruit@mail.ru)
		
	Description:
	Расчёт аспектов
	Environment: Client
	
	
	Parameter(s):
	<Object> - юнит
	<String> - тип аспекта
	<Array> - дополнительные параметры (внешние )
	
	Return: <Number> - результат
*/	
	params ["_unit", "_aspect", ["_arguments", [1]]];
	private [ "_secrecy", "_aggressive", "_cowardice", "_curious", "_courage", "_societal", "_tactful", "_result"];
	
	_secrecy =  (_unit getVariable ["ARM_Secrecy", 0.001]) max 0.001;
	_aggressive = (_unit getVariable ["ARM_Aggressive", 0.001]) max 0.001;
	_cowardice = (_unit getVariable ["ARM_Cowardice", 0.001]) max 0.001;
	_curious = (_unit getVariable ["ARM_Curious", 0.001]) max 0.001;
	_courage = (_unit getVariable ["ARM_Courage", 0.001]) max 0.001;
	_societal = (_unit getVariable ["ARM_Societal", 0.001]) max 0.001;
	_tactful = _unit getVariable ["ARM_Tactful", false];
	_result = 0;
	
	switch (_aspect) do {
		case "INSPECT" : {
			_result = _curious / (_curious + _cowardice);
		};
		case "FOLLOW" : {
			_result = _aggressive / (_aggressive + _secrecy + _cowardice);
		};
		case "SECRECY": {
			private _ratio = (_arguments select 0) max 0.001;
			_result = _ratio / (_secrecy / (_secrecy + _aggressive));
		};
		case "AGGRESSIVE": {
			private _ratio = (_arguments select 0) max 0.001;
			//_result = _ratio / (_cowardice / (_cowardice + _aggressive));
			_result =  (_aggressive / (_aggressive + _cowardice)) + _ratio;
		};
		case "MANEUVER" : {
			private _ratio = (_arguments select 0) max 0.001;
			//_result = _ratio / (_ratio + _secrecy);
			_result = (_secrecy / (_secrecy + _ratio)) / 1 / 1.2;
		};
		case "GROUPMANEUVER": {
			private _maneuver = _arguments select 0;
			_result = _societal / (_societal + _maneuver);
		};
		default {};
	};

	_result