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
		case "ARMST_STALKER" : 		{  _emblem = "\drg_ui\textures\emblems\ARMST_STALKER.paa"; }; 
		case "ARMST_SCIENCE" : 		{  _emblem = "\drg_ui\textures\emblems\ARMST_SCIENCE.paa"; }; 
		case "ARMST_RENEGADE" : 	{  _emblem = "\drg_ui\textures\emblems\ARMST_RENEGADE.paa"; }; 
		case "ARMST_FREEDOM" : 		{  _emblem = "\drg_ui\textures\emblems\ARMST_FREEDOM.paa"; }; 
		case "ARMST_BANDITS" : 		{  _emblem = "\drg_ui\textures\emblems\ARMST_BANDITS.paa"; }; 
		case "ARMST_DOLG" :			{  _emblem = "\drg_ui\textures\emblems\ARMST_DOLG.paa"; }; 
		case "ARMST_ARMY" : 		{  _emblem = "\drg_ui\textures\emblems\ARMST_ARMY.paa"; }; 
		case "ARMST_MONOLITH" : 	{  _emblem = "\drg_ui\textures\emblems\ARMST_MONOLITH.paa"; }; 
		case "ARMST_MERCENARIES" : 	{  _emblem = "\drg_ui\textures\emblems\ARMST_MERCENARIES.paa"; }; 

		case "ARMST_CLEARSKY" : 	{  _emblem = "\drg_ui\textures\emblems\ARMST_CLEARSKY.paa"; }; 
		case "ARMST_LASTDAY" : 		{  _emblem = "\drg_ui\textures\emblems\ARMST_LASTDAY.paa"; }; 
		case "ARMST_GREH" : 		{  _emblem = "\drg_ui\textures\emblems\ARMST_GREH.paa"; }; 
		case "ARMST_SEARCH" : 		{  _emblem = "\drg_ui\textures\emblems\ARMST_SEARCH.paa"; }; 
		default 					{  _emblem = "\drg_ui\textures\emblems\ARMST_STALKER.paa"; };
	};
	_emblem