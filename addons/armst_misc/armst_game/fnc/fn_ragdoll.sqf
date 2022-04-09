/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
	private ["_unit", "_dir", "_unitPos", "_force", "_o", "_projPos"];
	
		_unit = _this select 0;
	
		_dir = _this select 1;
		
		_unit setVariable ["AGM_Pain", 0];
		_unitPos = getPosATL _unit;
		_force = 500;

		_unit allowDamage false; 

		_o = "Steel_Plate_L_F" createVehicleLocal [0, 0, 0];
		_o setObjectTexture [0, ""];
		_o setMass _force;
		_o setDir _dir;
		_o setPosATL [(_unitPos select 0) + sin(_dir + 180), (_unitPos select 1) + cos(_dir + 180), ((((boundingBox _unit) select 1) select 2) / 2) - (2 / 100)]; 
		_o setVelocity [(sin(_dir)) * 6, (cos(_dir)) * 6, 0]; 
		[_unit] call AGM_Medical_fnc_wakeUp;
		_unit setVariable ["AGM_Pain", 0];
		[_unit] call AGM_Medical_fnc_wakeUp;
		sleep 0.5;

		deleteVehicle _o;
		sleep 10;
		_unit allowDamage true; 
		[_unit] call AGM_Medical_fnc_wakeUp;
		_unit setVariable ["AGM_Pain", 0];
		