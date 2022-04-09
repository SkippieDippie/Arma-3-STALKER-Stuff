	/*
	Author: Aloe
		
	Description:
	Collect activated sensors of module
		
	Parameter(s):
	_this select 0: <object> module
	
	Return: <array> Activated sensors list
	*/
	params ["_module"];

	private _sensorList = [];
	
	{
		if (_x isKindof "EmptyDetector" && triggerActivated _x) then {
			_sensorList set [count _sensorList, _x];
		};
	} foreach (synchronizedObjects _module);

	_sensorList