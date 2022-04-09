/*
	Author: Aloe 
	Description: Проигрывание анимации
	Environment: Client
	
	Parameter(s):
	_unit 		<Object> - юнит
	_anim 		<String> - анимация
	
	Return:  Nothing
*/		
	params ["_unit", "_anim"];

	private _pair = [_unit, [_anim]] call ARMST_fnc_mutGetAnimsPair;
	if !(_pair isEqualTo []) then {
		
		private _duration = (_pair select 0) param [1, 0];
		
		_unit switchMove _anim;
		sleep _duration;
		_unit switchMove "";
		
	};