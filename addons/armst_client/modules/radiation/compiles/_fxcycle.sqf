/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Сигнал радиметра
	
	Parameter(s):
	Return: Nothing
	
*/
	#include "..\module.sqf";
	
	_lasts = 0;

	while {true} do {
	
		if (module(Terrain) > 0) then {
		
			private _radimetr = call module(GetRadimetr);
			
			if !(_radimetr isEqualTo "") then {
				
				if ( time - _lasts > (100 / module(Terrain) max 0.25) ) then {
					_lasts = time;
					
					switch (_radimetr) do {
						case "DETECTOR_DBG06M" : {
							if (module(Terrain) < 100) then {playsound "geiger1_2"} else {playsound "geiger1_1"};
						};
						
						case "DETECTOR_RKS20" : {
							if (module(Terrain) < 100) then {playsound "geiger2_1"} else {playsound "geiger2_1"};
						};
						
						case "DETECTOR_MKS1009" : {
							if (module(Terrain) < 100) then {playsound "geiger3_1"} else {playsound "geiger3_2"};
						};
						
						default {};
					};
					
				};
				
			} else {uiSleep 1};
		} else {uiSleep 1};
		
		uiSleep 0.03;
	};
	