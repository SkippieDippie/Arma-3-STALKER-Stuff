class CfgPatches
{
	class av_ammo
	{
		requiredaddons[]=
		{
			"A3_Weapons_F"
		};
		units[]=
		{
			"armst_box_big",
			"armst_box_small"
		};
		requiredversion=1;
		weapons[]={};
		magazines[]={};
	};
};
class CfgVehicles
{
	class ReammoBox;
	class ThingX;
	class Box_NATO_Wps_F;
	class Box_FIA_Wps_F;
	class armst_box_big: Box_FIA_Wps_F
	{
		displayName="$STR_STST_wooden_box_name";
		scope=2;
		author="ArmSTALKER";
		model="\armst\armst_item\box\box_1";
		maximumLoad=999999;
		transportMaxWeapons=10;
		transportMaxMagazines=60;
		transportMaxBackpacks=10;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class armst_box_small: Box_FIA_Wps_F
	{
		displayName="$STR_STST_wooden_box_name";
		scope=2;
		author="ArmSTALKER";
		model="\armst\armst_item\box\box_2";
		maximumLoad=999999;
		transportMaxWeapons=5;
		transportMaxMagazines=30;
		transportMaxBackpacks=2;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
};
