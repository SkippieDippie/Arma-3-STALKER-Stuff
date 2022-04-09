	/*
	Author: Aloe
		
	Description:
	Spawn units by order params
		
	Parameter(s):
	_this select 0: <object> trigger
	_this select 1: <array> orders list

	*/
	if (isServer) then {
	
		params ["_sensor", "_order", "_group", "_count"];
        
        //private _count = _order getVariable ["CountUnits", 0];
		private _countLimit = _order getVariable ["CountUnitsLimit", 50];
		//private _countType = _order getVariable ["CountUnitsType", 1];
		//private _countUnitsRandomize =  _order getVariable ["CountUnitsRandomize", 0];
		private _unitTypes = _order getVariable ["unitTypes", []];
		private _areaPerc = _order getVariable ["SpawnAreaPercentage", 0];
		//private _houseSpawn = _order getVariable ["Housespawn", 0];
		//private _timeDay = _order getVariable ["TimeDay", 0];
		//private _clearDelay = _order getVariable ["ClearDelay", 0];
        private _agressive = if (_order getVariable ["Behaviour", 2] isEqualTo 2) then {true} else {false};
		
        private _sensorRadius = ((triggerArea _sensor) select 0) min ((triggerArea _sensor) select 1);
		private _spawnRadius = floor (_sensorRadius  * _areaPerc / 100);
        
        private _units = [];
        for "_i" from 1 to _count step 1 do {
            if (_i <= _countLimit || _countLimit isEqualTo 0) then {
                _units pushBack (selectRandom _unitTypes);
            };
        };

        private _position = [_sensor] call ARMST_fnc_mutantsSensorGetPosition;
        if ((_sensor getVariable ["AreaMode", 1]) isEqualTo 2) then {
            _spawnRadius = random [100, 200, 300];
        };
        
        private _module = [_sensor] call ARMST_fnc_mutantsSensorGetModule;
        private _character = [_order] call ARMST_fnc_mutantsOrderGetCharacter;
        
        if ((_module getVariable ["CreateType", 1]) isEqualTo 1) then {
        
            [ 
                _sensor, 
                _group,
                _units,
                _position,
                _spawnRadius,
                _agressive,
                _character
                
            ] call ARMST_fnc_mutantsModuleSpawnUnit;
            
        } else {
        
            [
                _sensor,
                _group,
                _units,
                _position,
                _spawnRadius,
                _agressive,
                _character
            
            ] spawn ARMST_fnc_mutantsModuleSpawnUnitClient;

        };
		
        
	};