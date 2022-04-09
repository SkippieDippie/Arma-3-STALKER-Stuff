class CfgPatches
{
	class armst_snorkers
	{
		units[]={};
		weapons[]=
		{
			"armst_switch_snorkers"
		};
		magazines[]={};
		requiredVersion=1.01;
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class Rangefinder;
	class armst_switch_snorkers: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\snorkers\snorkers.p3d";
		picture="";
		visionMode[]={};
		class WeaponSlotsInfo
		{
			mass=0;
		};
	};
};
