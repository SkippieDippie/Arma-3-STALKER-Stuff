/*
	Author: Aloe <itfruit@mail.ru>
	Description:  Обновляет отображаемую информацию о товаре
	
	Parameters:
	_money   	 	 (Number) - деньги
	_price   	 	 (Number) - цена
	_goodName	 (String) -  наименование
	_goodDesc	 (String) - описание
		
*/
	#include "..\module.sqf";
	
	params ["_money", "_price", "_goodName", "_goodDesc"];

	with uiNamespace do {
		_money = format [localize "STR_DAP_TRADE_MONEY", _money];
		_price = format [localize "STR_DAP_TRADE_PRICE", _price];
		
		(ARMST_Trade_Dialog displayCtrl IDC_TRADEDIALOG_TITLE_GOODPRICE) ctrlSetStructuredText parseText  _price;
		(ARMST_Trade_Dialog displayCtrl IDC_TRADEDIALOG_TITLE_MONEY) ctrlSetStructuredText parseText _money;
		(ARMST_Trade_Dialog displayCtrl IDC_TRADEDIALOG_TITLE_GOODINFO) ctrlSetStructuredText parseText _goodName;
		(ARMST_Trade_Dialog displayCtrl IDC_TRADEDIALOG_TITLE_GOODDESC) ctrlSetStructuredText parseText _goodDesc;
	};