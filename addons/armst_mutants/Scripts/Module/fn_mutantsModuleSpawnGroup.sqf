	/*
	Author: Aloe
		
	Description:
	Spawn group with specific parameters
		
	Parameter(s):
	_this select 0: <Side> side
	_this select 1: <Trigger> sensor
	_this select 2: <Object> order
	
	Return: <Group> created group
	*/
	
	params ["_side", "_sensor", "_order"];
	
	private _group = grpNull;
	
	private _receivedGroups = (_sensor getVariable ["ReceivedGroups", []]) - [grpNull];
	private _aliveCount = 0;
	for "_i" from 0 to ((count _receivedGroups)-1) step 1 do {
		_aliveCount = _aliveCount + ({alive _x} count units (_receivedGroups select _i));
	};
	
	if (triggerActivated _sensor) then {
	
		private _count = _order getVariable ["CountUnits", 0];
        private _countType = _order getVariable ["CountUnitsType", 1];
		private _countUnitsRandomize =  _order getVariable ["CountUnitsRandomize", 0];
		private _timeDay = _order getVariable ["TimeDay", 0];

		private _countRand = ([floor (_count  * (100 - _countUnitsRandomize) / 100), _count] call BIS_fnc_randomInt) - _aliveCount;
		private _timeDayCond = ((_timeDay == 2) or (sunOrMoon  <= _timeDay + 0.5));
        private _countRandMultiply = _countRand;
        
        if (_countType isEqualTo 2) then {
            _countRandMultiply = _countRand * (count ((call BIS_fnc_listPlayers) inAreaArray _sensor) max 1);
        };
        
		if (_countRandMultiply > 0 and _timeDayCond) then {
		
			_group = createGroup _side;
            
			if !(isNull _group) then {
				
				_group setVariable ["Order", _order, true];
				_group setVariable ["CountTotal", _countRand];
                
                if (triggerActivated _sensor) then {
                    
                    [_sensor, _order, _group, _countRandMultiply] call ARMST_fnc_mutantsModuleSpawnOrder;

				};
			};
		};
		
	};
	
	
	_group