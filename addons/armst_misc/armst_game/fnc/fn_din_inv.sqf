/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
	_unit = _this select 0;
	
		while {true} do
		{ 
			if (("Armst_item_waterbottle" in (items _unit + assignedItems _unit)) or ("armst_item_waterbottleempty" in (items _unit + assignedItems _unit)) or ("Armst_item_waterbottle50" in (items _unit + assignedItems _unit))) then 
			{_unit setObjectTextureGlobal [2, "\armst\armst_char\char_man\stalker_gorka\data_asolo\sf_gear_khaky_co.paa"];} 
			else 
			{_unit setObjectTextureGlobal [2, ""];};
			
			if ((_unit hasweapon "Hatchet3") or (_unit hasweapon "machete") or (_unit hasweapon "Axe") or (_unit hasweapon "Axe2") or (_unit hasweapon "crowbar")) then 
			{_unit setObjectTextureGlobal [3, "\armst\armst_char\char_man\stalker_gorka\data_asolo\sf_gear2_co.paa"];} 
			else 
			{_unit setObjectTextureGlobal [3, ""];};
			_a2 = [_unit] call drg_fnc_findRadio;
			if (str _a2 == "true") then 
			{_unit setObjectTextureGlobal [4, "\armst\armst_char\char_man\stalker_gorka_2\data\usmc_marpatsfgs_co.paa"];} 
			else 
			{_unit setObjectTextureGlobal [4, ""];};
			
			if ("ItemWatch" in (items _unit + assignedItems _unit)) then 
			{_unit setObjectTextureGlobal [5, "\armst\armst_char\char_man\loners\mehanics\data\coat_co.paa"];} 
			else 
			{_unit setObjectTextureGlobal [5, ""];};
			
			if ("armst_gloves" in (items _unit + assignedItems _unit)) then 
			{_unit setObjectTextureGlobal [6, "\armst\armst_char\char_man\gloves.paa"];} 
			else 
			{_unit setObjectTextureGlobal [6, ""];};
			
			sleep 20;
	};