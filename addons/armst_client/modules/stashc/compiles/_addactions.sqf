/*
	Author: Aloe 
	Description: Добавляет действия тайника

	Parameter(s):
	
	Return:
*/	
	#include "..\module.sqf";
	
	if !(isNull module(Stash)) then {
		
		module(Stash) addAction ["Убрать тайник", ARMST_StashC_ActionRemove, [module(Stash)], 1.5, true, true, "", "[_target] call ARMST_StashC_CheckRemoveAction"];
				
	} else {
		
		player addAction ["Разместить тайник", {
			
			['armst_taynik_small'] call ARMST_StashC_ActionPlace;
			
		}, [], 1.5, true, true, "", "['armst_taynik_small'] call ARMST_StashC_CheckPlaceAction"];
		
	};