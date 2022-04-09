class CfgPatches
{
	class armst_det_svarog
	{
		units[]={};
		weapons[]=
		{
			"armst_map_east_north",
			"armst_map_east_south",
			"armst_map_west_north",
			"armst_map_west_south",
			"armst_map_chimik",
			"armst_map_orden",
			"armst_map_monolith"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
	};
};
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
	};
	class armst_map_east_north: Pistol_Base_F
	{
		scope=2;
		model="\armst\armst_item\detectors\weapons\maps\Katana.p3d";
		picture="\armst\armst_item\map\satka_east_north.paa";
		author="ArmSTALKER";
		magazines[]={};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\map\satka_east_north.paa"
		};
		displayName="Карта (Северо-восток)";
		descriptionShort="";
		cursor="EmptyCursor";
		cursorAim="throw";
		cursorSize=1;
		weaponInfoType="RscWeaponEmpty";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=1;
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
			class CowsSlot
			{
				access=1;
				compatibleitems[]={};
				displayname="Optics Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
			class PointerSlot
			{
				access=1;
				compatibleitems[]={};
				displayname="Pointer Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
		};
		reloadAction="GestureReloadPistol";
		recoil="recoil_single_knife";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"",
					0,
					0,
					0
				};
				soundClosure[]=
				{
					"closure1",
					0
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]={};
				begin2[]={};
				soundBegin[]=
				{
					"begin1",
					0.1,
					"begin2",
					0.1
				};
			};
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			reloadTime=2;
			dispersion=0.5029;
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=1.2;
			midRangeProbab=0.60000002;
			maxRange=1.3;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
	};
	class armst_map_east_south: armst_map_east_north
	{
		scope=2;
		picture="\armst\armst_item\map\satka_east_south.paa";
		author="ArmSTALKER";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\map\satka_east_south.paa"
		};
		displayName="Карта (Юго-восток)";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=1;
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
			class CowsSlot
			{
				access=1;
				compatibleitems[]={};
				displayname="Optics Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
			class PointerSlot
			{
				access=1;
				compatibleitems[]={};
				displayname="Pointer Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
		};
	};
	class armst_map_west_north: armst_map_east_north
	{
		scope=2;
		model="\armst\armst_item\detectors\weapons\maps\Katana.p3d";
		picture="\armst\armst_item\map\satka_west_north.paa";
		author="ArmSTALKER";
		magazines[]={};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\map\satka_west_north.paa"
		};
		displayName="Карта (Северо-запад)";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=1;
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
			class CowsSlot
			{
				access=1;
				compatibleitems[]={};
				displayname="Optics Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
			class PointerSlot
			{
				access=1;
				compatibleitems[]={};
				displayname="Pointer Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
		};
	};
	class armst_map_west_south: armst_map_east_north
	{
		scope=2;
		model="\armst\armst_item\detectors\weapons\maps\Katana.p3d";
		picture="\armst\armst_item\map\satka_west_south.paa";
		author="ArmSTALKER";
		magazines[]={};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\map\satka_west_south.paa"
		};
		displayName="Карта (Юго-запад)";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=1;
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
			class CowsSlot
			{
				access=1;
				compatibleitems[]={};
				displayname="Optics Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
			class PointerSlot
			{
				access=1;
				compatibleitems[]={};
				displayname="Pointer Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
		};
	};
	class armst_map_chimik: armst_map_east_north
	{
		scope=2;
		model="\armst\armst_item\detectors\weapons\maps\Katana.p3d";
		picture="\armst\armst_item\map\chimik_map.paa";
		author="ArmSTALKER";
		magazines[]={};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\map\chimik_map.paa"
		};
		displayName="Карта Химика";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=1;
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
			class CowsSlot
			{
				access=1;
				compatibleitems[]={};
				displayname="Optics Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
			class PointerSlot
			{
				access=1;
				compatibleitems[]={};
				displayname="Pointer Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
		};
	};
	class armst_map_orden: armst_map_east_north
	{
		scope=2;
		model="\armst\armst_item\detectors\weapons\maps\Katana.p3d";
		picture="\armst\armst_item\map\orden.paa";
		author="ArmSTALKER";
		magazines[]={};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\map\orden.paa"
		};
		displayName="Карта Ордена";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=1;
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
			class CowsSlot
			{
				access=1;
				compatibleitems[]={};
				displayname="Optics Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
			class PointerSlot
			{
				access=1;
				compatibleitems[]={};
				displayname="Pointer Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
		};
	};
	class armst_map_monolith: armst_map_east_north
	{
		scope=2;
		model="\armst\armst_item\detectors\weapons\maps\Katana.p3d";
		picture="\armst\armst_item\map\monolith.paa";
		author="ArmSTALKER";
		magazines[]={};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_item\map\monolith.paa"
		};
		displayName="Карта Ордена";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=1;
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
			class CowsSlot
			{
				access=1;
				compatibleitems[]={};
				displayname="Optics Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
			class PointerSlot
			{
				access=1;
				compatibleitems[]={};
				displayname="Pointer Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
				scope=0;
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
		};
	};
};
