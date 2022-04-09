class CfgPatches
{
	class armst_SuhPay
	{
		units[]={};
		weapons[]=
		{
			"armst_switch_SuhPay"
		};
		magazines[]={};
		requiredVersion=1.01;
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class Rangefinder;
	class armst_switch_SuhPay: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\SuhPay\SuhPay.p3d";
		picture="";
		visionMode[]={};
		class WeaponSlotsInfo
		{
			mass=0;
		};
	};
};
