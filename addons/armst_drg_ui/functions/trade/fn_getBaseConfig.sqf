/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Return base config from item

	Parameter(s):
		0 :	ITEM - 
	Returns:
	BASECONFIG - <String> ,if item not exists then return false<bool>
*/
    params["_item"];
    switch true do
    {
        case(isClass(configFile >> "CfgMagazines" >> _item)): {"CfgMagazines"};
        case(isClass(configFile >> "CfgWeapons" >> _item)): {"CfgWeapons"};
        case(isClass(configFile >> "CfgVehicles" >> _item)): {"CfgVehicles"};
        case(isClass(configFile >> "CfgGlasses" >> _item)): {"CfgGlasses"};
    };