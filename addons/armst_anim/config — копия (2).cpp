////////////////////////////////////////////////////////////////////
//DeRap: E:/ARMA/config.bin
//Produced from mikero's Dos Tools Dll version 7.29
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Tue Nov 12 17:19:54 2019 : 'file' last modified on Mon Jul 22 13:31:53 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Monstersa
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"A3_Anims_F"};
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
		armst_weapon_visovUP[] = {"armst_weapon_visovUP","Gesture"};
	};
};
class CfgGesturesMale
{
	class ManActions{};
	class Actions;
	class Default;
	class States
	{
		class armst_shotgunfire: default
		{
			file = "\armst\armst_anim\armst_shotgunfire.rtm";
			enableOptics = 0;
			speed = -0.55;
			rightHandIKCurve[] = {0,1,0.01,1,0.25,0,0.75,0,0.9,1,1,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.31,1,0.345,0,0.68,0,0.72,1,1,1};
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			canPullTrigger = 0;
			preload = 1;
		};
		class armst_weapons_pleco: Default
		{
			file = "\armst\armst_anim\pose1.rtm";
			looped = 1;
			speed = 0;
			mask = "handsWeapon_melee2";
			limitGunMovement = 0.7;
			disableInventory = 1;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			static = 1;
			showWeaponAim = 0;
			enableMissile = 0;
			enableBinocular = 0;
			showItemInHand = 0;
			showItemInRightHand = 0;
			showHandGun = 0;
			showpistol = 0;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			canReload = 0;
		};
		class armst_weapons_up: armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_weapons_up.rtm";
			mask = "handsWeapon_melee2";
			looped = 1;
			speed = 1e-012;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			canReload = 0;
			showpistol = 0;
		};
		class armst_weapon_arm: armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_weapon_arm.rtm";
			mask = "handsWeapon_melee2";
			looped = 1;
			speed = 1e-012;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			canReload = 0;
			showpistol = 0;
		};
		class armst_weapon_arms: armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_weapon_arms.rtm";
			mask = "handsWeapon_melee2";
			looped = 1;
			speed = 1e-012;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			canReload = 0;
			showpistol = 0;
		};
		class armst_weapon_hvat_stvol: armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_weapon_signal_up.rtm";
			mask = "handsWeapon_melee2";
			looped = 1;
			speed = 1e-012;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			canReload = 0;
			showpistol = 1;
		};
		class armst_weapon_hvatzamag: armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_hvatzamag.rtm";
			mask = "handsWeapon_melee2";
			looped = 1;
			speed = 1e-012;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			canReload = 0;
			showpistol = 1;
		};
		class armst_weapon_grud_hvat: armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_weapon_grud_hvat.rtm";
			mask = "handsWeapon_melee2";
			looped = 1;
			speed = 1e-012;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			canReload = 0;
			showpistol = 1;
		};
		class armst_weapon_rukinaves: armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_stand.rtm";
			mask = "handsWeapon_melee2";
			looped = 1;
			speed = 1e-012;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			canReload = 0;
			showpistol = 1;
		};
		class armst_weapon_visovRight: armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_weapon_visovRight.rtm";
			mask = "handsWeapon_melee2";
			looped = 0;
			disableWeapons = 0;
			speed = 1e-012;
			aimPrecision = 4.2;
			headBobStrength = 0.2;
			headBobMode = 2;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			canReload = 1;
			showpistol = 0;
		};
		class armst_weapon_visovUP: armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_weapon_visovUP.rtm";
			mask = "handsWeapon_melee2";
			looped = 0;
			disableWeapons = 0;
			speed = 1e-012;
			aimPrecision = 4.2;
			headBobStrength = 0.2;
			headBobMode = 2;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			canReload = 1;
			showpistol = 0;
		};
		class armst_weapon_visovLeft: armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_weapon_visovLeft.rtm";
			mask = "handsWeapon_melee2";
			looped = 0;
			disableWeapons = 0;
			speed = 1e-012;
			aimPrecision = 4.2;
			headBobStrength = 0.2;
			headBobMode = 2;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			canReload = 1;
			showpistol = 0;
		};
		class Gestureheadkick: Default
		{
			looped = 0;
			mask = "BodyFull2";
			file = "\armst\armst_anim\armst_headkick.rtm";
			speed = 0.27027;
			limitGunMovement = 0.7;
			disableInventory = 1;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			canReload = 0;
			static = 1;
			showWeaponAim = 0;
			enableMissile = 0;
			enableBinocular = 0;
			showItemInHand = 0;
			showItemInRightHand = 0;
			showHandGun = 0;
			showpistol = 0;
		};
		class GestureMinHP: Default
		{
			file = "\armst\armst_anim\armst_minHP.rtm";
			looped = 1;
			speed = 0;
			weaponIK = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			mask = "upperTorso";
			limitGunMovement = 0.7;
			disableInventory = 1;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			canReload = 0;
			static = 1;
			showWeaponAim = 0;
			enableMissile = 0;
			enableBinocular = 0;
			showItemInHand = 0;
			showItemInRightHand = 0;
			showHandGun = 0;
			showpistol = 0;
		};
		class Gestureart_podnyal: Default
		{
			file = "\armst\armst_anim\art_podnyal.rtm";
			looped = 0;
			speed = 0.28;
			weaponIK = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			mask = "BodyFull2";
			limitGunMovement = 0.7;
			disableInventory = 1;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			canReload = 0;
			static = 1;
			showWeaponAim = 0;
			enableMissile = 0;
			enableBinocular = 0;
			showItemInHand = 0;
			showItemInRightHand = 0;
			showHandGun = 0;
			showpistol = 0;
		};
		class GestureOUT: Default
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon.rtm";
			disableWeapons = 1;
			interpolationRestart = 2;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			looped = 0;
		};
		class GestureFuck: Default
		{
			file = "\armst\armst_anim\armst_fuck.rtm";
			looped = 0;
			canReload = 0;
			speed = 0.0001;
			mask = "LeftHand";
			leftHandIKCurve[] = {0.1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class GestureRukPoz: Default
		{
			looped = 0;
			mask = "LeftHand";
			file = "\armst\armst_anim\new\armst_ruk.rtm";
			speed = 1;
			leftHandIKCurve[] = {0.1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class GestureFacepalm: Default
		{
			looped = 0;
			mask = "upperTorso1";
			file = "\armst\armst_anim\armst_Facepalm.rtm";
			speed = 0.0001;
			leftHandIKCurve[] = {0.1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class GestureSilenced: Default
		{
			looped = 0;
			mask = "LeftHand";
			file = "\armst\armst_anim\armst_silenced.rtm";
			speed = 0.0001;
			leftHandIKCurve[] = {0.1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class GestureRadioTalk: Default
		{
			looped = 0;
			mask = "leftHandandHead";
			file = "\armst\armst_anim\armst_radiotalk.rtm";
			speed = 0.75;
			leftHandIKCurve[] = {0.1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class GesturePointsArmst: Default
		{
			looped = 0;
			file = "\armst\armst_anim\armst_point.rtm";
			speed = 0.0001;
			mask = "LeftHand";
			rightHandIKCurve[] = {};
			leftHandIKCurve[] = {0.1};
		};
		class GestureSalutesArmst: Default
		{
			looped = 0;
			file = "\armst\armst_anim\armst_salute.rtm";
			speed = 0.0001;
			mask = "LeftHand";
			rightHandIKCurve[] = {};
			leftHandIKCurve[] = {0.1};
		};
		class GestureThumb: Default
		{
			looped = 0;
			file = "\armst\armst_anim\armst_thumb.rtm";
			speed = 0.0001;
			mask = "LeftHand";
			rightHandIKCurve[] = {1,1,0.05,1,0.95,1,1,1};
			leftHandIKCurve[] = {0.1};
		};
		class Gesturearmst_clockl: Default
		{
			looped = 0;
			file = "\armst\armst_anim\new\armst_clockl.rtm";
			speed = 1;
			mask = "LeftHand";
			rightHandIKCurve[] = {1,1,0.05,1,0.95,1,1,1};
			leftHandIKCurve[] = {0.1};
		};
		class Gesturecompass: Default
		{
			looped = 0;
			file = "\armst\armst_anim\new\armst_compass.rtm";
			speed = 1;
			mask = "LeftHand";
			rightHandIKCurve[] = {1,1,0.05,1,0.95,1,1,1};
			leftHandIKCurve[] = {0.1};
		};
		class GestureGameKamen: Default
		{
			looped = 0;
			file = "\armst\armst_anim\new\armst_game_kamen.rtm";
			speed = 0.18;
			mask = "LeftHand";
			rightHandIKCurve[] = {1,1,0.05,1,0.95,1,1,1};
			leftHandIKCurve[] = {0.1};
		};
		class GestureGamebumaga: Default
		{
			looped = 0;
			file = "\armst\armst_anim\new\armst_game_bumaga.rtm";
			speed = 0.17;
			mask = "LeftHand";
			rightHandIKCurve[] = {1,1,0.05,1,0.95,1,1,1};
			leftHandIKCurve[] = {0.1};
		};
		class GestureGamenojnice: Default
		{
			looped = 0;
			file = "\armst\armst_anim\new\armst_game_nojnice.rtm";
			speed = 0.17;
			mask = "LeftHand";
			rightHandIKCurve[] = {1,1,0.05,1,0.95,1,1,1};
			leftHandIKCurve[] = {0.1};
		};
		class GestureSdastsa: GestureFacepalm
		{
			speed = 0.0;
			looped = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Knl\Stp\sur\rfl\AmovPknlMstpSsurWrflDnon.rtm";
			mask = "launcher";
			disableWeapons = 1;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
		};
		class GesturePlen: Default
		{
			speed = 0.0;
			looped = 1;
			file = "A3\anims_f\data\Anim\sdr\cts\arma2\UnaErcPoslechVelitele4.rtm";
			mask = "launcher";
			disableWeapons = 1;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			ragdoll = 1;
		};
		class Armst_GestureMAP: Default
		{
			speed = 0.0;
			looped = 1;
			file = "\armst\armst_anim\new\armst_map.rtm";
			mask = "handsWeapon_melee";
			disableWeapons = 1;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			ragdoll = 1;
		};
		class Armst_GesturePDA: Default
		{
			speed = 0.0;
			looped = 1;
			file = "armst\armst_anim\new\armst_pda.rtm";
			mask = "LeftHand";
			rightHandIKCurve[] = {1,1,0.05,1,0.95,1,1,1};
			leftHandIKCurve[] = {0.1};
		};
		class GesturePrivet: Default
		{
			speed = 0.2022;
			looped = 0;
			file = "\A3\anims_f\data\Anim\sdr\cts\Custom\A_in\Acts_PercMstpSlowWrflDnon_handup2.rtm";
			mask = "launcher";
			disableWeapons = 1;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			canReload = 0;
		};
		class GestureUkaz: GesturePrivet
		{
			speed = 0.4011;
			mask = "LeftHand";
			file = "\a3\Anims_F_EPC\data\Anim\sdr\cts\Custom\C_out2\Acts_ComingInSpeakingWalkingOut5";
		};
		class GestureGasmaskUp: GesturePrivet
		{
			speed = 0.63;
			file = "A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end";
		};
		class GestureGasmaskDown: GesturePrivet
		{
			speed = 0.63;
			file = "\A3\anims_f\Data\Anim\Sdr\wop\erc\stp\opt\bin\awoppercmstpsoptwbindnon_AmovPercMstpSrasWpstDnon";
		};
		class GestureGuitar: GesturePrivet
		{
			speed = 0.2;
			looped = 1;
			mask = "handsWeapon";
			file = "\armst\armst_anim\gitaraPlay.rtm";
			interpolationRestart = 2;
			weaponIK = 1;
			canReload = 1;
			showpistol = 0;
		};
		class GestureKrovAttack3: Default
		{
			looped = 1;
			mask = "BodyFull";
			file = "\armst\armst_anim\krovosos_run_attack03.rtm";
			speed = 0.5;
			interpolationRestart = 2;
		};
		class GestureKrovAttack2: Default
		{
			looped = 0;
			mask = "handsWeapon";
			file = "\armst\armst_anim\krovosos_attack02";
			speed = -1.5;
			interpolationRestart = 2;
		};
		class GestureKrovAttack1: Default
		{
			looped = 0;
			mask = "handsWeapon";
			file = "\armst\armst_anim\krovosos_attack01.rtm";
			speed = 0.5;
			interpolationRestart = 2;
		};
		class GestureInspect: Default
		{
			looped = 0;
			mask = "upperTorso";
			file = "\armst\armst_anim\armst_inspect_weapon.rtm";
			speed = 0.2;
			limitGunMovement = 0.7;
			disableInventory = 1;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			canReload = 0;
			static = 1;
			showWeaponAim = 0;
			enableMissile = 0;
			enableBinocular = 0;
			showItemInHand = 0;
			showItemInRightHand = 0;
			showHandGun = 0;
			showpistol = 0;
		};
		class GestureCheckWeap: Default
		{
			looped = 1;
			mask = "launcher";
			file = "\armst\armst_anim\check_weapon.rtm";
			speed = 0.3502;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			canReload = 1;
			showpistol = 0;
		};
		class armst_detector_idle: Default
		{
			looped = 1;
			mask = "handsWeapon_melee";
			file = "\armst\armst_anim\new\armst_detector.rtm";
			speed = 1e-012;
			interpolationRestart = 2;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			weaponIK = 1;
			canReload = 0;
			showpistol = 1;
		};
		class Gestureugroza: Default
		{
			looped = 0;
			file = "\armst\armst_anim\armst_ugroza.rtm";
			speed = 0.22;
			mask = "LeftHand";
			rightHandIKCurve[] = {1,1,0.05,1,0.95,1,1,1};
			leftHandIKCurve[] = {0.1};
		};
		class GestureAxe: Default
		{
			file = "\armst\armst_anim\armst_axe.rtm";
			disableWeapons = 1;
			speed = 1.3;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class Gestureknife: Default
		{
			file = "\armst\armst_anim\armst_knife.rtm";
			disableWeapons = 1;
			speed = 1.4;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class woodaxe_attack4: Default
		{
			file = "\armst\armst_anim\woodaxe_attack1.rtm";
			disableWeapons = 0;
			speed = 1.05;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class woodaxe_attack3: Default
		{
			file = "\armst\armst_anim\woodaxe_attack2.rtm";
			disableWeapons = 0;
			speed = 1.05;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class woodaxe_attack2: Default
		{
			file = "\armst\armst_anim\armst_knife_attack_2.rtm";
			disableWeapons = 0;
			speed = 1.1;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class woodaxe_attack1: Default
		{
			file = "\armst\armst_anim\armst_knife_attack_1.rtm";
			disableWeapons = 0;
			speed = 1;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class cross1: Default
		{
			file = "\armst\armst_anim\cross1.rtm";
			disableWeapons = 0;
			speed = 1.1;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class cross2: Default
		{
			file = "\armst\armst_anim\cross2.rtm";
			disableWeapons = 0;
			speed = 1.2;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class cross3: Default
		{
			file = "\armst\armst_anim\cross3.rtm";
			disableWeapons = 0;
			speed = 1.4;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class GestureEat: GesturePrivet
		{
			speed = 0.13;
			duty = -0.6;
			file = "\armst\armst_anim\armst_eat.rtm";
		};
		class GestureCigaretes: GesturePrivet
		{
			speed = 0.08;
			mask = "hands";
			duty = -0.6;
			file = "\armst\armst_anim\armst_cigaretes.rtm";
		};
		class GestureDrink: GesturePrivet
		{
			speed = 0.15;
			duty = -0.6;
			file = "\armst\armst_anim\armst_drink.rtm";
		};
		class GestureHvat1: Default
		{
			file = "\armst\armst_anim\p_15a.rtm";
			speed = -1e+010;
			disableWeapons = 0;
			looped = 1;
			mask = "handsWeapon_melee";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class armst_zombie_stvol: Default
		{
			file = "\armst\armst_anim\armst_zombie_stvol.rtm";
			speed = -1e+010;
			disableWeapons = 0;
			looped = 1;
			mask = "handsWeapon_melee2";
			headBobStrength = 0.2;
			headBobMode = 2;
		};
		class GestureHvat2: Default
		{
			file = "\armst\armst_anim\p_22.rtm";
			speed = -1e+010;
			disableWeapons = 0;
			looped = 1;
			mask = "rightHand";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class Gesturecover: GesturePrivet
		{
			speed = 0.8;
			duty = -0.6;
			file = "\armst\armst_anim\anim\cover.rtm";
		};
		class Gestureengage: GesturePrivet
		{
			speed = 0.9;
			duty = -0.6;
			mask = "LeftHand";
			file = "\armst\armst_anim\anim\engage.rtm";
		};
		class Gestureforward: GesturePrivet
		{
			speed = 1;
			duty = -0.6;
			mask = "LeftHand";
			file = "\armst\armst_anim\anim\forward.rtm";
		};
		class Gesturehold: GesturePrivet
		{
			speed = 0.8;
			duty = -0.6;
			mask = "LeftHand";
			file = "\armst\armst_anim\anim\hold.rtm";
		};
		class Gesturepoint: GesturePrivet
		{
			speed = 0.8;
			mask = "LeftHand";
			duty = -0.6;
			file = "\armst\armst_anim\anim\point.rtm";
		};
		class Gestureregroup: GesturePrivet
		{
			speed = 0.8;
			duty = -0.6;
			mask = "LeftHand";
			file = "\armst\armst_anim\anim\regroup.rtm";
		};
		class Gesturestop: GesturePrivet
		{
			speed = 0.6;
			duty = -0.6;
			mask = "LeftHand";
			file = "\armst\armst_anim\anim\stop.rtm";
		};
		class Gesturewarning: GesturePrivet
		{
			speed = 0.8;
			duty = -0.6;
			mask = "LeftHand";
			file = "\armst\armst_anim\anim\warning.rtm";
		};
		class armst_fight_idl: Default
		{
			file = "\armst\armst_anim\new\armst_fight_idl.rtm";
			disableWeapons = 0;
			speed = 1e-007;
			looped = 1;
			mask = "hands";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class armst_fight_1: Default
		{
			file = "\armst\armst_anim\new\armst_fight_1.rtm";
			disableWeapons = 0;
			speed = 2.7322;
			looped = 0;
			mask = "hands";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
		class armst_fight_2: Default
		{
			file = "\armst\armst_anim\new\armst_fight_2.rtm";
			disableWeapons = 0;
			speed = 2.7322;
			looped = 0;
			mask = "hands";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
			rightHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	extended = "CfgExtendedAnimation";
	class States
	{
		

		class CutSceneAnimationBase ;

		class AmovPercMstpSnonWnonDnon ;
		class AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon ;
		
		class TransAnimBase ;
		class AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWpstDnon ;
		
		
		class StandBase;
		class SprintBaseDf;
		// спринт
		class AmovPercMevaSrasWrflDf: SprintBaseDf
		{
   file = "armst\armst_anim\new\CdzpAmovPercMsprSlowWrflDf.rtm";
    speed = 1.5;
		};
		
		class AidlPknlMstpSlowWpstDnon_G0S ;
		class AidlPknlMstpSlowWrflDnon_G0S ;
		class AmovPpneMstpSrasWrflDnon ;
		
		//в присяди с опущенной пушкой медленно
		
		class AmovPknlMwlkSlowWrflDf: AidlPknlMstpSlowWpstDnon_G0S
		{
   file = "armst\armst_anim\new\CdzpAmovPknlMwlkSlowWrflDf.rtm";
   speed = 0.9681;
		};
		class AmovPknlMwlkSlowWrflDfl: AmovPknlMwlkSlowWrflDf
		{
   file = "armst\armst_anim\new\CdzpAmovPknlMwlkSlowWrflDfl.rtm";
			actions = "RifleKneelLowActionsWlkFL";
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDfl_ver2",0.03,"AmovPercMwlkSlowWrflDfl",0.5,"AmovPknlMwlkSlowWrflDf",0.025,"AmovPknlMwlkSlowWrflDl",0.025,"AmovPknlMrunSlowWrflDfl",0.025,"Unconscious",0.1,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPknlMtacSlowWrflDfl",0.02,"AmovPknlMwlkSrasWrflDfl",0.02};
		};
		class AmovPknlMwlkSlowWrflDl: AmovPknlMwlkSlowWrflDf
		{
   soundEdge[] = {0.1875,0.71875};
   file = "armst\armst_anim\new\CdzpAmovPknlMwlkSlowWrflDl.rtm";
   speed = 0.9381;
			actions = "RifleKneelLowActionsWlkL";
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDl_ver2",0.03,"AmovPercMwlkSlowWrflDl",0.5,"AmovPknlMwlkSlowWrflDfl",0.025,"AmovPknlMwlkSlowWrflDbl",0.025,"AmovPknlMrunSlowWrflDl",0.025,"Unconscious",0.1,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPknlMtacSlowWrflDl",0.02,"AmovPknlMwlkSrasWrflDl",0.0};
		};
		class AmovPknlMwlkSlowWrflDbl: AmovPknlMwlkSlowWrflDf
		{
   file = "armst\armst_anim\new\CdzpAmovPknlMwlkSlowWrflDbl.rtm";
   soundEdge[] = {0.129,0.6775};
			actions = "RifleKneelLowActionsWlkBL";
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDbl_ver2",0.03,"AmovPercMwlkSlowWrflDbl",0.5,"AmovPknlMwlkSlowWrflDl",0.025,"AmovPknlMwlkSlowWrflDb",0.025,"AmovPknlMrunSlowWrflDbl",0.025,"Unconscious",0.1,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPknlMtacSlowWrflDbl",0.02,"AmovPknlMwlkSrasWrflDbl",0.02};
		};
		class AmovPknlMwlkSlowWrflDb: AmovPknlMwlkSlowWrflDf
		{
   soundEdge[] = {0.129,0.6775};
   file = "armst\armst_anim\new\CdzpAmovPknlMwlkSlowWrflDb.rtm";
			actions = "RifleKneelLowActionsWlkB";
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDb_ver2",0.03,"AmovPercMwlkSlowWrflDb",0.5,"AmovPknlMwlkSlowWrflDbl",0.025,"AmovPknlMwlkSlowWrflDbr",0.025,"AmovPknlMrunSlowWrflDb",0.025,"Unconscious",0.1,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPknlMtacSlowWrflDb",0.02,"AmovPknlMwlkSrasWrflDb",0.02};
		};
		class AmovPknlMwlkSlowWrflDbr: AmovPknlMwlkSlowWrflDf
		{
   soundEdge[] = {0.129,0.6775};
   file = "armst\armst_anim\new\CdzpAmovPknlMwlkSlowWrflDbr.rtm";
			actions = "RifleKneelLowActionsWlkBR";
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDbr_ver2",0.03,"AmovPercMwlkSlowWrflDbr",0.5,"AmovPknlMwlkSlowWrflDb",0.025,"AmovPknlMwlkSlowWrflDr",0.025,"AmovPknlMrunSlowWrflDbr",0.025,"Unconscious",0.1,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPknlMtacSlowWrflDbr",0.02,"AmovPknlMwlkSrasWrflDbr",0.02};
		};
		class AmovPknlMwlkSlowWrflDr: AmovPknlMwlkSlowWrflDf
		{
   soundEdge[] = {0.2121,0.69697};
   file = "armst\armst_anim\new\CdzpAmovPknlMwlkSlowWrflDr.rtm";
			actions = "RifleKneelLowActionsWlkR";
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDr_ver2",0.03,"AmovPercMwlkSlowWrflDr",0.5,"AmovPknlMwlkSlowWrflDbr",0.025,"AmovPknlMwlkSlowWrflDfr",0.025,"AmovPknlMrunSlowWrflDr",0.025,"Unconscious",0.1,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPknlMtacSlowWrflDr",0.02,"AmovPknlMwlkSrasWrflDr",0.02};
		};
		class AmovPknlMwlkSlowWrflDfr: AmovPknlMwlkSlowWrflDf
		{
   file = "armst\armst_anim\new\CdzpAmovPknlMwlkSlowWrflDfr.rtm";
			actions = "RifleKneelLowActionsWlkFR";
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDfr_ver2",0.03,"AmovPercMwlkSlowWrflDfr",0.5,"AmovPknlMwlkSlowWrflDf",0.025,"AmovPknlMwlkSlowWrflDr",0.025,"AmovPknlMrunSlowWrflDfr",0.025,"Unconscious",0.1,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPknlMtacSlowWrflDfr",0.02,"AmovPknlMwlkSrasWrflDfr",0.02};
		};
		//в присидя с опущенной пушкой быстро
		class AmovPknlMrunSlowWrflDf: AidlPknlMstpSlowWrflDnon_G0S
		{
   file = "armst\armst_anim\new\CdzpAmovPknlMrunSlowWrflDf.rtm";
   soundEdge[] = {0.3523,0.82};
   speed = 1.55;
		};
		
		class AmovPknlMrunSlowWrflDfl: AmovPknlMrunSlowWrflDf
		{
   file = "armst\armst_anim\new\CdzpAmovPknlMrunSlowWrflDfl.rtm";
			static = 1;
			relSpeedMin = 0.5;
			actions = "RifleKneelLowActionsRunFL";
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon",0.02,"AmovPercMrunSlowWrflDfl",0.03,"AmovPknlMrunSrasWrflDfl",0.025,"AmovPknlMwlkSlowWrflDfl",0.025,"AmovPknlMtacSlowWrflDfl",0.025,"AmovPknlMrunSlowWrflDf",0.025,"AmovPknlMrunSlowWrflDl",0.025,"AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPknlMevaSlowWrflDfl",0.025,"Unconscious",0.1,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPknlMtacSlowWrflDfl",0.2,"AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon",0.01};
		};
		class AmovPknlMrunSlowWrflDl: AmovPknlMrunSlowWrflDfl
		{
   soundEdge[] = {0.3809,0.761905};
   file = "armst\armst_anim\new\CdzpAmovPknlMrunSlowWrflDl.rtm";
   speed = 1.4286;
			actions = "RifleKneelLowActionsRunL";
			InterpolateTo[] = {"AmovPercMrunSlowWrflDl",0.03,"AmovPknlMwlkSlowWrflDl",0.025,"AmovPknlMtacSlowWrflDl",0.025,"AmovPknlMrunSrasWrflDl",0.025,"AmovPknlMrunSlowWrflDfl",0.025,"AmovPknlMrunSlowWrflDbl",0.025,"AmovPknlMstpSlowWrflDnon",0.02,"Unconscious",0.1,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPknlMtacSlowWrflDl",0.2,"AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon",0.01};
		};
		class AmovPknlMrunSlowWrflDbl: AmovPknlMrunSlowWrflDfl
		{
   soundEdge[] = {0.133,0.63};
   file = "armst\armst_anim\new\CdzpAmovPknlMrunSlowWrflDbl.rtm";
   speed = 2;
			actions = "RifleKneelLowActionsRunBL";
			InterpolateTo[] = {"AmovPercMrunSlowWrflDbl",0.03,"AmovPknlMwlkSlowWrflDbl",0.025,"AmovPknlMtacSlowWrflDbl",0.025,"AmovPknlMrunSlowWrflDl",0.025,"AmovPknlMrunSrasWrflDbl",0.025,"AmovPknlMrunSlowWrflDb",0.025,"AmovPknlMstpSlowWrflDnon",0.02,"Unconscious",0.1,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPknlMtacSlowWrflDbl",0.2,"AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon",0.01};
		};
		class AmovPknlMrunSlowWrflDb: AmovPknlMrunSlowWrflDfl
		{
   soundEdge[] = {0.133,0.63};
   file = "armst\armst_anim\new\CdzpAmovPknlMrunSlowWrflDb.rtm";
   speed = 2;
			actions = "RifleKneelLowActionsRunB";
			InterpolateTo[] = {"AmovPercMrunSlowWrflDb",0.03,"AmovPknlMwlkSlowWrflDb",0.025,"AmovPknlMtacSlowWrflDb",0.025,"AmovPknlMrunSrasWrflDb",0.025,"AmovPknlMrunSlowWrflDbl",0.025,"AmovPknlMrunSlowWrflDbr",0.025,"AmovPknlMstpSlowWrflDnon",0.02,"Unconscious",0.1,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPknlMtacSlowWrflDb",0.2,"AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon",0.01};
		};
		class AmovPknlMrunSlowWrflDbr: AmovPknlMrunSlowWrflDfl
		{
   soundEdge[] = {0.133,0.63};
   file = "armst\armst_anim\new\CdzpAmovPknlMrunSlowWrflDbr.rtm";
   speed = 2;
			actions = "RifleKneelLowActionsRunBR";
			InterpolateTo[] = {"AmovPercMrunSlowWrflDbr",0.03,"AmovPknlMwlkSlowWrflDbr",0.025,"AmovPknlMtacSlowWrflDbr",0.025,"AmovPknlMrunSrasWrflDbr",0.025,"AmovPknlMrunSlowWrflDb",0.025,"AmovPknlMrunSlowWrflDr",0.025,"AmovPknlMstpSlowWrflDnon",0.02,"Unconscious",0.1,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPknlMtacSlowWrflDbr",0.2,"AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon",0.01};
		};
		class AmovPknlMrunSlowWrflDr: AmovPknlMrunSlowWrflDfl
		{
   soundEdge[] = {0.3181,0.8181};
   file = "armst\armst_anim\new\CdzpAmovPknlMrunSlowWrflDr.rtm";
   speed = 1.3643;
			actions = "RifleKneelLowActionsRunR";
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon",0.02,"AmovPercMrunSlowWrflDr",0.03,"AmovPknlMwlkSlowWrflDr",0.025,"AmovPknlMtacSlowWrflDr",0.025,"AmovPknlMrunSrasWrflDr",0.025,"AmovPknlMrunSlowWrflDbr",0.025,"AmovPknlMrunSlowWrflDfr",0.025,"Unconscious",0.1,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPknlMtacSlowWrflDr",0.2,"AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon",0.02};
		};
		class AmovPknlMrunSlowWrflDfr: AmovPknlMrunSlowWrflDfl
		{
   file = "armst\armst_anim\new\CdzpAmovPknlMrunSlowWrflDfr.rtm";
			actions = "RifleKneelLowActionsRunFR";
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon",0.02,"AmovPercMrunSlowWrflDfr",0.03,"AmovPknlMwlkSlowWrflDfr",0.025,"AmovPknlMtacSlowWrflDfr",0.025,"AmovPknlMrunSrasWrflDfr",0.025,"AmovPknlMrunSlowWrflDf",0.025,"AmovPknlMrunSlowWrflDr",0.025,"AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPknlMevaSrasWrflDfr",0.025,"Unconscious",0.1,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPknlMtacSlowWrflDfr",0.2,"AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon",0.02};
		};
		
		
		//ползком с оружием
		class AmovPpneMrunSlowWrflDf: AmovPpneMstpSrasWrflDnon
		{
			
   file = "armst\armst_anim\new\CdzpAmovPpneMrunSlowWrflDf.rtm";
   speed = 0.70928;
   leftHandIKCurve[] = {0};
   leaning = "empty";
   relSpeedMin = 0.697171;
   relSpeedMax = 1;
   rightHandIKBeg = 0;
   rightHandIKEnd = 0;
   limitGunMovement = 0;
		};
		class AmovPpneMrunSlowWrflDfl: AmovPpneMrunSlowWrflDf
		{
   file = "armst\armst_anim\new\CdzpAmovPpneMrunSlowWrflDfl.rtm";
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon",0.02,"AmovPpneMrunSlowWrflDf",0.025,"AmovPpneMrunSlowWrflDl",0.025,"AmovPpneMsprSlowWrflDfl",0.025,"AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf",0.05,"Unconscious",0.01,"AmovPpneMstpSrasWrflDnon_relax",0.1,"AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr",0.02,"AmovPpneMevaSlowWrflDf",0.025};
		};
		class AmovPpneMrunSlowWrflDl: AmovPpneMrunSlowWrflDf
		{
			actions = "RifleProneActionsRunB";
   file = "armst\armst_anim\new\CdzpAmovPpneMrunSlowWrflDl.rtm";
   speed = 0.5;
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon",0.02,"AmovPpneMrunSlowWrflDfl",0.025,"AmovPpneMrunSlowWrflDbl",0.025,"AmovPpneMsprSlowWrflDl",0.025,"Unconscious",0.01,"AmovPpneMstpSrasWrflDnon_relax",0.1,"AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr",0.02};
		};
		class AmovPpneMrunSlowWrflDbl: AmovPpneMrunSlowWrflDf
		{
			actions = "RifleProneActionsRunB";
   file = "armst\armst_anim\new\CdzpAmovPpneMrunSlowWrflDbl.rtm";
   speed = 0.4617;
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon",0.02,"AmovPpneMrunSlowWrflDl",0.025,"AmovPpneMrunSlowWrflDb",0.025,"AmovPpneMsprSlowWrflDbl",0.025,"Unconscious",0.01,"AmovPpneMstpSrasWrflDnon_relax",0.1,"AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr",0.02};
		};
		class AmovPpneMrunSlowWrflDb: AmovPpneMrunSlowWrflDf
		{
			actions = "RifleProneActionsRunB";
   file = "armst\armst_anim\new\CdzpAmovPpneMrunSlowWrflDb.rtm";
   speed = 0.4617;
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon",0.02,"AmovPpneMrunSlowWrflDbl",0.025,"AmovPpneMrunSlowWrflDbr",0.025,"AmovPpneMsprSlowWrflDb",0.025,"Unconscious",0.01,"AmovPpneMstpSrasWrflDnon_relax",0.1,"AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr",0.02};
		};
		class AmovPpneMrunSlowWrflDbr: AmovPpneMrunSlowWrflDf
		{
			actions = "RifleProneActionsRunB";
   file = "armst\armst_anim\new\CdzpAmovPpneMrunSlowWrflDbr.rtm";
   speed = 0.4617;
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon",0.02,"AmovPpneMrunSlowWrflDb",0.025,"AmovPpneMrunSlowWrflDr",0.025,"AmovPpneMsprSlowWrflDbr",0.025,"Unconscious",0.01,"AmovPpneMstpSrasWrflDnon_relax",0.1,"AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr",0.02};
		};
		class AmovPpneMrunSlowWrflDr: AmovPpneMrunSlowWrflDf
		{
			actions = "RifleProneActionsRunB";
   file = "armst\armst_anim\new\CdzpAmovPpneMrunSlowWrflDr.rtm";
   speed = 0.45;
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon",0.02,"AmovPpneMrunSlowWrflDbr",0.025,"AmovPpneMrunSlowWrflDfr",0.025,"AmovPpneMsprSlowWrflDr",0.025,"Unconscious",0.01,"AmovPpneMstpSrasWrflDnon_relax",0.1,"AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr",0.02};
		};
		class AmovPpneMrunSlowWrflDfr: AmovPpneMrunSlowWrflDf
		{
   file = "armst\armst_anim\new\CdzpAmovPpneMrunSlowWrflDfr.rtm";
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon",0.02,"AmovPpneMrunSlowWrflDf",0.025,"AmovPpneMrunSlowWrflDr",0.025,"AmovPpneMsprSlowWrflDfr",0.025,"AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf",0.05,"Unconscious",0.01,"AmovPpneMstpSrasWrflDnon_relax",0.1,"AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr",0.02,"AmovPpneMevaSlowWrflDf",0.025};
		};
		
		
		class AmovPpneMstpSnonWnonDnon ;
		class AmovPercMstpSlowWrflDnon;
		class AmovPercMstpSrasWrflDnon;
		//спринт 
		
		class AmovPercMevaSrasWrflDfl: AmovPercMevaSrasWrflDf
		{
			relSpeedMax = 1.2;
   file = "armst\armst_anim\new\CdzpAmovPercMsprSlowWrflDfl.rtm";
    speed = 1.5;
			actions = "RifleStandEvasiveActionsFL";
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMevaSrasWrflDfl_AmovPknlMstpSrasWrflDnon",0.02,"AmovPercMrunSlowWrflDfl",0.025,"AmovPercMwlkSrasWrflDfl",0.025,"AmovPercMrunSrasWrflDfl",0.025,"AmovPercMrunSrasWrflDl",0.05,"AmovPercMrunSrasWrflDfl_ldst",0.025,"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPknlMevaSrasWrflDfl",0.025,"AmovPercMevaSlowWrflDfl",0.025,"Unconscious",0.01,"AmovPercMevaSrasWrflDf",0.02,"AmovPercMevaSrasWrflDfr",0.02,"AmovPercMtacSrasWrflDf",0.02,"AmovPercMtacSrasWrflDfl",0.02,"AmovPercMtacSrasWrflDfr",0.02,"AmovPercMevaSrasWrflDl",0.025};
		};
		class AmovPercMevaSrasWrflDfr: AmovPercMevaSrasWrflDf
		{
   file = "armst\armst_anim\new\CdzpAmovPercMsprSlowWrflDfr.rtm";
    speed = 1.5;
			actions = "RifleStandEvasiveActionsFR";
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMevaSrasWrflDfr_AmovPknlMstpSrasWrflDnon",0.02,"AmovPercMrunSlowWrflDfr",0.025,"AmovPercMwlkSrasWrflDfr",0.025,"AmovPercMrunSrasWrflDfr_ldst",0.025,"AmovPercMrunSrasWrflDr",0.05,"AmovPercMrunSrasWrflDfr",0.025,"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPknlMevaSrasWrflDfr",0.025,"AmovPercMevaSlowWrflDfr",0.025,"AmovPercMevaSrasWrflDfl",0.02,"Unconscious",0.01,"AmovPercMevaSrasWrflDf",0.02,"AmovPercMtacSrasWrflDf",0.02,"AmovPercMtacSrasWrflDfl",0.02,"AmovPercMtacSrasWrflDfr",0.02,"AmovPercMevaSrasWrflDr",0.025};
		};
		class AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWrflDnon: TransAnimBase
		{
			file = "armst\armst_anim\new\CdzpAmovPercMrunSlowWrflDf.rtm";
			speed = 1.3286;
		};
		class AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWpstDnon_end: AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWpstDnon
		{
			file = "armst\armst_anim\new\CdzpAmovPercMrunSlowWrflDf.rtm";
			speed = 1.3286;
		};
		
		
		
		class UnconsciousOutProne: AmovPpneMstpSnonWnonDnon
		{	
			speed = 0.39868;
		};
		//спринт 
		
		class AmovPercMevaSlowWrflDf: AmovPercMevaSrasWrflDf
		{
			actions = "RifleStandLowEvasiveActionsF";
			speed = 1.5;
   file = "armst\armst_anim\new\CdzpAmovPercMsprSlowWrflDf.rtm";
			headBobStrength = 0.253731;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.025,"AmovPercMwlkSlowWrflDf_ver2",0.025,"AmovPercMtacSlowWrflDf_ver2",0.025,"AmovPercMwlkSlowWrflDf",0.5,"AmovPercMrunSlowWrflDf",0.025,"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMevaSrasWrflDf",0.02,"AmovPknlMevaSrasWrflDf",0.02,"AidlPercMevaSrasWrflDf",0.01,"AmovPercMevaSlowWrflDfl",0.025,"AmovPercMevaSlowWrflDfr",0.025,"Unconscious",0.01};
		};
		class AmovPercMevaSlowWrflDfr: AmovPercMevaSrasWrflDfr
		{
			actions = "RifleStandLowEvasiveActionsFR";
   file = "armst\armst_anim\new\CdzpAmovPercMsprSlowWrflDfr.rtm";
    speed = 1.5;
			headBobStrength = 0.253731;
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.025,"AmovPercMwlkSlowWrflDfr_ver2",0.025,"AmovPercMtacSlowWrflDfr_ver2",0.025,"AmovPercMwlkSlowWrflDfr",0.5,"AmovPercMrunSrasWrflDfr",0.025,"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMevaSlowWrflDf",0.025,"AmovPercMevaSlowWrflDfl",0.025,"AmovPercMevaSrasWrflDfr",0.025,"AmovPknlMevaSrasWrflDfr",0.025,"Unconscious",0.01};
		};
		class AmovPercMevaSlowWrflDfl: AmovPercMevaSrasWrflDf
		{
			actions = "RifleStandLowEvasiveActionsFL";
   file = "armst\armst_anim\new\CdzpAmovPercMsprSlowWrflDfl.rtm";
    speed = 1.5;
			aimPrecision = 4;
			weaponLowered = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.025,"AmovPercMwlkSlowWrflDfl_ver2",0.025,"AmovPercMtacSlowWrflDfl_ver2",0.025,"AmovPercMwlkSlowWrflDfl",0.5,"AmovPercMrunSlowWrflDfl",0.025,"AmovPercMrunSrasWrflDfl",0.025,"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMevaSlowWrflDf",0.025,"AmovPercMevaSrasWrflDl",0.025,"AmovPercMevaSrasWrflDfl",0.025,"AmovPknlMevaSrasWrflDfl",0.025,"AmovPercMevaSlowWrflDfr",0.025,"Unconscious",0.01};
		};
		/*
		class AmovPercMwlkSlowWrflDf: AmovPercMwlkSlowWrflDf_ver2
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\Low\Rfl\AmovPercMwlkSlowWrflDf_v3";
			speed = 0.206897;
			leftHandIKCurve[] = {1};
		};
		*/
		//пешком с опущенным оружием
		class AmovPercMwlkSlowWrflDf_ver2: AmovPercMstpSlowWrflDnon
		{
			leftHandIKCurve = 0;
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDf.rtm";
   speed = 0.9375;
		};
		class AmovPercMwlkSlowWrflDf: AmovPercMwlkSlowWrflDf_ver2
		{
			leftHandIKCurve = 0;
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDf.rtm";
   speed = 0.9375;
		};
		class AmovPercMwlkSlowWrflDf_v1: AmovPercMwlkSlowWrflDf_ver2
		{
			leftHandIKCurve = 0;
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDf.rtm";
   speed = 0.9375;
		};
		class AmovPercMwlkSlowWrflDf_v2: AmovPercMwlkSlowWrflDf_ver2
		{
			leftHandIKCurve = 0;
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDf.rtm";
   speed = 0.9375;
		};
		class AmovPercMwlkSlowWrflDf_v3: AmovPercMwlkSlowWrflDf_ver2
		{
			leftHandIKCurve = 0;
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDf.rtm";
   speed = 0.9375;
		};
  class AmovPercMwlkSlowWrflDfl_ver2: AmovPercMwlkSlowWrflDf
  {
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDfl.rtm";
   actions = "RifleLowStandActionsWlkFL";
   speed = 0.9375;
   InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDf",0.025,"AmovPercMwlkSlowWrflDl",0.025,"AmovPercMrunSlowWrflDfl",0.025,"AmovPknlMwlkSlowWrflDfl",0.03,"AmovPercMevaSlowWrflDfl",0.025};
   interpolationSpeed = 8;
  };
  class AmovPercMwlkSlowWrflDl_ver2: AmovPercMwlkSlowWrflDf
  {
   soundEdge[] = {0.26667,0.76667};
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDl.rtm";
   speed = 0.967742;
   actions = "RifleLowStandActionsWlkL";
   InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDfl",0.025,"AmovPercMwlkSlowWrflDbl",0.025,"AmovPercMrunSlowWrflDl",0.025,"AmovPknlMwlkSlowWrflDl",0.03,"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDr",0.03};
  };
  class AmovPercMwlkSlowWrflDbl_ver2: AmovPercMwlkSlowWrflDf
  {
   speed = 0.9375;
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDbl.rtm";
   actions = "RifleLowStandActionsWlkBL";
   InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDl",0.025,"AmovPercMwlkSlowWrflDb",0.025,"AmovPercMrunSlowWrflDbl",0.025,"AmovPknlMwlkSlowWrflDbl",0.03};
  };
  class AmovPercMwlkSlowWrflDb_ver2: AmovPercMwlkSlowWrflDf
  {
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDb.rtm";
   actions = "RifleLowStandActionsWlkB";
   speed = 0.9375;
   InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDbl",0.025,"AmovPercMwlkSlowWrflDbr",0.025,"AmovPercMrunSlowWrflDb",0.025,"AmovPknlMwlkSlowWrflDb",0.03,"AmovPercMstpSlowWrflDnon",0.02};
  };
  class AmovPercMwlkSlowWrflDbr_ver2: AmovPercMwlkSlowWrflDf
  {
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDbr.rtm";
   actions = "RifleLowStandActionsWlkBR";
   speed = 0.9375;
   InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDb",0.025,"AmovPercMwlkSlowWrflDr",0.025,"AmovPercMrunSlowWrflDbr",0.025,"AmovPknlMwlkSlowWrflDbr",0.03};
  };
  class AmovPercMwlkSlowWrflDr_ver2: AmovPercMwlkSlowWrflDf
  {
   soundEdge[] = {0.26666,0.76667};
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDr.rtm";
   actions = "RifleLowStandActionsWlkR";
   InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDbr",0.025,"AmovPercMwlkSlowWrflDfr",0.025,"AmovPercMrunSlowWrflDr",0.025,"AmovPknlMwlkSlowWrflDr",0.03,"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDl",0.03};
   speed = 0.9375;
  };
  class AmovPercMwlkSlowWrflDfr_ver2: AmovPercMwlkSlowWrflDf
  {
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDfr.rtm";
   actions = "RifleLowStandActionsWlkFR";
   speed = 0.9375;
   InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDf",0.025,"AmovPercMwlkSlowWrflDr",0.025,"AmovPercMrunSlowWrflDfr",0.025,"AmovPknlMwlkSlowWrflDfr",0.03,"AmovPercMevaSlowWrflDfr",0.025};
  };
		
		
		
  class AmovPercMwlkSlowWrflDfl: AmovPercMwlkSlowWrflDf
  {
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDfl.rtm";
   actions = "RifleLowStandActionsWlkFL";
   speed = 0.9375;
   InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDf",0.025,"AmovPercMwlkSlowWrflDl",0.025,"AmovPercMrunSlowWrflDfl",0.025,"AmovPknlMwlkSlowWrflDfl",0.03,"AmovPercMevaSlowWrflDfl",0.025};
   interpolationSpeed = 8;
  };
  class AmovPercMwlkSlowWrflDl: AmovPercMwlkSlowWrflDf
  {
   soundEdge[] = {0.26667,0.76667};
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDl.rtm";
   speed = 0.967742;
   actions = "RifleLowStandActionsWlkL";
   InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDfl",0.025,"AmovPercMwlkSlowWrflDbl",0.025,"AmovPercMrunSlowWrflDl",0.025,"AmovPknlMwlkSlowWrflDl",0.03,"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDr",0.03};
  };
  class AmovPercMwlkSlowWrflDbl: AmovPercMwlkSlowWrflDf
  {
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDbl.rtm";
   actions = "RifleLowStandActionsWlkBL";
   speed = 0.9375;
   InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDl",0.025,"AmovPercMwlkSlowWrflDb",0.025,"AmovPercMrunSlowWrflDbl",0.025,"AmovPknlMwlkSlowWrflDbl",0.03};
  };
  class AmovPercMwlkSlowWrflDb: AmovPercMwlkSlowWrflDf
  {
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDb.rtm";
   actions = "RifleLowStandActionsWlkB";
   speed = 0.9375;
   InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDbl",0.025,"AmovPercMwlkSlowWrflDbr",0.025,"AmovPercMrunSlowWrflDb",0.025,"AmovPknlMwlkSlowWrflDb",0.03,"AmovPercMstpSlowWrflDnon",0.02};
  };
  class AmovPercMwlkSlowWrflDbr: AmovPercMwlkSlowWrflDf
  {
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDbr.rtm";
   actions = "RifleLowStandActionsWlkBR";
   speed = 0.9375;
   InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDb",0.025,"AmovPercMwlkSlowWrflDr",0.025,"AmovPercMrunSlowWrflDbr",0.025,"AmovPknlMwlkSlowWrflDbr",0.03};
  };
  class AmovPercMwlkSlowWrflDr: AmovPercMwlkSlowWrflDf
  {
   soundEdge[] = {0.26666,0.76667};
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDr.rtm";
   actions = "RifleLowStandActionsWlkR";
   InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDbr",0.025,"AmovPercMwlkSlowWrflDfr",0.025,"AmovPercMrunSlowWrflDr",0.025,"AmovPknlMwlkSlowWrflDr",0.03,"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDl",0.03};
   speed = 0.9375;
  };
  class AmovPercMwlkSlowWrflDfr: AmovPercMwlkSlowWrflDf
  {
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSlowWrflDfr.rtm";
   actions = "RifleLowStandActionsWlkFR";
   speed = 0.9375;
   InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDf",0.025,"AmovPercMwlkSlowWrflDr",0.025,"AmovPercMrunSlowWrflDfr",0.025,"AmovPknlMwlkSlowWrflDfr",0.03,"AmovPercMevaSlowWrflDfr",0.025};
  };
		//бег с опущенной пушкой
		class AmovPercMrunSlowWrflDf;
		class AmovPercMrunSlowWrflDfl: AmovPercMrunSlowWrflDf
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMrunSlowWrflDfl.rtm";
			speed = 1.4286;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Mrun_Slow_Wrfl.p3d";
			duty = 0.2;
			actions = "RifleLowStandActionsRunFL";
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDfl_ver2",0.025,"AmovPercMwlkSlowWrflDfl",0.5,"AmovPercMrunSlowWrflDf",0.025,"AmovPercMrunSlowWrflDl",0.025,"AmovPercMrunSrasWrflDfl",0.025,"AmovPknlMrunSlowWrflDfl",0.03,"AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMevaSrasWrflDf",0.02,"AmovPercMevaSrasWrflDfl",0.025,"AmovPercMevaSlowWrflDfl",0.025,"Unconscious",0.01,"AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthStart",0.1,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPercMtacSlowWrflDfl_ver2",0.2,"AmovPercMtacSlowWrflDfl",0.5,"AmovPercMtacSrasWrflDfl",0.02};
		};
		
		class AmovPercMrunSlowWrflDl: AmovPercMrunSlowWrflDfl
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMrunSlowWrflDl.rtm";
   speed = 1.3643;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wnon.p3d";
			actions = "RifleLowStandActionsRunL";
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDl_ver2",0.025,"AmovPercMwlkSlowWrflDl",0.5,"AmovPercMrunSlowWrflDfl",0.025,"AmovPercMrunSlowWrflDbl",0.025,"AmovPercMrunSrasWrflDl",0.025,"AmovPknlMrunSlowWrflDl",0.03,"Unconscious",0.01,"AmovPercMrunSlowWrflDb",0.2,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPercMtacSlowWrflDl_ver2",0.2,"AmovPercMtacSlowWrflDl",0.5,"AmovPercMtacSrasWrflDl",0.02};
		};
		class AmovPercMrunSlowWrflDbr: AmovPercMrunSlowWrflDfl
		{
			duty = 0.2;
   file = "\armst\armst_anim\new\CdzpAmovPercMrunSlowWrflDbr.rtm";
   speed = 1.35;
			actions = "RifleLowStandActionsRunBR";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wnon.p3d";
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDbr_ver2",0.025,"AmovPercMwlkSlowWrflDbr",0.5,"AmovPercMrunSlowWrflDb",0.025,"AmovPercMrunSlowWrflDr",0.025,"AmovPercMrunSrasWrflDbr",0.025,"AmovPknlMrunSlowWrflDbr",0.03,"Unconscious",0.01,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPercMtacSlowWrflDbr_ver2",0.2,"AmovPercMtacSlowWrflDbr",0.5,"AmovPercMtacSrasWrflDbr",0.02};
		};
		class AmovPercMrunSlowWrflDbl: AmovPercMrunSlowWrflDfl
		{
			duty = 0.2;
   file = "\armst\armst_anim\new\CdzpAmovPercMrunSlowWrflDbl.rtm";
   speed = 1.35;
			actions = "RifleLowStandActionsRunBL";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wnon.p3d";
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDbl_ver2",0.025,"AmovPercMwlkSlowWrflDbl",0.5,"AmovPercMrunSlowWrflDl",0.025,"AmovPercMrunSlowWrflDb",0.025,"AmovPercMrunSrasWrflDbl",0.025,"AmovPknlMrunSlowWrflDbl",0.03,"Unconscious",0.01,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPercMtacSlowWrflDbl_ver2",0.2,"AmovPercMtacSlowWrflDbl",0.5,"AmovPercMtacSrasWrflDbl",0.02};
		};
		
		class AmovPercMrunSlowWrflDb: AmovPercMrunSlowWrflDfl
		{
			duty = 0.2;
   file = "\armst\armst_anim\new\CdzpAmovPercMrunSlowWrflDb.rtm";
   speed = 1.35;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wnon.p3d";
			actions = "RifleLowStandActionsRunB";
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDb_ver2",0.025,"AmovPercMwlkSlowWrflDb",0.5,"AmovPercMrunSlowWrflDbl",0.025,"AmovPercMrunSlowWrflDbr",0.025,"AmovPercMrunSrasWrflDb",0.025,"AmovPknlMrunSlowWrflDb",0.03,"Unconscious",0.01,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPercMtacSlowWrflDb_ver2",0.2,"AmovPercMtacSlowWrflDb",0.5,"AmovPercMtacSrasWrflDb",0.02};
		};
		class AmovPercMrunSlowWrflDfr: AmovPercMrunSlowWrflDfl
		{
			duty = 0.2;
   file = "\armst\armst_anim\new\CdzpAmovPercMrunSlowWrflDfr.rtm";
			speed = 1.4286;
			actions = "RifleLowStandActionsRunFR";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.02,"AmovPercMwlkSlowWrflDfr_ver2",0.025,"AmovPercMwlkSlowWrflDfr",0.5,"AmovPercMrunSlowWrflDf",0.025,"AmovPercMrunSlowWrflDr",0.025,"AmovPercMrunSrasWrflDfr",0.025,"AmovPknlMrunSlowWrflDfr",0.03,"AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMevaSrasWrflDf",0.02,"AmovPercMevaSrasWrflDfr",0.025,"Unconscious",0.01,"AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthStart",0.1,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPercMtacSlowWrflDfr_ver2",0.2,"AmovPercMtacSlowWrflDfr",0.5,"AmovPercMtacSrasWrflDfr",0.02};
		};
		
		//бег с поднятой пушкой
		
		class AmovPercMrunSrasWrflDf: AmovPercMstpSrasWrflDnon
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMrunSrasWrflDf.rtm";
   speed = 1.5798;
			looped = 1;
	canPullTrigger = 1;

	canReload = 1;

	enableOptics = 1;

	disableWeapons = 0;

	disableWeaponsLong = 0;

	enableDirectControl = 1;

	forceAim = 0;

	limitGunMovement = 1;

	showWeaponAim = 1;
   };
		class AmovPercMrunSrasWrflDfl: AmovPercMrunSrasWrflDf
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMrunSrasWrflDfl.rtm";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			actions = "RifleStandActionsRunFL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMrunSlowWrflDfl",0.025,"AmovPercMwlkSrasWrflDfl",0.025,"AmovPercMrunSrasWrflDl",0.02,"AmovPercMrunSrasWrflDl_ldst",0.02,"AmovPknlMrunSrasWrflDfl",0.03,"AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMevaSrasWrflDf",0.02,"AmovPercMevaSrasWrflDfl",0.025,"AmovPercMevaSlowWrflDfl",0.025,"Unconscious",0.01,"AmovPercMtacSrasWrflDfl",0.02,"AmovPercMrunSrasWrflDf",0.02,"AmovPercMrunSrasWrflDf_ldst",0.02,"AmovPercMrunSrasWrflDbl",0.02,"AmovPercMrunSrasWrflDb",0.02,"AmovPercMrunSrasWrflDb_ldst",0.02,"AmovPercMrunSrasWrflDbr",0.02,"AmovPercMrunSrasWrflDbr_ldst",0.02,"AmovPercMrunSrasWrflDr",0.02,"AmovPercMrunSrasWrflDr_ldst",0.02,"AmovPercMrunSrasWrflDfr",0.02,"AmovPercMrunSrasWrflDfr_ldst",0.02,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPercMrunSrasWrflDfl_ldst",0.02,"AmovPercMrunSrasWrflDfl",0.02};
		};
		class AmovPercMrunSrasWrflDl: AmovPercMrunSrasWrflDfl
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMrunSrasWrflDl.rtm";
   speed = 1.5798;
			actions = "RifleStandActionsRunL";
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMrunSlowWrflDl",0.025,"AmovPercMwlkSrasWrflDl",0.025,"AmovPercMrunSrasWrflDfl",0.02,"AmovPercMrunSrasWrflDfl_ldst",0.02,"AmovPercMrunSrasWrflDbl",0.02,"AmovPercMrunSrasWrflDbl_ldst",0.02,"AmovPknlMrunSrasWrflDl",0.03,"Unconscious",0.01,"AmovPercMtacSrasWrflDl",0.02,"AmovPercMrunSrasWrflDbr",0.02,"AmovPercMrunSrasWrflDbr_ldst",0.02,"AmovPercMrunSrasWrflDfr",0.02,"AmovPercMrunSrasWrflDfr_ldst",0.02,"AmovPercMrunSrasWrflDr",0.02,"AmovPercMrunSrasWrflDr_ldst",0.02,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPercMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMrunSrasWrflDl_ldst",0.02,"AmovPercMrunSrasWrflDl",0.02,"AmovPercMevaSrasWrflDfl",0.02,"AmovPercMevaSrasWrflDf",0.02,"AmovPercMevaSrasWrflDl",0.02};
		};
		class AmovPercMrunSrasWrflDb: AmovPercMrunSrasWrflDfl
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMrunSrasWrflDb.rtm";
   speed = 1.6;
			actions = "RifleStandActionsRunB";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl_Db.p3d";
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMrunSlowWrflDb",0.025,"AmovPercMwlkSrasWrflDb",0.025,"AmovPercMrunSrasWrflDbl",0.02,"AmovPercMrunSrasWrflDbl_ldst",0.02,"AmovPercMrunSrasWrflDbr",0.02,"AmovPercMrunSrasWrflDbr_ldst",0.02,"AmovPknlMrunSrasWrflDb",0.03,"Unconscious",0.01,"AmovPercMtacSrasWrflDb",0.02,"AmovPercMrunSrasWrflDf",0.02,"AmovPercMrunSrasWrflDf_ldst",0.02,"AmovPercMrunSrasWrflDfl",0.02,"AmovPercMrunSrasWrflDfl_ldst",0.02,"AmovPercMrunSrasWrflDl",0.02,"AmovPercMrunSrasWrflDl_ldst",0.02,"AmovPercMrunSrasWrflDr",0.02,"AmovPercMrunSrasWrflDr_ldst",0.02,"AmovPercMrunSrasWrflDfr",0.02,"AmovPercMrunSrasWrflDfr_ldst",0.02,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPercMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMrunSrasWrflDb_ldst",0.02,"AmovPercMrunSrasWrflDb",0.02};
		};
		class AmovPercMrunSrasWrflDbl: AmovPercMrunSrasWrflDb
		{
   file = "armst\armst_anim\new\CdzpAmovPercMrunSrasWrflDbl.rtm";
   speed = 1.6;
			actions = "RifleStandActionsRunBL";
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMrunSlowWrflDbl",0.025,"AmovPercMwlkSrasWrflDbl",0.025,"AmovPercMrunSrasWrflDl",0.02,"AmovPercMrunSrasWrflDl_ldst",0.02,"AmovPercMrunSrasWrflDb",0.02,"AmovPercMrunSrasWrflDb_ldst",0.02,"AmovPknlMrunSrasWrflDbl",0.025,"Unconscious",0.01,"AmovPercMtacSrasWrflDbl",0.02,"AmovPercMrunSrasWrflDf",0.02,"AmovPercMrunSrasWrflDf_ldst",0.02,"AmovPercMrunSrasWrflDfl",0.02,"AmovPercMrunSrasWrflDfl_ldst",0.02,"AmovPercMrunSrasWrflDbr",0.02,"AmovPercMrunSrasWrflDbr_ldst",0.02,"AmovPercMrunSrasWrflDr",0.02,"AmovPercMrunSrasWrflDr_ldst",0.02,"AmovPercMrunSrasWrflDfr",0.02,"AmovPercMrunSrasWrflDfr_ldst",0.02,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPercMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMrunSrasWrflDbl_ldst",0.02,"AmovPercMrunSrasWrflDbl",0.02};
		};
		class AmovPercMrunSrasWrflDbr: AmovPercMrunSrasWrflDb
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMrunSrasWrflDbr.rtm";
   speed = 1.6;
			actions = "RifleStandActionsRunBR";
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMrunSlowWrflDbr",0.025,"AmovPercMwlkSrasWrflDbr",0.025,"AmovPercMrunSrasWrflDb",0.02,"AmovPercMrunSrasWrflDb_ldst",0.02,"AmovPercMrunSrasWrflDr",0.02,"AmovPercMrunSrasWrflDr_ldst",0.02,"AmovPknlMrunSrasWrflDbr",0.025,"Unconscious",0.01,"AmovPercMtacSrasWrflDbr",0.02,"AmovPercMrunSrasWrflDf",0.02,"AmovPercMrunSrasWrflDf_ldst",0.02,"AmovPercMrunSrasWrflDfl",0.02,"AmovPercMrunSrasWrflDfl_ldst",0.02,"AmovPercMrunSrasWrflDl",0.02,"AmovPercMrunSrasWrflDl_ldst",0.02,"AmovPercMrunSrasWrflDbl",0.02,"AmovPercMrunSrasWrflDbl_ldst",0.02,"AmovPercMrunSrasWrflDfr",0.02,"AmovPercMrunSrasWrflDfr_ldst",0.02,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPercMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMrunSrasWrflDbr_ldst",0.02,"AmovPercMrunSrasWrflDbr",0.02};
		};
		class AmovPercMrunSrasWrflDr: AmovPercMrunSrasWrflDfl
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMrunSrasWrflDr.rtm";
   speed = 1.6667;
			actions = "RifleStandActionsRunR";
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMrunSlowWrflDr",0.025,"AmovPercMwlkSrasWrflDr",0.025,"AmovPercMrunSrasWrflDbr",0.02,"AmovPercMrunSrasWrflDbr_ldst",0.02,"AmovPercMrunSrasWrflDfr",0.02,"AmovPercMrunSrasWrflDfr_ldst",0.02,"AmovPknlMrunSrasWrflDr",0.03,"Unconscious",0.01,"AmovPercMtacSrasWrflDr",0.02,"AmovPercMrunSrasWrflDf",0.02,"AmovPercMrunSrasWrflDf_ldst",0.02,"AmovPercMrunSrasWrflDfl",0.02,"AmovPercMrunSrasWrflDfl_ldst",0.02,"AmovPercMrunSrasWrflDl",0.02,"AmovPercMrunSrasWrflDl_ldst",0.02,"AmovPercMrunSrasWrflDbl",0.02,"AmovPercMrunSrasWrflDbl_ldst",0.02,"AmovPercMrunSrasWrflDb",0.02,"AmovPercMrunSrasWrflDb_ldst",0.02,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPercMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMrunSrasWrflDr_ldst",0.02,"AmovPercMrunSrasWrflDr",0.02,"AmovPercMevaSrasWrflDf",0.02,"AmovPercMevaSrasWrflDfr",0.02,"AmovPercMevaSrasWrflDr",0.02};
		};
		class AmovPercMrunSrasWrflDfr: AmovPercMrunSrasWrflDfl
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMrunSrasWrflDfr.rtm";
			actions = "RifleStandActionsRunFR";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMrunSlowWrflDfr",0.025,"AmovPercMwlkSrasWrflDfr",0.025,"AmovPercMrunSrasWrflDr",0.02,"AmovPercMrunSrasWrflDr_ldst",0.02,"AmovPknlMrunSrasWrflDfr",0.03,"AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMevaSrasWrflDf",0.02,"AmovPercMevaSrasWrflDfr",0.025,"AmovPercMevaSlowWrflDfr",0.025,"Unconscious",0.01,"AmovPercMtacSrasWrflDfr",0.02,"AmovPercMrunSrasWrflDf",0.02,"AmovPercMrunSrasWrflDf_ldst",0.02,"AmovPercMrunSrasWrflDfl",0.02,"AmovPercMrunSrasWrflDfl_ldst",0.02,"AmovPercMrunSrasWrflDl",0.02,"AmovPercMrunSrasWrflDl_ldst",0.02,"AmovPercMrunSrasWrflDbl",0.02,"AmovPercMrunSrasWrflDbl_ldst",0.02,"AmovPercMrunSrasWrflDb",0.02,"AmovPercMrunSrasWrflDb_ldst",0.02,"AmovPercMrunSrasWrflDbr",0.02,"AmovPercMrunSrasWrflDbr_ldst",0.02,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPercMrunSrasWrflDfr_ldst",0.02,"AmovPercMrunSrasWrflDfr",0.02};
		};
		
		
		/*
	//обычный шаг c пушкой
		class AmovPercMwlkSrasWrflDf: AmovPercMstpSrasWrflDnon
		{
			
	   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSrasWrflDf.rtm";
	   speed = 1.0718;
			looped = 1;
		};
		class AmovPercMwlkSrasWrflDfl: AmovPercMwlkSrasWrflDf
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSrasWrflDfl.rtm";
		};
		class AmovPercMwlkSrasWrflDl: AmovPercMwlkSrasWrflDf
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSrasWrflDl.rtm";
		};
		class AmovPercMwlkSrasWrflDb: AmovPercMwlkSrasWrflDf
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSrasWrflDb.rtm";
		};
		class AmovPercMwlkSrasWrflDbl: AmovPercMwlkSrasWrflDb
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSrasWrflDbl.rtm";
		};
		class AmovPercMwlkSrasWrflDbr: AmovPercMwlkSrasWrflDb
		{
   file = "armst\armst_anim\new\CdzpAmovPercMwlkSrasWrflDbr.rtm";
		};
		class AmovPercMwlkSrasWrflDr: AmovPercMwlkSrasWrflDf
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSrasWrflDr.rtm";
		};
		class AmovPercMwlkSrasWrflDfr: AmovPercMwlkSrasWrflDf
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSrasWrflDfr.rtm";
		};
			
		
		//тактическая походка
		class AmovPercMtacSrasWrflDf: AmovPercMwlkSrasWrflDf
		{
	   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSrasWrflDf.rtm";
	   speed = 1.0718;
			looped = 1;
		};
		class AmovPercMtacSrasWrflDfl: AmovPercMtacSrasWrflDf
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSrasWrflDfl.rtm";
		};
		class AmovPercMtacSrasWrflDl: AmovPercMtacSrasWrflDf
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSrasWrflDl.rtm";
		};
		class AmovPercMtacSrasWrflDb: AmovPercMtacSrasWrflDf
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSrasWrflDb.rtm";
   speed = 0.8826;
		};
		class AmovPercMtacSrasWrflDbl: AmovPercMtacSrasWrflDb
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSrasWrflDbl.rtm";
    speed = 0.8826;
		};
		class AmovPercMtacSrasWrflDbr: AmovPercMtacSrasWrflDb
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSrasWrflDbr.rtm";
   speed = 0.8826;
		};
		class AmovPercMtacSrasWrflDr: AmovPercMtacSrasWrflDf
		{
   file = "armst\armst_anim\new\CdzpAmovPercMwlkSrasWrflDr.rtm";
   speed = 1.0352;
		};
		class AmovPercMtacSrasWrflDfr: AmovPercMtacSrasWrflDf
		{
   file = "\armst\armst_anim\new\CdzpAmovPercMwlkSrasWrflDfr.rtm";
		};
		
		*/
		
		
		
		class armst_otjatie: CutSceneAnimationBase
		{
			file = "\A3\Anims_F\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_exercisePushup";
			speed = 0.063559;
			canPullTrigger = 0;
			canReload = 0;
			duty = 0.5;
			soundOverride = "AmovPercMstpSnonWnonDnon_exercisePushup";
			soundEdge[] = {0.01};
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",2.0,"armst_otjatie",0.1};
			InterpolateTo[] = {"armst_otjatie",0.01};
			actions = "CivilExerciseActions";
		};
		class armst_drink: StandBase
		{
			speed = 0.15;
			duty = -0.6;
			file = "\armst\armst_anim\armst_drink.rtm";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			showWeaponAim = 0;
			disableWeapons = 1;
			canPullTrigger = 0;
			looped = 0;
			soundEnabled = 0;
			enableBinocular = 1;
			preload = 1;
			canBlendStep = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			weaponIK = 0;
			headBobStrength = 1;
			enableOptics = -1;
			relSpeedMin = 1;
			relSpeedMax = 1;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			aiming = "aimingDefault";
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon",0.2};
			InterpolateTo[] = {"Unconscious",0.1};
			useIdles = 0;
		};
		class armst_eat: StandBase
		{
			speed = 0.13;
			duty = -0.6;
			file = "\armst\armst_anim\armst_eat.rtm";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			showWeaponAim = 0;
			disableWeapons = 1;
			canPullTrigger = 0;
			looped = 0;
			soundEnabled = 0;
			enableBinocular = 0;
			preload = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			weaponIK = 0;
			headBobStrength = 1;
			enableOptics = -1;
			relSpeedMin = 1;
			relSpeedMax = 1;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			aiming = "aimingDefault";
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon",0.2};
			InterpolateTo[] = {"Unconscious",0.1};
			useIdles = 0;
		};
		class armst_dancing1: StandBase
		{
			file = "\armst\armst_anim\MadMetalDancing.rtm";
			speed = 0.019036;
		};
		class krovososbegudar_rukami01: StandBase
		{
			file = "\armst\armst_anim\krovosos_attack01.rtm";
			speed = 0.5;
		};
		class krovososbegudar_rukami02: StandBase
		{
			file = "\armst\armst_anim\krovosos_attack02";
			speed = -1.5;
		};
		class krovososbegudar_rukami03: StandBase
		{
			file = "\armst\armst_anim\krovosos_run_attack03.rtm";
			speed = 0.5;
		};
		class armst_dancing2: StandBase
		{
			file = "\armst\armst_anim\ZozinoDancing.rtm";
			speed = 0.03413;
		};
		class armst_dancing3: StandBase
		{
			file = "\armst\armst_anim\ActsPercMstpSnonWnonDnon_DancingDuoIvan.rtm";
			speed = 0.025;
			looped = 0;
		};
		class AttackCling_human_start: StandBase
		{
			file = "\armst\armst_anim\new\AttackCling_human_start.rtm";
			actions = "CivilStandActions";
			duty = "RestDuty";
			speed = 0.75;
			looped = 0;
			ConnectTo[] = {"AttackCling_human_loop",0.02};
			maxSpeed = 25;
			animationSpeedCoef = 0;
			InterpolationSpeed = 0.9;
			interpolateFrom[] = {};
			interpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
		};
		class AttackCling_human_loop: StandBase
		{
			file = "\armst\armst_anim\new\AttackCling_human_loop.rtm";
			actions = "CivilStandActions";
			duty = "RestDuty";
			speed = 0.725;
			looped = 1;
			ConnectTo[] = {};
			maxSpeed = 25;
			animationSpeedCoef = 0;
			InterpolationSpeed = 0.9;
			interpolateFrom[] = {};
			interpolateTo[] = {};
		};
		class armst_dancing4: StandBase
		{
			file = "\armst\armst_anim\ActsPercMstpSnonWnonDnon_DancingDuoStefan.rtm";
			speed = 0.025;
			looped = 0;
		};
		class armst_dancing5: StandBase
		{
			file = "\armst\armst_anim\ActsPercMstpSnonWnonDnon_DancingStefan.rtm";
			actions = "CivilSitActions";
			duty = "RestDuty";
			speed = 0.0104;
			looped = 0;
		};
		class sport_press: StandBase
		{
			file = "\armst\armst_anim\sport_press.rtm";
			speed = 0.013705;
			looped = 0;
		};
		class spotikanie_anim: StandBase
		{
			file = "\armst\armst_anim\spotikanie_anim.rtm";
			speed = 0.313705;
			looped = 0;
		};
		class molitva: StandBase
		{
			file = "\armst\armst_anim\molitva.rtm";
			speed = 0.00771;
			looped = 0;
		};
		class sdastsya: StandBase
		{
			file = "\armst\armst_anim\sdastsya.rtm";
			speed = 1.1;
			looped = 1;
		};
		class armst_wakeup: StandBase
		{
			file = "\armst\armst_anim\wakeup.rtm";
			speed = 0.1609;
			looped = 0;
		};
		class armst_talk: StandBase
		{
			file = "\armst\armst_anim\talk.rtm";
			speed = 0.013453;
			looped = 1;
		};
		class armst_suicide: StandBase
		{
			file = "\armst\armst_anim\armst_suicide.rtm";
			terminal = 0;
			speed = 0.143541;
			showHandGun = 1;
			head = "headNo";
			forceAim = 1;
			looped = 0;
		};
		class armst_kostolom: StandBase
		{
			file = "\armst\armst_anim\armst_kostolom.rtm";
			speed = 0.14;
			looped = 0;
		};
		class armst_talk2: StandBase
		{
			file = "\armst\armst_anim\talk2.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_relax2: StandBase
		{
			file = "\armst\armst_anim\armst_relax2.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_relax3: StandBase
		{
			file = "\armst\armst_anim\armst_relax3.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_relax4: StandBase
		{
			file = "\armst\armst_anim\armst_relax4.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_relax5: StandBase
		{
			file = "\armst\armst_anim\armst_relax5.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_relax6: StandBase
		{
			file = "\armst\armst_anim\armst_relax6.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_relax7: StandBase
		{
			file = "\armst\armst_anim\armst_relax7.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_stand: StandBase
		{
			file = "\armst\armst_anim\armst_stand.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_stand2: StandBase
		{
			file = "\armst\armst_anim\armst_relax.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_verybadsit: StandBase
		{
			file = "\armst\armst_anim\armst_verybadsit.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class art_podnyal2: StandBase
		{
			file = "\armst\armst_anim\art_podnyal.rtm";
			speed = 2;
			looped = 0;
		};
		class armst_psy_death: StandBase
		{
			file = "\armst\armst_anim\new\armst_psy_death.rtm";
			speed = 0.1;
			looped = 0;
		};
		class armst_psy_molitva: StandBase
		{
			file = "\armst\armst_anim\new\armst_psy_molitva.rtm";
			speed = 0.05;
			looped = 1;
		};
		class armst_rest_fire: StandBase
		{
			file = "\armst\armst_anim\new\armst_sidit.rtm";
			speed = 0.1;
		};
	class armst_pozer_1: StandBase
		{
			
			file = "\armst\armst_anim\anim\pos_stand_91.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_2: StandBase
		{
			
			file = "\armst\armst_anim\anim\pos_stand_6.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_3: StandBase
		{
			
			file = "\armst\armst_anim\anim\pos_stand_22.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_4: StandBase
		{
			
			file = "\armst\armst_anim\anim\pos_stand_1.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_5: StandBase
		{
			
			file = "\armst\armst_anim\anim\pos_stand_11.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_6: StandBase
		{
			
			file = "\armst\armst_anim\anim\pos_stand_52.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_7: StandBase
		{
			
			file = "\armst\armst_anim\anim\pos_stand_65.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_8: StandBase
		{
			
			file = "\armst\armst_anim\anim\pos_stand_7.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_9: StandBase
		{
			
			file = "\armst\armst_anim\anim\pos_stand_79.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_10: StandBase
		{
			
			file = "\armst\armst_anim\anim\pos_stand_81.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_11: StandBase
		{
			
			file = "\armst\armst_anim\anim\pos_crouch_21.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_12: StandBase
		{
			
			file = "\armst\armst_anim\anim\pos_crouch_15.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_13: StandBase
		{
			
			file = "\armst\armst_anim\anim\pos_para_2.rtm";
			speed = 0;
			looped = 1;
		};
		class armst_dead1: StandBase
		{
			file = "\armst\armst_anim\config\dead1.rtm";
			speed = 0.1;
		};
		class armst_dead2: StandBase
		{
			file = "\armst\armst_anim\config\dead2.rtm";
			speed = 0.1;
		};
		class armst_dead3: StandBase
		{
			file = "\armst\armst_anim\config\dead3.rtm";
			speed = 0.1;
		};
		class armst_dead4: StandBase
		{
			file = "\armst\armst_anim\config\dead4.rtm";
			speed = 0.1;
		};
		class armst_dead5: StandBase
		{
			file = "\armst\armst_anim\config\dead5.rtm";
			speed = 0.1;
		};
		class armst_dead6: StandBase
		{
			file = "\armst\armst_anim\config\dead6.rtm";
			speed = 0.1;
		};
		class armst_dead7: StandBase
		{
			file = "\armst\armst_anim\config\dead7.rtm";
			speed = 0.1;
		};
		class armst_dead8: StandBase
		{
			file = "\armst\armst_anim\config\dead8.rtm";
			speed = 0.1;
		};
		class armst_dead9: StandBase
		{
			file = "\armst\armst_anim\config\dead9.rtm";
			speed = 0.1;
		};
		class armst_dead10: StandBase
		{
			file = "\armst\armst_anim\config\dead10.rtm";
			speed = 0.1;
		};
		class armst_dead11: StandBase
		{
			file = "\armst\armst_anim\config\dead11.rtm";
			speed = 0.1;
		};
		class armst_dead12: StandBase
		{
			file = "\armst\armst_anim\config\dead12.rtm";
			speed = 0.1;
		};
		class armst_dead13: StandBase
		{
			file = "\armst\armst_anim\config\dead13.rtm";
			speed = 0.1;
		};
		class armst_dead14: StandBase
		{
			file = "\armst\armst_anim\config\dead14.rtm";
			speed = 0.1;
		};
		class armst_dead15: StandBase
		{
			file = "\armst\armst_anim\config\dead15.rtm";
			speed = 0.1;
		};
		class armst_dead16: StandBase
		{
			file = "\armst\armst_anim\config\dead16.rtm";
			speed = 0.1;
		};
		class armst_dead17: StandBase
		{
			file = "\armst\armst_anim\config\dead17.rtm";
			speed = 0.1;
		};
		class armst_dead18: StandBase
		{
			file = "\armst\armst_anim\config\dead18.rtm";
			speed = 0.1;
		};
	};
};
