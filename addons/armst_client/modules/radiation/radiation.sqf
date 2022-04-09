/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Модуль радиации
  
*/

	#include "module.sqf";
	
	moduleInitStart();
	
	module(SelectedRadimetr) = "";
	module(Infection) = 0;
	module(Terrain) = 0;
	module(Level) = 0;
	module(SpentTime) = 0;
	
	module(_DefaultDistance) = 100;
	module(_Radimetrs) = [
	
		//Классы диалогов
		["DETECTOR_DBG06M", "DETECTOR_MKS1009", "DETECTOR_RKS20"],
		//Классы объектов
		["DETECTOR_DBG06M", "DETECTOR_MKS1009", "DETECTOR_RKS20"]
		
	];
	
	module(_arrAllBackpacsSeva) = [];
	module(_arrBaseSeva) = [
	
		"Armst_sevasvoboda2",
		"Armst_sevastalk",
		"Armst_sevastalk2",
		"Armst_sevastalk3",
		"Armst_sevastalk4",
		"Armst_sevastalk5",
		"Armst_sevastalk6",
		"Armst_seva_enoch",
		"Armst_sevaclearsky",
		"Armst_sevamonolith",
		"Armst_sevadolg",
		"Armst_sevasvoboda",
		"Armst_sevanaemnik",
		"Armst_sevavoen",
		"Armst_science_2",
		"Armst_science2",
		"Armst_seva_orden",
		"Armst_seva_champion",
		"Armst_coat_seva_stalk1_1",
		"Armst_coat_seva_stalk1_2",
		"Armst_coat_seva_stalk2_1",
		"Armst_coat_seva_stalk2_2",
		"Armst_coat_seva_stalk3_1",
		"Armst_coat_seva_stalk3_2",
		"Armst_coat_seva_stalk4_1",
		"Armst_coat_seva_stalk4_2",
		"Armst_coat_seva_stalk5_1",
		"Armst_coat_seva_stalk5_2",
		"Armst_coat_seva_stalk6_1",
		"Armst_coat_seva_stalk6_2",
		"Armst_coat_seva_clearsky_1",
		"Armst_coat_seva_clearsky_2",
		"Armst_coat_seva_duty_1",
		"Armst_coat_seva_duty_2",
		"Armst_coat_seva_freedom_1",
		"Armst_coat_seva_freedom_2",
		"Armst_coat_seva_freedom2_1",
		"Armst_coat_seva_freedom2_2",
		"Armst_coat_seva_merc_1",
		"Armst_coat_seva_champion",
		"Armst_coat_seva_orden",
		"Armst_coat_seva_merc_2"
		
	];
	module(_arrAllBackpacsSeva) pushBack module(_arrBaseSeva);
	
	module(_arrArmedSeva) = [
	
		 "Armst_armed_seva_champion"
		,"Armst_armed_seva_svoboda2"
		,"Armst_armed_seva_stalk"
		,"Armst_armed_seva_stalk2"
		,"Armst_armed_seva_stalk3"
		,"Armst_armed_seva_stalk4"
		,"Armst_armed_seva_stalk5"
		,"Armst_armed_seva_stalk6"
		,"Armst_armed_seva_clearsky"
		,"Armst_armed_seva_monolith"
		,"Armst_armed_seva_dolg"
		,"Armst_armed_seva_svoboda"
		,"Armst_armed_seva_naemnik"
		,"Armst_armed_seva_voen"
		,"Armst_armed_seva_orden"
		
	];
	module(_arrAllBackpacsSeva) pushBack module(_arrArmedSeva);
	
	
	module(_arrSevaHelmets) = [
	
		 "armst_seva_champion_shlem"
		,"armst_seva_shlem_dolg"
		,"armst_seva_shlem"
		,"armst_seva_shlem2"
		,"armst_seva_shlem3"
		,"armst_seva_shlem4"
		,"armst_seva_shlem5"
		,"armst_seva_shlem6"
		,"armst_seva_shlem_merc"
		,"armst_seva_shlem_monolith"
		,"armst_seva_orden_shlem"
		,"armst_seva_shlem_army"
		,"armst_seva_shlem_clearsky"
		,"armst_seva_shlem_freedom"
		,"armst_seva_shlem_freedom2"
		,"armst_seva_science_shlem"
		,"armst_seva_science_shlem2"
		
	];
	
	module(_arrSevaBackpacks) = [
	
		 "armst_seva_backpack_champion"
		,"armst_seva_backpack_freedom2"
		,"armst_seva_backpack_dolg"
		,"armst_seva_backpack"
		,"armst_seva_backpack2"
		,"armst_seva_backpack3"
		,"armst_seva_backpack4"
		,"armst_seva_backpack5"
		,"armst_seva_backpack6"
		,"armst_seva_backpack_army"
		,"armst_seva_backpack_orden"
		,"armst_seva_backpack_clearsky"
		,"armst_seva_backpack_freedom"
		,"armst_seva_backpack_merc"
		,"armst_seva_backpack_monolith"
		,"armst_seva_science_backpack"
		,"armst_seva_science_backpack_2"
		
	];
	
	module(_arrGluharHeadgear) = [
		
		"armst_gluhar"
		,"armst_gluhar_army"
		,"armst_gluhar_science"
		,"armst_gluhar_science2"
		,"armst_gluhar_orden"
		
	];
	
	
	#define MODULE_FUNC_PATH \compiles
		moduleCompileFunction(LifeCycle);
		moduleCompileFunction(FxCycle);
		
		moduleCompileFunction(DisplayEffect);
		moduleCompileFunction(CalculateProtect);
		moduleCompileFunction(IssetRadimetr);
		moduleCompileFunction(GetRadimetr);
		moduleCompileFunction(ShowRadimetr);
		
		moduleCompileFunction(SetInfection);
		
		moduleCompileFunction(DecimalNumber);
		moduleCompileFunction(TimeToString);
		
	//Добавление шаблона логов
	[stringify(MODULE_NAME), 
		["[module] Radiation:", "[module] Radiation ERROR:"], 
		(configFile >> "ARMST_ClientModules" >> stringify(MODULE_NAME) >> "log") call BIS_fnc_getCfgDataBool
	] call ARMST_fnc_reportAdd;
	
	[] spawn module(LifeCycle);
	[] spawn module(FxCycle);
	
	moduleInitEnd();
