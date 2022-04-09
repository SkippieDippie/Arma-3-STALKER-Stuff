		
	class DeniedScreen {

		idd = IDC_DENIED_DIALOG;
		duration = 10e10;
		fadein = 0;
		fadeout = 2;
		name = "Denied screen";
		onLoad = "uiNamespace setVariable ['ARMST_DeniedScreen', _this select 0]";
		onUnload = "failMission 'LOSER';endMission 'END1'";
		
		class controlsBackground {
		
			class Background : outlw_MR_RscPicture {
				idc = -1;
				x = safezoneXAbs;
				y = safezoneY;
				w = safezoneWAbs;
				h = safezoneH;
				text = "\armst_client\gui\images\armst_screen_02.jpg";
				colorBackground[] = {1,1,1,1};
			};
			
			class Title : outlw_MR_RscStructuredText {
				idc = -1;
				x = safezoneX + 0.2 * safezoneW;
				y = safezoneY + 0.62 * safezoneH;
				w = safezoneX + 0.8 * safezoneW;
				h = safezoneY + 0.2 * safezoneH;
				size = 0.035;
				colorBackground[] = {0.4,0,0,1};
				colorText[] = {1,1,1,1};
				text = $STR_ACCESSDENIED;
			};
			
		};
		
		class controls {
			
			class Message : outlw_MR_RscStructuredText {
				
				idc = IDC_DENIED_DIALOG_MESSAGE;
				x = safezoneX + 0.2 * safezoneW;
				y = safezoneY + 0.65 * safezoneH;
				w = safezoneX + 0.8 * safezoneW;
				h = safezoneY + 0.35 * safezoneH;
				size = 0.04;
				class Attributes
				{
						font = "PuristaMedium";
						color = "#9C9C9C";
						align = "left";
						shadow = 1;
				};
				colorBackground[] = {0,0,0,1};
				text = "";//$STR_ACCESS_DENIED_WRONGNICK;
			};
			
		};
	};
