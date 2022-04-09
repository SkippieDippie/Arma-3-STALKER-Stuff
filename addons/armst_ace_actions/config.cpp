class CfgPatches
{
class fixed_armstalker
{
	units[] = {};
	weapons[] = {};
	requiredVersion = 1.0;
	requiredAddons[] = {Extended_EventHandlers};

};
};
class CfgFunctions
{
	class STLK
	{
	tag = "STLK";
	class stalk
	{
		file = "\armst_ace_actions\Scripts";
		class radX_health {};
	};
	};
};
class Extended_PostInit_EventHandlers
{
 fixed_armstalker_Post_Init = "fixed_armstalker_Post_Init_Var = [] execVM ""\armst_ace_actions\init.sqf""";
};