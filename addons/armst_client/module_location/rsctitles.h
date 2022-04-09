/* written by wildw1ng */
class LocationHud
{
	idd = -1;
	movingEnable = 0;
	fadein = 1;
	duration = 1e+1000;
	fadeout = 3;
	name = "LocationHud";
	onLoad = "uiNamespace setVariable ['LocationHud', _this select 0]";
	controlsBackground[] = {};
	objects[] = {};
		
	class controls
	{
		class baseHud
		{
			type = 0;
			idc = 2000;
			style = 1;
			x = safezoneX -2;
			y = safezoneY -2;
			w = safezoneW;
			h = safezoneH;
			size = 1;
			font = "PuristaMedium";
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.6, 0.6, 0.6, 1};
			shadow = 1;
			sizeEx = 0.03;
			text = "";
		};
		
		class progressBar: baseHud
		{
			idc = 2005;
			style = 2;
			colorBackground[] = {1,1,1,0.5};
			x = safezoneX + (safezoneW / 2) - (0.106 * safezoneW);
			//y = 0.1 * safezoneW + safezoneY;
			y = safezoneY + 0.071 * safezoneH;
			w = 0.212 * safezoneW;
			h = 0.012 * safezoneH;
		};
		
		class ticketsRed: baseHud
		{
			type = 0;
			idc = 2002;
			style = 2; 
			x = safezoneX + (safezoneW / 2) - (0.106 * safezoneW) + (0.05 * safezoneW);
			y = safezoneY + 0.025 * safezoneH;
			w = 0.212 * safezoneW - (0.05 * safezoneW);
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {0.88,0.89,0.98,1};
			font = "PuristaMedium";
			sizeEx = 0.036;
			shadow = 1;
			text = "";
		};
		
		class flagRed
		{
			type = 0;
			idc = 1002;
			style = 48;
			x = safezoneX + (safezoneW / 2) - (0.106 * safezoneW);
			y = safezoneY + 0.015 * safezoneH;
			w = 0.05 * safezoneW;
			h = 0.07 * safezoneH;
			colorBackground[] = {0,0,0,0.2};
			colorText[] = {1,1,1,0.6};
			font = "PuristaMedium";
			sizeEx = 0.0;
			text = "";
			//ttext = "armst_location\Images\1.paa";
		};
		
		class flagGreen
		{
			type = 0;
			idc = 1003;
			style = 48;
			x = safezoneX + (safezoneW / 2) + ((0.106 * safezoneW) - (0.05 * safezoneW));
			y = safezoneY + 0.01 * safezoneH;
			w = 0.05 * safezoneW;
			h = 0.07 * safezoneH;
			colorBackground[] = {0,0,0,0.2};
			colorText[] = {1,1,1,0.6};
			font = "PuristaMedium";
			sizeEx = 0.0;
			text = "";
			//text = "armst_location\Images\3.paa";
		};
		
	};
};