/*
	Author: Aloe <itfruit@mail.ru>
	Description:  Обновление  чувства голода
*/

//	#include "..\module.sqf";
//	
//	
//	if (alive player) then {
//		
//		private _hunger = player getVariable ["ARMST_HUNGER", 1];
//		private _thirst = player getVariable ["ARMST_THIRST", 1];
//		
//		private _hungerTime = getNumber (configFile >> "ARMST_ClientModules" >> stringify(MODULE_NAME) >> "hungerTime");
//		private _thirstTime = getNumber (configFile >> "ARMST_ClientModules" >> stringify(MODULE_NAME) >> "thirstTime");
//		
//		if (_hunger > 0 and _thirst > 0) then {
//		
//			switch (true) do {
//				case (_hunger <= 0.2 or _thirst <= 0.2) : {
//				
//					player setFatigue 1;
//					player setVariable ["AGM_Blood", (player getVariable "AGM_Blood") - 0.02,true];
//					
//					if (_hunger <= 0.2) then {systemChat (module(_HungerHints) call BIS_fnc_selectRandom)};
//					if (_thirst <= 0.2) then {systemChat (module(_ThirstHints) call BIS_fnc_selectRandom)};
//				};
//				default {};
//			};
//			
//			player setVariable ["ARMST_HUNGER", _hunger - (1 / _hungerTime),true];
//			player setVariable ["ARMST_THIRST", _thirst - (1 / _thirstTime),true];
//			
//		} else {
//			if (_hunger < 0) then {hint parseText localize "STR_HINT_PLAYER_HUNGERDEAD"};
//			if (_thirst < 0) then {hint parseText localize "STR_HINT_PLAYER_THIRSTDEAD"};
//			
//			player setDammage 1;
//		};
//		
//	};