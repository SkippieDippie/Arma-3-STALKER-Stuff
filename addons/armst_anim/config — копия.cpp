class CfgPatches 
{

	class Monstersa
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 1.020000;
		requiredAddons[] = {	"A3_Anims_F"};
		};
};

class DefaultEventhandlers ;

class CfgMovesBasic 
{

	class Default ;

	class StandBase ;

	class HealBase : Default
	{
		disableWeapons = 1;
		disableWeaponsLong = 1;
		showWeaponAim = 0;
		canPullTrigger = 0;
		duty = 0.200000;
		limitGunMovement = 0;
		aiming = "empty";
		aimingBody = "empty";
		actions = "HealActionBase";
		looped = 0;
	};

	class ManActions 
	{
		GestureOUT[] = {
				"GestureOUT", "Gesture"
		};
		GestureSdastsa[] = {
				"GestureSdastsa", "Gesture"
		};
		GesturePlen[] = {
				"GesturePlen", "Gesture"
		};
		GesturePrivet[] = {
				"GesturePrivet", "Gesture"
		};
		TEST11[] = {
				"TEST11", "Gesture"
		};
		GestureGuitar[] = {
				"GestureGuitar", "Gesture"
		};
		GestureUkaz[] = {
				"GestureUkaz", "Gesture"
		};
		GestureGasmaskUp[] = {
				"GestureGasmaskUp", "Gesture"
		};
		GestureGasmaskDown[] = {
				"GestureGasmaskDown", "Gesture"
		};
		GestureKrovAttack1[] = {
				"GestureKrovAttack1", "Gesture"
		};
		GestureRukPoz[] = {
				"GestureRukPoz", "Gesture"
		};
		GestureKrovAttack2[] = {
				"GestureKrovAttack2", "Gesture"
		};
		GestureKrovAttack3[] = {
				"GestureKrovAttack3", "Gesture"
		};
		GestureMinHP[] = {
				"GestureMinHP", "Gesture"
		};
		Gestureart_podnyal[] = {
				"Gestureart_podnyal", "Gesture"
		};
		Gestureheadkick[] = {
				"Gestureheadkick", "Gesture"
		};
		GestureFacepalm[] = {
				"GestureFacepalm", "Gesture"
		};
		GesturePointsArmst[] = {
				"GesturePointsArmst", "Gesture"
		};
		GestureSalutesArmst[] = {
				"GestureSalutesArmst", "Gesture"
		};
		GestureThumb[] = {
				"GestureThumb", "Gesture"
		};
		Gesturearmst_clockl[] = {
				"Gesturearmst_clockl", "Gesture"
		};
		Gesturecompass[] = {
				"Gesturecompass", "Gesture"
		};
		GestureSilenced[] = {
				"GestureSilenced", "Gesture"
		};
		GestureRadioTalk[] = {
				"GestureRadioTalk", "Gesture"
		};
		
		GestureFuck[] = {
				"GestureFuck", "Gesture"
		};
		GestureInspect[] = {
				"GestureInspect", "Gesture"
		};
		GestureCheckWeap[] = {
				"GestureCheckWeap", "Gesture"
		};
		Gestureugroza[] = {
				"Gestureugroza", "Gesture"
		};
		GestureAxe[] = {
				"GestureAxe", "Gesture"
		};
		Gestureknife[] = {
				"Gestureknife", "Gesture"
		};
		woodaxe_attack1[] = {
				"woodaxe_attack1", "Gesture"
		};
		woodaxe_attack2[] = {
				"woodaxe_attack2", "Gesture"
		};
		woodaxe_attack3[] = {
				"woodaxe_attack3", "Gesture"
		};
		woodaxe_attack4[] = {
				"woodaxe_attack4", "Gesture"
		};
		cross1[] = {
				"cross1", "Gesture"
		};
		cross2[] = {
				"cross2", "Gesture"
		};
		cross3[] = {
				"cross3", "Gesture"
		};
		Gesturecigaretes[] = {
				"Gesturecigaretes", "Gesture"
		};
		GestureEat[] = {
				"GestureEat", "Gesture"
		};
		GestureDrink[] = {
				"GestureDrink", "Gesture"
		};
		GestureGameKamen[] = {
				"GestureGameKamen", "Gesture"
		};
		GestureGamebumaga[] = {
				"GestureGamebumaga", "Gesture"
		};
		GestureGamenojnice[] = {
				"GestureGamenojnice", "Gesture"
		};
		GestureHvat1[] = {
				"GestureHvat1", "Gesture"
		};
		GestureHvat2[] = {
				"GestureHvat2", "Gesture"
		};
		Gesturecover[] = {
				"Gesturecover", "Gesture"
		};
		Gestureengage[] = {
				"Gestureengage", "Gesture"
		};
		Gestureforward[] = {
				"Gestureforward", "Gesture"
		};
		Gesturehold[] = {
				"Gesturehold", "Gesture"
		};
		Gesturepoint[] = {
				"Gesturepoint", "Gesture"
		};
		Gestureregroup[] = {
				"Gestureregroup", "Gesture"
		};
		Gesturestop[] = {
				"Gesturestop", "Gesture"
		};
		Gesturewarning[] = {
				"Gesturewarning", "Gesture"
		};  
		armst_shotgunfire[] = {
				"armst_shotgunfire", "Gesture"
		};  
		armst_zombie_stvol[] = {
				"armst_zombie_stvol", "Gesture"
		};  
		
