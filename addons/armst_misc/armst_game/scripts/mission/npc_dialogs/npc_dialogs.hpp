/*
 Created by Dragster
*/
// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102
#define CT_CHECKBOX         77

// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// progress bar 
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4


///////////////////////////////////////////////////////////////////////////
/// Base Classes
///////////////////////////////////////////////////////////////////////////
class armst_map2
{
	idd = 199668;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\mission\Map_Zone_HD.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};


class NPC_dialog
{
	idd = 99666;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\mission\npc_dialogs\main.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
	
	class Controls {

			
class PLAYERNAME: RscText
{
	idc = 1000;
	text = ""; //--- ToDo: Localize;
	x = 0.0262282 * safezoneW + safezoneX;
	y = -0.0321187 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.1 * safezoneH;
	colorText[] = {1,0.498,0.141,1};
};
class TRADERNAME: RscText
{
	idc = 1001;
	text = ""; //--- ToDo: Localize;
	x = 0.794569 * safezoneW + safezoneX;
	y = -0.0321187 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.1 * safezoneH;
	colorText[] = {1,0.498,0.141,1};
};
class TRADER_IMAGE: RscPicture
{
	idc = 1201;
	text = "";
	x = 0.834569 * safezoneW + safezoneX;
	y = 0.0519001 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.15 * safezoneH;
};
class PLAYER_IMAGE: RscPicture
{
	idc = 1202;
	text = "";
	x = 0.0592282 * safezoneW + safezoneX;
	y = 0.0519001 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.15 * safezoneH;
};
class PLAYERRANK: RscText
{
	idc = 1002;
	text = ""; //--- ToDo: Localize;
	x = 0.09 * safezoneW + safezoneX;
	y = 0.19 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.1 * safezoneH;
	colorText[] = {1,0.498,0.141,1};
};
class PLAYERRANK_TEXT: RscText
{
	idc = 1022;
	text = "Фракция:"; //--- ToDo: Localize;
	x = 0.03 * safezoneW + safezoneX;
	y = 0.19 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.1 * safezoneH;
};
class PLAYERRANG: RscText
{
	idc = 1014;
	text = ""; //--- ToDo: Localize;
	x = 0.09 * safezoneW + safezoneX;
	y = 0.22 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.1 * safezoneH;
	colorText[] = {1,0.498,0.141,1};
};
class PLAYERRANG_TEXT: RscText
{
	idc = 1024;
	text = "Ранг:"; //--- ToDo: Localize;
	x = 0.03 * safezoneW + safezoneX;
	y = 0.22 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.1 * safezoneH;
};
class PLAYERMONEY: RscText
{
	idc = 1003;
	text = ""; //--- ToDo: Localize;
	x = 0.09 * safezoneW + safezoneX;
	y = 0.25 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.1 * safezoneH;
	colorText[] = {1,0.498,0.141,1};
};
class PLAYERMONEY_TEXT: RscText
{
	idc = 1023;
	text = "Деньги:"; //--- ToDo: Localize;
	x = 0.03 * safezoneW + safezoneX;
	y = 0.25 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.1 * safezoneH;
};

class trader_name2: RscText
{
	idc = 1009;
	text = ""; //--- ToDo: Localize;
	x = 0.231033 * safezoneW + safezoneX;
	y = 0.0378969 * safezoneH + safezoneY;
	w = 0.2 * safezoneW;
	h = 0.1 * safezoneH;
	colorText[] = {0,1,0,1};	
};
class player_name2: RscText
{
	idc = 1008;
	text = ""; //--- ToDo: Localize;
	x = 0.231033 * safezoneW + safezoneX;
	y = 0.261947 * safezoneH + safezoneY;
	w = 0.2 * safezoneW;
	h = 0.1 * safezoneH;
	colorText[] = {0,1,0,1};
};

class trader_text: RscText
{
	idc = 1010;
	style=0x00+0x10;
	text = ""; //--- ToDo: Localize;
	x = 0.274473 * safezoneW + safezoneX;
	y = 0.101916 * safezoneH + safezoneY;
	w = 0.45 * safezoneW;
	h = 0.15 * safezoneH;
	colorText[] = {1,0.498,0.141,1};
};
class player_text: RscText
{
	idc = 1011;
	text = ""; //--- ToDo: Localize;
	x = 0.274473 * safezoneW + safezoneX;
	y = 0.305966 * safezoneH + safezoneY;
	w = 0.45 * safezoneW;
	h = 0.15 * safezoneH;
	colorText[] = {1,0.498,0.141,1};
};

class dialog_button_1: RscButton
{
	idc = 2400;
	text = ""; //--- ToDo: Localize;
	x = 0.237593 * safezoneW + safezoneX;
	y = 0.822072 * safezoneH + safezoneY;
	w = 0.52 * safezoneW;
	h = 0.05 * safezoneH;
	colorText[] = {1,0.498,0.141,1};
	colorBackground[] = {1,1,1,0};
	colorDisabled[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	
};
class dialog_button_2: RscButton
{
	idc = 2401;
	text = ""; //--- ToDo: Localize;
	x = 0.237593 * safezoneW + safezoneX;
	y = 0.864081 * safezoneH + safezoneY;
	w = 0.52 * safezoneW;
	h = 0.05 * safezoneH;
	colorText[] = {1,0.498,0.141,1};
	colorBackground[] = {1,1,1,0};
	colorDisabled[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
};
class dialog_button_3: RscButton
{
	idc = 2402;
	text = ""; //--- ToDo: Localize;
	x = 0.237593 * safezoneW + safezoneX;
	y = 0.90609 * safezoneH + safezoneY;
	w = 0.52 * safezoneW;
	h = 0.05 * safezoneH;
	colorText[] = {1,0.498,0.141,1};
	colorBackground[] = {1,1,1,0};
	colorDisabled[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
};
class Rsc_buy_button: RscButton
{
	idc = 2403;
	text = "";
	x = 0.396875 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.1 * safezoneH;
	colorText[] = {0,0,0,0};
	colorDisabled[] = {0,0,0,0};
	colorBackground[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorBackgroundActive[] = {0,0,0,0};
	colorFocused[] = {0,0,0,0};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,0};
	onButtonClick = "";
};
class Rsc_sell_button: RscButton
{
	idc = 2404;
	text = "";
	x = 0.5 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.1 * safezoneH;
	colorText[] = {0,0,0,0};
	colorDisabled[] = {0,0,0,0};
	colorBackground[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorBackgroundActive[] = {0,0,0,0};
	colorFocused[] = {0,0,0,0};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,0};
	onButtonClick = "";
};


class Rsc_buy: RscPicture
{
	idc = 1207;
	text = "\armst\armst_misc\armst_game\scripts\mission\npc_dialogs\buy.paa";
	x = 0.396875 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.1 * safezoneH;
};
class Rsc_sell: RscPicture
{
	idc = 1208;
	text = "\armst\armst_misc\armst_game\scripts\mission\npc_dialogs\sell.paa";
	x = 0.5 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.1 * safezoneH;
};


	};
};

class weapon_upgrade
{
	idd = 77666;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\mission\npc_dialogs\upgrade.paa";
			x = -0.0444939 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
	
