class CfgPatches
{
	class armst_tushonka
	{
		units[]={};
		weapons[]=
		{
			"armst_switch_tushonka",
			"armst_switch_tushonka_kaban",
			"armst_switch_tushonka_tomate"
		};
		magazines[]={};
		requiredVersion=1.01;
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class Rangefinder;
	class armst_switch_tushonka: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\tushonka\tushonka.p3d";
		picture="";
		visionMode[]={};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class WeaponSlotsInfo
		{
			mass=100000000000;
		};
	};
	class armst_switch_tushonka_kaban: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\tushonka\tushonka.p3d";
		picture="";
		visionMode[]={};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\item\tushonka\tushonka_kaban_validol.paa"
		};
		class WeaponSlotsInfo
		{
			mass=10000000000;
		};
	};
	class armst_switch_tushonka_tomate: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\tushonka\tushonka.p3d";
		picture="";
		visionMode[]={};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\item\tushonka\tushonka_krovosos_validol.paa"
		};
		class WeaponSlotsInfo
		{
			mass=10000000;
		};
	};
};
