/*
	Author: Aloe <itfruit@mail.ru>

	Description: Обновление объекта
	
	Parameter(s):

	Return: (Nothing)
*/
	
	#include "..\..\module.sqf";
	
	params ["_control"];
	
	disableserialization;
	
	private _display = findDisplay IDC_RSCDISPLAYCAMPVIEWER;
	private _objectVarName = _control getVariable ["ARM_ObjectCreating", ""];
	private _donor = missionNamespace getVariable [_objectVarName, objNull];
	
	if !(_display isEqualTo displayNull || isNull _donor) then {
		
		if ([_donor] call module(ObjectUpgrade)) then {
			
			[] spawn {
				
				waitUntil {module(_ResponseReceived)};
				'objects' call module(Ui_Create);
			
			};
			
		};
		
	};