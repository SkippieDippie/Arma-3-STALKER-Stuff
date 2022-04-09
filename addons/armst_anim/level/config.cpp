////////////////////////////////////////////////////////////////////
//DeRap: E:/ARMA/config.bin
//Produced from mikero's Dos Tools Dll version 7.29
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Tue Nov 12 17:19:54 2019 : 'file' last modified on Mon Jul 22 13:31:53 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class armst_level_anim
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"A3_Anims_F","A3_Anims_F_Config_Sdr"};
	};
};
class DefaultEventhandlers;
class CfgMovesBasic
{
	class Default;
	class StandBase;
	class HealBase: Default
	{
		disableWeapons = 1;
		disableWeaponsLong = 1;
		showWeaponAim = 0;
		canPullTrigger = 0;
		duty = 0.2;
		limitGunMovement = 0;
		aiming = "empty";
		aimingBody = "empty";
		actions = "HealActionBase";
		looped = 0;
	};
	class ManActions
	{
		GestureOUT[] = {"GestureOUT","Gesture"};
		GestureSdastsa[] = {"GestureSdastsa","Gesture"};
		GesturePlen[] = {"GesturePlen","Gesture"};
		GesturePrivet[] = {"GesturePrivet","Gesture"};
		TEST11[] = {"TEST11","Gesture"};
		GestureGuitar[] = {"GestureGuitar","Gesture"};
		GestureUkaz[] = {"GestureUkaz","Gesture"};
		GestureGasmaskUp[] = {"GestureGasmaskUp","Gesture"};
		GestureGasmaskDown[] = {"GestureGasmaskDown","Gesture"};
		GestureKrovAttack1[] = {"GestureKrovAttack1","Gesture"};
		GestureRukPoz[] = {"GestureRukPoz","Gesture"};
		GestureKrovAttack2[] = {"GestureKrovAttack2","Gesture"};
		GestureKrovAttack3[] = {"GestureKrovAttack3","Gesture"};
		GestureMinHP[] = {"GestureMinHP","Gesture"};
		Gestureart_podnyal[] = {"Gestureart_podnyal","Gesture"};
		Gestureheadkick[] = {"Gestureheadkick","Gesture"};
		GestureFacepalm[] = {"GestureFacepalm","Gesture"};
		GesturePointsArmst[] = {"GesturePointsArmst","Gesture"};
		GestureSalutesArmst[] = {"GestureSalutesArmst","Gesture"};
		GestureThumb[] = {"GestureThumb","Gesture"};
		Gesturearmst_clockl[] = {"Gesturearmst_clockl","Gesture"};
		Gesturecompass[] = {"Gesturecompass","Gesture"};
		GestureSilenced[] = {"GestureSilenced","Gesture"};
		GestureRadioTalk[] = {"GestureRadioTalk","Gesture"};
		GestureFuck[] = {"GestureFuck","Gesture"};
		GestureInspect[] = {"GestureInspect","Gesture"};
		GestureCheckWeap[] = {"GestureCheckWeap","Gesture"};
		Gestureugroza[] = {"Gestureugroza","Gesture"};
		GestureAxe[] = {"GestureAxe","Gesture"};
		Gestureknife[] = {"Gestureknife","Gesture"};
		woodaxe_attack1[] = {"woodaxe_attack1","Gesture"};
		woodaxe_attack2[] = {"woodaxe_attack2","Gesture"};
		woodaxe_attack3[] = {"woodaxe_attack3","Gesture"};
		woodaxe_attack4[] = {"woodaxe_attack4","Gesture"};
		cross1[] = {"cross1","Gesture"};
		cross2[] = {"cross2","Gesture"};
		cross3[] = {"cross3","Gesture"};
		Gesturecigaretes[] = {"Gesturecigaretes","Gesture"};
		GestureEat[] = {"GestureEat","Gesture"};
		GestureDrink[] = {"GestureDrink","Gesture"};
		GestureGameKamen[] = {"GestureGameKamen","Gesture"};
		GestureGamebumaga[] = {"GestureGamebumaga","Gesture"};
		GestureGamenojnice[] = {"GestureGamenojnice","Gesture"};
		GestureHvat1[] = {"GestureHvat1","Gesture"};
		GestureHvat2[] = {"GestureHvat2","Gesture"};
		Gesturecover[] = {"Gesturecover","Gesture"};
		Gestureengage[] = {"Gestureengage","Gesture"};
		Gestureforward[] = {"Gestureforward","Gesture"};
		Gesturehold[] = {"Gesturehold","Gesture"};
		Gesturepoint[] = {"Gesturepoint","Gesture"};
		Gestureregroup[] = {"Gestureregroup","Gesture"};
		Gesturestop[] = {"Gesturestop","Gesture"};
		Gesturewarning[] = {"Gesturewarning","Gesture"};
		armst_shotgunfire[] = {"armst_shotgunfire","Gesture"};
		armst_zombie_stvol[] = {"armst_zombie_stvol","Gesture"};
		armst_suicide_gesture[] = {"armst_suicide_gesture","Gesture"};
		armst_fight_idl[] = {"armst_fight_idl","Gesture"};
		armst_fight_1[] = {"armst_fight_1","Gesture"};
		armst_fight_2[] = {"armst_fight_2","Gesture"};
		armst_detector_idle[] = {"armst_detector_idle","Gesture"};
		armst_weapons_pleco[] = {"armst_weapons_pleco","Gesture"};
		armst_weapon_arm[] = {"armst_weapon_arm","Gesture"};
		armst_weapon_arms[] = {"armst_weapon_arms","Gesture"};
		armst_weapon_hvat_stvol[] = {"armst_weapon_hvat_stvol","Gesture"};
		armst_weapons_up[] = {"armst_weapons_up","Gesture"};
		armst_weapon_hvatzamag[] = {"armst_weapon_hvatzamag","Gesture"};
		armst_weapon_grud_hvat[] = {"armst_weapon_grud_hvat","Gesture"};
		armst_weapon_rukinaves[] = {"armst_weapon_rukinaves","Gesture"};
		Armst_GesturePDA[] = {"Armst_GesturePDA","Gesture"};
		Armst_GestureMAP[] = {"Armst_GestureMAP","Gesture"};
		armst_weapon_visovRight[] = {"armst_weapon_visovRight","Gesture"};
		armst_weapon_visovLeft[] = {"armst_weapon_visovLeft","Gesture"};
		armst_alchogole[] = {"armst_alchogole","Gesture"};
		armst_weapon_visovUP[] = {"armst_weapon_visovUP","Gesture"};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	extended = "CfgExtendedAnimation";
	class States
	{
		class AinvPknlMstpSnonWnonDnon_medic0;
		class AinvPknlMstpSnonWnonDr_medic5; 
		class AinvPknlMstpSnonWnonDnon_medic1: AinvPknlMstpSnonWnonDr_medic5 //0 уровень
		{
			file = "\A3\anims_f\Data\Anim\Sdr\inj\HEALING\AinvPknlMstpSnonWnonDr_medic5";
			speed = 0.02;
		};
		class AinvPknlMstpSnonWnonDnon_medic2: AinvPknlMstpSnonWnonDr_medic5  //5 уровень
		{
			file = "\A3\anims_f\Data\Anim\Sdr\inj\HEALING\AinvPknlMstpSnonWnonDr_medic5";
			speed = 0.06;
		};
		class AinvPknlMstpSnonWnonDnon_medic3: AinvPknlMstpSnonWnonDr_medic5  //10 уровень
		{
			file = "\A3\anims_f\Data\Anim\Sdr\inj\HEALING\AinvPknlMstpSnonWnonDr_medic5";
			speed = 0.08;
		};
		class AinvPknlMstpSnonWnonDr_medic3: AinvPknlMstpSnonWnonDr_medic5 //15 уровень
		{
			file = "\A3\anims_f\Data\Anim\Sdr\inj\HEALING\AinvPknlMstpSnonWnonDr_medic5";
			speed = 0.11;
		};
	};
};
