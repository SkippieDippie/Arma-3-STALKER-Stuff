class CfgPatches
{
	class armst_rum
	{
		units[]=
		{
			"armst_templarrum"
		};
		weapons[]=
		{
			"armst_switch_rum",
			"armst_item_rum",
			"armst_item_rum50",
			"armst_item_rum_empty"
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
	class armst_switch_rum: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\rum\rum.p3d";
		picture="";
		visionMode[]={};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class WeaponSlotsInfo
		{
			mass=10000000000000;
		};
	};
	class armst_item_rum: ACE_ItemCore
	{
		scope=2;
		displayName="$STR_STST_templarrum_2_name";
		picture="\armst\armst_item\switchitem\rum\ico.paa";
		model="\armst\armst_item\switchitem\rum\rum_1.p3d";
		class ItemInfo
		{
			mass=10;
		};
	};
	class armst_item_rum50: ACE_ItemCore
	{
		scope=2;
		displayName="$STR_STST_templarrum_1_name";
		picture="\armst\armst_item\switchitem\rum\ico.paa";
		model="\armst\armst_item\switchitem\rum\rum_1.p3d";
		class ItemInfo
		{
			mass=6;
		};
	};
	class armst_item_rum_empty: ACE_ItemCore
	{
		scope=2;
		displayName="$STR_STST_templarrum_empty_name";
		picture="\armst\armst_item\switchitem\rum\ico.paa";
		model="\armst\armst_item\switchitem\rum\rum_1.p3d";
		class ItemInfo
		{
			mass=2;
		};
	};
};
class CfgVehicles
{
	class B_Carryall_oucamo;
	class Building;
	class armst_templarrum: Building
	{
		scope=2;
		displayname="$STR_STST_templarrum_2_name";
		model="\armst\armst_item\switchitem\rum\rum_1.p3d";
		destrType="DestructNo";
	};
};
