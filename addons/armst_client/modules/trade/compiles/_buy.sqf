/*	
	Author: Aloe
	Description:
	Buy process procedure
	
	Parameter(s):
	params <Array> - addAction parameters
*/
	
	#include "..\module.sqf";
	
	[_this select 0, _this select 3] params ["_trader", "_showcase"];
	
	module(_CurrentTrader) = _trader;
	module(_CurrentTradeMode) = 1;
	module(_Selector) = [0, 0];
	
	private _itemPrevType = "";
	private _itemPrevTypeCount = 1;
	private _deal = false;
	private _items = [];
	
	private _tradeItems = _trader getVariable ["Trade", []];
	
	if (count _tradeItems > 0) then {
		
		private ["_cam", "_tradeKeyControl", "_holder"];
		
		_cam = [_trader] call module(CamCreate);
		
		module(ControlIndex) = 4;
		_tradeKeyControl = (findDisplay 46) displayAddEventHandler ["keyDown", "_this call ARMST_Trade_Control"];
		
		while { module(ControlIndex) != 0 } do {
			
			private _cash = player getVariable ["Money", 0];
			
			//Info item
			private _section = _tradeItems select (module(_Selector) select 0) select 1;
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
				_holder = "groundweaponHolder" createVehicleLocal (_showcase modelToWorld [0, 0, 0]);
				_holder setPosATL (_showcase modelToWorld [(cos getDir _showcase)* 0.1, (sin getDir _showcase)* 0.2, +_itemUp]);
				_holder setDir (getDir _showcase + 180);
				
				[_holder, [[_itemType, 1]]] call ARMST_fnc_addCargoItems;
				
				waitUntil{sleep 0.25; module(ControlIndex) != 4};
				
				switch (module(ControlIndex)) do 
				{
					case 1 : {
						["Prev", _tradeItems, count _section] call module(ControlSelect);
					};
					case 2 : {
						["Next", _tradeItems, count _section] call module(ControlSelect);
					};
					case 3 : {
						if(_cash >= _itemPrice) then {
							[player,_itemType,_cash,_itemPrice] spawn ARMST_dragster_trader_buy;
							_deal = true;
						};
						
						module(ControlIndex) = 4;
						sleep 0.5;
					};   
					default {};
				};
				
				if ((!(alive player))or(!(alive _trader))) then {module(ControlIndex) = 0};
			
			} else {
				switch (module(ControlIndex)) do {
					case 1 : {["Prev", _tradeItems, count _section] call module(ControlSelect)};
					case 2 : {["Next", _tradeItems, count _section] call module(ControlSelect)};
					default {[module(_ControlStream), _tradeItems, count _section] call module(ControlSelect)};
				};
				
				["", "", format [localize "STR_DAP_TRADE_TITLENOTINSTOCK", _itemType], ""] call module(DisplayGoodInfo);
			};
			
		sleep 0.1;
		};
		
		//Broadcast
		player setVariable ["Money", player getVariable "Money", true];
		
		cutText ["","BLACK OUT", 0.5];
		sleep 0.3;
		cutText ["","BLACK IN"];
		
		if !(isNil "_holder") then {deleteVehicle _holder};
		
		["", 0, 0, 0, 0, 0, 764] spawn BIS_fnc_dynamicText;
		(findDisplay 46) displayRemoveEventHandler ["keyDown", _tradeKeyControl];
		player cameraEffect ["terminate", "back"];
		camDestroy _cam;
		
		//Take items
		
		if (_deal) then {			
			private ["_stored"];
			waitUntil {dialog};
			waitUntil {sleep 1; !dialog};
		};
		
	};