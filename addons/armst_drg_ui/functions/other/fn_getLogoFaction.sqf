/*
    Author: Vladimir Vorobev <Dragster>
    E-mail:1dragsteron@gmail.com

    Description:
    Get path to logo faction player 

    Parameter(s):
        _unit - [Object] player

    Returns:
    	_logo [String] - path to logo image
*/
	params ["_faction"];
	private _logo = "";
	switch (_faction) do { 
		case "ARMST_ARMY" : 		{ _logo = "\drg_ui\textures\logos\army.paa"; }; 
		case "ARMST_BANDITS" : 		{ _logo = "\drg_ui\textures\logos\bandit.paa"; }; 
		case "ARMST_CLEARSKY" : 	{ _logo = "\drg_ui\textures\logos\clearsky.paa"; }; 
		case "ARMST_DOLG" : 		{ _logo = "\drg_ui\textures\logos\dolg.paa"; }; 
		case "ARMST_FREEDOM" : 		{ _logo = "\drg_ui\textures\logos\freedom.paa"; }; 
		case "ARMST_MERCENARIES" : 	{ _logo = "\drg_ui\textures\logos\merc.paa"; }; 
		case "ARMST_MONOLITH" : 	{ _logo = "\drg_ui\textures\logos\monolith.paa"; }; 
		case "ARMST_SCIENCE" : 		{ _logo = "\drg_ui\textures\logos\scientist.paa"; }; 
		case "ARMST_STALKER" : 		{ _logo = "\drg_ui\textures\logos\stalker.paa"; }; 
		default {_logo = "\drg_ui\textures\logos\stalker.paa";};
	};
	_logo