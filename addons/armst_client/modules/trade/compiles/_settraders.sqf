	/*
	Author: Aloe
	Description: Поиск и инициализация торговцев
	
	Parameter(s):
	*/
	
	#include "..\module.sqf";
	
	//Поиск торговцев
	module(Traders) = [];
	
	{
		private _cfg =_x;
		if !(faction player in getArray (_x >> "noAllowedFactions")) then {
			{
				if (vehicleVarName _x == configName _cfg) exitWith {module(Traders) pushBack _x};
			} foreach allUnits;
		};
	} foreach ([module(_Config), 0, true] call BIS_fnc_returnChildren);
	
	//Инициализация торговцев
	{
		private _trader = _x;
		private _traderName = vehicleVarName _trader;
		private _showcaseType = getText (module(_Config) >> _traderName >> "ShowcaseType");
		
		//Поиск прилавка возле торговца
		_showcase = _trader nearEntities [[_showcaseType], 10];
		if (count _showcase > 0) then {
		
			_showcase = [_showcase, [_trader], {_input0 distance _x}, "ASCEND"] call BIS_fnc_sortBy;
			
			_trader setVariable ["ShowcaseGlobal", _showcase select 0];
			_trader setVariable ["CamRelPos", getArray (module(_Config) >> _traderName >>"CamRelative")];
			_trader setVariable ["CamFOV", getNumber (module(_Config) >> _traderName >>"CamFOV")];
			
			//Добавление действий
			_trader addaction [localize "STR_DAP_TRADE_BUYMENU", module(Buy), _showcase select 0, 1.5, true, true, "<img image='\armst_uidata\Actions\trade.paa' size='3.4' shadow=2 />", ""];
			_trader addaction [localize "STR_DAP_TRADE_SALEMENU", module(Sale), _showcase select 0, 1.5, true, true, "", "!isNil {_target getVariable 'canSale'}"];

		} else {
			[stringify(MODULE_NAME), format ["Trader (%1) can`t find global showcase '%2' (limit 10 meters)", vehicleVarName _trader, _showcaseType], "Error"] call ARMST_fnc_report;
		};
		
		//Товары и цены
		_trader call module(InitTrader);
		
		//Койка-место
		private _respType = getNumber (missionConfigfile >> "ARMST_Factions" >> faction player >> "respawn");
		if (_respType isEqualTo 3 && isClass (missionConfigfile >> "ARMST_Respawn" >> "Rent")) then {
			{
				if (_x select 0 == _traderName) exitWith {
					_trader addaction [format [localize "STR_DAP_TRADE_RENTBUNK", _x select 2], {
						params ["_trader", "_unit", "_actionIdx", "_rentier"];
						
						private _money = _unit getVariable ["Money", 0];
						private _rentCost =  _rentier select 2;
						
						if (_money >= _rentCost) then {
							profileNamespace setVariable ["ARMST_Rentier", [vehicleVarName _trader, _unit getVariable ["Deaths", 0]]];
							_unit setVariable ["ARMST_Rentier", vehicleVarName _trader];
							_unit setVariable ["Money", _money - _rentCost];
							true
						} else {
							hint "Не достаточно средств";
							false
						};
					},_x, 1.5, true, true, "", "!((player getVariable ['ARMST_Rentier', '']) isEqualTo vehicleVarName _target)"];
				};
			} foreach (getArray (missionConfigfile >> "ARMST_Respawn" >> "Rent" >> "Rentiers"));
		};

		if (count (_trader getVariable ["Buy", []]) > 0) then {
			
			//Скрипт на изменение видимости акшена Продавть (психанул, может быть можно проще но увы)
			_forSaleSpawn = [_trader] spawn {
				params ["_trader"];
				
				private _forSale = _trader getVariable ["Buy", []];

				if (count _forSale > 0) then {
					while {alive _trader and !(isNil {_trader getVariable "ForSaleSpawn"})} do {
						private _playerInv = str (player call ARMST_fnc_getInventory);
						private _canSale = false;
						
						{
							{
								if (_playerInv find (_x select 0) >= 0) exitWith {_canSale = true};
							} foreach (_x select 1);
						} foreach _forSale;
						
						if(_canSale) then {_trader setVariable ["canSale", true]} else {_trader setVariable ["canSale", nil]};

					sleep 30;
					};
				};
			};
			_trader setVariable ["ForSaleSpawn", _forSaleSpawn];
		};
		
	} foreach module(Traders);
	
	