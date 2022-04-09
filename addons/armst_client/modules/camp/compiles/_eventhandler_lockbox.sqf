/*
	Author: Aloe <itfruit@mail.ru>
	Description:  Добавлеие обработчика открытия контейнера
	
	Parameter(s):
		_objectName	 			(String) - контейнер

	Return: (Nothing)
*/
	
	params [["_objectName", "", [""]]];
	
	private _object = missionNameSpace getVariable [_objectName, objNull];
	if !(isNull _object) then {
	
		_object addEventHandler ["ContainerOpened", {
	
			params ["_openedContainer", "_unit"];
			
			if (_openedContainer getVariable ["ARM_BoxIsBusy", false]) then {
			
				_unit action ["CancelAction", _unit];
				hint "Действие недоступно, подождите..";
				
			};
		}];
		
	};
