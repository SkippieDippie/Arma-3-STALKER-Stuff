class CfgPatches 
{

	class armst_action 
	{
		units[] = { };
		weapons[] = {
				"USSR_GuitarA"
		};
		requiredVersion = 1.030000;
		requiredAddons[] = { };
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class MuzzleSlot;

class CfgWeapons
{

class ItemCore ;

class InventoryItem_Base_F ;

class InventoryMuzzleItem_Base_F ;

class InventoryOpticsItem_Base_F ;
class UGL_F ;
	class Rifle_Base_F ;

	class Rifle_Long_Base_F : Rifle_Base_F
	{

		class WeaponSlotsInfo ;
	};

	class Launcher_Base_F ;

	class Weapon_launch_NLAW_F : Launcher_Base_F
	{

		class WeaponSlotsInfo ;
	};

	class srifle_LRR_F ;


	class USSR_GUITAR : Rifle_Long_Base_F
	{
		scope = 2;
		maxZeroing = 2000;
		cursor = "srifle";
		model = "\armst\armst_item\guitar\gitara";
		displayName = "$STR_STST_weapon_guitar_name";
		picture = "\armst\armst_item\guitar\data\w_guitar_ca.paa";
		vehicleClass = "WeaponsSecondary";

		class GunParticles 
		{

			class FirstEffect 
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		selectionFireAnim = "muzzleFlashNOROT";
		dexterity = 1.530000;
		inertia = 1;
		reloadtime = 0.750000;
		handanim[] = {
				"OFP2_ManSkeleton", "\A3\Weapons_F\LongRangeRifles\M320\data\Anim\m320.rtm"
		};
		modes[] = { };

		class Single : Mode_SemiAuto
		{
			sounds[] = {
					"StandardSound"
			};

			class BaseSoundModeType 
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {
						"A3\sounds_f\weapons\closure\closure_rifle_2", "db-12", 1, 10
				};
				closure2[] = {
						"A3\sounds_f\weapons\closure\closure_rifle_3", "db-12", 1, 10
				};
				soundClosure[] = {
						"closure1", 0.500000, "closure2", 0.500000
				};
			};

			class StandardSound : BaseSoundModeType
			{
				begin1[] = {};
				soundBegin[] = {
						"begin1", 1
				};
			};
			dispersion = 0.000450;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			minRange = 0;
			minRangeProbab = 0.300000;
			midRange = 150;
			midRangeProbab = 0.700000;
			maxRange = 300;
			maxRangeProbab = 0.050000;
			displayName = "USSR_GUITAR";
		};

	class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[] = {801,701,901};
			mass=30;
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPicture="";
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
			};
			class CowsSlot
			{

				compatibleitems[]={};
				displayname="Optics Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture="";
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;
				scope=0;
			};
			class PointerSlot
			{
				iconPicture="";
				iconPinpoint="Center";
				iconPosition[]={1000.3,1000.4};
				iconScale=0.2;

				compatibleitems[]=
				{
				};
				displayname="Pointer Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
				scope=0;
			};
		};
		
		class Library 
		{
			libtextdesc = "USSR_GUITAR";
		};
	};
};