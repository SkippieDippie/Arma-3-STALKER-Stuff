class CfgPatches
{
	class armst_burer_anim
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.02;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class DefaultEventhandlers;
class CfgMovesAnimalsBase
{
	class Default
	{
		actions="";
		access=3;
		file="";
		looped=1;
		speed=0.5;
		disableWeapons=1;
		enableOptics=0;
		disableWeaponsLong=1;
		showWeaponAim=0;
		enableMissile=0;
		enableBinocular=0;
		showItemInHand=0;
		showItemInRightHand=0;
		showHandGun=0;
		onLandBeg=0;
		onLandEnd=0;
		onLadder=0;
		canPullTrigger=1;
		duty=-0.50999999;
		predictSpeedCoef=1;
		visibleSize=1;
		aimPrecision=1;
		relSpeedMin=1;
		relSpeedMax=1;
		soundEnabled=0;
		controlHead=0;
		headBobMode=0;
		headBobStrength=0;
		soundOverride="";
		soundEdge[]={0.5,1};
		terminal=0;
		limitGunMovement=1;
		variantsPlayer[]={};
		variantsAI[]=
		{
			""
		};
		equivalentTo="";
		connectAs="";
		variantAfter[]={5,10,20};
		connectFrom[]={};
		connectTo[]={};
		interpolateWith[]={};
		interpolateTo[]={};
		interpolateFrom[]={};
		aiming="aimingNo";
		leaning="aimingNo";
		untiltWeapon="aimingNo";
		aimingBody="aimingUpDefault";
		legs="legsNo";
		head="headDefault";
		leaningFactorBeg=0;
		leaningFactorEnd=0;
		leaningFactorZeroPoint=-1;
		leaningCorrectionAngleBeg=0;
		leaningCorrectionAngleEnd=0;
		interpolationSpeed=6;
		interpolationRestart=0;
		collisionShape="ca\animals2\data\geom\basicColide.p3d";
		hasCollShapeSafe=0;
		collisionShapeSafe="";
		boundingSphere=1;
		enableDirectControl=1;
		enableAutoActions=0;
		leftHandIKBeg=0;
		leftHandIKEnd=0;
		rightHandIKBeg=0;
		rightHandIKEnd=0;
		weaponIK=0;
		preload=0;
		walkcycles=1;
		forceAim=0;
		rightHandIKCurve[]={};
		leftHandIKCurve[]={};
	};
	class StandBase: Default
	{
		aiming="aimingDefault";
		disableWeapons=1;
		canReload=1;
		weaponLowered=0;
		weaponObstructed=0;
		canBlendStep=1;
		useIdles=1;
		adjstance="m";
		leaningFactorBeg=1;
		leaningFactorEnd=1;
	};
	class DefaultDie: Default
	{
		aiming="aimingNo";
		legs="legsNo";
		head="headNo";
		disableWeapons=1;
		canReload=1;
		weaponLowered=0;
		weaponObstructed=0;
		canBlendStep=1;
		useIdles=1;
		adjstance="m";
		interpolationRestart=1;
		soundOverride="fallbody";
		soundEdge[]={0.44999999};
		soundEnabled=1;
	};
	class ManActions
	{
		AdjustF="burer_StopV2";
		AdjustB="burer_StopV2";
		AdjustL="burer_StopV2";
		AdjustR="burer_StopV2";
		AdjustLF="burer_StopV2";
		AdjustLB="burer_StopV2";
		AdjustRB="burer_StopV2";
		AdjustRF="burer_StopV2";
		dooraction="burer_StopV2";
		GestureLegPush="burer_StopV2";
		agonyStart="burer_StopV2";
		agonyStop="burer_StopV2";
		medicStop="burer_StopV2";
		medicStart="burer_StopV2";
		medicStartUp="burer_StopV2";
		medicStartRightSide="burer_StopV2";
		GestureAgonyCargo="burer_StopV2";
		grabCarry="burer_StopV2";
		grabCarried="burer_StopV2";
		grabDrag="burer_StopV2";
		grabDragged="burer_StopV2";
		carriedStill="burer_StopV2";
		released="burer_StopV2";
		releasedBad="burer_StopV2";
		Stop="burer_StopV2";
		StopRelaxed="burer_StopV2";
		TurnL="burer_StopV2";
		TurnR="burer_StopV2";
		TurnLRelaxed="burer_StopV2";
		TurnRRelaxed="burer_StopV2";
		ReloadMagazine="burer_StopV2";
		reloadGM6="burer_StopV2";
		ReloadMGun="burer_StopV2";
		ReloadRPG="burer_StopV2";
		ReloadMortar="burer_StopV2";
		ThrowPrepare="burer_StopV2";
		ThrowGrenade="burer_StopV2";
		WalkF="burer_StopV2";
		WalkLF="burer_StopV2";
		WalkRF="burer_StopV2";
		WalkL="burer_StopV2";
		WalkR="burer_StopV2";
		WalkLB="burer_StopV2";
		WalkRB="burer_StopV2";
		WalkB="burer_StopV2";
		PlayerWalkF="burer_StopV2";
		PlayerWalkLF="burer_StopV2";
		PlayerWalkRF="burer_StopV2";
		PlayerWalkL="burer_StopV2";
		PlayerWalkR="burer_StopV2";
		PlayerWalkLB="burer_StopV2";
		PlayerWalkRB="burer_StopV2";
		PlayerWalkB="burer_StopV2";
		SlowF="burer_StopV2";
		SlowLF="burer_StopV2";
		SlowRF="burer_StopV2";
		SlowL="burer_StopV2";
		SlowR="burer_StopV2";
		SlowLB="burer_StopV2";
		SlowRB="burer_StopV2";
		SlowB="burer_StopV2";
		PlayerSlowF="burer_StopV2";
		PlayerSlowLF="burer_StopV2";
		PlayerSlowRF="burer_StopV2";
		PlayerSlowL="burer_StopV2";
		PlayerSlowR="burer_StopV2";
		PlayerSlowLB="burer_StopV2";
		PlayerSlowRB="burer_StopV2";
		PlayerSlowB="burer_StopV2";
		FastF="burer_StopV2";
		FastLF="burer_StopV2";
		FastRF="burer_StopV2";
		FastL="burer_StopV2";
		FastR="burer_StopV2";
		FastLB="burer_StopV2";
		FastRB="burer_StopV2";
		FastB="burer_StopV2";
		TactF="burer_StopV2";
		TactLF="burer_StopV2";
		TactRF="burer_StopV2";
		TactL="burer_StopV2";
		TactR="burer_StopV2";
		TactLB="burer_StopV2";
		TactRB="burer_StopV2";
		TactB="burer_StopV2";
		PlayerTactF="burer_StopV2";
		PlayerTactLF="burer_StopV2";
		PlayerTactRF="burer_StopV2";
		PlayerTactL="burer_StopV2";
		PlayerTactR="burer_StopV2";
		PlayerTactLB="burer_StopV2";
		PlayerTactRB="burer_StopV2";
		PlayerTactB="burer_StopV2";
		EvasiveLeft="burer_StopV2";
		EvasiveRight="burer_StopV2";
		startSwim="burer_StopV2";
		surfaceSwim="burer_StopV2";
		bottomSwim="burer_StopV2";
		StopSwim="burer_StopV2";
		startDive="burer_StopV2";
		SurfaceDive="burer_StopV2";
		BottomDive="burer_StopV2";
		StopDive="burer_StopV2";
		Down="burer_StopV2";
		Up="burer_StopV2";
		PlayerStand="burer_StopV2";
		PlayerCrouch="burer_StopV2";
		PlayerProne="burer_StopV2";
		Lying="burer_StopV2";
		Stand="burer_StopV2";
		Combat="burer_StopV2";
		Crouch="burer_StopV2";
		CanNotMove="burer_StopV2";
		Civil="burer_StopV2";
		CivilLying="burer_StopV2";
		FireNotPossible="burer_StopV2";
		Die="burer_StopV2";
		Unconscious="burer_StopV2";
		WeaponOn="burer_StopV2";
		WeaponOff="burer_StopV2";
		Default="burer_StopV2";
		JumpOff="burer_StopV2";
		StrokeFist="burer_StopV2";
		StrokeGun="burer_StopV2";
		SitDown="burer_StopV2";
		Salute="burer_StopV2";
		saluteOff="burer_StopV2";
		GetOver="burer_StopV2";
		Diary="burer_StopV2";
		Surrender="burer_StopV2";
		Gear="burer_StopV2";
		BinocOn="burer_StopV2";
		BinocOff="burer_StopV2";
		PutDown="burer_StopV2";
		PutDownEnd="burer_StopV2";
		Medic="burer_StopV2";
		MedicOther="burer_StopV2";
		Treated="burer_StopV2";
		LadderOnDown="burer_StopV2";
		LadderOnUp="burer_StopV2";
		LadderOff="burer_StopV2";
		LadderOffTop="burer_StopV2";
		LadderOffBottom="burer_StopV2";
		GetInLow="burer_StopV2";
		GetInMedium="burer_StopV2";
		GetInHigh="burer_StopV2";
		GetInVertical="burer_StopV2";
		GetInSDV="burer_StopV2";
		GetInHeli_Attack_01Pilot="burer_StopV2";
		GetInHeli_Attack_01Gunner="burer_StopV2";
		GetInHelicopterCargo="burer_StopV2";
		GetInMRAP_01="burer_StopV2";
		GetInMRAP_01_cargo="burer_StopV2";
		GetOutMRAP_01="burer_StopV2";
		GetOutMRAP_01_cargo="burer_StopV2";
		GetOutHelicopterCargo="burer_StopV2";
		GetOutLow="burer_StopV2";
		GetOutMedium="burer_StopV2";
		GetOutHigh="burer_StopV2";
		GetOutHighZamak="burer_StopV2";
		GetOutHighHemtt="burer_StopV2";
		GetOutSDV="burer_StopV2";
		GetOutHeli_Attack_01Pilot="burer_StopV2";
		GetOutHeli_Attack_01Gunner="burer_StopV2";
		GetInBoat="burer_StopV2";
		GetOutBoat="burer_StopV2";
		TakeFlag="burer_StopV2";
		HandGunOn="burer_StopV2";
		gestureAttack="burer_StopV2";
		gestureGo="burer_StopV2";
		gestureGoB="burer_StopV2";
		gestureFreeze="burer_StopV2";
		gesturePoint="burer_StopV2";
		gestureCeaseFire="burer_StopV2";
		gestureCover="burer_StopV2";
		gestureUp="burer_StopV2";
		gestureNo="burer_StopV2";
		gestureYes="burer_StopV2";
		gestureFollow="burer_StopV2";
		gestureAdvance="burer_StopV2";
		gestureHi="burer_StopV2";
		gestureHiB="burer_StopV2";
		gestureHiC="burer_StopV2";
		gestureNod="burer_StopV2";
		GestureSpasm0="burer_StopV2";
		GestureSpasm1="burer_StopV2";
		GestureSpasm2="burer_StopV2";
		GestureSpasm3="burer_StopV2";
		GestureSpasm4="burer_StopV2";
		GestureSpasm5="burer_StopV2";
		GestureSpasm6="burer_StopV2";
		GestureSpasm0weak="burer_StopV2";
		GestureSpasm1weak="burer_StopV2";
		GestureSpasm2weak="burer_StopV2";
		GestureSpasm3weak="burer_StopV2";
		GestureSpasm4weak="burer_StopV2";
		GestureSpasm5weak="burer_StopV2";
		GestureSpasm6weak="burer_StopV2";
		GestureReloadMX="burer_StopV2";
		GestureReloadMXCompact="burer_StopV2";
		GestureReloadMXSniper="burer_StopV2";
		GestureReloadMk20="burer_StopV2";
		GestureReloadMk20UGL="burer_StopV2";
		GestureReloadMXUGL="burer_StopV2";
		GestureReloadTRG="burer_StopV2";
		GestureReloadTRGUGL="burer_StopV2";
		GestureReloadKatiba="burer_StopV2";
		GestureReloadKatibaUGL="burer_StopV2";
		GestureReloadM200="burer_StopV2";
		GestureReloadLRR="burer_StopV2";
		GestureReloadEBR="burer_StopV2";
		GestureReloadM4SSAS="burer_StopV2";
		GestureReloadSMG_02="burer_StopV2";
		GestureReloadSMG_03="burer_StopV2";
		GestureReloadPistol="burer_StopV2";
		GestureReloadPistolHeavy02="burer_StopV2";
		GestureReloadFlaregun="burer_StopV2";
		GestureReloadSMG_01="burer_StopV2";
		GestureReloadSDAR="burer_StopV2";
		GestureReloadDMR="burer_StopV2";
		GestureReloadDMR02="burer_StopV2";
		GestureReloadDMR03="burer_StopV2";
		GestureReloadDMR04="burer_StopV2";
		GestureReloadDMR05="burer_StopV2";
		GestureReloadDMR06="burer_StopV2";
		GestureReloadMMG01="burer_StopV2";
		GestureReloadMMG02="burer_StopV2";
		MountOptic="burer_StopV2";
		DismountOptic="burer_StopV2";
		MountSide="burer_StopV2";
		DismountSide="burer_StopV2";
		GestureMountMuzzle="burer_StopV2";
		GestureDismountMuzzle="burer_StopV2";
		healedStart="burer_StopV2";
		healedStop="burer_StopV2";
		TestDriver="burer_StopV2";
		TestDriverOut="burer_StopV2";
		TestGunner="burer_StopV2";
		Relax="burer_StopV2";
		swimUp="burer_StopV2";
		swimDown="burer_StopV2";
		StartFreefall="burer_StopV2";
		PrimaryWeapon="burer_StopV2";
		SecondaryWeapon="burer_StopV2";
		Binoculars="burer_StopV2";
		FDStart="burer_StopV2";
		Obstructed="burer_StopV2";
	};
	class BlendAnims
	{
		aimingDefault[]={};
		untiltWeaponDefault[]={};
		legsDefault[]={};
		headDefault[]={};
		aimingNo[]={};
		legsNo[]={};
		headNo[]={};
		aimingUpDefault[]={};
	};
	collisionVertexPattern[]=
	{
		"1a",
		"2a",
		"3a",
		"4a",
		"5a",
		"6a",
		"7a",
		"8a",
		"9a",
		"10a",
		"11a",
		"12a",
		"13a",
		"14a",
		"15a",
		"16a",
		"17a",
		"18a",
		"19a",
		"20a",
		"21a",
		"22a",
		"23a",
		"24a",
		"25a",
		"26a",
		"27a",
		"28a",
		"29a",
		"30a",
		"31a",
		"32a",
		"33a",
		"34a"
	};
	collisionGeomCompPattern[]={1};
};
class CfgMovesBurers: CfgMovesAnimalsBase
{
	primaryActionMaps[]=
	{
		"burerActions",
		"NoActions"
	};
	skeletonName="OFP2_ManSkeleton2";
	gestures="CfgGesturesMale";
	extended="CfgExtendedAnimation";
	class States
	{
		class burer_Stop: StandBase
		{
			actions="burerActions";
			duty=-1;
			soundOverride="sprint";
			soundEnabled=1;
			soundEdge[]={0.050000001};
			file="\armst\armst_char\char_mut\burer\anim\burer_iddle.rtm";
			variantsAI[]={};
			variantAfter[]={0,2,3};
			speed=0.25;
			relSpeedMin=0.69999999;
			relSpeedMax=1.1;
			looped=1;
			collisionShape="A3\anims_f\Data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[]=
			{
				"burer_TurnR",
				0.1,
				"burer_TurnL",
				0.1,
				"burer_Sprint",
				0.02,
				"burer_Run",
				0.02,
				"burer_Walk",
				0.2
			};
			InterpolateTo[]=
			{
				"burer_TurnR",
				0.1,
				"burer_Die",
				0.02,
				"burer_TurnL",
				0.1,
				"burer_Sprint",
				0.02,
				"burer_Run",
				0.02,
				"burer_Walk",
				0.2
			};
		};
		class burer_burer_iddle2: burer_Stop
		{
			file="\armst\armst_char\char_mut\burer\anim\burer_iddle2.rtm";
			speed=0.40000001;
			looped=1;
			ConnectTo[]=
			{
				"burer_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"burer_Stop",
				0.02
			};
		};
		class burer_attack1: burer_burer_iddle2
		{
			file="\armst\armst_char\char_mut\burer\anim\burer_attack.rtm";
			speed=1.3;
		};
		class burer_attack2: burer_burer_iddle2
		{
			file="\armst\armst_char\char_mut\burer\anim\burer_attack.rtm";
			speed=0.94999999;
		};
		class burer_attack3: burer_burer_iddle2
		{
			file="\armst\armst_char\char_mut\burer\anim\burer_attack.rtm";
			speed=1.75;
		};
		class burer_TurnL: burer_Stop
		{
			speed=0.2;
			file="\armst\armst_char\char_mut\burer\anim\burer_run.rtm";
			ConnectTo[]=
			{
				"burer_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"burer_Stop",
				0.1
			};
		};
		class burer_TurnR: burer_TurnL
		{
			speed=0.2;
			file="\armst\armst_char\char_mut\burer\anim\burer_run.rtm";
			ConnectTo[]=
			{
				"burer_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"burer_Stop",
				0.1
			};
		};
		class burer_StopV1: burer_Stop
		{
			file="\armst\armst_char\char_mut\burer\anim\burer_iddle.rtm";
			speed=0.25;
			looped=1;
			ConnectTo[]=
			{
				"burer_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"burer_Stop",
				0.02
			};
		};
		class burer_StopV2: burer_Stop
		{
			file="\armst\armst_char\char_mut\burer\anim\burer_iddle.rtm";
			speed=0.2;
			looped=1;
			ConnectTo[]=
			{
				"burer_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"burer_Stop",
				0.02
			};
		};
		class burer_eat: burer_Stop
		{
			file="\armst\armst_char\char_mut\burer\anim\burer_iddle2.rtm";
			speed=0.40000001;
			looped=1;
			ConnectTo[]=
			{
				"burer_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"burer_Stop",
				0.02
			};
		};
		class burer_Sprint: burer_Stop
		{
			actions="burerSprint";
			file="\armst\armst_char\char_mut\burer\anim\burer_run.rtm";
			speed=0.5;
			duty=0.5;
			soundOverride="sprint";
			soundEnabled=1;
			soundEdge[]={0.050000001};
			ConnectTo[]=
			{
				"burer_Stop",
				0.02,
				"burer_Run",
				0.02,
				"burer_Walk",
				0.2
			};
			InterpolateTo[]=
			{
				"burer_Die",
				0.02,
				"burer_Stop",
				0.02,
				"burer_Run",
				0.02,
				"burer_Walk",
				0.2
			};
		};
		class burer_Run: burer_Stop
		{
			file="\armst\armst_char\char_mut\burer\anim\burer_run.rtm";
			speed=0.5;
			duty=-0.5;
			soundOverride="sprint";
			soundEnabled=1;
			soundEdge[]={0.050000001};
			ConnectTo[]=
			{
				"burer_Stop",
				0.02,
				"burer_Sprint",
				0.02,
				"burer_Walk",
				0.2
			};
			InterpolateTo[]=
			{
				"burer_Die",
				0.02,
				"burer_Stop",
				0.02,
				"burer_Sprint",
				0.02,
				"burer_Walk",
				0.2
			};
		};
		class burer_Walk: burer_Stop
		{
			duty=-0.69999999;
			speed=0.40000001;
			soundOverride="sprint";
			soundEnabled=1;
			soundEdge[]={0.050000001};
			file="\armst\armst_char\char_mut\burer\anim\burer_run.rtm";
			ConnectTo[]=
			{
				"burer_Stop",
				0.2,
				"burer_Sprint",
				0.2,
				"burer_Run",
				0.2
			};
			InterpolateTo[]=
			{
				"burer_Die",
				0.02,
				"burer_Stop",
				0.2,
				"burer_Sprint",
				0.2,
				"burer_Run",
				0.2
			};
		};
		class burer_Die: DefaultDie
		{
			file="\armst\armst_char\char_mut\burer\anim\dead.rtm";
			speed=0.625;
			looped=0;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
			ragdoll=1;
			headBobMode=4;
			headBobStrength=-1;
			disableWeapons=1;
			disableWeaponsLong=1;
		};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			turnSpeed=8;
			limitFast=5.5;
			useFastMove=0;
			upDegree=0;
		};
		class burerActions: NoActions
		{
			Stop="burer_Stop";
			StopRelaxed="burer_StopV2";
			TurnL="burer_TurnL";
			TurnR="burer_TurnR";
			TurnLRelaxed="burer_TurnL";
			TurnRRelaxed="burer_TurnR";
			Default="burer_StopV1";
			JumpOff="burer_Run";
			WalkF="burer_Walk";
			SlowF="burer_Run";
			FastF="burer_Sprint";
			EvasiveForward="burer_Sprint";
			Down="burer_StopV1";
			Up="burer_Run";
			PlayerStand="burer_Run";
			PlayerProne="burer_Run";
			PlayerCrouch="burer_StopV1";
			Crouch="burer_StopV1";
			Lying="burer_StopV2";
			Stand="burer_Run";
			Combat="burer_Sprint";
			CanNotMove="burer_StopV2";
			Civil="burer_Run";
			CivilLying="burer_StopV2";
			FireNotPossible="burer_Run";
			Die="burer_Die";
			turnSpeed=1;
			limitFast=1.5;
			useFastMove=0;
			upDegree="ManPosNoWeapon";
			StartSwim="burer_Die";
		};
		class burerSprint: burerActions
		{
			Die="burer_Die";
			TurnL="burer_TurnL";
			TurnR="burer_TurnR";
			TurnLRelaxed="burer_TurnL";
			TurnRRelaxed="burer_TurnR";
			turnSpeed=10;
			limitFast=1.5;
			useFastMove=1;
		};
	};
	class Interpolations
	{
	};
	transitionsInterpolated[]={};
	transitionsSimple[]={};
	transitionsDisabled[]={};
	class BlendAnims: BlendAnims
	{
		aimingDefault[]={};
		untiltWeaponDefault[]={};
		legsDefault[]={};
		headDefault[]={};
		aimingNo[]={};
		legsNo[]={};
		headNo[]={};
		aimingUpDefault[]={};
	};
};
