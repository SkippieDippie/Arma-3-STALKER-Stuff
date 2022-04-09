class CfgPatches
{
	class armst_poltergeist_anim
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.02;
		requiredAddons[]={};
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
		AdjustF="poltergeist_Die";
		AdjustB="poltergeist_Die";
		AdjustL="poltergeist_Die";
		AdjustR="poltergeist_Die";
		AdjustLF="poltergeist_Die";
		AdjustLB="poltergeist_Die";
		AdjustRB="poltergeist_Die";
		AdjustRF="poltergeist_Die";
		dooraction="poltergeist_Die";
		GestureLegPush="poltergeist_Die";
		agonyStart="poltergeist_Die";
		agonyStop="poltergeist_Die";
		medicStop="poltergeist_Die";
		medicStart="poltergeist_Die";
		medicStartUp="poltergeist_Die";
		medicStartRightSide="poltergeist_Die";
		GestureAgonyCargo="poltergeist_Die";
		grabCarry="poltergeist_Die";
		grabCarried="poltergeist_Die";
		grabDrag="poltergeist_Die";
		grabDragged="poltergeist_Die";
		carriedStill="poltergeist_Die";
		released="poltergeist_Die";
		releasedBad="poltergeist_Die";
		Stop="poltergeist_Die";
		StopRelaxed="poltergeist_Die";
		TurnL="poltergeist_Die";
		TurnR="poltergeist_Die";
		TurnLRelaxed="poltergeist_Die";
		TurnRRelaxed="poltergeist_Die";
		ReloadMagazine="poltergeist_Die";
		reloadGM6="poltergeist_Die";
		ReloadMGun="poltergeist_Die";
		ReloadRPG="poltergeist_Die";
		ReloadMortar="poltergeist_Die";
		ThrowPrepare="poltergeist_Die";
		ThrowGrenade="poltergeist_Die";
		WalkF="poltergeist_Die";
		WalkLF="poltergeist_Die";
		WalkRF="poltergeist_Die";
		WalkL="poltergeist_Die";
		WalkR="poltergeist_Die";
		WalkLB="poltergeist_Die";
		WalkRB="poltergeist_Die";
		WalkB="poltergeist_Die";
		PlayerWalkF="poltergeist_Die";
		PlayerWalkLF="poltergeist_Die";
		PlayerWalkRF="poltergeist_Die";
		PlayerWalkL="poltergeist_Die";
		PlayerWalkR="poltergeist_Die";
		PlayerWalkLB="poltergeist_Die";
		PlayerWalkRB="poltergeist_Die";
		PlayerWalkB="poltergeist_Die";
		SlowF="poltergeist_Die";
		SlowLF="poltergeist_Die";
		SlowRF="poltergeist_Die";
		SlowL="poltergeist_Die";
		SlowR="poltergeist_Die";
		SlowLB="poltergeist_Die";
		SlowRB="poltergeist_Die";
		SlowB="poltergeist_Die";
		PlayerSlowF="poltergeist_Die";
		PlayerSlowLF="poltergeist_Die";
		PlayerSlowRF="poltergeist_Die";
		PlayerSlowL="poltergeist_Die";
		PlayerSlowR="poltergeist_Die";
		PlayerSlowLB="poltergeist_Die";
		PlayerSlowRB="poltergeist_Die";
		PlayerSlowB="poltergeist_Die";
		FastF="poltergeist_Die";
		FastLF="poltergeist_Die";
		FastRF="poltergeist_Die";
		FastL="poltergeist_Die";
		FastR="poltergeist_Die";
		FastLB="poltergeist_Die";
		FastRB="poltergeist_Die";
		FastB="poltergeist_Die";
		TactF="poltergeist_Die";
		TactLF="poltergeist_Die";
		TactRF="poltergeist_Die";
		TactL="poltergeist_Die";
		TactR="poltergeist_Die";
		TactLB="poltergeist_Die";
		TactRB="poltergeist_Die";
		TactB="poltergeist_Die";
		PlayerTactF="poltergeist_Die";
		PlayerTactLF="poltergeist_Die";
		PlayerTactRF="poltergeist_Die";
		PlayerTactL="poltergeist_Die";
		PlayerTactR="poltergeist_Die";
		PlayerTactLB="poltergeist_Die";
		PlayerTactRB="poltergeist_Die";
		PlayerTactB="poltergeist_Die";
		EvasiveLeft="poltergeist_Die";
		EvasiveRight="poltergeist_Die";
		startSwim="poltergeist_Die";
		surfaceSwim="poltergeist_Die";
		bottomSwim="poltergeist_Die";
		StopSwim="poltergeist_Die";
		startDive="poltergeist_Die";
		SurfaceDive="poltergeist_Die";
		BottomDive="poltergeist_Die";
		StopDive="poltergeist_Die";
		Down="poltergeist_Die";
		Up="poltergeist_Die";
		PlayerStand="poltergeist_Die";
		PlayerCrouch="poltergeist_Die";
		PlayerProne="poltergeist_Die";
		Lying="poltergeist_Die";
		Stand="poltergeist_Die";
		Combat="poltergeist_Die";
		Crouch="poltergeist_Die";
		CanNotMove="poltergeist_Die";
		Civil="poltergeist_Die";
		CivilLying="poltergeist_Die";
		FireNotPossible="poltergeist_Die";
		Die="poltergeist_Die";
		Unconscious="poltergeist_Die";
		WeaponOn="poltergeist_Die";
		WeaponOff="poltergeist_Die";
		Default="poltergeist_Die";
		JumpOff="poltergeist_Die";
		StrokeFist="poltergeist_Die";
		StrokeGun="poltergeist_Die";
		SitDown="poltergeist_Die";
		Salute="poltergeist_Die";
		saluteOff="poltergeist_Die";
		GetOver="poltergeist_Die";
		Diary="poltergeist_Die";
		Surrender="poltergeist_Die";
		Gear="poltergeist_Die";
		BinocOn="poltergeist_Die";
		BinocOff="poltergeist_Die";
		PutDown="poltergeist_Die";
		PutDownEnd="poltergeist_Die";
		Medic="poltergeist_Die";
		MedicOther="poltergeist_Die";
		Treated="poltergeist_Die";
		LadderOnDown="poltergeist_Die";
		LadderOnUp="poltergeist_Die";
		LadderOff="poltergeist_Die";
		LadderOffTop="poltergeist_Die";
		LadderOffBottom="poltergeist_Die";
		GetInLow="poltergeist_Die";
		GetInMedium="poltergeist_Die";
		GetInHigh="poltergeist_Die";
		GetInVertical="poltergeist_Die";
		GetInSDV="poltergeist_Die";
		GetInHeli_Attack_01Pilot="poltergeist_Die";
		GetInHeli_Attack_01Gunner="poltergeist_Die";
		GetInHelicopterCargo="poltergeist_Die";
		GetInMRAP_01="poltergeist_Die";
		GetInMRAP_01_cargo="poltergeist_Die";
		GetOutMRAP_01="poltergeist_Die";
		GetOutMRAP_01_cargo="poltergeist_Die";
		GetOutHelicopterCargo="poltergeist_Die";
		GetOutLow="poltergeist_Die";
		GetOutMedium="poltergeist_Die";
		GetOutHigh="poltergeist_Die";
		GetOutHighZamak="poltergeist_Die";
		GetOutHighHemtt="poltergeist_Die";
		GetOutSDV="poltergeist_Die";
		GetOutHeli_Attack_01Pilot="poltergeist_Die";
		GetOutHeli_Attack_01Gunner="poltergeist_Die";
		GetInBoat="poltergeist_Die";
		GetOutBoat="poltergeist_Die";
		TakeFlag="poltergeist_Die";
		HandGunOn="poltergeist_Die";
		gestureAttack="poltergeist_Die";
		gestureGo="poltergeist_Die";
		gestureGoB="poltergeist_Die";
		gestureFreeze="poltergeist_Die";
		gesturePoint="poltergeist_Die";
		gestureCeaseFire="poltergeist_Die";
		gestureCover="poltergeist_Die";
		gestureUp="poltergeist_Die";
		gestureNo="poltergeist_Die";
		gestureYes="poltergeist_Die";
		gestureFollow="poltergeist_Die";
		gestureAdvance="poltergeist_Die";
		gestureHi="poltergeist_Die";
		gestureHiB="poltergeist_Die";
		gestureHiC="poltergeist_Die";
		gestureNod="poltergeist_Die";
		GestureSpasm0="poltergeist_Die";
		GestureSpasm1="poltergeist_Die";
		GestureSpasm2="poltergeist_Die";
		GestureSpasm3="poltergeist_Die";
		GestureSpasm4="poltergeist_Die";
		GestureSpasm5="poltergeist_Die";
		GestureSpasm6="poltergeist_Die";
		GestureSpasm0weak="poltergeist_Die";
		GestureSpasm1weak="poltergeist_Die";
		GestureSpasm2weak="poltergeist_Die";
		GestureSpasm3weak="poltergeist_Die";
		GestureSpasm4weak="poltergeist_Die";
		GestureSpasm5weak="poltergeist_Die";
		GestureSpasm6weak="poltergeist_Die";
		GestureReloadMX="poltergeist_Die";
		GestureReloadMXCompact="poltergeist_Die";
		GestureReloadMXSniper="poltergeist_Die";
		GestureReloadMk20="poltergeist_Die";
		GestureReloadMk20UGL="poltergeist_Die";
		GestureReloadMXUGL="poltergeist_Die";
		GestureReloadTRG="poltergeist_Die";
		GestureReloadTRGUGL="poltergeist_Die";
		GestureReloadKatiba="poltergeist_Die";
		GestureReloadKatibaUGL="poltergeist_Die";
		GestureReloadM200="poltergeist_Die";
		GestureReloadLRR="poltergeist_Die";
		GestureReloadEBR="poltergeist_Die";
		GestureReloadM4SSAS="poltergeist_Die";
		GestureReloadSMG_02="poltergeist_Die";
		GestureReloadSMG_03="poltergeist_Die";
		GestureReloadPistol="poltergeist_Die";
		GestureReloadPistolHeavy02="poltergeist_Die";
		GestureReloadFlaregun="poltergeist_Die";
		GestureReloadSMG_01="poltergeist_Die";
		GestureReloadSDAR="poltergeist_Die";
		GestureReloadDMR="poltergeist_Die";
		GestureReloadDMR02="poltergeist_Die";
		GestureReloadDMR03="poltergeist_Die";
		GestureReloadDMR04="poltergeist_Die";
		GestureReloadDMR05="poltergeist_Die";
		GestureReloadDMR06="poltergeist_Die";
		GestureReloadMMG01="poltergeist_Die";
		GestureReloadMMG02="poltergeist_Die";
		MountOptic="poltergeist_Die";
		DismountOptic="poltergeist_Die";
		MountSide="poltergeist_Die";
		DismountSide="poltergeist_Die";
		GestureMountMuzzle="poltergeist_Die";
		GestureDismountMuzzle="poltergeist_Die";
		healedStart="poltergeist_Die";
		healedStop="poltergeist_Die";
		TestDriver="poltergeist_Die";
		TestDriverOut="poltergeist_Die";
		TestGunner="poltergeist_Die";
		Relax="poltergeist_Die";
		swimUp="poltergeist_Die";
		swimDown="poltergeist_Die";
		StartFreefall="poltergeist_Die";
		PrimaryWeapon="poltergeist_Die";
		SecondaryWeapon="poltergeist_Die";
		Binoculars="poltergeist_Die";
		FDStart="poltergeist_Die";
		Obstructed="poltergeist_Die";
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
class CfgMovespoltergeist: CfgMovesAnimalsBase
{
	primaryActionMaps[]=
	{
		"poltergeistActions",
		"NoActions"
	};
	skeletonName="poltergeistSkeleton";
	gestures="CfgGesturesMale";
	extended="CfgExtendedAnimation";
	class States
	{
		class poltergeist_Stop: StandBase
		{
			actions="poltergeistActions";
			duty=-1;
			file="\armst\armst_char\char_mut\poltergeist_old\anim\idle1.rtm";
			variantsAI[]={};
			variantAfter[]={0,2,3};
			speed=0.30000001;
			relSpeedMin=0.69999999;
			relSpeedMax=1.1;
			looped=1;
			collisionShape="A3\anims_f\Data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[]=
			{
				"poltergeist_TurnR",
				0.1,
				"poltergeist_TurnL",
				0.1,
				"poltergeist_Sprint",
				0.02,
				"poltergeist_Run",
				0.02,
				"poltergeist_Walk",
				0.2
			};
			InterpolateTo[]=
			{
				"poltergeist_TurnR",
				0.1,
				"poltergeist_Die",
				0.02,
				"poltergeist_TurnL",
				0.1,
				"poltergeist_Sprint",
				0.02,
				"poltergeist_Run",
				0.02,
				"poltergeist_Walk",
				0.2
			};
		};
		class poltergeist_angry: poltergeist_Stop
		{
			file="\armst\armst_char\char_mut\poltergeist_old\anim\angry.rtm";
			speed=0.44999999;
			looped=1;
			ConnectTo[]=
			{
				"poltergeist_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"poltergeist_Stop",
				0.02
			};
		};
		class poltergeist_attack1: poltergeist_angry
		{
			file="\armst\armst_char\char_mut\poltergeist_old\anim\attack1.rtm";
			speed=1;
		};
		class poltergeist_attack2: poltergeist_angry
		{
			file="\armst\armst_char\char_mut\poltergeist_old\anim\attack2.rtm";
			speed=1;
		};
		class poltergeist_Eat: poltergeist_angry
		{
			file="\armst\armst_char\char_mut\poltergeist_old\anim\eat.rtm";
			speed=0.5;
		};
		class poltergeist_TurnL: poltergeist_Stop
		{
			file="\armst\armst_char\char_mut\poltergeist_old\anim\walk.rtm";
			speed=0.5;
			ConnectTo[]=
			{
				"poltergeist_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"poltergeist_Stop",
				0.1
			};
		};
		class poltergeist_TurnR: poltergeist_TurnL
		{
			file="\armst\armst_char\char_mut\poltergeist_old\anim\walk.rtm";
			speed=0.5;
			ConnectTo[]=
			{
				"poltergeist_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"poltergeist_Stop",
				0.1
			};
		};
		class poltergeist_StopV1: poltergeist_Stop
		{
			file="\armst\armst_char\char_mut\poltergeist_old\anim\idle2.rtm";
			speed=0.25;
			looped=1;
			ConnectTo[]=
			{
				"poltergeist_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"poltergeist_Stop",
				0.02
			};
		};
		class poltergeist_StopV2: poltergeist_Stop
		{
			file="\armst\armst_char\char_mut\poltergeist_old\anim\idle3.rtm";
			speed=0.5;
			looped=1;
			ConnectTo[]=
			{
				"poltergeist_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"poltergeist_Stop",
				0.02
			};
		};
		class poltergeist_Sprint: poltergeist_Stop
		{
			actions="poltergeistSprint";
			file="\armst\armst_char\char_mut\poltergeist_old\anim\walk.rtm";
			speed=0.5;
			duty=0.5;
			soundOverride="sprint";
			soundEnabled=1;
			soundEdge[]={0.5,1};
			ConnectTo[]=
			{
				"poltergeist_Stop",
				0.02,
				"poltergeist_Run",
				0.02,
				"poltergeist_Walk",
				0.2
			};
			InterpolateTo[]=
			{
				"poltergeist_Die",
				0.02,
				"poltergeist_Stop",
				0.02,
				"poltergeist_Run",
				0.02,
				"poltergeist_Walk",
				0.2
			};
		};
		class poltergeist_Run: poltergeist_Stop
		{
			file="\armst\armst_char\char_mut\poltergeist_old\anim\walk.rtm";
			speed=0.5;
			duty=-0.5;
			soundOverride="run";
			soundEnabled=1;
			soundEdge[]={0.5,1};
			ConnectTo[]=
			{
				"poltergeist_Stop",
				0.02,
				"poltergeist_Sprint",
				0.02,
				"poltergeist_Walk",
				0.2
			};
			InterpolateTo[]=
			{
				"poltergeist_Die",
				0.02,
				"poltergeist_Stop",
				0.02,
				"poltergeist_Sprint",
				0.02,
				"poltergeist_Walk",
				0.2
			};
		};
		class poltergeist_Walk: poltergeist_Stop
		{
			duty=-0.69999999;
			file="\armst\armst_char\char_mut\poltergeist_old\anim\walk.rtm";
			speed=0.5;
			soundOverride="walk";
			soundEnabled=1;
			soundEdge[]={0.5,1};
			ConnectTo[]=
			{
				"poltergeist_Stop",
				0.2,
				"poltergeist_Sprint",
				0.2,
				"poltergeist_Run",
				0.2
			};
			InterpolateTo[]=
			{
				"poltergeist_Die",
				0.02,
				"poltergeist_Stop",
				0.2,
				"poltergeist_Sprint",
				0.2,
				"poltergeist_Run",
				0.2
			};
		};
		class poltergeist_Die: DefaultDie
		{
			file="\armst\armst_char\char_mut\poltergeist_old\anim\dead.rtm";
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
		class poltergeistActions: NoActions
		{
			Stop="poltergeist_Stop";
			StopRelaxed="poltergeist_StopV2";
			TurnL="poltergeist_TurnL";
			TurnR="poltergeist_TurnR";
			TurnLRelaxed="poltergeist_TurnL";
			TurnRRelaxed="poltergeist_TurnR";
			Default="poltergeist_StopV1";
			JumpOff="poltergeist_Run";
			WalkF="poltergeist_Walk";
			SlowF="poltergeist_Run";
			FastF="poltergeist_Sprint";
			EvasiveForward="poltergeist_Sprint";
			Down="poltergeist_StopV1";
			Up="poltergeist_Run";
			PlayerStand="poltergeist_Run";
			PlayerProne="poltergeist_Run";
			PlayerCrouch="poltergeist_StopV1";
			Crouch="poltergeist_StopV1";
			Lying="poltergeist_StopV2";
			Stand="poltergeist_Run";
			Combat="poltergeist_Sprint";
			CanNotMove="poltergeist_StopV2";
			Civil="poltergeist_Run";
			CivilLying="poltergeist_StopV2";
			FireNotPossible="poltergeist_Run";
			Die="poltergeist_Die";
			turnSpeed=1;
			limitFast=1.5;
			useFastMove=0;
			upDegree="ManPosNoWeapon";
			StartSwim="poltergeist_Die";
		};
		class poltergeistSprint: poltergeistActions
		{
			Die="poltergeist_Die";
			TurnL="poltergeist_TurnL";
			TurnR="poltergeist_TurnR";
			TurnLRelaxed="poltergeist_TurnL";
			TurnRRelaxed="poltergeist_TurnR";
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
