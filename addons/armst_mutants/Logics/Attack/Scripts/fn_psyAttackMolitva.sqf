/*
	Author: aloe
	Parameter(s):
	_unit 			<Object> - юнит
	_duration 		<Scalar> - продолжительность
*/

if (local player) then {

	params ["_unit", ["_duration", 10]];
	
	disableUserInput true;
	
	_unit setVariable ["ARM_INCAPACITATED", true, true];
	enableCamShake true;
	
	[_unit] spawn {
		params ["_unit"];
		while {(!isNil {_unit getVariable "ARM_INCAPACITATED"}) and alive _unit} do {
			titlecut ["", "black out", 0.3];
			
			playSound "armst_psy_tremmor";
			addCamShake [3, 10, 100];
			_unit setVariable ["AGM_Pain", 0.3];
			[_unit, "armst_man_scrum_1", 10] call CBA_fnc_globalSay3d;
			
			titlecut ["", "black in", random [0.3, 1, 2]];
			sleep 10;
		};
	};
	
	[_unit, "armst_psy_death"] remoteExecCall ["switchMove", 0];
	sleep 9;
	
	if (alive _unit) then {
		[_unit, "armst_psy_molitva"] remoteExecCall ["switchMove", 0];
		sleep _duration;
	};

	if (alive _unit) then {
		titlecut ["", "black out", 0.3];
		sleep 0.3;
		
		[_unit, ""] remoteExecCall ["switchMove", 0];
		[_unit, getDir _unit + 180] spawn ARMST_fnc_ragdoll;
		
		titlecut ["", "black in", 3];
	};
	
	sleep 10;
	_unit setVariable ["AGM_Pain", 0];
	_unit setVariable ["ARM_INCAPACITATED", nil, true];
	
	disableUserInput false;
};