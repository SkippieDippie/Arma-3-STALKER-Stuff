/*
	Author: Aloe <itfruit@mail.ru>
	Description:  Добавление действия объекту
	Environment: Client
	
	Parameter(s):
		_objectName	 		(String) - имя объекта
		_action	 			(String) - действие

	Return: (Nothing)
*/
		
	#include "..\module.sqf";
	
	params [["_objectName", "", [""]], ["_action", "", [""]]];
	
	private _object = missionNameSpace getVariable [_objectName, objNull];
	
	if !(isNull _object) then {
		switch (toLower _action) do {
			
			case "camp" : {
				
				_object addAction [
					"Управление", 
					{
						params ["_target", "_caller", "_actionId", "_arguments"];
						
						["getParty", [], _target] call module(ServerSync);
						waitUntil {module(_ReceivedParty)};
						
						
						if !([module(Party), getPlayerUID player] call BIS_fnc_findInPairs isEqualTo -1 
						|| _target getVariable ["ARM_BoxIsBusy", false]) then {
							
							_target call module(ViewCreate);

						} else {
							hint "Управление недоступно, подождите..";
						};
					},
					[],
					5, 
					true, 
					true, 
					"",
					"true", // _target, _this, _originalTarget
					5,
					false,
					"",
					""
				];
				
			};
			
			case "object" : {
				
				//TODO: отдельынй файл с добавлением действий для объекта по его типу
				
			};
		
			default {};
		};
	};

	
