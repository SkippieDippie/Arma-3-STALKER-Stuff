/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Рантайм процессы детектора
	
	Parameter(s):

*/

	#include "..\module.sqf";
	
	disableSerialization;
	private _display = displayNull;
	private _control = controlNull;
	private _detectTypes = [];
	private _detectRadius = 0;
	private _detectAngle = 0;
	
	while {true} do {
		
		private _detectorDialog = ["DIALOG"] call module(GetDetector);
		
		if !(_detectorDialog isEqualTo "") then {
			
			if (isNull _display) then {
				_display = uiNamespace getVariable ["DETECTOR_A_DIALOG", displayNull];
				if !(isNull _display) then {
					_control =  (allControls _display) select 0;
					_detectorType =  ["OBJECT"] call module(GetDetector);
					_detectTypes = getArray (configFile >> "CfgWeapons" >> _detectorType >> "detectTypes");
					_detectRadius = getNumber (configFile >> "CfgWeapons" >> _detectorType >> "detectRadius");
					_detectAngle = getNumber (configFile >> "CfgWeapons" >> _detectorType >> "detectAngle");
				};
			};
			
			if !(isNull _display) then {
				
				private _enties = player nearEntities [_detectTypes, _detectRadius];
				module(Energy) = module(Energy) - 1;
				
				if !(_enties isEqualTo []) then {
					private _art = _enties select 0;
					{
						if (_x distance player < _art distance player) then {_art = _x};
					} foreach _enties;
					
					private _dir = getDir player;
					private _dirTo = (position player) getDir _art;
					private _detected =  acos ([sin _dir, cos _dir, 0] vectorCos [sin _dirTo, cos _dirTo, 0]) <= _detectAngle / 2;

					if (_detected) then {
						[_detectorDialog, _art, _display, _control] call module(onDetected);
					};
				};
			};
		} else {
			private _display = displayNull;
		};
		
		uiSleep 1;
	};
	