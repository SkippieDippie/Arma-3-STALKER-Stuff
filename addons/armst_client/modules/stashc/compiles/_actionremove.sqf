/*
	Author: Aloe 
	Description: Функция "убрать тайник в инвентарь"

	Parameter(s):
		_stashObject <Object> - объект тайника
		
	Return: Bool
*/	
	#include "..\module.sqf";
	
	params ["_stashObject"];
	
	if ([_stashObject] call module(CheckRemoveAction)) then {
		
		private _itemClass = [typeOf _stashObject] call module(getItemClass);
		
		try {
			if (player canAddItemToBackpack  _itemClass) throw "BACKPACK";
			if (player canAddItemToVest  _itemClass) throw "VEST";
			throw false;
		} catch {
			switch (_exception) do {
				case "BACKPACK" : {player addItemToBackpack _itemClass};
				case "VEST" : {player addItemToVest _itemClass};
				default {
					hint "Нет места";
				};
			};
			
			if !(_exception isEqualTo false) then {
				//module(CargoLocal) = [_stashObject] call module(GetCargo);
				deleteVehicle _stashObject;
				[_stashObject getVariable ["ARM_StashOwnerUID", ""]] remoteExec ["armst_stashs_DeleteStash",2];
			};
		};
		
	};
	