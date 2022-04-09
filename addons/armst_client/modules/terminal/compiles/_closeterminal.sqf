/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Закрывает терминал
	
	Parameter(s):
		
*/
	#include "..\module.sqf";
	
	closeDialog 0;
	module(Camera)  cameraEffect ['terminate','back'];
	camDestroy module(Camera);