/*
	Author: Aloe 
	Description: Команда поиска
	Environment: Client
	
	Parameter(s):
	_unit 			<Object> - юнит
	_caller 		<Object> - актор
	_types 			<Array> - типы базовых объектов
	_exception 		<Array> - типы базовых объектов (исключение)
	
	Return:  Nothing
*/		
	params ["_unit", "_caller", ["_types", []], ["_exception", []]];
	
	private _distance = _unit getVariable ["ARM_SearchDistance", 100];
	private _nearestTargets = nearestObjects [getPosATL _target, _types, _distance];
	_nearestTargets = _nearestTargets - [_target, _caller];

	if !(_exception isEqualTo []) then {
		private _forDelete = [];
		{
			private _n = _x;
			if ({_n isKindOf _x} count _exception > 0 || _n isKindOf (_unit getVariable ["ARM_ParentCfg", ""])) then {
				_forDelete pushBack _n;
			};
		} foreach _nearestTargets;
		_nearestTargets = _nearestTargets - _forDelete;
	};
	
	private _anything = [objNull, _nearestTargets select 0] select (count _nearestTargets > 0);
	if !(isNull _anything) then {
		
		_target setVariable ["ARM_FollowTo", objNull, true];
		_target setVariable ["ARM_FollowFor", [_caller, _anything], true];
		
		_target setVariable [
			"ARM_SearchDistance", 
			(_target getVariable ["ARM_SearchDistance", 100]) + (round random 10), 
			true
		];
		
	};
