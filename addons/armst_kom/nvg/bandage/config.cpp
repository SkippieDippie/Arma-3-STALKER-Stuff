class CfgPatches
{
	class av_bandages
	{
		units[]={};
		weapons[]=
		{
			"armst_bandage_body",
			"armst_bandage_head"
		};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class cfgWeapons
{
	class NVGoggles;
	class armst_bandage_body: NVGoggles
	{
		scope=2;
		displayname="$STR_AGM_Medical_Bandage_Name";
		visionMode[]=
		{
			"Normal"
		};
		descriptionShort="";
		model="\armst\armst_kom\nvg\bandage\bandage_body.p3d";
		picture="\armst\armst_kom\nvg\bandage\AGM_bandage_ca.paa";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\armst\armst_kom\nvg\bandage\bandage_body.p3d";
			modelOff="\armst\armst_kom\nvg\bandage\bandage_body.p3d";
			mass=4;
		};
	};
	class armst_bandage_head: NVGoggles
	{
		scope=2;
		displayname="$STR_AGM_Medical_Bandage_Name";
		visionMode[]=
		{
			"Normal"
		};
		descriptionShort="";
		model="\armst\armst_kom\nvg\bandage\bandage_head.p3d";
		picture="\armst\armst_kom\nvg\bandage\AGM_bandage_ca.paa";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\armst\armst_kom\nvg\bandage\bandage_head.p3d";
			modelOff="\armst\armst_kom\nvg\bandage\bandage_head.p3d";
			mass=4;
		};
	};
};
