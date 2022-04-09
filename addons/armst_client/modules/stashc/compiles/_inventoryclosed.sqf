/*
	Author: Aloe 
	Description: Обработчик события - закрытия инвентаря

	Parameter(s):
	
	Return:
*/	
	#include "..\module.sqf";
	
	params ["_unit", "_targetContainer"];
	
	if !(_targetContainer getVariable ["ARM_StashOwnerUID", ""] isEqualTo "") then {
	
		[_targetContainer] remoteExecCall ["ARMST_StashS_SaveStash", 2];
		
	};