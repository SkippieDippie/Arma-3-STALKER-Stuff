class CfgPatches
{
	class Bolts
	{
		units[]=
		{
			"DAP_BOLT"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		magazines[]=
		{
			"DAPSTALKERS_BOLTS",
			"DAPSTALKERS_BOLTS_LIMITED"
		};
		ammo[]=
		{
			"DAPSTALKERS_BOLT"
		};
	};
};
class EventHandlers;
class CfgVehicles
{
	class Thing;
	class DAP_BOLT: Thing
	{
		scope=2;
		animated=0;
		simulation="thing";
		gravityfactor=1;
		model="\armst\armst_item\armst_bolts\Models\Bolt";
		displayName="$STR_DAP_ST_BOLT_OBJECT";
		accuracy=0.1;
		vehicleclass="Small_items";
		armor=0;
		class Eventhandlers;
	};
};
class cfgAmmo
{
	class grenade;
	class DAPSTALKERS_BOLT: grenade
	{
		CraterEffects="NoCrater";
		CraterWaterEffects="";
		effectFlare="";
		effectsFire="";
		effectsMissile="";
		effectsSmoke="";
		explosionEffects="";
		explosionEffectsDir="";
		explosionForceCoef="";
		explosionPos="";
		explosive=0;
		explosionEffectsRadius=0;
		explosionSoundEffect="";
		hit=0;
		indirectHit=0;
		timeToLive=60;
		explosionTime=65;
		model="\armst\armst_item\armst_bolts\Models\Bolt";
		modeloptics="";
		class EventHandlers
		{
			init="_this execVM ""\armst\armst_item\armst_bolts\Scripts\Bolt.sqf"";";
		};
	};
};
class cfgMagazines
{
	class HandGrenade;
	class DAPSTALKERS_BOLTS: HandGrenade
	{
		ammo="DAPSTALKERS_BOLT";
		count=100;
		mass=1;
		scope=2;
		displayName="$STR_STST_weapon_bolts_name";
		model="\armst\armst_item\armst_bolts\Models\Bolt";
		picture="\armst\armst_item\armst_bolts\Icons\Bolts.paa";
		modeloptics="";
		value=0.1;
		type=16;
	};
	class DAPSTALKERS_BOLTS_LIMITED: DAPSTALKERS_BOLTS
	{
		scope=1;
		type=16;
		mass=5;
		displayName="$STR_STST_weapon_bolts_name";
		picture="\armst\armst_item\armst_bolts\Icons\Bolts.paa";
		value=0.1;
		count=50;
		ammo="pazuBolt_Ammo";
	};
};
class cfgWeapons
{
	class Default;
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle;
		muzzles[]=
		{
			"Throw_note7",
			"Throw_Bolt",
			"HandGrenade_Stone",
			"HandGrenadeMuzzle",
			"MiniGrenadeMuzzle",
			"SmokeShellMuzzle",
			"SmokeShellYellowMuzzle",
			"SmokeShellGreenMuzzle",
			"SmokeShellRedMuzzle",
			"SmokeShellPurpleMuzzle",
			"SmokeShellOrangeMuzzle",
			"SmokeShellBlueMuzzle",
			"ChemlightGreenMuzzle",
			"ChemlightRedMuzzle",
			"ChemlightYellowMuzzle",
			"ChemlightBlueMuzzle",
			"IRGrenade"
		};
		class Throw_Bolt: ThrowMuzzle
		{
			aidispersioncoefx=6;
			aidispersioncoefy=6;
			autoreload=1;
			cursor="EmptyCursor";
			cursoraim="throw";
			enableattack=0;
			keepininventory=1;
			magazinereloadtime=0;
			maxrange=60;
			maxrangeprobab=0.029999999;
			midrange=45;
			midrangeprobab=0.89999998;
			minrange=10;
			minrangeprobab=0.2;
			modeloptics="";
			reloadsound[]=
			{
				"",
				0.00031599999,
				1
			};
			reloadtime=0;
			showempty=0;
			sound[]=
			{
				"",
				0.00031599999,
				1
			};
			magazines[]=
			{
				"DAPSTALKERS_BOLTS"
			};
		};
	};
};
