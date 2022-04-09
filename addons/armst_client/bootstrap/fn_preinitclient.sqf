	HashCode_Extra_GetRadiationDef =
	{
		if !(isNil "Current_Defence_Level") then
		{
			[format ["Текущий порог защиты от радиации составляет %1 МКР",Current_Defence_Level]] call AGM_Core_fnc_displayTextStructured; 
		};
	};
	HashCode_Extra_CountMagazines =
	{
		params["_item"];

		_array = (items player) + (magazines player);
		_items = _array select {_x isEqualTo _item};
		_count = count _items;
		_count
	};

	HashCode_RadX_Run =
	{
		params ["_unit"];
		
		if ("armst_item_antirad" in items player) then
		{
			player removeItem "armst_item_antirad";
			player playMove "AinvPknlMstpSnonWnonDnon_medic_1"; 
			[_unit] remoteExecCall ["HashCode_RadX_Apply",_unit];
			["Применён антирад Rad-X"] call AGM_Core_fnc_displayTextStructured;
		}
		else
		{
			["У вас нет антирада Rad-X"] call AGM_Core_fnc_displayTextStructured;
		};
	};

	HashCode_RadX_Apply =
	{
		_this spawn
		{	
			params ["_unit"];
			uiSleep 1;
			armst_radiation_infection = 0;
			["Чувствую эффект антирада Rad-X"] call AGM_Core_fnc_displayTextStructured;
		};
	};
	
	hashCode_food_vodka = compile preprocessFileLineNumbers "\armst_client\flex\hashCode_food_vodka.sqf";
	hashCode_extra_getPicture = compile preprocessFileLineNumbers "\armst_client\flex\hashCode_extra_getPicture.sqf";
	hashCode_extra_countItem = compile preprocessFileLineNumbers "\armst_client\flex\hashCode_extra_countItem.sqf";
	
	EH_KeyDown = compile preprocessFileLineNumbers "\armst_client\flex\key.sqf";
	
	//----Инициализация модулей клиента
	//isMultiplayer	
	if (!isDedicated && hasInterface) then {
		
		//Модуль загрузочного экрана
		#include "\armst_client\modules\Loadscreen\Loadscreen.sqf";
				
		//Модуль инициализации клиента
		//#include "\armst_client\modules\Initialization\Initialization.sqf";
		
		//Модуль лагерей
		#include "\armst_client\modules\Camp\Camp.sqf";
	};
