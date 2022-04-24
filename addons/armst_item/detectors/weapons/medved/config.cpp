class CfgPatches
{
	class armst_det_medved
	{
		units[]={};
		weapons[]=
		{
			"armst_det_medved"
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
	class armst_det_medved: Pistol_Base_F
	{
		scope=2;
		detectRadius=50;
		detectAngle=360;
		detectTypes[]=
		{
			"ARMST_ARTEFACT"
		};
		model="\armst\armst_item\detectors\weapons\medved\Katana.p3d";
		picture="\armst\armst_item\detectors\item_detector_2_ico.paa";
		author="ArmSTALKER";
		magazines[]={};
		displayName="$STR_STST_det_bear_name";
		cursor="EmptyCursor";
		cursorAim="throw";
		cursorSize=1;
		weaponInfoType="RscWeaponEmpty";
		class WeaponSlotsInfo
		{
			allowedslots[]={901,701,801};
			mass=4;
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
};