		armst_fight_idl[] = {
				"armst_fight_idl", "Gesture"
		};  
		armst_fight_1[] = {
				"armst_fight_1", "Gesture"
		};  
		armst_fight_2[] = {
				"armst_fight_2", "Gesture"
		};  
		armst_detector_idle[] = {
				"armst_detector_idle", "Gesture"
		};  
		armst_weapons_pleco[] = {
				"armst_weapons_pleco", "Gesture"
		};
		armst_weapon_arm[] = {
				"armst_weapon_arm", "Gesture" // поднять автомат одной рукой над головой
		};  
		armst_weapon_arms[] = {
				"armst_weapon_arms", "Gesture" // держать ствол у груди
		};    
		armst_weapon_hvat_stvol[] = {
				"armst_weapon_hvat_stvol", "Gesture"
		};  
		armst_weapons_up[] = { // поднять ствол над плечом
				"armst_weapons_up", "Gesture"
		};  
		armst_weapon_hvatzamag[] = { // поднять ствол над плечом
				"armst_weapon_hvatzamag", "Gesture"
		};  
		armst_weapon_grud_hvat[] = { // поднять ствол над плечом
				"armst_weapon_grud_hvat", "Gesture"
		};    
		armst_weapon_rukinaves[] = { // поднять ствол над плечом
				"armst_weapon_rukinaves", "Gesture"
		};
		Armst_GesturePDA[] = {
				"Armst_GesturePDA", "Gesture"
		};
		
		Armst_GestureMAP[] = {
				"Armst_GestureMAP", "Gesture"
		};
		
		
		
		armst_weapon_visovRight[] = { //
				"armst_weapon_visovRight", "Gesture"
		};
		armst_weapon_visovLeft[] = { // 
				"armst_weapon_visovLeft", "Gesture"
		};
		armst_weapon_visovUP[] = { // 
				"armst_weapon_visovUP", "Gesture"
		};
	};
};
  
class CfgGesturesMale 
{

	class ManActions 
	{
	};

	class Actions ;

