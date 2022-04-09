	
	
	class DETECTOR_DBG06M {
		idd = 7645255;
		movingEnable = true;
		enableSimulation = 1;
		enableDisplay = 1;
		duration=5;
		fadein=0; 
		fadeout=0;
		name = "DETECTOR_DBG06M";
		sizeEx = 256;
		onLoad = "uinamespace setvariable ['DETECTOR_DIALOG', _this select 0]; uinamespace setvariable ['DETECTOR_FIELD', (_this select 0) displayCtrl 764526]"; 
		onUnLoad = "uinamespace setvariable ['DETECTOR_DIALOG',nil]; uinamespace setvariable ['DETECTOR_FIELD',nil]"; 

		class controls {
			class Pic {
				style=48;
				type=0;
				idc=-1;
				colorBackground[]={1,1,1,1};
				colorText[]={1,1,1,1};
				font="PuristaMedium";
				x = 0.056354 * safezoneW + safezoneX;
				y = 0.688704 * safezoneH + safezoneY;
				w = 0.14 * safezoneW;
				h = 0.272778 * safezoneH;
				text="\armst_client\modules\Radiation\Images\DBG06M_ico.paa";
				sizeEx = 1;
				size=1;
			};
			
			class Field {
				idc = 764526;
				type = 0;
				style = 0;
				lineSpacing = 1.0;
				x = 0.110354 * safezoneW + safezoneX;
				y = 0.648704 * safezoneH + safezoneY;
				w = 0.14 * safezoneW;
				h = 0.172778 * safezoneH;
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {0.3, 0.3, 0.3, 0.6};
				font = "PuristaMedium";
				text = "";
				sizeEx = 0.25 * 0.1;
				size = 0.8;
			};
		};
	};
	
	class DETECTOR_RKS20 {
		idd = 8645255;
		movingEnable = true;
		enableSimulation = 1;
		enableDisplay = 1;
		duration=5;
		fadein=0; 
		fadeout=0;
		name = "DETECTOR_RKS20";
		sizeEx = 256;
		onLoad = "uinamespace setvariable ['DETECTOR_DIALOG', _this select 0]; uinamespace setvariable ['DETECTOR_FIELD', (_this select 0) displayCtrl 864526]"; 
		onUnLoad = "uinamespace setvariable ['DETECTOR_DIALOG',nil]; uinamespace setvariable ['DETECTOR_FIELD',nil]"; 

		class controls {
			class Pic {
				style=48;
				type=0;
				idc=-1;
				colorBackground[]={1,1,1,1};
				colorText[]={1,1,1,1};
				font="PuristaMedium";
				x = 0.056354 * safezoneW + safezoneX;
				y = 0.688704 * safezoneH + safezoneY;
				w = 0.14 * safezoneW;
				h = 0.292778 * safezoneH;
				text="\armst_client\modules\Radiation\Images\DETECTOR_RKS20_image.paa";
				sizeEx = 1;
				size=1;
			};
			
			class Field {
				idc = 864526;
				type = 0;
				style = 0;
				lineSpacing = 1.0;
				x = 0.089354 * safezoneW + safezoneX;
				y = 0.658704 * safezoneH + safezoneY;
				w = 0.14 * safezoneW;
				h = 0.172778 * safezoneH;
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {0.1, 0.1, 0.1, 0.5};
				font = "PuristaMedium";
				text = "";
				sizeEx = 0.55 * 0.1;
				size = 0.8;
			};
		};
	};
	
	class DETECTOR_MKS1009 {
		idd = 9645255;
		movingEnable = true;
		enableSimulation = 1;
		enableDisplay = 1;
		duration=5;
		fadein=0; 
		fadeout=0;
		name = "DETECTOR_MKS1009";
		sizeEx = 256;
		onLoad = "uinamespace setvariable ['DETECTOR_DIALOG', _this select 0]; uinamespace setvariable ['DETECTOR_FIELD', (_this select 0) displayCtrl 964526]"; 
		onUnLoad = "uinamespace setvariable ['DETECTOR_DIALOG',nil]; uinamespace setvariable ['DETECTOR_FIELD',nil]"; 

		class controls {
			class Pic {
				style=48;
				type=0;
				idc=-1;
				colorBackground[]={1,1,1,1};
				colorText[]={1,1,1,1};
				font="PuristaMedium";
				x = 0.056354 * safezoneW + safezoneX;
				y = 0.688704 * safezoneH + safezoneY;
				w = 0.14 * safezoneW;
				h = 0.292778 * safezoneH;
				text="\armst_client\modules\Radiation\Images\DETECTOR_MKS1009_image.paa";
				sizeEx = 1;
				size=1;
			};
			
			class Field {
				idc = 964526;
				type = 13;
				style = 0x00;
				x = 0.061354 * safezoneW + safezoneX;
				y = 0.768704 * safezoneH + safezoneY;
				w = 0.14 * safezoneW;
				h = 0.172778 * safezoneH;
				colorBackground[] = {0, 0, 0, 0};
				text = "";
				size = 0.8;
				class Attributes {
					font = "PuristaMedium";
					color = "#698B69";
					align = "center";
					valign = "middle";
					shadow = true;
					shadowColor = "#000000";
					size = 0.055;
				};
			};
		};
	};
	