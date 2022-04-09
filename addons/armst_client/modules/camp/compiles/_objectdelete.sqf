/*
	Author: Aloe <itfruit@mail.ru>

	Description: Удаление объекта
	
	Parameter(s):
		_object	 		(Object) - объект
		
	Return: (Bool)
*/
	
	#include "..\module.sqf";
	
	params [["_object", objNull, [objNull]]];
	
	if (getNumber (module(Config) >> "Objects" >> typeOf _object >> "recoverable") isEqualTo 1) then {

		private _addItems = getArray (module(Config) >> "Objects" >> typeOf _object >> "requiredItems");
		if (_addItems isEqualTo []) then {
		
			private _parents = format ["getText (_x >> 'Upgrade' >> 'className') == '%1'", typeOf _object] configClasses (module(Config) >> "Objects");
			if !(_parents isEqualTo []) then {
			
				_addItems = getArray (module(Config) >> "Objects" >> configName (_parents select 0) >> "Upgrade" >> "requiredItems");
				
			};
			
		};
		{
			
			private _name = _x select 0;
			private _count = _x select 1;
			private _countS = [_name] call module(GetStorageResource);
			
			[_name, (_count + _countS)] call module(SetStorageResource);
			
		} foreach _addItems;
	};

	["deleteObject", _object call BIS_fnc_objectVar] call module(ServerSync);
	
	true 