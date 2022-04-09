class CfgPatches
{
	class armst_konserv
	{
		units[]={};
		weapons[]=
		{
			"armst_switch_konserv",
			"armst_switch_konserv_ikra_red",
			"armst_switch_konserv_sosiski",
			"armst_switch_konserv_water"
		};
		magazines[]={};
		requiredVersion=1.01;
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class Rangefinder;
	class armst_switch_konserv: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\konserv\konserv.p3d";
		picture="";
		visionMode[]={};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class WeaponSlotsInfo
		{
			mass=100000000;
		};
	};
	class armst_switch_konserv_ikra_red: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\konserv\konserv.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\item\konserva\konserva_ikra_red_validol.paa"
		};
		picture="";
		visionMode[]={};
		class WeaponSlotsInfo
		{
			mass=10000000000;
		};
	};
	class armst_switch_konserv_sosiski: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\konserv\konserv.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\item\konserva\konserva_sousige_validol.paa"
		};
		picture="";
		visionMode[]={};
		class WeaponSlotsInfo
		{
			mass=100000000000;
		};
	};
	class armst_switch_konserv_water: Rangefinder
	{
		author="ArmSTALKER";
		scope=1;
		displayName="";
		model="\armst\armst_item\switchitem\konserv\konserv.p3d";
		picture="";
		visionMode[]={};
		class WeaponSlotsInfo
		{
			mass=100000000;
		};
	};
};
