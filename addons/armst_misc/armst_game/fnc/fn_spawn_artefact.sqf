/*
	author: 		ROMZET (ARMSTALKER TEAM)
	e-mail:			romzet1994@gmail.com
	file: 			fn_sendMessage.sqf
	version: 		1.00
	date: 			10.08.2016	
*/

_epicenter = _this select 0;
_range = _this select 1;
_artefacts = _this select 2;
_chance = _this select 3;
_pos = _epicenter modelToWorld [((random _range)-(random _range)),((random _range)-(random _range)),(random 3)];
		
	if ("armst_item_detectors_otklick" in (assignedItems player)) then
	{
		if  (_chance >= (random 100)) then 
		{
				ARMST_TEXTXX2 = format ["<img image='\armst\armst_item\detectors\item_detector_1_ico.paa' size='2' shadow='true'/>"];
				ARMST_TEXTXX1 = localize "str_artefact_founded";
				[composeText [parseText ARMST_TEXTXX2, lineBreak, parseText ARMST_TEXTXX1]] call ace_common_fnc_displayTextStructured;
				_artefact = _artefacts createVehicle _pos;
				_artefact setVelocity [((random _range)-(random _range)),((random _range)-(random _range)),(random 7)];
				sleep 180;
				deletevehicle _artefact;
		};	
	};
	if ("armst_item_detectors_medved" in (assignedItems player)) then
	{
		if  (_chance >= (random 80)) then 
		{
				ARMST_TEXTXX2 = format ["<img image='\armst\armst_item\detectors\item_detector_2_ico.paa' size='2' shadow='true'/>"];
				ARMST_TEXTXX1 = localize "str_artefact_founded";
				[composeText [parseText ARMST_TEXTXX2, lineBreak, parseText ARMST_TEXTXX1]] call ace_common_fnc_displayTextStructured;
				_artefact = _artefacts createVehicle _pos;
				_artefact setVelocity [((random _range)-(random _range)),((random _range)-(random _range)),(random 7)];
				sleep 180;
				deletevehicle _artefact;
		};	
	};
	if ("armst_item_detectors_svarog" in (assignedItems player)) then
	{
		if  (_chance >= (random 60)) then 
		{
				ARMST_TEXTXX2 = format ["<img image='\armst\armst_item\detectors\item_detector_3_ico.paa' size='2' shadow='true'/>"];
				ARMST_TEXTXX1 = localize "str_artefact_founded";
				[composeText [parseText ARMST_TEXTXX2, lineBreak, parseText ARMST_TEXTXX1]] call ace_common_fnc_displayTextStructured;
				_artefact = _artefacts createVehicle _pos;
				_artefact setVelocity [((random _range)-(random _range)),((random _range)-(random _range)),(random 7)];
				sleep 180;
				deletevehicle _artefact;
		};	
	};