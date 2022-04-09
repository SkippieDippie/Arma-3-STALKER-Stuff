/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Модуль пользовательских лагерей

*/

	#include "module.sqf";

	moduleInitStart();
	
	module(ObjectsLimit) = 50;
	
	module(MainBox) = objNull;
	module(StorageResources) = [];
	module(Objects) = [];
	module(Party) = [];

	//View
	module(ViewHeight) = 1;
	module(ViewRadius) = 100;
	
	module(_HandleDraw3D) = 0;
	module(_ObjectIsMoving) = objNull;
	
	//UI
	module(RscControlsGroup_ResTree) = [];
	module(RscControlsGroup_StorageList) = [];
	module(RscControlsGroup_ResourcesList) = [];
	module(RscControlsGroup_Members) = [];
	
	//Config
	module(Config) = missionConfigFile >> "ARMST_ClientModules" >> "Camp";
	
	#define MODULE_FUNC_PATH \compiles
	
		moduleCompileFunction(AddStorageResource);
		moduleCompileFunction(GetStorageResource);
		moduleCompileFunction(SetStorageResource);
		moduleCompileFunction(DelStorageResources);
		
		moduleCompileFunction(AddBoxResource);
		moduleCompileFunction(ReplaceBoxResources);
		
		moduleCompileFunction(Create);
		moduleCompileFunction(ObjectCreate);
		moduleCompileFunction(ObjectDelete);
		moduleCompileFunction(ObjectUpgrade);
		moduleCompileFunction(ObjectMove);
		
		moduleCompileFunction(MemberAdd);
		moduleCompileFunction(MemberDel);
		moduleCompileFunction(GetCreator);
		
		moduleCompileFunction(Addactions);
		moduleCompileFunction(EventHandler_Lockbox);
		
		moduleCompileFunction(ClientSyncData);
		moduleCompileFunction(ServerSync);
		
	#define MODULE_FUNC_PATH \compiles\view
		moduleCompileFunction(ViewCreate);	uiNamespace setVariable [stringify(module(ViewCreate)), module(ViewCreate)];
		moduleCompileFunction(ViewDestroy);
		
		moduleCompileFunction(V_ObjectCreate);
		moduleCompileFunction(V_ObjectDelete);
		moduleCompileFunction(V_ObjectUpgrade);
		moduleCompileFunction(V_ObjectSelect);
		moduleCompileFunction(V_ObjectMove);
		moduleCompileFunction(V_ObjectPlacement);
		
		moduleCompileFunction(V_ObjectBoundBox);
		moduleCompileFunction(V_ObjectDraw3D);
		
	#define MODULE_FUNC_PATH \compiles\ui
		moduleCompileFunction(Ui_Create);
		moduleCompileFunction(Ui_CtrlCreate);
		moduleCompileFunction(Ui_Resource_BuildList);
		moduleCompileFunction(Ui_Resource_BuildRequireList);
		moduleCompileFunction(Ui_Members_BuildList);
		
	
	//Добавление шаблона логов
	[stringify(MODULE_NAME), 
		["[module] Camp:", "[module] Camp ERROR:"],
		(configFile >> "ARMST_ClientModules" >> stringify(MODULE_NAME) >> "log") call BIS_fnc_getCfgDataBool
	] call ARMST_fnc_reportAdd;
	
	
	moduleInitEnd();


