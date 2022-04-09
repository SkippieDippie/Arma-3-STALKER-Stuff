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
	
	params ["_sensor", "_group", "_types", "_center", "_radius", ["_agressive", false]];
	
	private _clients = [];
	{
		_clients pushBackUnique _x;
	} foreach ((call BIS_fnc_listPlayers) inAreaArray _sensor);

	if !(_clients isEqualTo []) then {
        //? INPORTANT
        //Изначально идея была раскидывать равномерно юнитов по клиентам внутри триггера
        //Сервер слетает, только при создании на клиенте, другой подход:
        // - создавать пачку юнитов на одном из клиентов сначала передавая группу 
        // - при обновлении количества юнитов, группа будет локальна последнему клиенту
        /*
        private _clientsCount = count _clients;
        private _unitsCount = (count _types) max 1;
        
        
        for "_i" from 0 to (_clientsCount - 1) step 1 do {
            //? INPORTANT
            private _client = (_clients select _i);
        */   
            //! INPORTANT
            private _client = selectRandom _clients;
            
            //Для передачи группы должен быть хотя бы один юнит
            if (isDedicated) then {
            
                private _dumpUnit = _group createUnit ["B_RangeMaster_F", [0,0,0], [], 1, "CAN_COLLIDE"];
                waitUntil {uiSleep 0.1; (group _dumpUnit) isEqualTo _group};
                
                if (local _group) then {
                
                    _group setGroupOwner (owner _client);
            
                    private _timeout = diag_tickTime + 30;
                    waitUntil {uiSleep 1; !local _group || diag_tickTime > _timeout};
                    
                };

                if (!local _group && groupOwner _group != 0) then {
                
                    //Создаём мутантов ближе к клиентам если режим области - игрок
                    _center = [_sensor,  _client] call ARMST_fnc_mutantsSensorGetPosition;

                    //? INPORTANT
                    //_types = _types select [0, (round (_unitsCount / _clientsCount)) max 1];
                    if !(_types isEqualTo []) then {                
                        [
                            _sensor,
                            _group, 
                            _types, 
                            _center, 
                            _radius,
                            _agressive
                            
                        ] remoteExec ["ARMST_fnc_mutantsModuleSpawnUnit", groupOwner _group];
                    };

                } else {
                    diag_log format ["SPAWN UNIT ERROR ! CAN`t SET OWNER %1 FOR GROUP %2 [TYPES: %3]", 
                        owner _client, 
                        _group,
                        _types
                    ];
                };

                deleteVehicle _dumpUnit;
                
            } else {
            
                _center = [_sensor,  _client] call ARMST_fnc_mutantsSensorGetPosition;

                if !(_types isEqualTo []) then {            
                    [
                    
                        _sensor,
                        _group, 
                        _types, 
                        _center, 
                        _radius,
                        _agressive
                        
                    ] remoteExec ["ARMST_fnc_mutantsModuleSpawnUnit", owner _client];
                };

            };
        //};
	} else {
        
        _group setGroupOwner 2;
        
		[
		
			_sensor,
			_group,
			_types,
			_center,
			_radius,
			_agressive
			
		] call ARMST_fnc_mutantsModuleSpawnUnit;
        
	};
	
	