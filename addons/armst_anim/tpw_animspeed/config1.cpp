#include "BIS_AddonInfo.hpp"
class CfgPatches
{
class TPW_ANIMSPEED
	{
	units[] = { };
	weapons[] = { };
	requiredAddons[] = {"A3_Anims_F"};
	version = "20190515";
	versionStr = "20190515";
	versionDesc= "TPW ANIMS";
	versionAr[] = {2019,05,15};
	author = "tpw";
	};
};

	
class TPW_ANIMSPEED_Key_Setting 
{
#define run_rifle 0.6 //default 0.685
#define tactical_rifleup 0.7 //default 0.786
#define tactical_jog 1.35 //default 1.55
#define unarmed_walkspeed 0.25 //default 0.35
#define rifledown_walkspeed 0.20 //default 0.3
#define rifleup_walkspeed 0.80 //default 0.85
#define roll_left 0.6 //default 1.1	
#define roll_right 0.7 //default 1.2
};	
	
class CfgMovesMaleSdr
{
	class States
	{	
		// WALK - RIFLE LOWERED
		class AmovPercMstpSlowWrflDnon;
		
		// WALK - RIFLE RAISED
		class AmovPercMstpSrasWrflDnon;
		class AmovPercMwlkSrasWrflDf: AmovPercMstpSrasWrflDnon
		{
			speed=rifleup_walkspeed;//0.85
		};
		
		// TACTICAL PACE - RIFLE RAISED
		class AmovPercMtacSrasWrflDf: AmovPercMwlkSrasWrflDf
		{
			speed=tactical_rifleup;//0.78571397
		};
		
		// WALK, NO WEAPON
		class AidlPercMstpSnonWnonDnon_G0S;
		class AmovPercMwlkSnonWnonDf: AidlPercMstpSnonWnonDnon_G0S
		{
			speed=unarmed_walkspeed;//0.35;
		};
		
		// ROLL LEFT
		class AmovPpneMstpSrasWrflDnon;
		class AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl: AmovPpneMstpSrasWrflDnon
		{
			speed=roll_left;//1.1
		};
		
		// ROLL RIGHT
		class AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr: AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl
		{
			speed=roll_right;//1.2
		};
		
		// STAND TO KNEEL, LAUNCHER RAISED
		class TransAnimBase;
		class AmovPercMstpSrasWlnrDnon_AmovPknlMstpSrasWlnrDnon: TransAnimBase
		{
			speed=1.1;//1.42857;
		};

		// PRONE TO STAND, LAUNCHER RAISED
		class AmovPpneMstpSrasWlnrDnon_AmovPercMstpSrasWlnrDnon: TransAnimBase
		{
			speed=0.35;//0.447761;
		};	
		
		// STAND TO PRONE, LAUNCHER RAISED
		class AmovPercMstpSrasWlnrDnon_AmovPpneMstpSrasWlnrDnon: TransAnimBase
		{
			speed=0.35;//0.52631599;
		};	
		
		// PRONE TO KNEEL, LAUNCHER RAISED
		class AmovPpneMstpSrasWlnrDnon_AmovPknlMstpSrasWlnrDnon: TransAnimBase
		{
			speed=0.6;//0.73170698;
		};
		
		// KNEEL TO STAND, LAUNCHER RAISED
		class AmovPknlMstpSrasWlnrDnon_AmovPercMstpSrasWlnrDnon: TransAnimBase
		{
			speed=0.9;//1.15385;
		};
		
		// STAND TO KNEEL, RIFLE RAISED
		class AmovPknlMstpSrasWrflDnon;
		class AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon: AmovPknlMstpSrasWrflDnon
		{
			speed=-0.6;//-0.44999999;
		};
		
		// STAND TO KNEEL, RIFLE LOWERED
		class AmovPknlMstpSlowWrflDnon;
		class AmovPercMstpSlowWrflDnon_AmovPknlMstpSlowWrflDnon: AmovPknlMstpSlowWrflDnon
		{
			speed=-1; //-0.75;		
		};
		
		// STAND TO PRONE, RIFLE RAISED
		class AmovPercMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon: AmovPpneMstpSrasWrflDnon
		{
			speed=0.55;//0.710527;
		};
		
		// STAND TO PRONE, RIFLE LOWERED
		class AmovPercMstpSlowWrflDnon_AmovPpneMstpSrasWrflDnon: AmovPpneMstpSrasWrflDnon
		{
			speed=-2.0;//-1.4;
		};	

		// KNEEL TO PRONE, RIFLE LOWERED
		class AmovPknlMstpSlowWrflDnon_AmovPpneMstpSrasWrflDnon: AmovPpneMstpSrasWrflDnon
		{
			speed=-1.25;//-1;
		};
		
		// KNEEL TO STAND, RIFLE RAISED
		class AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon: AmovPercMstpSrasWrflDnon
		{
			speed=-0.7;//-0.55000001;
		};	

		// KNEEL TO PRONE, RIFLE RAISED
		class AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon: AmovPpneMstpSrasWrflDnon
		{
			speed=0.7;//0.82653099;
		};
		
		// PRONE TO STAND, RIFLE RAISED
		class AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon: AmovPercMstpSrasWrflDnon
		{
			speed=0.45;//0.60447699;
		};
		
		// PRONE TO STAND, RIFLE LOWERED
		class AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf: TransAnimBase
		{
			speed=0.8;//1.0;
		};	
		
