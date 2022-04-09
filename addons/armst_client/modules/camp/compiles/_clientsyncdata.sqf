/*
	Author: Aloe <itfruit@mail.ru>

	Description: Получение ответа от сервера
	
	Parameter(s):
		_mode	 		(String) - режим
		_data	 		(Anything) - данные
		
	Return: (Nothing) 
*/
	
	#include "..\module.sqf";
	
	params [["_mode", "", [""]], ["_data", []]];
	
	switch (toLower _mode) do {
		
		case "resources": {
			module(StorageResources) = _data;
			module(_ReceivedResources) = true;
			
			/*
			["armst_doska", 100] call module(SetStorageResource);
			["ARMST_nails", 100] call module(SetStorageResource);
			["ARMST_instruments", 100] call module(SetStorageResource);
			["ARMST_ducttape", 100] call module(SetStorageResource);
			["ARMST_metalolom", 100] call module(SetStorageResource);
			["ARMST_steelpipe", 100] call module(SetStorageResource);
			["ARMST_multitool", 100] call module(SetStorageResource);
			["ARMST_wirecutter", 100] call module(SetStorageResource);
			["armst_polhir", 100] call module(SetStorageResource);
			["armst_medinst", 100] call module(SetStorageResource);
			["armst_medperchatki", 100] call module(SetStorageResource);
			["armst_brezent", 100] call module(SetStorageResource);
			["ARMST_hammer", 100] call module(SetStorageResource);
			*/
		};
		
		case "objects" : {
			module(Objects) = _data;
			module(_ReceivedObjects) = true;
		};
		
		case "party" : {
			module(Party) = _data;
			module(_ReceivedParty) = true;
		};
		
	};
	
	module(_ResponseReceived) = true;
