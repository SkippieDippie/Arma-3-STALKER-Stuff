/*
	Author: Aloe 
	Description: Инициализация действий
	Environment: Client
	
	Parameter(s):
	_unit 		<Object> - юнит
	
	Return:  Nothing
*/		
	params ["_unit"];
	
	private _commandCanFollow = _unit getVariable ["ARM_Animal_CanFollow", false];
	private _commandCanGuard = _unit getVariable ["ARM_Animal_CanGuard", false];
	private _commandCanSit = _unit getVariable ["ARM_Animal_CanSit", false];
	private _commandSearchPA = _unit getVariable ["ARM_Animal_SearchPeople_A", false];
	private _commandSearchPE = _unit getVariable ["ARM_Animal_SearchPeople_E", false];
	private _commandSearchO = _unit getVariable ["ARM_Animal_SearchObjects", false];
	private _domesticated = _unit getVariable ["ARM_Animal_Domesticated", false];
	
	private _allActions = [];
	
	if !(_unit getVariable ["ARM_Domesticated", false]) then {
		
		[_unit, "AWARE"] call ARMST_fnc_mutBehaviourSet;
		
		if (_commandCanFollow) then {
		
			_allActions pushBackUnique (_unit addAction [
				format ["<t color='#EEEEEE'>%1</t>", localize "STR_STST_func_dog_command_follow"], 
				"_this call ARMST_fnc_dogCommandFollow",
				[],
				1.5, 
				true, 
				true, 
				"",
				"alive _target && {[_target, _this] call ARMST_fnc_mutIsFriendly}", 
				10,
				false,
				"",
				""
			]);
			
			_allActions pushBackUnique (_unit addAction [
				format ["<t color='#EEEEEE'>%1</t>", localize "STR_STST_func_dog_command_walk"], 
				"_this call ARMST_fnc_dogCommandWalk",
				[],
				1.5, 
				true, 
				true, 
				"",
				"alive _target && {[_target, _this] call ARMST_fnc_mutIsFriendly}",
				10,
				false,
				"",
				""
			]);
					
			if (_commandCanGuard) then {
			
				_allActions pushBackUnique (_unit addAction [
					format ["<t color='#EEEEEE'>%1</t>", localize "STR_STST_func_dog_command_guard"], 
					"_this call ARMST_fnc_dogCommandGuard",
					[],
					1.5, 
					true, 
					true, 
					"",
					"alive _target && {[_target, _this] call ARMST_fnc_mutIsFriendly}", 
					10,
					false,
					"",
					""
				]);
				
			};
			
			if (_commandCanSit) then {
			
				_allActions pushBackUnique (_unit addAction [
					format ["<t color='#EEEEEE'>%1</t>", localize "STR_STST_func_dog_command_sit"], 
					"_this call ARMST_fnc_dogCommandSit",
					[],
					1.5, 
					true, 
					true, 
					"",
					"alive _target && {[_target, _this] call ARMST_fnc_mutIsFriendly}",
					10,
					false,
					"",
					""
				]);
			
			};
			
			_allActions pushBackUnique (_unit addAction [
				format ["<t color='#EEEEEE'>%1</t>", localize "STR_STST_func_dog_command_behaviour_attack"], 
				"[_this select 0, 'COMBAT'] call ARMST_fnc_mutBehaviourSet",
				[],
				1.5, 
				true, 
				true, 
				"",
				"alive _target && {[_target, _this] call ARMST_fnc_mutIsFriendly} && !([_target, 'COMBAT'] call ARMST_fnc_mutBehaviour)", // _target, _this, _originalTarget
				10,
				false,
				"",
				""
			]);
			
			_allActions pushBackUnique (_unit addAction [
				format ["<t color='#EEEEEE'>%1</t>", localize "STR_STST_func_dog_command_behaviour_warn"], 
				"[_this select 0, 'AWARE'] call ARMST_fnc_mutBehaviourSet",
				[],
				1.5, 
				true, 
				true, 
				"",
				"alive _target && {[_target, _this] call ARMST_fnc_mutIsFriendly} && !([_target, 'AWARE'] call ARMST_fnc_mutBehaviour)", // _target, _this, _originalTarget
				10,
				false,
				"",
				""
			]);
			
			_allActions pushBackUnique (_unit addAction [
				format ["<t color='#EEEEEE'>%1</t>", localize "STR_STST_func_dog_command_behaviour_safe"], 
				"[_this select 0, 'SAFE'] call ARMST_fnc_mutBehaviourSet",
				[],
				1.5, 
				true, 
				true, 
				"",
				"alive _target && {[_target, _this] call ARMST_fnc_mutIsFriendly} && !([_target, 'SAFE'] call ARMST_fnc_mutBehaviour)", // _target, _this, _originalTarget
				10,
				false,
				"",
				""
			]);
				
		};
		
		
		if (_commandSearchPA) then {
		
			_allActions pushBackUnique (_unit addAction [
				format ["<t color='#EEEEEE'>%1</t>", localize "STR_STST_func_dog_command_search_allies"], 
				"_this call ARMST_fnc_dogCommandSearchPeopleA",
				[],
				1.5, 
				true, 
				true, 
				"",
				"alive _target && {[_target, _this] call ARMST_fnc_mutIsFriendly}",
				10,
				false,
				"",
				""
			]);
			
		};
		
		
		if (_commandSearchPE) then {
		
			_allActions pushBackUnique (_unit addAction [
				format ["<t color='#EEEEEE'>%1</t>", localize "STR_STST_func_dog_command_search_enemies"], 
				"_this call ARMST_fnc_dogCommandSearchPeopleE",
				[],
				1.5, 
				true, 
				true, 
				"",
				"alive _target && {[_target, _this] call ARMST_fnc_mutIsFriendly}", 
				10,
				false,
				"",
				""
			]);
			
		};
		
		if (_commandSearchO) then {
		
			_allActions pushBackUnique (_unit addAction [
				format ["<t color='#EEEEEE'>%1</t>", localize "STR_STST_func_dog_command_search_items"], 
				"_this call ARMST_fnc_dogCommandSearchObjects",
				[],
				1.5, 
				true, 
				true, 
				"",
				"alive _target && {[_target, _this] call ARMST_fnc_mutIsFriendly}",
				10,
				false,
				"",
				""
			]);
			
		};
		
		if (_domesticated) then {
			
			_allActions pushBackUnique (_unit addAction [
				localize "STR_STST_func_dog_tame", 
				"_this call ARMST_fnc_dogActionDomesticate",
				[],
				0.5, 
				true, 
				true, 
				"",
				"alive _target && {[_target, _this] call ARMST_fnc_mutIsFriendly}",
				10,
				false,
				"",
				""
			]);
		
		};
		
		_unit setVariable ["ARM_CommandActions", _allActions];
		
	};