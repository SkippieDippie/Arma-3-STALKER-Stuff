	
	class ARMST_loadingScreen 
	{
		idd = IDD_LOADSCREEN;
		duration = 10e10;
		fadein = 0;
		fadeout = 5;
		name = "loading screen";
		onLoad = "_this call ARMST_Loadscreen_onLoad";
		onUnload = "call ARMST_Loadscreen_onUnload";
		
		class controlsBackground
		{
			class blackBG : RscText
			{
				x = safezoneX;
				y = safezoneY;
				w = safezoneW;
				h = safezoneH;
				text = "";
				colorText[] = {0,0,0,0};
				colorBackground[] = {0,0,0,1};
			};
			class nicePic : RscPicture
			{
				idc = IDC_LOADSCREEN_PIC;
				style = 48; // ST_PICTURE + ST_KEEP_ASPECT_RATIO  0x800
				x = safezoneXAbs;
				y = safezoneY;
				w = safezoneWAbs;
				h = safezoneH;
				text = "";
			};
		};
		
		class controls
		{
			class CA_Progress : RscProgress // progress bar, has to have idc 104
			{
				idc = 104;
				type = 8; // CT_PROGRESS
				style = 0; // ST_SINGLE
				colorFrame[] = {0,0,0,1};
				colorBar[] = {0.6,0,0,0.5};
				x = safezoneX + 0.2 * safezoneW;
				y = safezoneY + 0.85 * safezoneH;
				w = safezoneW * 0.6;
				h = 0.03;
				texture = "\A3\ui_f\data\GUI\RscCommon\RscProgress\progressbar_ca.paa";
			};
			class CA_Progress2 : RscProgressNotFreeze // progress bar that will go reverse
			{
				idc = 103;
			};
			class TopTitle: RscText // the text on the top-left
			{
				idc = 101;
				x = safezoneX + 0.2 * safezoneW;
				y = safezoneY + 0.80 * safezoneH;
				w = safezoneW * 0.6;
				h = 0.04902;
				font = "EtelkaMonospaceProBold";
				text = "";
				sizeEx = 0.05;
				colorText[] = {0.31,0.02,0,1};
			};
			class BottomTitle : RscText // "Loading" text in the middle of the screen
			{
				idc = IDC_LOADSCREEN_TITLE;
				x = safezoneX + 0.2 * safezoneW;
				y = safezoneY + 0.88 * safezoneH;
				w = safezoneW * 0.6;
				h = 0.04902;
				sizeEx = 0.035;
				colorText[] = {1,1,1,0.5};
				colorBackground[] = {0, 0, 0, 0};
				font = "EtelkaMonospaceProBold";
				text = ""; 
			};
		};
	};