class CfgPatches
{
	class armst_waterbottle
	{
		units[]={};
		weapons[]=
		{
			"armst_switch_waterbottle"
		};
		magazines[]={};
		requiredVersion=1.01;
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class Rangefinder;
	class armst_switch_waterbottle: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\waterbottle\flask.p3d";
		picture="";
		visionMode[]={};
		class WeaponSlotsInfo
		{
			mass=0;
		};
	};
};
