class CfgPatches
{
	class armst_binocularNVG
	{
		units[]={};
		weapons[]=
		{
			"armst_binocularNVG"
		};
		magazines[]={};
		requiredVersion=1.01;
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class Rangefinder;
	class armst_binocularNVG: Rangefinder
	{
		author="ArmSTALKER";
		scope=2;
		displayName="$STR_STST_weapon_binocular_nv_name";
		model="\armst\armst_item\BinocularNVG\BinocularNVG.p3d";
		picture="\armst\armst_item\BinocularNVG\BinocularNVG.paa";
		opticsZoomMin=0.0099999998;
		opticsZoomMax=0.22499999;
		opticsZoomInit=0.22499999;
		distanceZoomMin=100;
		distanceZoomMax=2300;
		visionMode[]=
		{
			"NVG"
		};
		class WeaponSlotsInfo
		{
			mass=30;
		};
	};
};
