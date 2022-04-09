class dsl_gear_dialog
{
	idd = 10568; 
	movingEnable = 1; 
	enableSimulation = 1;
	enableDisplay = 1; 
	
	onLoad = "dsl_gear_dialog = _this; disableSerialization"; 
	onunLoad = "dsl_ShowingSelfCam = false"; 

	class controls 
	{

		class fon_pers: RscPicture
		{
			idc = 1200;
			text = "\armst\armst_uidata\inventory\1.paa";
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.121 * safezoneH;
		};
class Fon_of: RscPicture
{
	idc = 1201;
	text = "\armst\armst_uidata\inventory\1.paa";
	x = -0.00531252 * safezoneW + safezoneX;
	y = 0.137 * safezoneH + safezoneY;
	w = 0.283594 * safezoneW;
	h = 0.099 * safezoneH;
};
class RscPicture_1202: RscPicture
{
	idc = 1202;
	text = "\armst\armst_uidata\inventory\1.paa";
	x = -0.00531252 * safezoneW + safezoneX;
	y = 0.225 * safezoneH + safezoneY;
	w = 0.283594 * safezoneW;
	h = 0.099 * safezoneH;
};
class RscPicture_1204: RscPicture
{
	idc = 1204;
	text = "\armst\armst_uidata\inventory\1.paa";
	x = -0.00531252 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.283594 * safezoneW;
	h = 0.099 * safezoneH;
};
class RscPicture_1203: RscPicture
{
	idc = 1203;
	text = "\armst\armst_uidata\inventory\1.paa";
	x = -0.00531252 * safezoneW + safezoneX;
	y = 0.313 * safezoneH + safezoneY;
	w = 0.283594 * safezoneW;
	h = 0.099 * safezoneH;
};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "Головной убор"; 
	x = 0.0153125 * safezoneW + safezoneX;
	y = 0.148 * safezoneH + safezoneY;
	w = 1 * safezoneW;
	h = 0.025 * safezoneH;
		};
class RscPicture_1205: RscPicture
{
	idc = 1205;
	text = "\armst\armst_uidata\inventory\1.paa";
	x = -0.00531252 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.283594 * safezoneW;
	h = 0.099 * safezoneH;
};
class RscPicture_1206: RscPicture
{
	idc = 1206;
	text = "\armst\armst_uidata\inventory\1.paa";
	x = 0.00499997 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.180469 * safezoneW;
	h = 0.253 * safezoneH;
};
class RscPicture_1207: RscPicture
{
	idc = 1207;
	text = "\armst\armst_uidata\logo\armstalker_logo.paa";
	x = 0.597969 * safezoneW + safezoneX;
	y = 0.236 * safezoneH + safezoneY;
	w = 0.309375 * safezoneW;
	h = 0.341 * safezoneH;
};

		class RscSlider_1900: dsl_Slider // headgear
		{
			idc = 1900;
	x = 0.0101562 * safezoneW + safezoneX;
	y = 0.192 * safezoneH + safezoneY;
	w = 0.135 * safezoneW;
	h = 0.025 * safezoneH;
			
		};
		
		class RscText_1013: RscText
		{
			idc = 1013;
			text = "Аксессуар"; 
	x = 0.0153125 * safezoneW + safezoneX;
	y = 0.236 * safezoneH + safezoneY;
	w = 1 * safezoneW;
	h = 0.025 * safezoneH;
		};		
		class RscSlider_1913: dsl_Slider // glasses
		{
			idc = 1913;
			type = CT_SLIDER;
	x = 0.0101562 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.135 * safezoneW;
	h = 0.025 * safezoneH;
		};
		
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "Разгрузка";
	x = 0.0153125 * safezoneW + safezoneX;
	y = 0.324 * safezoneH + safezoneY;
	w = 1 * safezoneW;
	h = 0.025 * safezoneH;
		};
		class RscSlider_1901: dsl_Slider  // vest
		{
			idc = 1901;
			type = CT_SLIDER;
	x = 0.0101562 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.135 * safezoneW;
	h = 0.025 * safezoneH;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "Рюкзак";
	x = 0.0153125 * safezoneW + safezoneX;
	y = 0.412 * safezoneH + safezoneY;
	w = 1 * safezoneW;
	h = 0.025 * safezoneH;
		};
		class RscSlider_1903: dsl_Slider  // backpack
		{
			idc = 1903;
			type = CT_SLIDER;
	x = 0.0153125 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.135 * safezoneW;
	h = 0.025 * safezoneH;
		};
		class RscText_1007: RscText
		{
			idc = 1007;
			text = "Оружие"; 
	x = 0.0153125 * safezoneW + safezoneX;
	y = 0.544 * safezoneH + safezoneY;
	w = 0.135 * safezoneW;
	h = 0.025 * safezoneH;
		};
		class RscSlider_1907: dsl_Slider // sidearm
		{
			idc = 1907;
			type = CT_SLIDER;
			x = safezoneX + 0.65 * safezoneW;
			y = safezoneY + 9 * safezoneH / 28 + 0.04;
			w = safezoneW / 3;
			h = safezoneH / 40;
		};
		class RscSlider_1902: dsl_Slider // uniform
		{
			idc = 1902;
			type = CT_SLIDER;
			x = 1111;
			y = 1111;
			w = safezoneW / 3;
			h = safezoneH / 40;
		};
		class RscSlider_1904: dsl_Slider  // weapon
		{
			idc = 1904;
			type = CT_SLIDER;
			x = 1111;
			y = 1111;
			w = safezoneW / 3;
			h = safezoneH / 40;
		};
		class RscSlider_1905: dsl_Slider // optic
		{
			idc = 1905;
			type = CT_SLIDER;
			x = 1111;
			y = 1111;
			w = safezoneW / 3;
			h = safezoneH / 40;
		};
		
		class RscSlider_1906: dsl_Slider  // rail
		{
			idc = 1906;
			type = CT_SLIDER;
			x = 1111;
			y = 1111;
			w = safezoneW / 3;
			h = safezoneH / 40;
		};
		
		class RscSlider_1908: dsl_Slider  // faces
		{
			idc = 1908;
			type = CT_SLIDER;
			x = 1111;
			y = 1111;
			w = safezoneW / 3;
			h = safezoneH / 40;
		};
		
		class RscSlider_1914: dsl_Slider  // launchers
		{
			idc = 1914;
			type = CT_SLIDER;
			x = 1111;
			y = 1111;
			w = safezoneW / 3;
			h = safezoneH / 40;
		};
		
		




		
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "Uniform";
			x = 1000;
			y = 1000;
			w = safezoneW;
			h = safezoneH / 40;
		};
		class RscText_1004: RscText
		{
			idc = 1004;
			text = "Weapon"; 
			x = 1000;
			y = 1000;
			w = safezoneW;
			h = safezoneH / 40;
		};
		class RscText_1005: RscText
		{
			idc = 1005;
			text = "Optic"; 
			x = 1000;
			y = 1000;
			w = safezoneW;
			h = safezoneH / 40;
		};
		class RscText_1006: RscText
		{
			idc = 1006;
			text = "Rail";
			x = 1000;
			y = 1000;
			w = safezoneW;
			h = safezoneH / 40;
		};
		class RscText_1008: RscText
		{
			idc = 1008;
			text = "Face"; 
			x = 1000;
			y = 1000;
			w = safezoneW;
			h = safezoneH / 40;
		};
		
		class RscText_1014: RscText
		{
			idc = 1014;
			text = "Launcher"; 
			x = 1000;
			y = 1000;
			w = safezoneW;
			h = safezoneH / 40;
		};
		
		
		
		
		
		
		
		
		class RscSlider_1909: RscSlider // time
		{
			idc = 1909;
			x = 1000;
			y = 1000;
			w = safezoneW / 3.8;
			h = safezoneH / 40;
		};
		
		class RscSlider_1910: RscSlider // overcast
		{
			idc = 1910;
			x = 1000;
			y = 1000;
			w = safezoneW / 3.8;
			h = safezoneH / 40;
		};
		class RscSlider_1911: RscSlider // day of month
		{
			idc = 1911;
			x = 1000;
			y = 1000;
			w = safezoneW / 3.8;
			h = safezoneH / 40;
		};
		class RscSlider_1912: RscSlider // view distance
		{
			idc = 1912;
			x = 1000;
			y = 1000;
			w = safezoneW / 3.8;
			h = safezoneH / 40;
		};




		class RscText_1015: RscText
		{
			idc = 1015;
			text = "СОЗДАНИЕ ПЕРСОНАЖА";
			SizeEx = 0.075; 
	x = 0.701094 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 1 * safezoneW;
	h = 0.05 * safezoneH;
		};
			
		
		class RscText_1009: RscText
		{
			idc = 1009;
			text = "by Dslyecxi"; 
			x = 1000;
			y = 1000;
			w = safezoneW;
			h = safezoneH / 20;
		};
		
		
		class RscText_1010: RscText
		{
			idc = 1010;
			text = "by Dslyecxi"; 
			x = safezoneX + safezoneW / 40;
			y = safezoneY + 13 * safezoneH / 28;
			w = safezoneW;
			h = safezoneH / 40;
		};
		class RscText_1011: RscText
		{
			idc = 1011;
			text = "Day of Month"; //--- ToDo: Localize;
			x = 1000;
			y = 1000;
			w = safezoneW;
			h = safezoneH / 40;
		};
		class RscText_1012: RscText
		{
			idc = 1012;
			text = "Viewdistance"; //--- ToDo: Localize;
			x = 1000;
			y = 1000;
			w = safezoneW;
			h = safezoneH / 40;
		};




	
		
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Готово"; //--- ToDo: Localize;
	x = 0.025 * safezoneW + safezoneX;
	y = 0.664857 * safezoneH + safezoneY;
	w = 0.0666667 * safezoneW;
	h = 0.0333333 * safezoneH;
		};
		class RscButton_1605: RscButton
		{
			idc = 1605;
			text = "Сзади"; //--- ToDo: Localize;
	x = 0.025 * safezoneW + safezoneX;
	y = 0.736286 * safezoneH + safezoneY;
	w = 0.0666667 * safezoneW;
	h = 0.0333333 * safezoneH;
		};
		
		class RscButton_1604: RscButton
		{
			idc = 1604;
			text = "Спереди"; //--- ToDo: Localize;
	x = 0.025 * safezoneW + safezoneX;
	y = 0.807714 * safezoneH + safezoneY;
	w = 0.0666667 * safezoneW;
	h = 0.0333333 * safezoneH;
		};
		class RscButton_1601: RscButton
		{
			idc = 1601;
			text = "Готово"; //--- ToDo: Localize;
			x = 1000;
			y = 1000;
			w = safezoneW / 15;
			h = safezoneH / 30;
		};
		class RscButton_1606: RscButton
		{
			idc = 1606;
			text = "Weapon"; //--- ToDo: Localize;
			x = 1000;
			y = 1000;
			w = safezoneW / 15;
			h = safezoneH / 30;
		};
		class RscButton_1602: RscButton
		{
			idc = 1602;
			text = "Presets"; //--- ToDo: Localize;
			x = 1000;
			y = 1000;
			w = safezoneW / 15;
			h = safezoneH / 30;
		};
		
		class RscButton_1608: RscButton
		{
			idc = 1608;
			text = "Thermal"; //--- ToDo: Localize;
			x = 1000;
			y = 1000;
			w = safezoneW / 15;
			h = safezoneH / 30;
		};
			
		
		class RscButton_1603: RscButton
		{
			idc = 1603;
			text = "Head"; //--- ToDo: Localize;
			x = 1000;
			y = 1000;
			w = safezoneW / 15;
			h = safezoneH / 30;
		};
		
		
		class RscButton_1607: RscButton
		{
			idc = 1607;
			text = "Muzzle Device"; //--- ToDo: Localize;
			x = 1000;
			y = 1000;
			w = safezoneW / 10;
			h = safezoneH / 30;
		};
		
		class RscButton_1609: RscButton
		{
			idc = 1609;
			text = "NV Goggles"; //--- ToDo: Localize;
			x = 1000;
			y = 1000;
			w = safezoneW / 10;
			h = safezoneH / 30;
		};	
	};
};

