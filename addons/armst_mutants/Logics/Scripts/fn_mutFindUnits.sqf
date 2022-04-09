/*
	Author: Aloe  (itfruit@mail.ru)
		
	Description:
	Поиск врагов и союзников
	
	Environment: Client

	Parameter(s):
	<Object> - юнит
	<Number> - радиус поиска
	<Array> - типы учитываемых юнитов
	<Array> - дополнительные юниты
	
	Return: <Array> - [cоюзники, враги]
*/		
		
	
	params ["_unit", "_radius", "_types", "_custom", ["_checkPosition", true]];
	
	private _allies = [];
	private _enemies = [];
	
	//May be nullObj
	_custom = _custom - [objNull];
    
	//Scan nearest units - , "Animal"
	private _nearEnties = ((getPosATL _unit) nearEntities [_types + ["Car"], _radius]) - [_unit];
	{_nearEnties  pushBackUnique _x} foreach _custom;
	
	// ---- Определить доступных
	private _nearAvailable = [];
	private _unitPosASL = getPosASL _unit;
	{
		if (
			(_x distance _unit < _unit getVariable "ARM_Chase") 
			&& !(((crew vehicle _x) isEqualTo [])) 
            && {
            ([_unit, "GEOM", _x] checkVisibility [
                [
                    _unitPosASL select 0,
                    _unitPosASL select 1,
                    (_unitPosASL select 2) + 1.5
                ], 
                eyePos _x
            ] > 0) 
            && lifeState _x != "INCAPACITATED"}
        ) then {
            if (
                (_checkPosition && {abs (((getPosATL _x) select 2) - ((ASLToATL _unitPosASL) select 2)) < 0.3}) 
                || !_checkPosition
            ) then {
                _nearAvailable pushBack _x;
            };
		};
	} foreach _nearEnties;
	
	// --- Определить союзников и врагов
	for "_i" from 0 to (count (_nearAvailable)-1) step 1 do {
		private _current = _nearAvailable select _i;
		if (
			_current isKindOf (_unit getVariable ["ARM_ParentCfg", ""]) 
			|| {_current isKindOf _x} count (_unit getVariable ["ARM_FriendlyClasses", []]) > 0 
			|| (faction _current) isEqualTo "ARMST_MONOLITH" 
		) then {
            _allies pushBack _current;
		} else {
			_enemies pushBack _current;
		};
	};
	
	[_allies, _enemies]