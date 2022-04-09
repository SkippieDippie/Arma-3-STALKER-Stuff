/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Модуль тайников (клиент)
  
*/

	#include "module.sqf";
	
	moduleInitStart();
	
	module(Stash) = objNull;		//Размещённый игроком тайник
	module(CargoLocal) = [];		//Временное содержимое тайника
	
	module(Conformity) = [
		["armst_taynik_small", "armst_box_small"],
		["armst_taynik_big", "armst_box_big"]
	];
	
	module(PrepareHandle) = scriptNull;
	module(PreparedPlace) = [0,0,0];
	module(PrepareCanceled) = false;
	
	#define MODULE_FUNC_PATH \compiles
		moduleCompileFunction(GetObjectClass);
		moduleCompileFunction(GetItemClass);
		
		moduleCompileFunction(PreparePlace);
		moduleCompileFunction(Place);
		
		moduleCompileFunction(ClearCargo);
		moduleCompileFunction(GetCargo);
		moduleCompileFunction(SetCargoLocal);
		
		moduleCompileFunction(ActionPlace);
		moduleCompileFunction(ActionRemove);
		
		//moduleCompileFunction(InventoryOpened);
		moduleCompileFunction(InventoryClosed);
		
		moduleCompileFunction(AddActions);
		
		moduleCompileFunction(CheckInventory);
		moduleCompileFunction(CheckPlaceAction);
		moduleCompileFunction(CheckRemoveAction);
		
		
	//Добавление шаблона логов
	[stringify(MODULE_NAME), 
		["[module] StashC:", "[module] StashC ERROR:"], 
		(configFile >> "ARMST_ClientModules" >> stringify(MODULE_NAME) >> "log") call BIS_fnc_getCfgDataBool
	] call ARMST_fnc_reportAdd;
	
	[] spawn {
		waitUntil {sleep 0.1; app(Player,Authed)};
		
		//player addEventHandler ["InventoryOpened", module(InventoryOpened)];
		player addEventHandler ["InventoryClosed", module(InventoryClosed)];
		
	};

	moduleInitEnd();
	