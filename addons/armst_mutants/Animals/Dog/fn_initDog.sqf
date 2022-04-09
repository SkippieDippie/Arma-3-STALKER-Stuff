/*
	Author: Aloe 
	Description: Инициализация
	Environment: Client
	
	Parameter(s):
	_unit 		<Object> - юнит
	
	Return:  Nothing
*/		
	params ["_unit"];
	
	waitUntil {sleep 1; _unit getVariable ["ARM_InitalizedAI", false]};
	
	private _affiliate = _unit getVariable ["ARM_Animal_Affiliation", ""];
	if !(_affiliate isEqualTo "") then {
		
		_unit setVariable ["ARM_FriendlyClasses", [_affiliate], true];
		_unit setVariable ["ARM_SearchDistance", _unit getVariable ["ARM_Animal_SearchDistance", 100], true];
		
		[_unit] remoteExec ['ARMST_fnc_initDogActions', 0, true];
		
	};
