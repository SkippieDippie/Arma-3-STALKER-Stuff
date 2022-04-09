/*
	Author: Aloe <itfruit@mail.ru>
	Description:  Выбирает секцию из списка
	
	Parameters:
	_index   	 	 (Number) - порядковый индекс секции
		
*/
	#include "..\module.sqf";
	
	((uiNamespace getVariable ["ARMST_Trade_Dialog", displayNull]) displayCtrl IDC_TRADEDIALOG_LIST) lbSetCurSel _this;
	