	class Controls {

class weapon_completed: RscButton
{
	idc = 1600;
	text = "Улучшить"; //--- ToDo: Localize;
	x = 0.703365 * safezoneW + safezoneX;
	y = 0.191931 * safezoneH + safezoneY;
	w = 0.11 * safezoneW;
	h = 0.064 * safezoneH;
	colorBackground[] = {1,1,1,0};
	colorDisabled[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorText[] = {1,0.498,0.141,1};
	colorFocused[] = {0,0,0,0}; 
	onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[] spawn ARMST_WEAPONUPGRADE_BUTTON_1;";
};
class equip_completed: RscButton
{
	idc = 1601;
	text = "Улучшить"; //--- ToDo: Localize;
	x = 0.480319 * safezoneW + safezoneX;
	y = 0.668037 * safezoneH + safezoneY;
	w = 0.11 * safezoneW;
	h = 0.064 * safezoneH;
	colorBackground[] = {1,1,1,0};
	colorDisabled[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorText[] = {1,0.498,0.141,1};
	colorFocused[] = {0,0,0,0};
	onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[] spawn ARMST_WEAPONUPGRADE_BUTTON_2;";
};
class WEAPON_PRICE: RscText
{
	idc = 1000;
	text = ""; //--- ToDo: Localize;
	x = 0.683685 * safezoneW + safezoneX;
	y = 0.0939094 * safezoneH + safezoneY;
	w = 0.07 * safezoneW;
	h = 0.0700156 * safezoneH;
	colorText[] = {1,0.498,0.141,1};
};
class EQUIP_PRICE: RscText
{
	idc = 1001;
	text = ""; //--- ToDo: Localize;
	x = 0.460639 * safezoneW + safezoneX;
	y = 0.570016 * safezoneH + safezoneY;
	w = 0.07 * safezoneW;
	h = 0.0700156 * safezoneH;
	colorText[] = {1,0.498,0.141,1};
};
class UP_WEAPON_PIC: RscPicture
{
	idc = 1201;
	text = "";
	x = 0.355676 * safezoneW + safezoneX;
	y = 0.219938 * safezoneH + safezoneY;
	w = 0.2 * safezoneW;
	h = 0.15 * safezoneH;
};
class UP_EQUIP_PIC: RscPicture
{
	idc = 1202;
	text = "";
	x = 0.237593 * safezoneW + safezoneX;
	y = 0.668037 * safezoneH + safezoneY;
	w = 0.12 * safezoneW;
	h = 0.20 * safezoneH;
};
class old_WEAPON_PIC: RscPicture
{
	idc = 1203;
	text = "";
	x = 0.11295 * safezoneW + safezoneX;
	y = 0.219938 * safezoneH + safezoneY;
	w = 0.2 * safezoneW;
	h = 0.15 * safezoneH;
};
class OLD_EQUIP_PIC: RscPicture
{
	idc = 1204;
	text = "";
	x = 0.0932697 * safezoneW + safezoneX;
	y = 0.668037 * safezoneH + safezoneY;
	w = 0.12 * safezoneW;
	h = 0.20 * safezoneH;
};
class UP_EQUIP_TEXT: RscText
{
	idc = 1002;
	text = ""; //--- ToDo: Localize;
	x = 0.194792 * safezoneW + safezoneX;
	y = 0.920094 * safezoneH + safezoneY;
	w = 0.16 * safezoneW;
	h = 0.07 * safezoneH;
	colorText[] = {1,0.498,0.141,1};
};
class OLD_EQUIP_TEXT: RscText
{
	idc = 1004;
	text = "105000"; //--- ToDo: Localize;
	x = 0.11295 * safezoneW + safezoneX;
	y = 0.570016 * safezoneH + safezoneY;
	w = 0.16 * safezoneW;
	h = 0.07 * safezoneH;
	colorText[] = {1,0.498,0.141,1};
};
class OLD_WEAPON_TEXT: RscText
{
	idc = 1003;
	text = ""; //--- ToDo: Localize;
	x = 0.11295 * safezoneW + safezoneX;
	y = 0.098 * safezoneH + safezoneY;
	w = 0.14 * safezoneW;
	h = 0.07 * safezoneH;
	colorText[] = {1,0.498,0.141,1};
};
class UP_WEAPON_TEXT: RscText
{
	idc = 1005;
	text = ""; //--- ToDo: Localize;
	x = 0.349116 * safezoneW + safezoneX;
	y = 0.098 * safezoneH + safezoneY;
	w = 0.14 * safezoneW;
	h = 0.07 * safezoneH;
	colorText[] = {1,0.498,0.141,1};
};

class CANCEL_BUTTON_1: RscButton
{
	idc = 1602;
	text = "Отмена"; //--- ToDo: Localize;
	x = 0.401597 * safezoneW + safezoneX;
	y = 0.668037 * safezoneH + safezoneY;
	w = 0.08 * safezoneW;
	colorBackground[] = {1,1,1,0};
	colorDisabled[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorText[] = {1,0.498,0.141,1};
	colorFocused[] = {0,0,0,0};
	onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
	h = 0.064 * safezoneH;
};
class CANCEL_BUTTON_2: RscButton
{
	idc = 1603;
	text = "Отмена"; //--- ToDo: Localize;
	x = 0.618083 * safezoneW + safezoneX;
	y = 0.191931 * safezoneH + safezoneY;
	w = 0.08 * safezoneW;
	colorBackground[] = {1,1,1,0};
	colorDisabled[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorText[] = {1,0.498,0.141,1};
	colorFocused[] = {0,0,0,0};
	onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
	h = 0.064 * safezoneH;
};
	};
};