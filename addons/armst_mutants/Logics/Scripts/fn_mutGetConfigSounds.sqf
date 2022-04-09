/*
	Author: Aloe  (itfruit@mail.ru)
	Description: Читает конфиг звуков и возвращает соответсвите
	
	Parameter(s):
	_unit 				<Object> - юнит (мутант)
	
	Return:  Array ([type, [sounds]],[type, [sounds]])
*/	
	
	params ["_unit"];
	
	private _sounds = [];
	
	{
	
		[
			_sounds,
			_x,
			(configFile >> "cfgVehicles" >> typeOf _unit >> "Character" >> "Sounds" >> _x) call BIS_fnc_getCfgData
		] call BIS_fnc_setToPairs;
		
	} foreach ["idle","attack","hit","other"];
	
	_sounds;