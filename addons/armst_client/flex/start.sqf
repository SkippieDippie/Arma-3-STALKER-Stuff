waitUntil {!((findDisplay 46) isEqualTo displayNull)};
//waitUntil {time > 1};

[] spawn
{
	while {true} do
	{
		uiSleep 1;
		if (currentWeapon player in ["DETECTOR_DBG06M", "DETECTOR_MKS1009", "DETECTOR_RKS20"]) then
		{
			call ARMST_Radiation_ShowRadimetr;
		};
	};
};

[] spawn
{
	while {true} do
	{
		uiSleep 1;
		if (currentWeapon player in ["armst_det_otklick","armst_det_medved","armst_det_svarog","armst_det_TRLife"]) then
		{
			call ARMST_Detectors_ShowDetector;
		};
	};
};
/*
["player", [0x39], -3,		["\armst_client\flex\menu_interact_medicine.sqf", "main"]] call CBA_ui_fnc_add;
["player", [0x0F], -2,		["\armst_client\flex\menu_interact_self_medicine.sqf", "main"]] call CBA_ui_fnc_add;
["player", [0x0F], -17,	["\armst_client\flex\menu_interact_self_anim.sqf", "main"]] call CBA_ui_fnc_add;
["player", [0x0F], -30,	["\armst_client\flex\menu_interact_self_guitar.sqf", "main"]] call CBA_ui_fnc_add;
	
(findDisplay 46) displayAddEventHandler ["KeyDown","_this call EH_KeyDown"];