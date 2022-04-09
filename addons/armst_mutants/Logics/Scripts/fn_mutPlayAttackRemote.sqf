/*
	Author: Aloe 
	Description: Воспроизведение атаки мутаната
	Environment: Client
	
	Parameter(s):
	_unit 		<Object> - юнит
	_victim 	<Object> - жертва
	_clients 	<Array> -  клиенты
	_anims 		<Array [String, Number]> - анимации
	_sounds 	<Array> - звуки
	_effect 	<Bool> - воспроизводить эффект
	
	Return:  Nothing
*/		
	
	params [
        "_unit",
        "_victim",
        "_clients",
        "_anims",
        ["_fx", []],
        ["_effect", true],
        ["_reset", false],
        ["_dammage", false]
    ];
	
	_fx params [
		["_sounds", []], 
		["_distance", 100]
	];
    
    
    if (local _unit) then {
    
    	private _sound = [selectRandom _sounds, ""] select (_sounds isEqualTo []);

        //Если клиенты неизвестны воспроизводится на тех кто не далеко.
        /*
        if (_clients isEqualType 0 && {_clients in [0,-2]}) then {
            _clients = allPlayers select {_x distance _unit < 1000};
        };
        */
        //Используется всегда на ближайших игроках
        _clients = allPlayers select {_x distance _unit < 1000};

        if !(_clients isEqualTo []) then {
            if !(_anims isEqualTo []) then {
            
                private _anim = selectRandom _anims;
                
                _unit disableAI "ANIM";
                //[_unit, "ANIM"] remoteExecCall ["disableAI", owner _unit]
                
                _attackAnimTimeOut = diag_tickTime;
                
                [
                    _unit,
                    _victim,
                    _anim,
                    [_sound, _distance],
                    _effect,
                    _reset,
                    _dammage
                    
                ] remoteExecCall ["ARMST_fnc_mutPlayAttack", _clients];
                
                waitUntil {diag_tickTime - _attackAnimTimeOut > (_anim select 1) max 0.5};
                
                _unit enableAI "ANIM";
                
            } else {
                [_unit, [_sound, _distance]] remoteExecCall ["Say3D", _clients];
            };
        };
    
    
    };
	
	true
	
	
	
	