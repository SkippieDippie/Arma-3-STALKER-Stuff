/*
	Author: Aloe 
	Description: Очищает содержимое тайника

	Parameter(s):
		_stashObject (Object) - объект тайника
	
	Return:
*/	
	#include "..\module.sqf";
	
	params ["_stashObject"];
	
	if !(isNull _stashObject) then {
	
		clearWeaponCargoGlobal _stashObject;
		clearMagazineCargoGlobal _stashObject;
		clearItemCargoGlobal _stashObject;
		clearBackpackCargoGlobal _stashObject;
		
	};
	