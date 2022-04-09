	/*
	Author: Aloe
		
	Description:
	Spawn unit with specific parameters
	Может исполняться как на клиенте, так и на сервере
		
	Parameter(s):
	_this select 0: <Trigger> sensor
	_this select 1: <Group> group
	_this select 2: <String> type
	_this select 3: <Position> center
	_this select 4: <Number> radius
	
	Return: <Object> created unit
	*/
	
	params ["_sensor", "_group", "_types", "_center", "_radius", ["_agressive", false], ["_character", []]];
	
    private _units = [];
	private _unit = objNull;
    private _dumpGroup = grpNull;
    
	private _blackList = [];
	{
		_blackList pushBack [getPosATL _x, 30];
	} foreach ((call BIS_fnc_listPlayers) inAreaArray _sensor);
	
    if !(local _group) then {
        _dumpGroup = createGroup WEST;
        _dumpGroup deleteGroupWhenEmpty true;
    } else {
        _dumpGroup = _group;
    };
    
    {
        private  _spawnPos = [_center, 3, _radius, 3, 0, 0.7, 0, _blackList, [_center, _center]] call BIS_fnc_findSafePos;
        
        _unit = _dumpGroup createUnit [_x, _spawnPos, [], 1, "NONE"];
        if !(isNull _unit) then {
            
            _unit setVariable [
                "DeleteTimeout", 
                ((group _unit) getVariable "Order") getVariable ["ClearDelay", 0],
                true
            ];
            
            //Поиск врага и установка агрессивности при создании
            if (_agressive) then {
            
                private _enties = [
                    _unit, 
                    _unit getVariable ["ARM_Detection", 0],
                    ["CAManBase"],
                    []
                ] call ARMST_fnc_mutFindUnits;
                
                _enties params [["_allies", []], ["_enemies", []]];
                
                if !(_enemies isEqualTo []) then {
                    _enemies = [_unit, _enemies] call ARMST_fnc_sortByDistance;
                    _unit setVariable ["Victim", _enemies select 0, true];
                };
            };
            
            if !(isNil "ARMST_fnc_mutantsCharacterSet") then {
                [_unit] call ARMST_fnc_mutantsCharacterSet;
            };
            
            [_unit, _character] call ARMST_fnc_mutantsSetCharacter;
            
            _units pushBack _unit;
        };
        
        uiSleep 0.5;
    
    } foreach _types;
	
    if !(_dumpGroup isEqualTo _group) then {
        _units joinSilent _group;
    };
    
    [_units, _sensor] remoteExecCall ["ARMST_fnc_mutantsModuleUpdateUnitsList", 2]; 
    
    