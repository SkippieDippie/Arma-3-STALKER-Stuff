	/*
	Author: Aloe
		
	Description:
	Return position for spawn unit
		
	Parameter(s):
	_sensor		<Object> 	trigger
	
	Return: <Position> [Position, Radius]
	*/
	
	params ["_sensor", ["_unit", grpNull]];
	
	private _position = getPosATL _sensor;
	
	switch (_sensor getVariable ["AreaMode", 1]) do {
		//По всей области триггера
		case 1 : {};
		
		//Возле игрока
		case 2 : {
			private _listPlayers = (call BIS_fnc_listPlayers) inAreaArray _sensor;
			if !(_listPlayers isEqualTo []) then {
				
                if !(isNull _unit) then {
                    _position = getPosATL _unit;
                } else {
                    _position = getPosATL (selectRandom _listPlayers);
                };
				
                _position set [2, 0];
                
				/*
				if !(isNull _group) then {
					private _aliveUnits = (units _group) select {alive _x};
					if !(_aliveUnits isEqualTo []) then {
					
						_position = getPosATL (selectRandom _aliveUnits);
						
					};
				};
				*/
			};
		}:
		
		default {};
	};
	
	_position