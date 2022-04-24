class CfgPatches
{
	class armst_cheburek
	{
		units[]={};
		weapons[]=
		{
			"armst_switch_cheburek",
			"armst_item_cheburek"
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
	class AGM_ItemCore;
	class armst_switch_cheburek: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\cheburek\cheburek.p3d";
		picture="";
		visionMode[]={};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class WeaponSlotsInfo
		{
			mass=10000000000000;
		};
	};
	class armst_item_cheburek: AGM_ItemCore
	{
		scope=2;
		displayName="$STR_STST_cheburek_name";
		picture="\armst\armst_item\switchitem\cheburek\ico.paa";
		model="\armst\armst_item\switchitem\cheburek\cheburek.p3d";
		class ItemInfo
		{
			mass=4;
		};
	};
};
