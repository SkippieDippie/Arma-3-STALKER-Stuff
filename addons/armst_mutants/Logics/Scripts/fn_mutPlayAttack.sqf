/*
	Author: Aloe 
	Description: Атака (Executing on client side)
	Environment: Client
	
	Parameter(s):
	_unit	<Object> - юнит
	_victim	<Object> - юнит
	_anim	<Array> - анимация, продолжительность
	_sound	<String> - звук
	_effect	<Bool> - 	воспроизводить эффект
	_reset	<Bool> - 	сброс аницаии
	
	Return:  Nothing
*/		

	params [
        "_unit",
        "_victim",
        "_anim", 
        "_fx",
        ["_effect", true],
        ["_reset", false],
        ["_setdammage", false]
    ];
	
	_fx params [
        "_sound",
        "_distance"
    ];
	
    //Annim apply
	if !(_anim isEqualTo []) then {
    
		_unit switchMove (_anim select 0);
		
		if (_reset) then {
			[_unit, _anim] spawn {
				
                params ["_unit", "_anim"];
                
				uiSleep ((_anim select 1) max 1.5);
				_unit switchMove "";
			};
		};
		
	};
	
     //Sounds apply
	if (
        !(_sound isEqualTo "")
        && {diag_tickTime > (_unit getVariable ["ARM_NextScreamTime", 0])}
    ) then {

		_unit say3D [_sound, _distance];
		_unit setVariable ["ARM_NextScreamTime", diag_tickTime + 2];
        
	};
    
    //Dammage apply
    private _damage = _unit getVariable ["ARM_Damage", 0];
    
    if (local _victim && _setdammage) then {
        
		if !(_victim isKindOf "Car") then {
		
			private _damageHitPoints = _unit getVariable ["ARM_DamageHitPoints", [["", 0]]];

			[_victim, _damage, _damageHitPoints] call ARMST_fnc_setDammageHitPoint;
			
		} else {

			private _hitParts = (("true" configClasses (configFile >> "cfgVehicles" >> typeOf _victim >> "HitPoints")) select {
				configName _x in [
					"HitLFWheel",
					"HitRFWheel",
					"HitLBWheel",
					"HitRBWheel",
					"HitGlass1",
					"HitGlass2",
					"HitGlass3",
					"HitGlass4"
				]
			}) apply {
				getText(_x >> "name")
			};

			if !(_hitParts isEqualTo []) then {
				private _hitPart = selectRandom _hitParts;
				_victim setHit [_hitPart, ((_victim getHit _hitPart) + _damage) min 1];
			};

		};
    };
    
     //Only for player
	if (player isEqualTo _victim) then {
    
        if (_setdammage) then {        
        _selection = selectRandom ["hand_r","hand_l","leg_r","leg_l","body"];	
		[_victim, _damage, _selection, "stab"] call ace_medical_fnc_addDamageToUnit;		
			[] spawn {
				player allowSprint false;
				uiSleep (round random [1,2,3]);
				player allowSprint true;
			};
        };
        
        if (_effect) then {
            [] spawn ARMST_fnc_mutScreenAttack;
        };
        
	};	
