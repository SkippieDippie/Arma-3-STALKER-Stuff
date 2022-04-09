/*
	Author: aloe
	Parameter(s):
	_unit 			<Object> - юнит
*/

params ["_unit", "_victim", ["_wave", false]];

if (local _victim) then {
	
	_victim setVariable ["ARM_INCAPACITATED", true, true];
	
	[_victim, [
		"player_pain1",
		"player_pain2",
		"player_pain3",
		"player_pain4",
		"player_pain5"
	] call BIS_fnc_selectRandom, 30] call CBA_fnc_globalSay3d;
	
	private ["_waveParticle"];
	
	if (_wave) then {
		
		private _dir = _unit getdir _victim;
		
		_waveParticle = "#particlesource" createVehicle getPosATL _unit;
		_waveParticle setParticleParams [
			["armst_anomalies\anomaly\particles\RefractCaustic.p3d", 4, 0, 1, 0],
			"",
			"Billboard",
			0,
			1,
			[0,0,1],
			[0,0,0],
			0,
			1.275,
			1,
			0,
			[0, 5, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100],
			[
				[0,0,1,0.5],
				[0,0,1,1],
				[0,0,1,3],
				[0,0,1,5],
				[0,0,1,4],
				[1,1,0,5],
				[0,0,1,3],
				[0,0,1,1],
				[0,0,1,0.5]
			],
			[1, 1.5, 2, 3, 4, 3, 2, 1.5, 1],
			0,
			1,
			"",
			"",
			_unit,
			0
		];
		_waveParticle setParticleRandom [0, [0, 0, 0], [0,0,0], 2, 0, [0,0,0,0], 0, 1, 360];
		_waveParticle setDropInterval 1;
		
		
	uiSleep 0.5;
	};
	if (_wave) then {
		deleteVehicle _waveParticle;
	};
	
	uiSleep 12.5;
	
	_victim setVariable ["ARM_INCAPACITATED", nil, true];
		
};