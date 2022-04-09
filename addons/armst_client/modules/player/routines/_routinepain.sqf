/*
	Author: Aloe <itfruit@mail.ru>
	Description:  Контроль самочувствия (боль)
*/
/*
	#include "..\module.sqf";
	
	
	if (alive player) then {
		
		private _pain = player getVariable ["AGM_Pain", 0];
		
		//Уменьшение боли
		if (_pain > 0) then {
		
			//Потеря сознания
			if (_pain > 0.3) then {
			
				if !(player getVariable ["AGM_isUnconscious", false]) then {
					[player, 30] call AGM_Medical_fnc_knockOut;
					titlecut ["", "black out", 0.3];
					titlecut ["Вы потеряли сознание от болевого шока", "black in", 30];
				};
				
			};
			
			//Время лечит
			player setVariable ["AGM_Pain", (_pain - 0.1) max 0, true];
		};
		
		
	};