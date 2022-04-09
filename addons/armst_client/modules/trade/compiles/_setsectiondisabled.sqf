/*
	Author: Aloe <itfruit@mail.ru>
	Description:  Делает секцию не активной (визуально)
	
	Parameters:
	_index   	 	 (Number) - порядковый индекс секции
		
*/
	#include "..\module.sqf";
	
	((uiNamespace getVariable ["ARMST_Trade_Dialog", displayNull]) displayCtrl IDC_TRADEDIALOG_LIST) lbSetColor [_this, [1,1,1,0.2]];
	