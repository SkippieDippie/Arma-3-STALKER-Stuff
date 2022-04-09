/*
	Author: Aloe <itfruit@mail.ru>

	Description: Перемещение предметов из ящика в лагерь.
	
	Parameter(s):

	Return: (Nothinf)
*/
	
	#include "..\module.sqf";
	
	private _boxItems = getItemCargo module(MainBox);
	
	if (count _boxItems > 0) then {
	
		for "_i" from 0 to (count (_boxItems select 0) - 1) step 1 do {

			[
				
				(_boxItems select 0) select _i, 
				(_boxItems select 1) select _i
				
			]	call module(AddStorageResource);
			
		};
		
		clearItemCargoGlobal module(MainBox);
		
	};