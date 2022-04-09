/*
	Author: aloe
	Parameter(s):
	_unit 			<Object> - юнит
	
*/

	params ["_unit", ["_show", true]];
	
	if (_show) then {
		if (isNull (_unit getVariable ["ARM_PsyShieldObject", objNull])) then {
			
			if (isDamageAllowed _unit) then {_unit allowDammage false};
			
			private _shield = "#particlesource" createVehicle getPosATL _unit;
			_shield setParticleParams [
				["armst_anomalies\anomaly\particles\RefractCaustic.p3d", 4, 0, 16, 1],
				"",
				"Billboard",
				1,
				4,
				[0,0,1],
				[0,0,0],
				0,
				1.275,
				1,
				0,
				[6.5, 6.6, 6.7, 6.8, 6, 6.8, 6.7, 6.6, 6.5],
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
			_shield setParticleRandom [0, [0, 0, 0], [0,0,0], 2, 0, [0,0,0,0], 0, 1, 360];
			_shield setDropInterval 2;
			
			_unit setVariable ["ARM_PsyShieldObject", _shield];
			
			_shield attachTo [_unit];
		};
	} else {
	
		private _shield = _unit getVariable ["ARM_PsyShieldObject", objNull];
		deleteVehicle _shield;
		
		if !(isDamageAllowed _unit) then {_unit allowDammage true};
	};
	
	
	