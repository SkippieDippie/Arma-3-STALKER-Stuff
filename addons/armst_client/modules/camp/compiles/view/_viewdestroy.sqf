/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Синхронизация по закрытию представления
	
	Parameter(s):
	
	Return: (Nothing)
*/
	
	#include "..\..\module.sqf";
	
	
	module(MainBox) setVariable ["ARM_BoxIsBusy", false, true];
	
	if (module(_ReceivedResources)) then {
	
		["updateResources", module(StorageResources)] call module(ServerSync);
		
	};
	
	module(MainBox) = objNull;
	module(StorageResources) = [];
	module(Objects) = [];
	module(Party) = [];
	module(_ObjectIsMoving) = objNull;