/*
	Author: Aloe  (itfruit@mail.ru)
	Description: Читает конфиг анимация и возвращает соответсвите
	
	Parameter(s):
	_unit 				<Object> - юнит (мутант)
	
	Return:  Array ([type, [anims]],[type, [anims]])
*/	
	
	params ["_unit"];
	
	private _animations = [];
	
	{
	
		[
			_animations,
			_x,
			[_unit, (configFile >> "cfgVehicles" >> typeOf _unit >> "Character" >> "Animations" >> _x) call BIS_fnc_getCfgData] call ARMST_fnc_mutGetAnimsPair
		] call BIS_fnc_setToPairs;
		
	} foreach ["attack_1", "attack_2", "attack_3", "agry", "eat", "idle"];
	
	_animations;