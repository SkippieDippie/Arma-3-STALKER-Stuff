class CfgPatches
{
	class armst_samsa
	{
		units[]={};
		weapons[]=
		{
			"armst_switch_samsa",
			"armst_item_samsa"
		};
		magazines[]={};
		requiredVersion=1.01;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F"
		};
	};
};
class CfgWeapons
{
	class Rangefinder;
	class ACE_ItemCore;
	class armst_switch_samsa: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\samsa\samsa.p3d";
		picture="";
		visionMode[]={};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class WeaponSlotsInfo
		{
			mass=10000000000000;
		};
	};
	class armst_item_samsa: ACE_ItemCore
	{
		scope=2;
		displayName="$STR_STST_samsa_name";
		picture="\armst\armst_item\switchitem\samsa\ico.paa";
		model="\armst\armst_item\switchitem\samsa\samsa.p3d";
		class ItemInfo
		{
			mass=10;
		};
	};
};
