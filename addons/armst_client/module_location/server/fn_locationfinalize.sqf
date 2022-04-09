	/*
		Author: Aloe
		Description:
		Finalize location
		
		Parameter(s):
		<Logic> - location trigger
	
	*/
	
	
	params ["_logic"];
	private ["_locations"];
	
	if (isNull _logic) then {
		_locations = missionnamespace getvariable ["ARMST_fnc_moduleLocation_locations",[]];
		_locations = _locations - [_logic, objNull];
		missionnamespace setvariable ["ARMST_fnc_moduleLocation_locations", _locations];
		publicvariable "ARMST_fnc_moduleLocation_locations";

		//--- Delete markers
		{deletemarker _x} foreach (_logic getVariable ["LocationMarkers", []]);
	} else {
		//--- Mark as finalized globaly (enableSImulation is local only)
		_logic setvariable ["Finalized", true, true];
		_logic setvariable ["Contested", false, true];

		//--- Make markers transparent
		{_x setmarkeralpha (markeralpha _x * 0.5)} foreach (_logic getVariable ["LocationMarkers", []]);
	};