class CfgPatches
{
	class armst_shocolate
	{
		units[]={};
		weapons[]=
		{
			"armst_switch_shocolate"
		};
		magazines[]={};
		requiredVersion=1.01;
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class Rangefinder;
	class armst_switch_shocolate: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\shocolate\shocolate.p3d";
		picture="";
		visionMode[]={};
		class WeaponSlotsInfo
		{
			mass=0;
		};
	};
};