	class Default ;

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
		class armst_weapons_pleco : Default
		{
			file = "\armst\armst_anim\pose1.rtm";
			looped = 1;
			speed = 0;
			mask = "handsWeapon_melee2";
			limitGunMovement = 0.700000;
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
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
			canReload = 0;
		};
		class armst_weapons_up : armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_weapons_up.rtm";
			mask = "handsWeapon_melee2";
			looped = 1;
			speed = 0.000000000001;
			interpolationRestart = 2;
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
			canReload = 0;
			showpistol = 0;
		};
		class armst_weapon_arm : armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_weapon_arm.rtm";
			mask = "handsWeapon_melee2";
			looped = 1;
			speed = 0.000000000001;
			interpolationRestart = 2;
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
			canReload = 0;
			showpistol = 0;
		};
		class armst_weapon_arms : armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_weapon_arms.rtm";
			mask = "handsWeapon_melee2";
			looped = 1;
			speed = 0.000000000001;
			interpolationRestart = 2;
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
			canReload = 0;
			showpistol = 0;
		};
		class armst_weapon_hvat_stvol : armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_weapon_signal_up.rtm";
			mask = "handsWeapon_melee2";
			looped = 1;
			speed = 0.000000000001;
			interpolationRestart = 2;
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
			canReload = 0;
			showpistol = 1;
		};
		class armst_weapon_hvatzamag : armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_hvatzamag.rtm";
			mask = "handsWeapon_melee2";
			looped = 1;
			speed = 0.000000000001;
			interpolationRestart = 2;
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
			canReload = 0;
			showpistol = 1;
		};
		class armst_weapon_grud_hvat : armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_weapon_grud_hvat.rtm";
			mask = "handsWeapon_melee2";
			looped = 1;
			speed = 0.000000000001;
			interpolationRestart = 2;
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
			canReload = 0;
			showpistol = 1;
		};
		class armst_weapon_rukinaves : armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_stand.rtm";
			mask = "handsWeapon_melee2";
			looped = 1;
			speed = 0.000000000001;
			interpolationRestart = 2;
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
			canReload = 0;
			showpistol = 1;
		};

		class armst_weapon_visovRight : armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_weapon_visovRight.rtm";
			mask = "handsWeapon_melee2";
			looped = 0;
			disableWeapons = 0;
			speed = 0.000000000001;
			aimPrecision = 4.2;
			headBobStrength = 0.200000;
			headBobMode = 2;
			interpolationRestart = 2;
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
			canReload = 1;
			showpistol = 0;
		};
		class armst_weapon_visovUP : armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_weapon_visovUP.rtm";
			mask = "handsWeapon_melee2";
			looped = 0;
			disableWeapons = 0;
			speed = 0.000000000001;
			aimPrecision = 4.2;
			headBobStrength = 0.200000;
			headBobMode = 2;
			interpolationRestart = 2;
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
			canReload = 1;
			showpistol = 0;
		};
		class armst_weapon_visovLeft : armst_weapons_pleco
		{
			file = "\armst\armst_anim\armst_weapon_visovLeft.rtm";
			mask = "handsWeapon_melee2";
			looped = 0;
			disableWeapons = 0;
			speed = 0.000000000001;
			aimPrecision = 4.2;
			headBobStrength = 0.200000;
			headBobMode = 2;
			interpolationRestart = 2;
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
			canReload = 1;
			showpistol = 0;
		};
			
		class Gestureheadkick : Default
		{
			looped = 0;
			mask = "BodyFull2";
			file = "\armst\armst_anim\armst_headkick.rtm";
			speed = 0.270270;
			limitGunMovement = 0.700000;
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

		class GestureMinHP : Default
		{
			file = "\armst\armst_anim\armst_minHP.rtm";
			looped = 1;
			speed = 0;
			weaponIK = 1;
			leftHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
			mask = "upperTorso";
			limitGunMovement = 0.700000;
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
		
		class Gestureart_podnyal : Default
		{
			file = "\armst\armst_anim\art_podnyal.rtm";
			looped = 0;
			speed = 0.28;
			weaponIK = 1;
			leftHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
			mask = "BodyFull2";
			limitGunMovement = 0.700000;
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
		
		class GestureOUT : Default
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon.rtm";
			disableWeapons = 1;
			interpolationRestart = 2;
			leftHandIKCurve[] = {
					1
			};
			rightHandIKCurve[] = { };
			weaponIK = 1;
			looped = 0;
		};
		class GestureFuck : Default
		{
			file = "\armst\armst_anim\armst_fuck.rtm";
			looped = 0;
			canReload = 0;
			speed = 0.000100;
			mask = "LeftHand";
			leftHandIKCurve[] = {
					0.100000
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};

		class GestureRukPoz : Default
		{
			looped = 0;
			mask = "LeftHand";
			file = "\armst\armst_anim\new\armst_ruk.rtm";
			speed = 1;
			leftHandIKCurve[] = {
					0.100000
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};
		class GestureFacepalm : Default
		{
			looped = 0;
			mask = "upperTorso1";
			file = "\armst\armst_anim\armst_Facepalm.rtm";
			speed = 0.000100;
			leftHandIKCurve[] = {
					0.100000
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};

		class GestureSilenced : Default
		{
			looped = 0;
			mask = "LeftHand";
			file = "\armst\armst_anim\armst_silenced.rtm";
			speed = 0.000100;
			leftHandIKCurve[] = {
					0.100000
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};
		
		class GestureRadioTalk : Default
		{
			looped = 0;
			mask = "leftHandandHead";
			file = "\armst\armst_anim\armst_radiotalk.rtm";
			speed = 0.75000;
			leftHandIKCurve[] = {
					0.100000
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};

		class GesturePointsArmst : Default
		{
			looped = 0;
			file = "\armst\armst_anim\armst_point.rtm";
			speed = 0.000100;
			mask = "LeftHand";
			rightHandIKCurve[] = { };
			leftHandIKCurve[] = {
					0.100000
			};
		};

		class GestureSalutesArmst : Default
		{
			looped = 0;
			file = "\armst\armst_anim\armst_salute.rtm";
			speed = 0.000100;
			mask = "LeftHand";
			rightHandIKCurve[] = { };
			leftHandIKCurve[] = {
					0.100000
			};
		};

		class GestureThumb : Default
		{
			looped = 0;
			file = "\armst\armst_anim\armst_thumb.rtm";
			speed = 0.000100;
			mask = "LeftHand";
			rightHandIKCurve[] = {
					1, 1, 0.050000, 1, 0.950000, 1, 1, 1
			};
			leftHandIKCurve[] = {
					0.100000
			};
		};
		
		class Gesturearmst_clockl : Default
		{
			looped = 0;
			file = "\armst\armst_anim\new\armst_clockl.rtm";
			speed = 1;
			mask = "LeftHand";
			rightHandIKCurve[] = {
					1, 1, 0.050000, 1, 0.950000, 1, 1, 1
			};
			leftHandIKCurve[] = {
					0.100000
			};
		};
		
		class Gesturecompass : Default
		{
			looped = 0;
			file = "\armst\armst_anim\new\armst_compass.rtm";
			speed = 1;
			mask = "LeftHand";
			rightHandIKCurve[] = {
					1, 1, 0.050000, 1, 0.950000, 1, 1, 1
			};
			leftHandIKCurve[] = {
					0.100000
			};
		};

		class GestureGameKamen : Default
		{
			looped = 0;
			file = "\armst\armst_anim\new\armst_game_kamen.rtm";
			speed = 0.180000;
			mask = "LeftHand";
			rightHandIKCurve[] = {
					1, 1, 0.050000, 1, 0.950000, 1, 1, 1
			};
			leftHandIKCurve[] = {
					0.100000
			};
		};

		class GestureGamebumaga : Default
		{
			looped = 0;
			file = "\armst\armst_anim\new\armst_game_bumaga.rtm";
			speed = 0.170000;
			mask = "LeftHand";
			rightHandIKCurve[] = {
					1, 1, 0.050000, 1, 0.950000, 1, 1, 1
			};
			leftHandIKCurve[] = {
					0.100000
			};
		};

		class GestureGamenojnice : Default
		{
			looped = 0;
			file = "\armst\armst_anim\new\armst_game_nojnice.rtm";
			speed = 0.170000;
			mask = "LeftHand";
			rightHandIKCurve[] = {
					1, 1, 0.050000, 1, 0.950000, 1, 1, 1
			};
			leftHandIKCurve[] = {
					0.100000
			};
		};

		class GestureSdastsa : GestureFacepalm
		{
			speed = 0.000000;
			looped = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Knl\Stp\sur\rfl\AmovPknlMstpSsurWrflDnon.rtm";
			mask = "launcher";
			disableWeapons = 1;
			interpolationRestart = 2;
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
		};

		class GesturePlen : Default
		{
			speed = 0.000000;
			looped = 1;
			file = "A3\anims_f\data\Anim\sdr\cts\arma2\UnaErcPoslechVelitele4.rtm";
			mask = "launcher";
			disableWeapons = 1;
			interpolationRestart = 2;
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
			ragdoll = 1;
		};
		class Armst_GestureMAP : Default
		{
			speed = 0.000000;
			looped = 1;
			file = "\armst\armst_anim\new\armst_map.rtm";
			mask = "handsWeapon_melee";
			disableWeapons = 1;
			interpolationRestart = 2;
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
			ragdoll = 1;
		};
		
		class Armst_GesturePDA : Default
		{
			speed = 0.000000;
			looped = 1;
			file = "armst\armst_anim\new\armst_pda.rtm";
			mask = "LeftHand";
			rightHandIKCurve[] = {
					1, 1, 0.050000, 1, 0.950000, 1, 1, 1
			};
			leftHandIKCurve[] = {
					0.100000
			};
		};

		class GesturePrivet : Default
		{
			speed = 0.202200;
			looped = 0;
			file = "\A3\anims_f\data\Anim\sdr\cts\Custom\A_in\Acts_PercMstpSlowWrflDnon_handup2.rtm";
			mask = "launcher";
			disableWeapons = 1;
			interpolationRestart = 2;
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
			canReload = 0;
		};

		class GestureUkaz : GesturePrivet
		{
			speed = 0.401100;
			mask = "LeftHand";
			file = "\a3\Anims_F_EPC\data\Anim\sdr\cts\Custom\C_out2\Acts_ComingInSpeakingWalkingOut5";
		};

		class GestureGasmaskUp : GesturePrivet
		{
			speed = 0.630000;
			file = "A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end";
		};

		class GestureGasmaskDown : GesturePrivet
		{
			speed = 0.630000;
			file = "\A3\anims_f\Data\Anim\Sdr\wop\erc\stp\opt\bin\awoppercmstpsoptwbindnon_AmovPercMstpSrasWpstDnon";
		};

		class GestureGuitar : GesturePrivet
		{
			speed = 0.200000;
			looped = 1;
			mask = "handsWeapon";
			file = "\armst\armst_anim\gitaraPlay.rtm";
			interpolationRestart = 2;
			weaponIK = 1;
			canReload = 1;
			showpistol = 0;
		};

		class GestureKrovAttack3 : Default
		{
			looped = 1;
			mask = "BodyFull";
			file = "\armst\armst_anim\krovosos_run_attack03.rtm";
			speed = 0.500000;
			interpolationRestart = 2;
		};

		class GestureKrovAttack2 : Default
		{
			looped = 0;
			mask = "handsWeapon";
			file = "\armst\armst_anim\krovosos_attack02";
			speed = -1.500000;
			interpolationRestart = 2;
		};

		class GestureKrovAttack1 : Default
		{
			looped = 0;
			mask = "handsWeapon";
			file = "\armst\armst_anim\krovosos_attack01.rtm";
			speed = 0.500000;
			interpolationRestart = 2;
		};

		class GestureInspect : Default
		{
			looped = 0;
			mask = "upperTorso";
			file = "\armst\armst_anim\armst_inspect_weapon.rtm";
			speed = 0.200000;
			limitGunMovement = 0.700000;
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

		class GestureCheckWeap : Default
		{
			looped = 1;
			mask = "launcher";
			file = "\armst\armst_anim\check_weapon.rtm";
			speed = 0.350200;
			interpolationRestart = 2;
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
			canReload = 1;
			showpistol = 0;
		};
		
		class armst_detector_idle : Default
		{
			looped = 1;
			mask = "handsWeapon_melee";
			file = "\armst\armst_anim\new\armst_detector.rtm";
			speed = 0.000000000001;
			interpolationRestart = 2;
			leftHandIKCurve[] = { };
			rightHandIKCurve[] = { };
			weaponIK = 1;
			canReload = 0;
			showpistol = 1;
		};

		class Gestureugroza : Default
		{
			looped = 0;
			file = "\armst\armst_anim\armst_ugroza.rtm";
			speed = 0.220000;
			mask = "LeftHand";
			rightHandIKCurve[] = {
					1, 1, 0.050000, 1, 0.950000, 1, 1, 1
			};
			leftHandIKCurve[] = {
					0.100000
			};
		};

		class GestureAxe : Default
		{
			file = "\armst\armst_anim\armst_axe.rtm";
			disableWeapons = 1;
			speed = 1.300000;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};

		class Gestureknife : Default
		{
			file = "\armst\armst_anim\armst_knife.rtm";
			disableWeapons = 1;
			speed = 1.400000;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};

		class woodaxe_attack4 : Default
		{
			file = "\armst\armst_anim\woodaxe_attack1.rtm";
			disableWeapons = 0;
			speed = 1.050000;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};

		class woodaxe_attack3 : Default
		{
			file = "\armst\armst_anim\woodaxe_attack2.rtm";
			disableWeapons = 0;
			speed = 1.050000;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};

		class woodaxe_attack2 : Default
		{
			file = "\armst\armst_anim\armst_knife_attack_2.rtm";
			disableWeapons = 0;
			speed = 1.100000;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};

		class woodaxe_attack1 : Default
		{
			file = "\armst\armst_anim\armst_knife_attack_1.rtm";
			disableWeapons = 0;
			speed = 1;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};

		class cross1 : Default
		{
			file = "\armst\armst_anim\cross1.rtm";
			disableWeapons = 0;
			speed = 1.100000;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};

		class cross2 : Default
		{
			file = "\armst\armst_anim\cross2.rtm";
			disableWeapons = 0;
			speed = 1.200000;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};

		class cross3 : Default
		{
			file = "\armst\armst_anim\cross3.rtm";
			disableWeapons = 0;
			speed = 1.400000;
			looped = 0;
			mask = "handsWeapon_melee";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};

		class GestureEat : GesturePrivet
		{
			speed = 0.130000;
			duty = -0.600000;
			file = "\armst\armst_anim\armst_eat.rtm";
		};

		class GestureCigaretes : GesturePrivet
		{
			speed = 0.080000;
			mask = "hands";
			duty = -0.600000;
			file = "\armst\armst_anim\armst_cigaretes.rtm";
		};

		class GestureDrink : GesturePrivet
		{
			speed = 0.150000;
			duty = -0.600000;
			file = "\armst\armst_anim\armst_drink.rtm";
		};

		class GestureHvat1 : Default
		{
			file = "\armst\armst_anim\p_15a.rtm";
			speed = -10000000000.0;
			disableWeapons = 0;
			looped = 1;
			mask = "handsWeapon_melee";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};
		class armst_zombie_stvol : Default
		{
			file = "\armst\armst_anim\armst_zombie_stvol.rtm";
			speed = -10000000000.0;
			disableWeapons = 0;
			looped = 1;
			mask = "handsWeapon_melee2";
			headBobStrength = 0.200000;
			headBobMode = 2;
		};
		
		class GestureHvat2 : Default
		{
			file = "\armst\armst_anim\p_22.rtm";
			speed = -10000000000.0;
			disableWeapons = 0;
			looped = 1;
			mask = "rightHand";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};
	
		class Gesturecover : GesturePrivet
		{
			speed = 0.8;
			duty = -0.600000;
			file = "\armst\armst_anim\anim\cover.rtm";
		};

		class Gestureengage : GesturePrivet
		{
			speed = 0.9;
			duty = -0.600000;
			mask = "LeftHand";
			file = "\armst\armst_anim\anim\engage.rtm";
		};

		class Gestureforward : GesturePrivet
		{
			speed = 1;
			duty = -0.600000;
			mask = "LeftHand";
			file = "\armst\armst_anim\anim\forward.rtm";
		};

		class Gesturehold : GesturePrivet
		{
			speed = 0.8;
			duty = -0.600000;
			mask = "LeftHand";
			file = "\armst\armst_anim\anim\hold.rtm";
		};

		class Gesturepoint : GesturePrivet
		{
			speed = 0.8;
			mask = "LeftHand";
			duty = -0.600000;
			file = "\armst\armst_anim\anim\point.rtm";
		};

		class Gestureregroup : GesturePrivet
		{
			speed = 0.8;
			duty = -0.600000;
			mask = "LeftHand";
			file = "\armst\armst_anim\anim\regroup.rtm";
		};

		class Gesturestop : GesturePrivet
		{
			speed = 0.6;
			duty = -0.600000;
			mask = "LeftHand";
			file = "\armst\armst_anim\anim\stop.rtm";
		};

		class Gesturewarning : GesturePrivet
		{
			speed = 0.8;
			duty = -0.600000;
			mask = "LeftHand";
			file = "\armst\armst_anim\anim\warning.rtm";
		};

		class armst_fight_idl : Default
		{
			file = "\armst\armst_anim\new\armst_fight_idl.rtm";
			disableWeapons = 0;
			speed = 0.0000001;
			looped = 1;
			mask = "hands";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};
		class armst_fight_1 : Default
		{
			file = "\armst\armst_anim\new\armst_fight_1.rtm";
			disableWeapons = 0;
			speed = 2.7322;
			looped = 0;
			mask = "hands";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};
		class armst_fight_2 : Default
		{
			file = "\armst\armst_anim\new\armst_fight_2.rtm";
			disableWeapons = 0;
			speed = 2.7322;
			looped = 0;
			mask = "hands";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
			rightHandIKCurve[] = {
					0, 1, 0.050000, 0, 0.950000, 0, 1, 1
			};
		};
	};
};

class CfgMovesMaleSdr : CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	extended = "CfgExtendedAnimation";

	class States 
	{

		class CutSceneAnimationBase ;

		class AmovPercMstpSrasWrflDnon ;
		class AmovPercMstpSnonWnonDnon ;
		class AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon ;
		
		class SprintBaseDf ;
		
		
		
		
		
		
		
		
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
		class armst_drink : StandBase
		{
			speed = 0.150000;
			duty = -0.600000;
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
			ConnectTo[] = {
					"AmovPknlMstpSrasWrflDnon", 0.200000
			};
			InterpolateTo[] = {
					"Unconscious", 0.100000
			};
			useIdles = 0;
		};
		class armst_eat : StandBase
		{
			speed = 0.130000;
			duty = -0.600000;
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
			ConnectTo[] = {
					"AmovPknlMstpSrasWrflDnon", 0.200000
			};
			InterpolateTo[] = {
					"Unconscious", 0.100000
			};
			useIdles = 0;
		};

		class armst_dancing1 : StandBase
		{
			file = "\armst\armst_anim\MadMetalDancing.rtm";
			speed = 0.019036;
		};

		class krovososbegudar_rukami01 : StandBase
		{
			file = "\armst\armst_anim\krovosos_attack01.rtm";
			speed = 0.500000;
		};

		class krovososbegudar_rukami02 : StandBase
		{
			file = "\armst\armst_anim\krovosos_attack02";
			speed = -1.500000;
		};

		class krovososbegudar_rukami03 : StandBase
		{
			file = "\armst\armst_anim\krovosos_run_attack03.rtm";
			speed = 0.500000;
		};

		class armst_dancing2 : StandBase
		{
			file = "\armst\armst_anim\ZozinoDancing.rtm";
			speed = 0.034130;
		};

		class armst_dancing3 : StandBase
		{
			file = "\armst\armst_anim\ActsPercMstpSnonWnonDnon_DancingDuoIvan.rtm";
			speed = 0.025000;
			looped = 0;
		};

		class AttackCling_human_start : StandBase
		{
			file = "\armst\armst_anim\new\AttackCling_human_start.rtm";
			actions = "CivilStandActions";
			duty = "RestDuty";
			speed = 0.750000;
			looped = 0;
			ConnectTo[] = {
					"AttackCling_human_loop", 0.020000
			};
			maxSpeed = 25;
			animationSpeedCoef = 0;
			InterpolationSpeed = 0.900000;
			interpolateFrom[] = { };
			interpolateTo[] = {
					"AmovPercMstpSnonWnonDnon", 0.010000
			};
		};

		class AttackCling_human_loop : StandBase
		{
			file = "\armst\armst_anim\new\AttackCling_human_loop.rtm";
			speed = 0.725000;
			looped = 1;
		};

		class armst_dancing4 : StandBase
		{
			file = "\armst\armst_anim\ActsPercMstpSnonWnonDnon_DancingDuoStefan.rtm";
			speed = 0.025000;
			looped = 0;
		};

		class armst_dancing5 : StandBase
		{
			file = "\armst\armst_anim\ActsPercMstpSnonWnonDnon_DancingStefan.rtm";
			actions = "CivilSitActions";
			duty = "RestDuty";
			speed = 0.010400;
			looped = 0;
		};

		class sport_press : StandBase
		{
			file = "\armst\armst_anim\sport_press.rtm";
			speed = 0.013705;
			looped = 0;
		};

		class spotikanie_anim : StandBase
		{
			file = "\armst\armst_anim\spotikanie_anim.rtm";
			speed = 0.313705;
			looped = 0;
		};

		class molitva : StandBase
		{
			file = "\armst\armst_anim\molitva.rtm";
			speed = 0.007710;
			looped = 0;
		};

		class sdastsya : StandBase
		{
			file = "\armst\armst_anim\sdastsya.rtm";
			speed = 1.100000;
			looped = 1;
		};

		class armst_wakeup : StandBase
		{
			file = "\armst\armst_anim\wakeup.rtm";
			speed = 0.160900;
			looped = 0;
		};	
		
		class armst_talk : StandBase
		{
			file = "\armst\armst_anim\talk.rtm";
			speed = 0.013453;
			looped = 1;
		};	
		class armst_suicide : StandBase
		{
			file = "\armst\armst_anim\armst_suicide.rtm";
			terminal=0;
			speed=0.143541;
			showHandGun=1;
			head="headNo";
			forceAim=1;
			looped=0;
		};	
		class armst_kostolom : StandBase
		{
			file = "\armst\armst_anim\armst_kostolom.rtm";
			speed = 0.14;
			looped = 0;
		};	
		
		class armst_talk2: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\talk2.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_relax2: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\armst_relax2.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_relax3: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\armst_relax3.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_relax4: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\armst_relax4.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_relax5: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\armst_relax5.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_relax6: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\armst_relax6.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_relax7: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\armst_relax7.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_stand: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\armst_stand.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_stand2: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\armst_relax.rtm";
			speed = 0.033898;
			looped = 1;
		};
		class armst_verybadsit: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\armst_verybadsit.rtm";
			speed = 0.033898;
			looped = 1;
		};
		
		
		class art_podnyal2: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\art_podnyal.rtm";
			speed = 2;
			looped = 0;
		};
		class armst_psy_death : StandBase
		{
			file = "\armst\armst_anim\new\armst_psy_death.rtm";
			speed = 0.1;
			looped = 0;
		};
		class armst_psy_molitva : StandBase
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
	
		class AidlPercMstpSrasWpstDnon_G01;
		class AmovPercMwlkSrasWpstDf;
		class AidlPercMstpSrasWpstDnon_G01_player: AidlPercMstpSrasWpstDnon_G01
		{
			file = "\armst\armst_anim\armst_pistol";
		};
		class AidlPercMstpSrasWpstDnon_G02_player: AidlPercMstpSrasWpstDnon_G01
		{
			file = "\armst\armst_anim\armst_pistol";
		};
		class AidlPercMstpSrasWpstDnon_G03_player: AidlPercMstpSrasWpstDnon_G01
		{
			file = "\armst\armst_anim\armst_pistol";
		};
		class AmovPercMtacSrasWpstDf: AmovPercMwlkSrasWpstDf
		{
			stamina = -0.1;
			duty = 0.2;
			speed = 0.612245;
			file = "\armst\armst_anim\armst_pistolwalk";
			headBobStrength = 0.124378;
			actions = "PistolStandActionsTacF";
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon",0.02,"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",0.02,"AmovPercMtacSrasWpstDfl",0.01,"AmovPercMtacSrasWpstDfr",0.01,"AmovPercMrunSrasWpstDf",0.02,"AmovPercMwlkSrasWpstDf",0.02,"AovrPercMstpSrasWpstDf",0.02,"Unconscious",0.1,"AmovPercMrunSlowWpstDf",0.02,"AmovPercMevaSrasWpstDf",0.02,"AmovPknlMtacSrasWpstDf",0.02};
			aimPrecision = 4;
			soundOverride = "Run";
		};
	
	class armst_pozer_1: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\anim\pos_stand_91.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_2: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\anim\pos_stand_6.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_3: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\anim\pos_stand_22.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_4: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\anim\pos_stand_1.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_5: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\anim\pos_stand_11.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_6: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\anim\pos_stand_52.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_7: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\anim\pos_stand_65.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_8: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\anim\pos_stand_7.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_9: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\anim\pos_stand_79.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_10: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\anim\pos_stand_81.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_11: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\anim\pos_crouch_21.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_12: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\anim\pos_crouch_15.rtm";
			speed = 0;
			looped = 1;
		};
	class armst_pozer_13: StandBase
		{
			//actions = "CivilStandActions_talking02";
			file = "\armst\armst_anim\anim\pos_para_2.rtm";
			speed = 0;
			looped = 1;
		};
		
	};
};
