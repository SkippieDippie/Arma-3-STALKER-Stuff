_TILE = _this select 0;
profileNamespace setVariable ["ARMST_ADEPT_MONOLITH",_TILE];
sleep 20;
[] spawn {
_ARMST_ADEPT_MONOLITH = profileNamespace getVariable "ARMST_ADEPT_MONOLITH";
if (_ARMST_ADEPT_MONOLITH == 1) then {
	while {true} do 
	{

	sleep 2200 + random 400;

	0 = ["DynamicBlur", 400, [10]] spawn 
	{
		params ["_name", "_priority", "_effect", "_handle"];
		_voices = ["psy_a","psy_b","psy_c"];
		PlaySound (_voices select (round(random 2)));
		enableCamShake true;
		addCamShake [2, 10, 10]; 
		while {
			_handle = ppEffectCreate [_name, _priority];
			_handle < 0
		} do {
			_priority = _priority + 1;
		};
		PlaySound (_voices select (round(random 2)));
		_handle ppEffectEnable true;
		_handle ppEffectAdjust _effect;
		_handle ppEffectCommit 5;
		waitUntil {ppEffectCommitted _handle};
		uiSleep 3; 
		PlaySound (_voices select (round(random 2)));
		_handle ppEffectEnable false;
		ppEffectDestroy _handle;
	};
	_random = random 100;
		if (_random > 90) then {
		addCamShake [2, 300, 10]; 
		sleep 300;
		disableUserInput true;
		[[player, "armst_psy_molitva"], "switchMove"] call bis_fnc_mp;
		sleep 30;
		disableUserInput false;
		};
	};
};
};