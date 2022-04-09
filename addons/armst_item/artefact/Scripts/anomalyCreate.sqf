/*
	Инициализация аномалии.
	
	auhtor: SteelRat
*/

_pos = _this select 0;
_anomaly = _this select 1;
_trg = objNull;

// trigger effect
_trg setVariable ["anomalyKiller", format["\dapartefacts\Scripts\anomalyKiller_%1.sqf", _anomaly]];
_trgOnDeact = "0 = [thistrigger] execVM '\dapartefacts\Scripts\effectOff.sqf'";

// trigger create
_trg = createTrigger ["EmptyDetector", _pos, true];
_trg setTriggerArea [20, 20, (random 360), false];
_trg setTriggerActivation ["ANY", "PRESENT", true];
_trg setTriggerStatements ["this", _trgOnAct, _trgOnDeact];
_trg setVariable ["isDelete", false];
_trg setVariable ["anomalyKiller", format["\dapartefacts\Scripts\anomalyKiller_%1.sqf", _anomaly]];

//	trigger logic
_trg spawn {
	waituntil {
		sleep 0.3;
		
		_near = [];
		{
			if (alive _x) then {_near pushBack _x};
		} foreach (nearestObjects [_this, ["Man"], 3]);
		
		if (count _near > 0) then {
			[[[(_near call BIS_fnc_selectRandom)],(_this getVariable "anomalyKiller")],"BIS_fnc_execVM",true] call BIS_fnc_MP;
		};
		
		(_this getVariable "isDelete") || (isNull _this)
	};
	deleteVehicle _this;
};