		// KNEEL TO STAND, RIFLE LOWERED
		class AmovPknlMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon: AmovPercMstpSlowWrflDnon
		{
			speed=-1;//-0.75;
		};
		
		// PRONE TO KNEEL, RIFLE RAISED
		class AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon: AmovPknlMstpSrasWrflDnon
		{
			speed=0.75;//0.987804;
		};
		
		// STAND TO KNEEL, PISTOL RAISED
		class AmovPknlMstpSrasWpstDnon;
		class AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			speed=-0.5;//-0.34999999;
		};
		
		// STAND TO KNEEL - PISTOL LOWERED
		class AmovPknlMstpSlowWpstDnon;
		class AmovPercMstpSlowWpstDnon_AmovPknlMstpSlowWpstDnon: AmovPknlMstpSlowWpstDnon
		{
			speed=0.8;//1.11111;
		};
		
		// STAND TO PRONE, PISTOL RAISED
		class AmovPpneMstpSrasWpstDnon;
		class AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon: AmovPpneMstpSrasWpstDnon
		{
			speed=0.6;//0.818183;
		};
		
		// STAND TO PRONE, PISTOL LOWERED
		class AmovPercMstpSlowWpstDnon_AmovPpneMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon
		{
			speed=0.4;//0.54545498;
		};	
		
		//KNEEL TO STAND, PISTOL RAISED
		class AmovPercMstpSrasWpstDnon;
		class AmovPknlMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			speed=-0.5;//-0.37;
		};
		
		// KNEEL TO STAND, PISTOL LOWERED
		class AmovPercMstpSlowWpstDnon;
		class AmovPknlMstpSlowWpstDnon_AmovPercMstpSlowWpstDnon: AmovPercMstpSlowWpstDnon
		{
			speed=0.75;//0.96774203;
		};	
		
		// KNEEL TO PRONE, PISTOL RAISED
		class AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon: AmovPpneMstpSrasWpstDnon
		{
			speed=0.65;//0.83721;
		};
		
		// PRONE TO STAND, PISTOL RAISED
		class AmovPpneMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			speed=0.5;//0.679245;
		};
		
		// PRONE TO KNEEL, PISTOL RAISED
		class AmovPpneMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			speed=0.7;//0.857144;
		};
		
		// STAND TO KNEEL, NO WEAPON
		class AmovPknlMstpSnonWnonDnon;
		class AmovPercMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon: AmovPknlMstpSnonWnonDnon
		{
			speed=1;//1.53846;
		};
		
		// STAND TO PRONE, NO WEAPON
		class AmovPpneMstpSnonWnonDnon;
		class AmovPercMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon: AmovPpneMstpSnonWnonDnon
		{
			speed=0.7;//0.88693601;
		};	
		
		// KNEEL TO STAND, NO WEAPON
		class AmovPercMstpSnonWnonDnon;
		class AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon
		{
			speed=1.1;//1.4673899;
		};
		
		// KNEEL TO PRONE, NO WEAPON
		class AmovPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon: AmovPpneMstpSnonWnonDnon
		{
			speed=1;//1.32353;
		};
		
		// PRONE TO STAND, NO WEAPON
		class AmovPpneMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon
		{
			speed=0.5;//0.80000001;
		};
		
		// PRONE TO KNEEL, NO WEAPON
		class AmovPpneMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon: AmovPknlMstpSnonWnonDnon
		{
			speed=0.6;//0.895522;
		};
		
		// STAND TO PRONE, BINOC 
		class AmovPpneMstpSoptWbinDnon;
		class AmovPercMstpSoptWbinDnon_AmovPpneMstpSoptWbinDnon: AmovPpneMstpSoptWbinDnon
		{
			speed=0.6;//1.1;
		};
		
		// PRONE TO STAND, BINOC
		class AmovPercMstpSoptWbinDnon;
		class AmovPpneMstpSoptWbinDnon_AmovPercMstpSoptWbinDnon: AmovPercMstpSoptWbinDnon
		{
			speed=0.35;//0.55000001;
		};
		
		// PRONE TO KNEEL, BINOC
		class AmovPknlMstpSoptWbinDnon;
		class AmovPpneMstpSoptWbinDnon_AmovPknlMstpSoptWbinDnon: AmovPknlMstpSoptWbinDnon
		{
			speed=0.7;//0.92000002;
		};
		
		// KNEEL TO PRONE, BINOC
		class AmovPknlMstpSoptWbinDnon_AmovPpneMstpSoptWbinDnon: AmovPpneMstpSoptWbinDnon
		{
			speed=0.9;//1.1;
		};
		
		// KNEEL TO STAND, BINOC
		class AmovPknlMstpSoptWbinDnon_AmovPercMstpSoptWbinDnon: AmovPercMstpSoptWbinDnon
		{
			speed=1; //1.3;		
		};

		// STAND TO KNEEL, BINOC
		class AmovPercMstpSoptWbinDnon_AmovPknlMstpSoptWbinDnon: AmovPknlMstpSoptWbinDnon
		{
			speed = 1.2;//1.7;
		};
		
		// INJURED ROLL TO FRONT
		class AinjPpneMstpSnonWnonDnon_rolltoback;	
		class AinjPpneMstpSnonWnonDnon_rolltofront: AinjPpneMstpSnonWnonDnon_rolltoback
		{
			speed = 0.25; // 1;
		};
	};
};
