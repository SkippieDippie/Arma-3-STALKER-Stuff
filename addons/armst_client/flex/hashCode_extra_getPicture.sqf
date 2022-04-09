params["_object","_type"];
private["_class"];

if(isNil "_type")then{_type = 1;};

_class = switch(_type) do
{
case 0: { "CfgVehicles" };
case 1: { "CfgMagazines" };
case 2: { "CfgWeapons" };        
};

getText (configFile >> _class >> _object >> "picture")