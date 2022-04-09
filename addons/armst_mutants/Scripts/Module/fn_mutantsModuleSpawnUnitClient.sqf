	/*
	Author: Aloe
		
	Description:
	Spawn unit with specific parameters (ON CLIENT SIDE)
		
	Parameter(s):
	_this select 0: <Trigger> sensor
	_this select 1: <Group> group
	_this select 2: <String> type
	_this select 3: <Position> center
	_this select 4: <Number> radius
	
	Return: <Object> created unit
	*/
	
	params ["_sensor", "_group", "_types", "_center", "_radius", ["_agressive", false], ["_character", []]];
    
    private _allClients = call BIS_fnc_listPlayers;
    private _inAreaClients = _allClients inAreaArray _sensor;
    
    if !(_inAreaClients isEqualTo []) then {
       
        private _inAreaCleintsCount = count _inAreaClients;
        private _typesCount = count _types;
        private _notInAreaClients = _allClients - _inAreaClients;
        private _inAreaClientsOrigin = _inAreaClients;
        
        private _createMap = [];
        
        while {count _types > 0} do {
            
            private _client = objNull;
            private _clientOrigin = _client;
            
            if (_inAreaClients isEqualTo []) then {
                
				if !(_notInAreaClients isEqualTo []) then {
					_client = selectRandom _notInAreaClients;
				};
                
                _clientOrigin = selectRandom _inAreaClientsOrigin;
                
            } else {
            
                _client = _inAreaClients select 0;
                _clientOrigin = _client;
                
                _inAreaClients deleteAt 0;
            };
            
            if !(isNull _client) then {
                
                private _range = [0, (((_typesCount max 1) / _inAreaCleintsCount) max 5) min 10];
                private _typesPart = _types select _range;
               
                _types deleteRange _range;
                
                _createMap pushBack [_typesPart, _client, _clientOrigin];
            };
        };
        
        {
            _x params ["_types", "_client", "_clientOrigin"];
            
            //Создаём мутантов ближе к клиентам если режим области - игрок
            _center = [_sensor,  _clientOrigin] call ARMST_fnc_mutantsSensorGetPosition;

            if !(_types isEqualTo []) then {
                [
                    _sensor,
                    _group, 
                    _types, 
                    _center, 
                    _radius,
                    _agressive,
                    _character
                    
                ] remoteExec ["ARMST_fnc_mutantsModuleSpawnUnit", owner _client];
            };

        } foreach _createMap;
        
	} else {
        
		[
		
			_sensor,
			_group,
			_types,
			_center,
			_radius,
			_agressive,
            _character
			
		] call ARMST_fnc_mutantsModuleSpawnUnit;
        
	};
	
	