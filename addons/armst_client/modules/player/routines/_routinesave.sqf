/*
	Author: Aloe <itfruit@mail.ru>
	Description:  Сохранение персонажа
*/

	#include "..\module.sqf";
	
	if !(missionNamespace getVariable [stringify(app(Instance,WithoutDatabase)), true]) then {
		if (!isNull player and {alive player}) then {
			
			[player, [
				
				["Hunger", player getVariable ["ARMST_HUNGER", 100]],
				["Thirst", player getVariable ["ARMST_THIRST", 100]],
				["Alcohol", player getVariable ["Alcohol", 0]],
				["Irradiation", app(Radiation,Infection)]
				
			]] remoteExec ["ARMST_Account_SavePlayer"];
		};
	};
	