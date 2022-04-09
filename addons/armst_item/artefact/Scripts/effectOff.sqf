/*
	Удаление эффектов
	
	auhtor: SteelRat
*/

_trg = _this select 0;

{
	deleteVehicle _x;
} foreach (_trg getVariable "effects");