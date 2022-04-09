/*
	  Author: Aloe <itfruit@mail.ru>
	  Description: Устанавливает владельца локации
	  
	  Parameter(s):
	_logic <Object> Триггер локации
	_owner <String> Название фракции
	
*/
	
	params ["_logic", "_owner"];
	
	if !(isNull (configFile >> "CfgFactionClasses" >> _owner)) then {
		_logic setVariable ["ForcedOwner", _owner];
	};