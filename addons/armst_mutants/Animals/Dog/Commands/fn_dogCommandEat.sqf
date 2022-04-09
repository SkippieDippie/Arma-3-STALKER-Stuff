/*
	Author: Aloe 
	Description: Команда - ешь
	Environment: Client
	
	Parameter(s):
	_unit 			<Object> - юнит (собака)
	_caller 		<Object> - юнит
	
	Return:  Nothing
*/		
	params ["_unit", "_caller"];

	if (_unit getVariable ["ARM_EatCommand", false]) exitWith {};
	_unit setVariable ["ARM_EatCommand", true, true];
	
	[_unit, ""] remoteExecCall ["switchMove", 0];
	[_unit, localize "STR_armst_animal_eat"] call ARMST_fnc_dogLastCommand;
	
	
	private _followed = _unit getVariable ["ARM_FollowTo", objNull];
	private _behaviour = _unit getVariable ["ARM_MutantBehaviour", "SAFE"];
	
	private _nearestEatHolders = (nearestObjects [screenToWorld [0.5,0.5], [
		"GroundWeaponHolder",
		"WeaponHolderSimulated",
		"WeaponHolder"
	], 10]);
	
	private _continue = {
		params ["_unit"];
		
		(!isNull _unit && {alive _unit && ([_unit, "SAFE"] call ARMST_fnc_mutBehaviour)});
	};
	
	if (count _nearestEatHolders > 0) then {
	
		private _container = _nearestEatHolders select 0;
			
		private _animations = [_unit] call ARMST_fnc_mutGetConfigAnims;
		private _eat = [
			"armst_item_kolbasa",
			"armst_salo",
			"armst_item_bred",
			"armst_item_bred_old",
			"armst_item_cheburek",
			"armst_item_shaverma"
		];
		
		private _dumbWeapons = getMagazineCargo _container;
		private _cargo = getItemCargo _container;
		_cargo params [
			["_cargoItems", []], 
			["_cargoCount", []]
		];
		
		if ({toLower _x in _eat} count _cargoItems > 0) then {
			
			_unit disableAI "FSM";
			
			[_unit, "SAFE"] call ARMST_fnc_mutBehaviourSet;
			_unit setVariable ["ARM_FollowTo", objNull, true];
			_unit setFormDir ([_unit, _container] call BIS_fnc_dirTo);
			_unit doMove (getPosATL _container);
			
			private _tiemOut = time + 10;
			waitUntil {uiSleep 1; _unit distance _container < 1 || time > _tiemOut || !([_unit] call _continue)};
			if (time < _tiemOut && ([_unit] call _continue)) then {

				for "_i" from 0 to (count _cargoItems) - 1 step 1 do {
					
					if (!([_unit] call _continue) || _unit distance _container > 3) exitWith {};
					
					private _direction = [_unit, _container] call BIS_fnc_dirTo;
					_unit setFormDir _direction;
					_unit setDir _direction;
					_unit doWatch (_container getPos [5, direction _unit]);
					
					private _item = _cargoItems select _i;
					private _count = _cargoCount select _i;
					
					if ((toLower _item) in _eat) then {
						
						waitUntil {
							
							[
								_unit,
								_container,
								-2,
								[_animations, "eat", [""]] call BIS_fnc_getFromPairs,
								[],
								false
							] call ARMST_fnc_mutPlayAttackRemote;
							
							uiSleep 5;
							
							_count = _count - 1;
							_cargoCount set [_i, _count];
							
							_unit setVariable ["ARMST_Hunger", ((_unit getVariable ["ARMST_Hunger", 0]) - 20) max 0, true];
							
						_count isEqualTo 0
						};
						
						_container addMagazineCargo ["30Rnd_ak_545x39_mag", 1];
						clearItemCargoGlobal _container;
						{
							_container addItemCargoGlobal [_x, _cargoCount select _foreachIndex];
						} foreach _cargoItems;
						
						//Пустые контейнеры удаляются (костыль - добавляем временный предмет перед отчисткой)
						private _lastStuff = ({_x > 0} count _cargoCount) isEqualTo 0;
						if (_lastStuff) then {
							_container addItemCargo [_eat select floor random count _eat, 1];
						};
						clearMagazineCargoGlobal _container;
						if !(_dumbWeapons isEqualTo [[],[]]) then {
							{
								_container addMagazineCargoGlobal [_x, (_dumbWeapons select 1) select _foreachIndex];
							} foreach (_dumbWeapons select 0);
						};
						if (_lastStuff) then {clearItemCargo _container};
					};
				};
			};
			
			_unit enableAI "FSM";
		
		} else {
			[_target, _caller, "ничего съедобного не нашел..."] call ARMST_fnc_dogStateHint;
		};
	} else {
		[_target, _caller, "ничего съедобного не нашел..."] call ARMST_fnc_dogStateHint;
	};
	
	
	[_unit, _behaviour] call ARMST_fnc_mutBehaviourSet;
	
	if !(isNull _followed) then {
		_unit setVariable ["ARM_FollowTo", _followed, true];
		[_unit, localize "STR_armst_animal_follow"] call ARMST_fnc_dogLastCommand;
	};
	
	_unit setVariable ["ARM_EatCommand", false, true];

