class CfgPatches
{
	class armst_bred
	{
		units[]={};
		weapons[]=
		{
			"armst_switch_bred",
			"armst_switch_bred_old"
		};
		magazines[]={};
		requiredVersion=1.01;
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class Rangefinder;
	class armst_switch_bred: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\bred\bred.p3d";
		picture="";
		visionMode[]={};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class WeaponSlotsInfo
		{
			mass=10000000;
		};
	};
	class armst_switch_bred_old: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\bred\bred.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\item\baton\baton_vonyaet_validol.paa"
		};
		picture="";
		visionMode[]={};
		class WeaponSlotsInfo
		{
			mass=1000000000;
		};
	};
};
