/*	
	Author: Aloe
	Description:
	Sale process procedure
	
	Parameter(s):
	params <Array> - addAction parameters
*/
	#include "..\module.sqf";
	
	[_this select 0, _this select 3] params ["_trader", "_showcase"];
	
	module(_CurrentTrader) = _trader;
	module(_CurrentTradeMode) = 2;
	module(_Selector) = [0, 0];
	
	private _itemPrevType = "";
	private _itemPrevTypeCount = 1;
	
	
	private _inventory = player call ARMST_fnc_getInventory;
	
	//В наличии у игрока
	private _inventoryStr = str _inventory;
	private _forSaleExt = [];
	{
		private _section = _x select 0;
		private _pool = [];
		{
			if (_inventoryStr find (_x select 0) >= 0) then {
				_pool pushBack _x;
			};
		} foreach (_x select 1);
		
		_forSaleExt pushBack [_section, _pool];

	} foreach ( _trader getVariable ["Buy", []]);
	///////////////////////////
	
	if (count _forSaleExt > 0) then {
		
		private ["_cam", "_tradeKeyControl",  "_holder"];
		
		_cam = [_trader] call module(CamCreate);
			
		module(ControlIndex) = 4;
		_tradeKeyControl = (findDisplay 46) displayAddEventHandler ["keyDown", "_this call ARMST_Trade_Control"];
	
	
		while { module(ControlIndex) != 0 and count _forSaleExt > 0} do {
			
			private _cash = player getVariable ["Money", 0];
			
			//Info item
			if (count _forSaleExt > 0) then {
				
				{
					if ((_x select 1) isEqualTo []) then {_foreachIndex call module(SetSectionDisabled)};
				} foreach _forSaleExt;
		
				private _section = _forSaleExt select (module(_Selector) select 0) select 1;
				
				if !(_section isEqualTo []) then {
				
					private _itemInfo = _section select (module(_Selector) select 1); 
					private _itemType = _itemInfo select 0;
					private _itemPrice = _itemInfo select 1;
					private _itemClass = [_itemType] call module(GetItemClass);
					private _itemUp =  getNumber (module(_Config) >> vehicleVarName _trader >>"ItemUp");
					
					(module(_Selector) select 0) call module(SetSectionSelected);
				
					if (_itemClass != "") then {
						[
							_cash, _itemPrice, 
							getText (configFile >> _itemClass >> _itemType >> "displayName"), 
							getText (configFile >> _itemClass >> _itemType >> "descriptionShort")
						] call module(DisplayGoodInfo);
		
						//Show item
						if !(isNil "_holder") then { deleteVehicle _holder };
						_holder = "groundWeaponHolder" createVehicleLocal (_showcase modelToWorld [0, 0, 0]);
						_holder setPosATL (_showcase modelToWorld [(cos getDir _showcase)* 0.1, (sin getDir _showcase)* 0.2, +_itemUp]);
						_holder setDir (getDir _showcase + 180);
						
						[_holder, [[_itemType, 1]]] call ARMST_fnc_addCargoItems;
						
						waitUntil{sleep 0.25; module(ControlIndex) != 4};
						
						switch(module(ControlIndex)) do 
						{
							case 1 : {
								["Prev", _forSaleExt, count _section] call module(ControlSelect);
							};
							case 2 : {
								["Next", _forSaleExt, count _section] call module(ControlSelect);
							};
							case 3 : {
							
								private _rm = false;
								switch (true) do {
									case (_itemType in ((_inventory select 0) select 1)) : {
										player removeItemFromUniform _itemType;
										_rm = true;
									}; 
									case (_itemType in ((_inventory select 1) select 1)) : {
										player removeItemFromVest _itemType;
										_rm = true;
									}; 
									case (_itemType in ((_inventory select 2) select 1)) : {
										player removeItemFromBackpack _itemType;
										_rm = true;
									}; 
									default {
										private _rmCnt = [player, _itemType] call BIS_fnc_invRemove;
										if (_rmCnt isEqualTo 1) then {_rm = true};
									};
								};
								
								if (_rm) then {
									_inventory = player call ARMST_fnc_getInventory;
									if ((str _inventory) find _itemType < 0) then {
										[_section, _itemType] call BIS_fnc_removeFromPairs;
									};
									
									player setVariable ["Money", _cash + _itemPrice];
									
									if(_itemPrevType != _itemType) then {
										_itemPrevType = _itemType;
										_itemPrevTypeCount = 1;
									} else {
										_itemPrevTypeCount = _itemPrevTypeCount + 1;
									};
									
									[format [localize "STR_DAP_TRADE_SOLD", _itemPrevTypeCount], -1, 0.85, 60, 0.5, 0, 764] spawn BIS_fnc_dynamicText;
								};
								
								module(ControlIndex) = 4;
								sleep 0.5;
							};   
							default {};
						};
						
						if ((!(alive player))or(!(alive _trader))) then {module(ControlIndex) = 0};
					
					} else {
						switch (module(ControlIndex)) do {
							case 1 : {["Prev", _forSaleExt, count _section] call module(ControlSelect)};
							case 2 : {["Next", _forSaleExt, count _section] call module(ControlSelect)};
							default {[module(_ControlStream), _forSaleExt, count _section] call module(ControlSelect)};
						};
					};
				} else {
					[module(_ControlStream), _forSaleExt, count _section] call module(ControlSelect);
				};
			}else{
				module(ControlIndex) = 0;
				_trader setVariable ["canSale", nil];
			};
			
			
		sleep 0.1;	
		};
		
		player setVariable ["Money", player getVariable "Money", true];
		
		cutText ["","BLACK OUT", 0.5];
		sleep 0.3;
		cutText ["","BLACK IN"];
		
		if !(isNil "_holder") then {deleteVehicle _holder};
		
		["", 0, 0, 0, 0, 0, 764] spawn BIS_fnc_dynamicText;
		(findDisplay 46) displayRemoveEventHandler ["keyDown", _tradeKeyControl];
		player cameraEffect ["terminate", "FRONT"];
		camDestroy _cam;
		
	};