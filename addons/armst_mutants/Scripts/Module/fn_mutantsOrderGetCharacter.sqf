	/*
	Author: Aloe
		
	Description:
	Get mutant character from order settings
		
	Parameter(s):
	_order      <Order>  
    
    Return Array
	*/
	
    params ["_order"];

    [
        (_order getVariable ["HabitatRadius", 100]) max 1,
        (_order getVariable ["DetectionRadius", 100]) max 1,
        (_order getVariable ["CoverRadius", 100]) max 1,
        (_order getVariable ["EscapeRadius", 100]) max 1,
        ((_order getVariable ["Dammage", 0]) max 0) / 100,
        ((_order getVariable ["Agressive", 0]) max 0) / 100,
        ((_order getVariable ["Curious", 0]) max 0) / 100,
        ((_order getVariable ["Secrecy", 0]) max 0) / 100,
        ((_order getVariable ["Cowardice", 0]) max 0) / 100,
        ((_order getVariable ["Societal", 0]) max 0) / 100,
        (_order getVariable ["Courage", 0]) max 0,
        (if (_order getVariable ["Tactiful", 0] > 0) then {true} else {false}),
        _order getVariable ["DebugType", 0]
    ];
