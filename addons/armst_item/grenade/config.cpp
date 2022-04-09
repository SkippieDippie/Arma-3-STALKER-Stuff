class CfgPatches
{
	class armst_note7
	{
		units[]=
		{
			"DAP_note7"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		magazines[]={};
		ammo[]=
		{
			"DAPSTALKERS_note7"
		};
	};
};
class EventHandlers;
class CfgVehicles
{
	class Thing;
	class DAP_note7: Thing
	{
		scope=1;
		animated=0;
		simulation="thing";
		gravityfactor=1;
		model="\armst\armst_item\grenade\samsung";
		displayName="Samsung Galaxy Note 7";
		accuracy=0.1;
		vehicleclass="Small_items";
		armor=0;
		class Eventhandlers;
	};
};
class cfgAmmo
{
	class grenade;
	class DAPSTALKERS_note7: grenade
	{
		cost=40;
		hit=10;
		visibleFire=4;
		audibleFire=0.44999999;
		visibleFireTime=0;
		whistleDist=50;
		model="\armst\armst_item\grenade\samsung";
		modeloptics="";
		class CamShakeExplode
		{
			power="(30*0.2)";
			duration="((round (30^0.5))*0.2 max 0.2)";
			frequency=40;
			distance="((7 + 30^0.5)*8)";
		};
	};
};
class cfgMagazines
{
	class HandGrenade;
	class DAPSTALKERS_note7: HandGrenade
	{
		ammo="DAPSTALKERS_note7";
		count=1;
		descriptionShort="BIG FUCKING SMARTPHONE BOMB";
		displayName="Samsung Galaxy Note 7";
		model="\armst\armst_item\grenade\samsung";
		picture="\armst\armst_item\grenade\samsungico.paa";
		modeloptics="";
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
		class Throw_note7: ThrowMuzzle
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
				"DAPSTALKERS_note7"
			};
		};
	};
};
