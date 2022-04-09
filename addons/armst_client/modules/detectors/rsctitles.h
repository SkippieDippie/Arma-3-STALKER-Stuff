
	
	class DETECTOR_A_BEAR {
		idd = 4382822;
		movingEnable = true;
		enableSimulation = 1;
		enableDisplay = 1;
		duration=5;
		fadein=0; 
		fadeout=0;
		name = "DETECTOR_BEAR";
		sizeEx = 256;
		onLoad = "uinamespace setvariable ['DETECTOR_A_DIALOG', _this select 0]"; 
		onUnLoad = "uinamespace setvariable ['DETECTOR_A_DIALOG', displayNull]"; 
		
		class controls {
			class Pic {
				style=48;
				type=0;
				idc= 4382823;
				colorBackground[]={1,1,1,1};
				colorText[]={1,1,1,1};
				font="PuristaMedium";
				x = 0.028 * safezoneW + safezoneX;
				y = 0.55 * safezoneH + safezoneY;
				w = 0.11 * safezoneW;
				h = 0.4 * safezoneH;
				text="\armst_client\modules\detectors\images\bear\clear.paa";
				sizeEx = 1;
				size=1;
			};
		};
	};
	
	class DETECTOR_A_RESPOND {
		idd = 5382823;
		movingEnable = true;
		enableSimulation = 1;
		enableDisplay = 1;
		duration=5;
		fadein=0; 
		fadeout=0;
		name = "DETECTOR_RESPOND";
		sizeEx = 256;
		onLoad = "uinamespace setvariable ['DETECTOR_A_DIALOG', _this select 0]"; 
		onUnLoad = "uinamespace setvariable ['DETECTOR_A_DIALOG', displayNull]"; 

		class controls {
			class Pic {
				style=48;
				type=0;
				idc= 5382824;
				colorBackground[]={1,1,1,1};
				colorText[]={1,1,1,1};
				font="PuristaMedium";
				x = 0.028 * safezoneW + safezoneX;
				y = 0.55 * safezoneH + safezoneY;
				w = 0.11 * safezoneW;
				h = 0.4 * safezoneH;
				text="\armst_client\modules\detectors\images\respond\respond_off.paa";
				sizeEx = 1;
				size=1;
			};
		};
	};
	
	class DETECTOR_A_SVAROG {
		idd = 5382824;
		movingEnable = true;
		enableSimulation = 1;
		enableDisplay = 1;
		duration=5;
		fadein=0; 
		fadeout=0;
		name = "DETECTOR_SVAROG";
		sizeEx = 256;
		onLoad = "uinamespace setvariable ['DETECTOR_A_DIALOG', _this select 0]"; 
		onUnLoad = "uinamespace setvariable ['DETECTOR_A_DIALOG', displayNull]"; 

		class controls {
			class Pic {
				style=48;
				type=0;
				idc= 5382824;
				colorBackground[]={1,1,1,1};
				colorText[]={1,1,1,1};
				font="PuristaMedium";
				x = 0.028 * safezoneW + safezoneX;
				y = 0.55 * safezoneH + safezoneY;
				w = 0.11 * safezoneW;
				h = 0.4 * safezoneH;
				text="\armst_client\modules\detectors\images\svarog\clear.paa";
				sizeEx = 1;
				size=1;
			};
		};
	};

	class DETECTOR_TRLife_SVAROG {
		idd = 5382829;
		movingEnable = true;
		enableSimulation = 1;
		enableDisplay = 1;
		duration=5;
		fadein=0; 
		fadeout=0;
		name = "DETECTOR_TRLife_SVAROG";
		sizeEx = 256;
		onLoad = "uinamespace setvariable ['DETECTOR_A_DIALOG', _this select 0]"; 
		onUnLoad = "uinamespace setvariable ['DETECTOR_A_DIALOG', displayNull]"; 

		class controls {
			class Pic {
				style=48;
				type=0;
				idc= 5382829;
				colorBackground[]={1,1,1,1};
				colorText[]={1,1,1,1};
				font="PuristaMedium";
				x = 0.028 * safezoneW + safezoneX;
				y = 0.55 * safezoneH + safezoneY;
				w = 0.11 * safezoneW;
				h = 0.4 * safezoneH;
				text="\armst_client\modules\detectors\images\TRLife\clear.paa";
				sizeEx = 1;
				size=1;
			};
		};
	};
