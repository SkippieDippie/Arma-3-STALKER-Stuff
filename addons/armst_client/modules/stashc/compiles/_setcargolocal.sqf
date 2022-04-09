/*
	Author: Aloe 
	Description: Заполняет тайник локальным содержимым клиента

	Parameter(s):
		_stashObject (Object) - объект тайника
	
	Return:
*/	
	#include "..\module.sqf";
	
	params ["_stashObject"];

	if !(isNull _stashObject) then {
	
		for "_s" from 0 to (count module(CargoLocal)) - 1 step 1 do {
			private _cargoSelection = module(CargoLocal) select _s;
			
			for "_i" from 0 to count (_cargoSelection select 0) -1 step 1 do {
				private _element = (_cargoSelection select 0) select _i;
				private _count = (_cargoSelection select 1) select _i;
				
				switch (_s) do {
					case 0 : {
						_stashObject addWeaponCargoGlobal [_element, _count];
					};
					case 1 : {
						_stashObject addMagazineCargoGlobal [_element, _count];
					};
					case 2 : {
						_stashObject addItemCargoGlobal [_element, _count];
					};
					case 4 : {
						_stashObject addBackpackCargoGlobal [_element, _count];
					};
					default {};
				};
			};
		};
	};
	