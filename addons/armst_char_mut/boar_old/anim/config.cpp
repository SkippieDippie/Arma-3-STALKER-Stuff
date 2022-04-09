#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

class CfgPatches
	{
	class armst_boar_anim2 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {};
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
		canReload = 1;
		weaponLowered = 0;
		weaponObstructed = 0;
		canBlendStep = 1;
		useIdles = 1;
		adjstance = "m";
		leaningFactorBeg=1;
		leaningFactorEnd=1;
	};
	class DefaultDie: Default
	{
		aiming="aimingNo";
		legs="legsNo";
		head="headNo";
		disableWeapons=1;
		canReload = 1;
		weaponLowered = 0;
		weaponObstructed = 0;
		canBlendStep = 1;
		useIdles = 1;
		adjstance = "m";
		interpolationRestart=1;
		soundOverride="fallbody";
		soundEdge[]={0.44999999};
		soundEnabled=1;
	};
	class ManActions
	{
		AdjustF = "boar_StopV2";
		AdjustB = "boar_StopV2";
		AdjustL = "boar_StopV2";
		AdjustR = "boar_StopV2";
		AdjustLF = "boar_StopV2";
		AdjustLB = "boar_StopV2";
		AdjustRB = "boar_StopV2";
		AdjustRF = "boar_StopV2";
		dooraction = "boar_StopV2";
		GestureLegPush = "boar_StopV2";
		agonyStart = "boar_StopV2";
		agonyStop = "boar_StopV2";
		medicStop = "boar_StopV2";
		medicStart = "boar_StopV2";
		medicStartUp = "boar_StopV2";
		medicStartRightSide = "boar_StopV2";
		GestureAgonyCargo = "boar_StopV2";
		grabCarry = "boar_StopV2";
		grabCarried = "boar_StopV2";
		grabDrag = "boar_StopV2";
		grabDragged = "boar_StopV2";
		carriedStill = "boar_StopV2";
		released = "boar_StopV2";
		releasedBad = "boar_StopV2";
		Stop = "boar_StopV2";
		StopRelaxed = "boar_StopV2";
		TurnL = "boar_StopV2";
		TurnR = "boar_StopV2";
		TurnLRelaxed = "boar_StopV2";
		TurnRRelaxed = "boar_StopV2";
		ReloadMagazine = "boar_StopV2";
		reloadGM6 = "boar_StopV2";
		ReloadMGun = "boar_StopV2";
		ReloadRPG = "boar_StopV2";
		ReloadMortar = "boar_StopV2";
		ThrowPrepare = "boar_StopV2";
		ThrowGrenade = "boar_StopV2";
		WalkF = "boar_StopV2";
		WalkLF = "boar_StopV2";
		WalkRF = "boar_StopV2";
		WalkL = "boar_StopV2";
		WalkR = "boar_StopV2";
		WalkLB = "boar_StopV2";
		WalkRB = "boar_StopV2";
		WalkB = "boar_StopV2";
		PlayerWalkF = "boar_StopV2";
		PlayerWalkLF = "boar_StopV2";
		PlayerWalkRF = "boar_StopV2";
		PlayerWalkL = "boar_StopV2";
		PlayerWalkR = "boar_StopV2";
		PlayerWalkLB = "boar_StopV2";
		PlayerWalkRB = "boar_StopV2";
		PlayerWalkB = "boar_StopV2";
		SlowF = "boar_StopV2";
		SlowLF = "boar_StopV2";
		SlowRF = "boar_StopV2";
		SlowL = "boar_StopV2";
		SlowR = "boar_StopV2";
		SlowLB = "boar_StopV2";
		SlowRB = "boar_StopV2";
		SlowB = "boar_StopV2";
		PlayerSlowF = "boar_StopV2";
		PlayerSlowLF = "boar_StopV2";
		PlayerSlowRF = "boar_StopV2";
		PlayerSlowL = "boar_StopV2";
		PlayerSlowR = "boar_StopV2";
		PlayerSlowLB = "boar_StopV2";
		PlayerSlowRB = "boar_StopV2";
		PlayerSlowB = "boar_StopV2";
		FastF = "boar_StopV2";
		FastLF = "boar_StopV2";
		FastRF = "boar_StopV2";
		FastL = "boar_StopV2";
		FastR = "boar_StopV2";
		FastLB = "boar_StopV2";
		FastRB = "boar_StopV2";
		FastB = "boar_StopV2";
		TactF = "boar_StopV2";
		TactLF = "boar_StopV2";
		TactRF = "boar_StopV2";
		TactL = "boar_StopV2";
		TactR = "boar_StopV2";
		TactLB = "boar_StopV2";
		TactRB = "boar_StopV2";
		TactB = "boar_StopV2";
		PlayerTactF = "boar_StopV2";
		PlayerTactLF = "boar_StopV2";
		PlayerTactRF = "boar_StopV2";
		PlayerTactL = "boar_StopV2";
		PlayerTactR = "boar_StopV2";
		PlayerTactLB = "boar_StopV2";
		PlayerTactRB = "boar_StopV2";
		PlayerTactB = "boar_StopV2";
		EvasiveLeft = "boar_StopV2";
		EvasiveRight = "boar_StopV2";
		startSwim = "boar_StopV2";
		surfaceSwim = "boar_StopV2";
		bottomSwim = "boar_StopV2";
		StopSwim = "boar_StopV2";
		startDive = "boar_StopV2";
		SurfaceDive = "boar_StopV2";
		BottomDive = "boar_StopV2";
		StopDive = "boar_StopV2";
		Down = "boar_StopV2";
		Up = "boar_StopV2";
		PlayerStand = "boar_StopV2";
		PlayerCrouch = "boar_StopV2";
		PlayerProne = "boar_StopV2";
		Lying = "boar_StopV2";
		Stand = "boar_StopV2";
		Combat = "boar_StopV2";
		Crouch = "boar_StopV2";
		CanNotMove = "boar_StopV2";
		Civil = "boar_StopV2";
		CivilLying = "boar_StopV2";
		FireNotPossible = "boar_StopV2";
		Die = "boar_StopV2";
		Unconscious = "boar_StopV2";
		WeaponOn = "boar_StopV2";
		WeaponOff = "boar_StopV2";
		Default = "boar_StopV2";
		JumpOff = "boar_StopV2";
		StrokeFist = "boar_StopV2";
		StrokeGun = "boar_StopV2";
		SitDown = "boar_StopV2";
		Salute = "boar_StopV2";
		saluteOff = "boar_StopV2";
		GetOver = "boar_StopV2";
		Diary = "boar_StopV2";
		Surrender = "boar_StopV2";
		Gear = "boar_StopV2";
		BinocOn = "boar_StopV2";
		BinocOff = "boar_StopV2";
		PutDown = "boar_StopV2";
		PutDownEnd = "boar_StopV2";
		Medic = "boar_StopV2";
		MedicOther = "boar_StopV2";
		Treated = "boar_StopV2";
		LadderOnDown = "boar_StopV2";
		LadderOnUp = "boar_StopV2";
		LadderOff = "boar_StopV2";
		LadderOffTop = "boar_StopV2";
		LadderOffBottom = "boar_StopV2";
		GetInLow = "boar_StopV2";
		GetInMedium = "boar_StopV2";
		GetInHigh = "boar_StopV2";
		GetInVertical = "boar_StopV2";
		GetInSDV = "boar_StopV2";
		GetInHeli_Attack_01Pilot = "boar_StopV2";
		GetInHeli_Attack_01Gunner = "boar_StopV2";
		GetInHelicopterCargo = "boar_StopV2";
		GetInMRAP_01 = "boar_StopV2";
		GetInMRAP_01_cargo = "boar_StopV2";
		GetOutMRAP_01 = "boar_StopV2";
		GetOutMRAP_01_cargo = "boar_StopV2";
		GetOutHelicopterCargo = "boar_StopV2";
		GetOutLow = "boar_StopV2";
		GetOutMedium = "boar_StopV2";
		GetOutHigh = "boar_StopV2";
		GetOutHighZamak = "boar_StopV2";
		GetOutHighHemtt = "boar_StopV2";
		GetOutSDV = "boar_StopV2";
		GetOutHeli_Attack_01Pilot = "boar_StopV2";
		GetOutHeli_Attack_01Gunner = "boar_StopV2";
		GetInBoat = "boar_StopV2";
		GetOutBoat = "boar_StopV2";
		TakeFlag = "boar_StopV2";
		HandGunOn = "boar_StopV2";
		gestureAttack = "boar_StopV2";
		gestureGo = "boar_StopV2";
		gestureGoB = "boar_StopV2";
		gestureFreeze = "boar_StopV2";
		gesturePoint = "boar_StopV2";
		gestureCeaseFire = "boar_StopV2";
		gestureCover = "boar_StopV2";
		gestureUp = "boar_StopV2";
		gestureNo = "boar_StopV2";
		gestureYes = "boar_StopV2";
		gestureFollow = "boar_StopV2";
		gestureAdvance = "boar_StopV2";
		gestureHi = "boar_StopV2";
		gestureHiB = "boar_StopV2";
		gestureHiC = "boar_StopV2";
		gestureNod = "boar_StopV2";
		GestureSpasm0 = "boar_StopV2";
		GestureSpasm1 = "boar_StopV2";
		GestureSpasm2 = "boar_StopV2";
		GestureSpasm3 = "boar_StopV2";
		GestureSpasm4 = "boar_StopV2";
		GestureSpasm5 = "boar_StopV2";
		GestureSpasm6 = "boar_StopV2";
		GestureSpasm0weak = "boar_StopV2";
		GestureSpasm1weak = "boar_StopV2";
		GestureSpasm2weak = "boar_StopV2";
		GestureSpasm3weak = "boar_StopV2";
		GestureSpasm4weak = "boar_StopV2";
		GestureSpasm5weak = "boar_StopV2";
		GestureSpasm6weak = "boar_StopV2";
		GestureReloadMX = "boar_StopV2";
		GestureReloadMXCompact = "boar_StopV2";
		GestureReloadMXSniper = "boar_StopV2";
		GestureReloadMk20 = "boar_StopV2";
		GestureReloadMk20UGL = "boar_StopV2";
		GestureReloadMXUGL = "boar_StopV2";
		GestureReloadTRG = "boar_StopV2";
		GestureReloadTRGUGL = "boar_StopV2";
		GestureReloadKatiba = "boar_StopV2";
		GestureReloadKatibaUGL = "boar_StopV2";
		GestureReloadM200 = "boar_StopV2";
		GestureReloadLRR = "boar_StopV2";
		GestureReloadEBR = "boar_StopV2";
		GestureReloadM4SSAS = "boar_StopV2";
		GestureReloadSMG_02 = "boar_StopV2";
		GestureReloadSMG_03 = "boar_StopV2";
		GestureReloadPistol = "boar_StopV2";
		GestureReloadPistolHeavy02 = "boar_StopV2";
		GestureReloadFlaregun = "boar_StopV2";
		GestureReloadSMG_01 = "boar_StopV2";
		GestureReloadSDAR = "boar_StopV2";
		GestureReloadDMR = "boar_StopV2";
		GestureReloadDMR02 = "boar_StopV2";
		GestureReloadDMR03 = "boar_StopV2";
		GestureReloadDMR04 = "boar_StopV2";
		GestureReloadDMR05 = "boar_StopV2";
		GestureReloadDMR06 = "boar_StopV2";
		GestureReloadMMG01 = "boar_StopV2";
		GestureReloadMMG02 = "boar_StopV2";
		MountOptic = "boar_StopV2";
		DismountOptic = "boar_StopV2";
		MountSide = "boar_StopV2";
		DismountSide = "boar_StopV2";
		GestureMountMuzzle = "boar_StopV2";
		GestureDismountMuzzle = "boar_StopV2";
		healedStart = "boar_StopV2";
		healedStop = "boar_StopV2";
		TestDriver = "boar_StopV2";
		TestDriverOut = "boar_StopV2";
		TestGunner = "boar_StopV2";
		Relax = "boar_StopV2";
		swimUp = "boar_StopV2";
		swimDown = "boar_StopV2";
		StartFreefall = "boar_StopV2";
		PrimaryWeapon = "boar_StopV2";
		SecondaryWeapon = "boar_StopV2";
		Binoculars = "boar_StopV2";
		FDStart = "boar_StopV2";
		Obstructed = "boar_StopV2";
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


class CfgMovesboar3: CfgMovesAnimalsBase
{
	primaryActionMaps[]=
	{
		"boarActions",
		"NoActions"
	};
	skeletonName = "boarSkeleton";
	gestures = "CfgGesturesMale";
	extended = "CfgExtendedAnimation";
	class States
	{
		class boar_Stop: StandBase
		{
			actions="boarActions";
			duty=-1;
			file = "\armst\armst_char\char_mut\boar_old\anim\iddle1.rtm";
			variantsAI[]=
			{};
			variantAfter[]={0,2,3};
			speed = 0.75;
			relSpeedMin=0.69999999;
			relSpeedMax=1.1;
			looped=1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[]=
			{
				"boar_TurnR",
				0.1,
				"boar_TurnL",
				0.1,
				"boar_Sprint",
				0.02,
				"boar_Run",
				0.02,
				"boar_Walk",
				0.2
			};
			InterpolateTo[]=
			{
				"boar_TurnR",
				0.1,
				"boar_Die",
				0.02,
				"boar_TurnL",
				0.1,
				"boar_Sprint",
				0.02,
				"boar_Run",
				0.02,
				"boar_Walk",
				0.2
			};
		};
		class boar_angry: boar_Stop
		{
			file = "\armst\armst_char\char_mut\boar_old\anim\iddle3.rtm";
			speed = 0.25;
			looped=1;			
			ConnectTo[] = {"boar_Stop", 0.1};
			InterpolateTo[] = {"boar_Stop", 0.02};
		};	
		class boar_attack1 : boar_Stop
		{
			file = "\armst\armst_char\char_mut\boar_old\anim\attack1.rtm";
			speed = 0.75;
		};		
		class boar_attack2 : boar_Stop
		{			
			file = "\armst\armst_char\char_mut\boar_old\anim\attack2.rtm";
			speed = 1;

		};	
		class boar_attack3 : boar_Stop
		{			
			file = "\armst\armst_char\char_mut\boar_old\anim\attack3.rtm";
			speed = 1;
		};	
		class boar_attack4 : boar_Stop
		{
			file = "\armst\armst_char\char_mut\boar_old\anim\attack4.rtm";
			speed = 0.75;
		};
		class boar_TurnL: boar_Stop
		{
			file = "\armst\armst_char\char_mut\boar_old\anim\walk.rtm";
			speed = 0.2;
			ConnectTo[]=
			{
				"boar_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"boar_Stop",
				0.1
			};
		};
		class boar_TurnR: boar_TurnL
		{
			file = "\armst\armst_char\char_mut\boar_old\anim\walk.rtm";
			speed = 0.2;
			ConnectTo[]=
			{
				"boar_Stop",
				0.1
			};
			InterpolateTo[]=
			{
				"boar_Stop",
				0.1
			};
		};
		class boar_StopV1: boar_Stop
		{
			file = "\armst\armst_char\char_mut\boar_old\anim\iddle2.rtm";
			speed = 0.2500000;
			looped=1;
			ConnectTo[] = {"boar_Stop", 0.1};
			InterpolateTo[] = {"boar_Stop", 0.02};
		};
		class boar_Sprint: boar_Stop
		{
			actions="boarSprint";
			file = "\armst\armst_char\char_mut\boar_old\anim\run.rtm";
			speed = 1.5;
			duty=0.5;
			ConnectTo[]=
			{
				"boar_Stop",
				0.02,
				"boar_Run",
				0.02,
				"boar_Walk",
				0.2
			};
			InterpolateTo[]=
			{
				"boar_Die",
				0.02,
				"boar_Stop",
				0.02,
				"boar_Run",
				0.02,
				"boar_Walk",
				0.2
			};
		};
		class boar_Run: boar_Stop
		{
			file = "\armst\armst_char\char_mut\boar_old\anim\run.rtm";
			speed = 1.5;
			duty=-0.5;
			ConnectTo[]=
			{
				"boar_Stop",
				0.02,
				"boar_Sprint",
				0.02,
				"boar_Walk",
				0.2
			};
			InterpolateTo[]=
			{
				"boar_Die",
				0.02,
				"boar_Stop",
				0.02,
				"boar_Sprint",
				0.02,
				"boar_Walk",
				0.2
			};
		};
		class boar_Walk: boar_Stop
		{
			duty=-0.69999999;
			file = "\armst\armst_char\char_mut\boar_old\anim\walk.rtm";
			speed = 0.2;
			ConnectTo[]=
			{
				"boar_Stop",
				0.2,
				"boar_Sprint",
				0.2,
				"boar_Run",
				0.2
			};
			InterpolateTo[]=
			{
				"boar_Die",
				0.02,
				"boar_Stop",
				0.2,
				"boar_Sprint",
				0.2,
				"boar_Run",
				0.2
			};
		};
		class boar_Die: DefaultDie
		{
			file = "\armst\armst_char\char_mut\boar_old\anim\dead.rtm";
			speed = 0.625;
			looped = 0;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			ragdoll = 1;
			headBobMode = 4;
			headBobStrength = -1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
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
			stance = "boar_Stop";
		};
		class boarActions: NoActions
		{
			Stop="boar_Stop";
			StopRelaxed="boar_StopV2";
			TurnL="boar_TurnL";
			TurnR="boar_TurnR";
			TurnLRelaxed="boar_TurnL";
			TurnRRelaxed="boar_TurnR";
			Default="boar_StopV1";
			JumpOff="boar_Run";
			WalkF="boar_Walk";
			SlowF="boar_Run";
			FastF="boar_Sprint";
			EvasiveForward="boar_Sprint";
			Down="boar_StopV1";
			Up="boar_Run";
			PlayerStand="boar_Run";
			PlayerProne="boar_Run";
			PlayerCrouch="boar_StopV1";
			Crouch="boar_StopV1";
			Lying="boar_StopV2";
			Stand="boar_Run";
			Combat="boar_Sprint";
			CanNotMove="boar_StopV2";
			Civil="boar_Run";
			CivilLying="boar_StopV2";
			FireNotPossible="boar_Run";
			Die="boar_Die";
			turnSpeed=1;
			limitFast=1.5;
			useFastMove=0;
			upDegree="ManPosNoWeapon";
			StartSwim="boar_Die";
		};
		class boarSprint: boarActions
		{
			Die="boar_Die";
			TurnL="boar_TurnL";
			TurnR="boar_TurnR";
			TurnLRelaxed="boar_TurnL";
			TurnRRelaxed="boar_TurnR";
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
		aimingDefault[]=
		{};
		untiltWeaponDefault[]={};
		legsDefault[]={};
		headDefault[]=
		{};
		aimingNo[]={};
		legsNo[]={};
		headNo[]={};
		aimingUpDefault[]={};
	};
};