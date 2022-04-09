/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Отображает исход оспариваемой локации
	
	Parameters:
	 _owner  		(String) -  имя фракции
	 _location 		(Object) -  локация
	

	params [["_location", [objNull], [objNull]], ["_owner", "", [""]], ["_ownerOld", "", [""]]];
	
	private _flag = getText (configFile >> "cfgFactionClasses" >> _owner >> "flag");
	
	switch (true) do {
		case (_ownerOld isEqualTo faction player) : {
			["LocationLost", [
				format [localize "STR_LOCATION_NOTIFI_LOST_DESC", _location getVariable "Name"],
				_flag call BIS_fnc_textureMarker
			]] call BIS_fnc_showNotification;
		};
		default {
			["LocationCaptured", [
				format [localize "STR_LOCATION_NOTIFI_CAPTURED_DESC", _location getVariable "Name", getText (configFile >> "cfgFactionClasses" >> _owner >> "displayName")],
				_flag call BIS_fnc_textureMarker
			]] call BIS_fnc_showNotification;
		};
	};
	*/	
	