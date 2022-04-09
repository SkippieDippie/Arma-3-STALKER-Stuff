	/*
		Author: Aloe
		Description:
		Protect for palyer on respawn
		
		Parameter(s):
		markers <Array> - array of strings, markers names
		distance <Number> - distance protect
	*/
	
	params [["_markers", []], ["_distacnce", 0]];
	private ["_locations"];
	
	while{true}do{
	
		_locations = [];
		{
			_pos = getMarkerPos _x;
			_locations set [_forEachIndex, [_pos distance player, _x]];
		} foreach _markers;
		
		if(count _locations  > 0) then {
		
			_locations sort true;
		
			if((_locations select 0) select 0 <= _distacnce) then {
				//hint "Protect";
				player allowDamage false;
			}else{
				//hint "Protect disabled";
				player allowDamage true;
			};
		};
		
	sleep 5;
	};