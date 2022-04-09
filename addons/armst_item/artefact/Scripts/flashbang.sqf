private ["_pos", "_objects"];
_pos = _this select 0;

_objects = _pos nearEntities ["CAManBase", 15];
{
	private ["_eyePos", "_pos2"];
	_eyePos = eyePos _x;
	_pos2 = [_pos select 0,_pos select 1,(_pos select 2)+0.2];
	if (!lineIntersects [_eyePos, ATLtoASL _pos2,_x]) then {
		if (isPlayer _x) then {
			if(_x == player) then
			{
				private ["_direye", "_posFlash", "_angle", "_norm", "_unitPos", "_angle", "_script"];
				_direye = eyeDirection _x;
				_unitPos = getPosATL _x;
				_posFlash = [(_pos2 select 0)-(_unitPos select 0),(_pos2 select 1)-(_unitPos select 1),(_pos2 select 2)-(_unitPos select 2)];
				
				_norm = Sqrt((_posFlash select 0)^2+(_posFlash select 1)^2+(_posFlash select 2)^2);
					
				_angle = aCos ((_direye select 0)*((_posFlash select 0)/_norm)+((_posFlash select 1)/_norm)*(_direye select 1)+
					((_posFlash select 2)/_norm)*(_direye select 2));

				if (_angle < 90) then {
					_script = _x spawn ARMST_fnc_EffectOnPlayerFull;
				} else {
					_script = _x spawn ARMST_fnc_EffectOnPlayerLight;
				};
			};
		} else {
			if (alive _x) then {
				_x setdamage 1;
			};
		};
	};
} count _objects;




_anomaly = "electra";
_trg = objNull;

// trigger effect
_trgOnAct = format["0 = [thistrigger, '%1'] execVM '\dapartefacts\Scripts\anomaly.sqf'", _anomaly];
_trgOnDeact = "0 = [thistrigger] execVM '\dapartefacts\Scripts\effectOff.sqf'";

// trigger create
_trg = createTrigger ["EmptyDetector", _pos, true];
_trg setTriggerArea [10, 10, (random 360), false];
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