/*
	Author: Aloe <itfruit@mail.ru>

	Description: Обновление объекта
	
	Parameter(s):
		_donor	 		(Object) - объект
		
	Return: (Bool)
*/
	
	#include "..\module.sqf";
	
	params [["_donor", objNull, [objNull]]];
	
	private _config = module(Config) >> "Objects" >> typeOf _donor >> "Upgrade";
	private _class = getText (_config >> "className");
	private _delete = getArray (_config >> "requiredItems");
	
	private _updated = false;
	
	if ([_delete] call module(DelStorageResources)) then {
		
		_donor hideObject true;
		
		if !(isNull ([_class, ASLToATL (getPosASL _donor), [vectorDir _donor, vectorUp _donor], direction _donor] call module(ObjectCreate))) then {
			
			
			["deleteObject", _donor call BIS_fnc_objectVar] call module(ServerSync);
			
			_updated = true;
			
		} else {
			
			_donor hideObject false;
		
		};
		
	};
	
	_updated;
	
	