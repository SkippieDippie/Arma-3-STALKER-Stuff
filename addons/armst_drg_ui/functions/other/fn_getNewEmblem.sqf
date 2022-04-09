/*
    Author: Vladimir Vorobev <Dragster>
    E-mail:1dragsteron@gmail.com

    Description:
    Get path to emblem from faction player 

    Parameter(s):
        _faction - [String] faction player

    Returns:
    	_avatar [String] - path to emblem image
*/
	params ["_faction"];
	private _emblem = "";
	switch (_faction) do { 
		case "ARMST_STALKER" : 		{  _emblem = "\drg_ui\textures\new_emblems\stalker.paa"; }; 
		case "ARMST_SCIENCE" : 		{  _emblem = "\drg_ui\textures\new_emblems\scientist.paa"; }; 
		case "ARMST_FREEDOM" : 		{  _emblem = "\drg_ui\textures\new_emblems\freedom.paa"; }; 
		case "ARMST_BANDITS" : 		{  _emblem = "\drg_ui\textures\new_emblems\bandit.paa"; }; 
		case "ARMST_DOLG" :			{  _emblem = "\drg_ui\textures\new_emblems\dolg.paa"; }; 
		case "ARMST_ARMY" : 		{  _emblem = "\drg_ui\textures\new_emblems\army.paa"; }; 
		case "ARMST_MONOLITH" : 	{  _emblem = "\drg_ui\textures\new_emblems\monolith.paa"; }; 
		case "ARMST_MERCENARIES" : 	{  _emblem = "\drg_ui\textures\new_emblems\merc.paa"; }; 
		case "ARMST_CLEARSKY" : 	{  _emblem = "\drg_ui\textures\new_emblems\clearsky.paa"; }; 
		default 					{  _emblem = "\drg_ui\textures\new_emblems\stalker.paa"; }; 
	};
	_emblem