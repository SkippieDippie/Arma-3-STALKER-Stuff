/*
	Author: Aloe <itfruit@mail.ru>
	Email: itfruit@mail.ru

	Description:  Устанавливает описание процесса загрузки на загрузочном экране
	
	Parameter(s):
      _title (String)  строка
      
      Return: Nothing
*/
	#include "..\module.sqf";
	
	params ["_title"];
	
	((uiNameSpace getVariable "ARMST_loadingScreen") displayCtrl IDC_LOADSCREEN_TITLE) ctrlSetText _title;
	