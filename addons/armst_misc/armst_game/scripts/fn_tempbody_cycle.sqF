/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/
while{true}do
{
		_shelter = count (lineIntersectsSurfaces [atltoasl (player modeltoworld (player selectionPosition "head")), atltoasl (player modeltoworld [0,0,10]), player, objnull]);
		
		_tempIncrease = 0;			
		_daytime = 1-sunOrmoon;
		_weather = (rain + _daytime)/2; 
		if (_shelter > 0) then
			{
				_weather = _weather * 0;
			};
		_armst_tempFactor = 0.01;
		_spd = velocity player;
		_fires = {inflamed _x} count (nearestObjects [player, ["All"], 5]);	
		
		_tempIncrease = -_weather * _armst_tempFactor;
		ARMST_BODYTEMP = ARMST_BODYTEMP + _tempIncrease;
		//_ARMST_TEMPERATURE = ([] call llw_fnc_getTemperature select 0);
		if ((_fires > 0) && (ARMST_BODYTEMP <= 39)) then
			{
				systemChat "Становится теплее...";
				_tempIncrease = _tempIncrease + _fires * _armst_tempFactor;
				ARMST_BODYTEMP = ARMST_BODYTEMP + _tempIncrease;
				player setVariable ["ARMST_BODYTEMP", (player getVariable "ARMST_BODYTEMP") + _armst_tempFactor];
			};
			
		_spd = (abs(_spd select 0)) + (abs(_spd select 1)) + (abs(_spd select 2));
			
		if (_spd > 0.1) then
			{
				ARMST_BODYTEMP = ARMST_BODYTEMP + (_tempIncrease * 0.003);
			};	
			
		if (ARMST_BODYTEMP < 34) then 
		{
					if ((ARMST_BODYTEMP < 34) && (ARMST_BODYTEMP >= 33)) then 
						{
						systemChat "Становится прохладно...";
						player setVariable ["ARMST_BODYTEMP", (player getVariable "ARMST_BODYTEMP") - 0.01];
						};
					if ((ARMST_BODYTEMP < 33) && (ARMST_BODYTEMP >= 32)) then 
						{
						systemChat "Бррр, мурашки...";
						addCamShake [1, 2, 15];
						player setVariable ["ARMST_BODYTEMP", (player getVariable "ARMST_BODYTEMP") - 0.02];
						};
					if ((ARMST_BODYTEMP < 32) && (ARMST_BODYTEMP >= 30)) then 
						{
						systemChat "Я хочу у костра погреться...";
						addCamShake [1, 3, 15];
						player setVariable ["ARMST_BODYTEMP", (player getVariable "ARMST_BODYTEMP") - 0.04];
						};
					if ((ARMST_BODYTEMP < 30)) then 
						{
						profileNamespace setVariable ["ARMST_INFECTED",true];
						};
};
			
			
			if (ARMST_BODYTEMP > 39) then 
			{
				ARMST_BODYTEMP = 39;
		};
			
			if ((player getVariable "ARMST_BODYTEMP") > 1) then 
			{
				player setVariable ["ARMST_BODYTEMP", 1];
			};
		
		
	sleep 1;
};