/*
	Author: Aloe 
	Description: Удаленное выполнение урона 

	Parameter(s):
	_victim 				<Object> - жертва
	_damage 				<Number> - урон
	_damageHitPoints 	<formatted Array> - точки урона и вероятности
	
	Return:  Nothing
*/	

	params ["_unit", "_damage", "_damageHitPoints"];
	_selection = selectRandom ["hand_r","hand_l","leg_r","leg_l","body"];	
	
	[_unit, _damage, _selection, "stab"] call ace_medical_fnc_addDamageToUnit;