/*
	Author: Aloe <itfruit@mail.ru>

	Description: Удаление объекта
	
	Parameter(s):

	Return: (Nothing)
*/
	
	#include "..\..\module.sqf";
	
	params ["_control"];
	
	disableserialization;
	
	private _display = findDisplay IDC_RSCDISPLAYCAMPVIEWER;
	private _objectVarName = _control getVariable ["ARM_ObjectDelete", ""];
	
	if !(_display isEqualTo displayNull || _objectVarName isEqualTo "") then {
		
		_object = missionNamespace getVariable [_objectVarName, objNull];
		if !(isNull _object) then {
		
			[_display, _object] spawn {
				params ["_display", "_object"];
			
				disableserialization;
				if (["Удалить объект?", "Великолепный лагерь", nil, true, _display] call BIS_fnc_guiMessage) then {

					if ([_object] call module(ObjectDelete)) then {
					
						[] spawn {
						
							waitUntil {module(_ResponseReceived)};
							'objects' call module(Ui_Create);
							
						};
					
					};
					
				};
			
			};
			
		};

	};