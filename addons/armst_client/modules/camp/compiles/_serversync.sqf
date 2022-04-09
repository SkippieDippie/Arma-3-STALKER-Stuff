/*
	Author: Aloe <itfruit@mail.ru>

	Description: Отправка запроса на сервер
	
	Parameter(s):
		_query	 		(String) - запрос
		_args	 		(Anything) - данные
		_object	 		(Object) - объект (По умолчанию текущий лагерь)
		
	Return: (Nothing) 
*/
	
	#include "..\module.sqf";
	
	params [["_query", "", [""]], ["_args", []], ["_object", module(MainBox), [objNull]]];

	switch (toLower _query) do {
		case "updateresources",
		case "getresources" : {
			module(_ReceivedResources) = false;
		};
		case "createobject",
		case "updateobject",
		case "deleteobject",
		case "getobjects" : {
			module(_ReceivedObjects) = false;
		};
		
		case "addpartymember",
		case "delpartymember",
		case "getparty" : {
			module(_ReceivedParty) = false;
		};
	};
	
	module(_ResponseReceived) = false;
	

	if !(isNull _object) then {
		
		private _objectName = _object call BIS_fnc_objectVar;
		
		[
		
			_objectName,
			_query, 
			_args
			
		] remoteExec [stringify(app(Camps,SyncData)), 2];
		
	};
	
	
	