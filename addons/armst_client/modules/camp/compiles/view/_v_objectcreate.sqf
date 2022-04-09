/*
	Author: Aloe <itfruit@mail.ru>

	Description: Создание объекта
	
	Parameter(s):

	Return: (Nothing)
*/
	
	#include "..\..\module.sqf";
	
	params ["_control"];
	
	disableserialization;
	
	private _display = findDisplay IDC_RSCDISPLAYCAMPVIEWER;
	private _className = _control getVariable ["ARM_ObjectCreating", ""];
	
	if !(_display isEqualTo displayNull || _className isEqualTo "") then {
		
		ctrlSetFocus (_display displayCtrl IDC_RSCDISPLAYCAMPVIEWER_MOUSEAREA);
		
		private _object = _className createVehicleLocal [0, 0, 0];
		
		module(_ObjectIsMoving) = _object;
		
		private _handle = [_object] spawn module(V_ObjectPlacement);
		waitUntil {scriptDone _handle};
		
		[_display, _object] spawn {
			params ["_display", "_object"];
			
			disableserialization;
			if (["Создать объект?", "Великолепный лагерь", nil, true, _display] call BIS_fnc_guiMessage) then {
				if ([getArray (module(Config) >> "Objects" >> typeOf _object >> "requiredItems")] call module(DelStorageResources)) then {

					if !(isNull ([typeOf _object, ASLToATL (getPosASL _object), [vectorDir _object, vectorUp _object], direction _object] call module(ObjectCreate))) then {
					
						deleteVehicle _object;
						
						[] spawn {
						
							waitUntil {module(_ReceivedObjects)};
							'resources' call module(Ui_Create);
							
						};
						
					};
				};
			} else {
			
				deleteVehicle _object;
				
			};
		};
		
		module(_ObjectIsMoving) = objNull;
		
	};