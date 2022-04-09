class CfgPatches
{
	class armst_beer
	{
		units[]={};
		weapons[]=
		{
			"armst_switch_beer",
			"armst_switch_beer_baltica",
			"armst_switch_beer_chernigov",
			"armst_switch_beer_FAXE"
		};
		magazines[]={};
		requiredVersion=1.01;
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class Rangefinder;
	class armst_switch_beer: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\beer\beer.p3d";
		picture="";
		visionMode[]={};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class WeaponSlotsInfo
		{
			mass=10000000000;
		};
	};
	class armst_switch_beer_baltica: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\beer\beer.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\item\beer\Pivo_BALTIKA_6_validol.paa"
		};
		picture="";
		visionMode[]={};
		class WeaponSlotsInfo
		{
			mass=10000000000;
		};
	};
	class armst_switch_beer_chernigov: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\beer\beer.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\item\beer\Pivo_Cher_validol.paa"
		};
		picture="";
		visionMode[]={};
		class WeaponSlotsInfo
		{
			mass=10000000000;
		};
	};
	class armst_switch_beer_FAXE: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\beer\beer.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\item\beer\Pivo_FAXE_validol.paa"
		};
		picture="";
		visionMode[]={};
		class WeaponSlotsInfo
		{
			mass=100000000000;
		};
	};
};
