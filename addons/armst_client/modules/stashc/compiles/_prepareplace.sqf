/*
	Author: Aloe 
	Description: Подготовка к размещению тайника

	Parameter(s):
	_itemClass <String> - класс предмета тайника
	
	Return:  String
*/	
	#include "..\module.sqf";
	
	params ["_itemClass"];
	
	module(PrepareCanceled) = false;
	module(PreparedPlace) = [0,0,0];

	private _objectClass = _itemClass call module(GetObjectClass);
	if !(_objectClass isEqualTo "") then {
		
		private _objectPlace = [getPosATL player, 1.5, getDir player] call BIS_fnc_relPos;
		
		private _stashPrview = _objectClass createVehicleLocal _objectPlace;
		if !(isNull _stashPrview) then {
			
			_stashPrview enableSimulation false;
			_stashPrview attachTo [player, [0,1.5,0]]; 
			
			private _actionRotate = player addAction [localize "STR_STASH_ACTION_ROTATE", {
				params ["_target", "_caller", "_idx", "_object"];
			
				_object setDir (getDir _object + 90);
			
			}, _stashPrview, 1.5, true, true, "", format ["!(scriptDone %1)", stringify(module(PrepareHandle))]];
			
			private _actionPlace = player addAction [localize "STR_STASH_ACTION_PLACE", {
				params ["_target", "_caller", "_idx", "_object"];
				
				private _stashObject = [typeOf _object, getPosATL _object, getDir _object, vectorUp _object] call module(Place);
				if !(isNull _stashObject) then {
					module(Stash) = _stashObject;
					module(PreparedPlace) = getPosATL _object;
					deleteVehicle _object;
				};
				
			}, _stashPrview, 1.5, true, true, "", format ["!(scriptDone %1)", stringify(module(PrepareHandle))]];
			
			private _actionCancel = player addAction [localize "STR_STASH_ACTION_CANCEL", {
				params ["_target", "_caller", "_idx", "_object"];
				
				module(PrepareCanceled) = true;
				deleteVehicle _object;
				
			}, _stashPrview, 1.5, true, true, "", format ["!(scriptDone %1)", stringify(module(PrepareHandle))]];
			
			waitUntil {!(module(PreparedPlace) isEqualTo [0,0,0]) || module(PrepareCanceled) || !alive player};
			
			{player removeAction _x} foreach [
				_actionRotate,
				_actionPlace,
				_actionCancel
			];
		};
	};
	
	