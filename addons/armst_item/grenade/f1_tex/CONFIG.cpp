class CfgPatches
{
	class armst_grenade
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		author[]=
		{
			"Romzet"
		};
		magazines[]={};
		ammo[]=
		{
			"GrenadeHand",
			"mini_Grenade"
		};
	};
};
class cfgAmmo
{
	class Grenade;
	class SmokeShell;
	class GrenadeHand: Grenade
	{
		hit=8;
		model="\armst\armst_item\grenade\f1_tex\f1.p3d";
	};
	class mini_Grenade: GrenadeHand
	{
		hit=8;
		model="\armst\armst_item\grenade\rgd_5_tex\RGD_5.p3d";
	};
};
class cfgMagazines
{
	class CA_Magazine;
	class HandGrenade: CA_Magazine
	{
		displayName="$STR_STST_weapon_f1_nameshort";
		descriptionShort="$STR_STST_weapon_f1_desc";

		picture="\armst\armst_item\grenade\f1.paa";
		model="\armst\armst_item\grenade\f1_tex\f1.p3d";
	};
	class MiniGrenade: CA_Magazine
	{
		displayName="$STR_STST_weapon_rgd5_nameshort";
		descriptionShort="$STR_STST_weapon_rgd5_desc";

		picture="\armst\armst_item\grenade\rgd5.paa";
		model="\armst\armst_item\grenade\rgd_5_tex\RGD_5.p3d";
	};
};
