/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
while{true}do{
	_vest = vest player;
	if (_vest in ["Armst_ekzo3gen","Armst_ekzo","Armst_ekzo2","Armst_ekzo3","Armst_ekzodolg","Armst_ekzodolg2","Armst_ekzofreedom","Armst_ekzofreedom2","Armst_ekzoarmy","Armst_ekzomercenaries","Armst_ekzomonolith"]) then 
	{
		if ("ARMST_akkum" in (items player + assignedItems player)) then 
		{
		_fatigue = getFatigue player;
		player setFatigue (_fatigue - 1);
		player forcewalk false;
		}
		else
		{
		_fatigue = getFatigue player;
		player setFatigue (_fatigue + 1);
		player forcewalk true;
		};
	}
	else
	{
	player forcewalk false;
	};
	sleep 7;
};