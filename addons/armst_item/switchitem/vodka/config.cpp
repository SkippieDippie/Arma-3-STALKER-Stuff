class CfgPatches
{
	class armst_vodka
	{
		units[]={};
		weapons[]=
		{
			"armst_switch_vodka",
			"armst_switch_vodka_finland",
			"armst_switch_Jemeson",
			"armst_switch_vodka_russianstand"
		};
		magazines[]={};
		requiredVersion=1.01;
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class Rangefinder;
	class armst_switch_vodka: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\vodka\vodka.p3d";
		picture="";
		visionMode[]={};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class WeaponSlotsInfo
		{
			mass=10000000000000;
		};
	};
	class armst_switch_vodka_finland: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\vodka\vodka.p3d";
		picture="";
		visionMode[]={};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\item\vodka\finland\vodka_finland_validol.paa"
		};
		class WeaponSlotsInfo
		{
			mass=1000000000000;
		};
	};
	class armst_switch_Jemeson: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\vodka\vodka.p3d";
		picture="";
		visionMode[]={};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\item\vodka\Jemeson\vodka_jemeson_validol.paa"
		};
		class WeaponSlotsInfo
		{
			mass=1000000000000;
		};
	};
	class armst_switch_vodka_russianstand: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\vodka\vodka.p3d";
		picture="";
		visionMode[]={};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\item\vodka\russianstand\vodka_RS_validol.paa"
		};
		class WeaponSlotsInfo
		{
			mass=100000000000;
		};
	};
};
