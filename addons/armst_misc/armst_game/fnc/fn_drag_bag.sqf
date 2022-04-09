/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

private ["_bag"];
  _bag = _this select 0;
  _bag attachTo [player, [0, 2, 1]];
  player addAction ["<t color='#FF0000'>Бросить предмет</t>", {_arrobj=attachedObjects player;_body=_arrobj select 0;detach _body;removeAllActions player;}];
