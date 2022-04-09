class CfgPatches
{
	class armst_binocular
	{
		units[]={};
		weapons[]=
		{
			"armst_Binocular"
		};
		magazines[]={};
		requiredVersion=1.01;
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class Binocular;
	class armst_Binocular: Binocular
	{
		author="ArmSTALKER";
		_generalMacro="armst_Binocular";
		scope=2;
		simulation="Binocular";
		model="\armst\armst_item\Binocular\Binocular";
		modelOptics="\A3\weapons_f\reticle\optics_binoculars";
		visionMode[]=
		{
			"Normal"
		};
		picture="\A3\Weapons_F\Data\UI\gear_binoculars_CA.paa";
		displayName="$STR_DN_BINOCULAR";
		nameSound="binoculars";
		descriptionUse="$STR_A3_cfgWeapons_Default_Binocular1";
		minRange=150;
		midRange=500;
		maxRange=1000;
		class Library
		{
			libTextDesc="$STR_LIB_BINOCULAR";
		};
		descriptionShort="$STR_DSS_BINOCULAR";
		class WeaponSlotsInfo
		{
			mass=10;
		};
	};
};
