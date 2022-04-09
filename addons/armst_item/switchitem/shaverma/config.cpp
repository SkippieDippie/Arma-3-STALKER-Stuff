class CfgPatches
{
	class armst_shaverma
	{
		units[]={};
		weapons[]=
		{
			"armst_switch_shaverma",
			"armst_item_shaverma"
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
	class armst_switch_shaverma: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\shaverma\shaverma.p3d";
		picture="";
		visionMode[]={};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class WeaponSlotsInfo
		{
			mass=10000000000000;
		};
	};
	class armst_item_shaverma: ACE_ItemCore
	{
		scope=2;
		displayName="Шаурма";
		descriptionShort="Обычная (???) шаурма.";
		picture="\armst\armst_item\switchitem\shaverma\ico.paa";
		model="\armst\armst_item\switchitem\shaverma\shaverma.p3d";
		class ItemInfo
		{
			mass=10;
		};
	};
};
