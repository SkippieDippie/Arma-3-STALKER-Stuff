class CfgPatches
{
	class armst_energy
	{
		units[]={};
		weapons[]=
		{
			"armst_switch_energy"
		};
		magazines[]={};
		requiredVersion=1.01;
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class Rangefinder;
	class armst_switch_energy: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\energy\energy.p3d";
		picture="";
		visionMode[]={};
		class WeaponSlotsInfo
		{
			mass=0;
		};
	};
};
