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
class RscText
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 1;
	colorShadow[] = 
	{
		0,
		0,
		0,
		0.5
	};
	font = "RobotoCondensed";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] = 
	{
		0,
		0,
		0,
		0.65
	};
};
class RscPicture
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
};
class RscEdit
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorText[] = 
	{
		0.95,
		0.95,
		0.95,
		1
	};
	colorDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorSelection[] = 
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",
		1
	};
	autocomplete = "";
	text = "";
	size = 0.2;
	style = "0x00 + 0x40";
	font = "RobotoCondensed";
	shadow = 2;
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	canModify = 1;
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] = 
	{
		0,
		0,
		0,
		0.65
	};
};
class RscListBox
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 5;
	rowHeight = 0;
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorScrollbar[] = 
	{
		1,
		0,
		0,
		0
	};
	colorSelect[] = 
	{
		0,
		0,
		0,
		1
	};
	colorSelect2[] = 
	{
		0,
		0,
		0,
		1
	};
	colorSelectBackground[] = 
	{
		0.95,
		0.95,
		0.95,
		1
	};
	colorSelectBackground2[] = 
	{
		1,
		1,
		1,
		0.5
	};
	colorBackground[] = 
	{
		0,
		0,
		0,
		0.3
	};
	soundSelect[] = 
	{
		"\A3\ui_f\data\sound\RscListbox\soundSelect",
		0.09,
		1
	};
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	colorPicture[] = 
	{
		1,
		1,
		1,
		1
	};
	colorPictureSelected[] = 
	{
		1,
		1,
		1,
		1
	};
	colorPictureDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorPictureRight[] = 
	{
		1,
		1,
		1,
		1
	};
	colorPictureRightSelected[] = 
	{
		1,
		1,
		1,
		1
	};
	colorPictureRightDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorTextRight[] = 
	{
		1,
		1,
		1,
		1
	};
	colorSelectRight[] = 
	{
		0,
		0,
		0,
		1
	};
	colorSelect2Right[] = 
	{
		0,
		0,
		0,
		1
	};
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] = 
	{
		0,
		0,
		0,
		0.65
	};
	class ListScrollBar
	{
		width = 0;
		height = 0;
		scrollSpeed = 0.01;

		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";

		color[] = {1,1,1,1}; // Scrollbar color
	};
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
	style = 16;
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	colorShadow[] = 
	{
		0,
		0,
		0,
		0.5
	};
	period = 1.2;
	maxHistoryDelay = 1;
};
class RscButton
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 1;
	text = "";
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorBackground[] = 
	{
		0,
		0,
		0,
		0.5
	};
	colorBackgroundDisabled[] = 
	{
		0,
		0,
		0,
		0.5
	};
	colorBackgroundActive[] = 
	{
		0,
		0,
		0,
		1
	};
	colorFocused[] = 
	{
		0,
		0,
		0,
		1
	};
	colorShadow[] = 
	{
		0,
		0,
		0,
		0
	};
	colorBorder[] = 
	{
		0,
		0,
		0,
		1
	};
	soundEnter[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.09,
		1
	};
	soundPush[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.09,
		1
	};
	soundClick[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.09,
		1
	};
	soundEscape[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.09,
		1
	};
	idc = -1;
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};
class pdamenu
{
	idd = 88666;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {
			idc = 1300;
			text = "armst_client\GUI\pda\pda.paa";		
			moving = false;
			x = 0; y = 0;
			w = 1; h = 1;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
		};
	};
	
	class Controls {

		class pdalist : RscText {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = $STR_pda_stalkers;
			colorText[] = {1,1,1,1};
			x = 0.18;y = 0.12;
			w = 0.6;h = 0.04;
		};
		class pdames : RscText {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "";
			colorText[] = {1,1,1,1};
			x = 0.4;y = 0.12;
			w = 0.6;h = 0.04;
		};
		class Listplayer : RscListBox {
			idc = 8665;
			text = "";
			x = .13; y = .18;
			w = .2; h = .6;
			onMouseButtonClick="[] spawn ARMST_pda_upd_listbox;";
		};
		class editmes : Rscedit {
			idc = 8666;
			text = "";
			x = .36; y = .18;
			w = .48; h = .1;
			color[] = {.1,.95,.1,1};
		};
		class send : RscButton {
			idc = -1;
			text = $STR_pda_Send;
			onButtonClick = "[(ctrlText 8666)] spawn ARMST_pda_send;";
			x = .36; y = .3;
			w = .2; h = .045;
			color[] = {.1,.95,.1,1};
		};
		class sendall : RscButton {
			idc = -1;
			text = $STR_pda_Sendall;
			onButtonClick = "[(ctrlText 8666)] spawn ARMST_pda_send_all;";
			x = .36; y = .355;
			w = .2; h = .045;
			color[] = {.1,.95,.1,1};
		};
		class sendanon : RscButton {
			idc = -1;
			text = $STR_pda_SendAnonymous;
			onButtonClick = "[(ctrlText 8666)] spawn ARMST_pda_send_anon;";
			x = .6; y = .3;
			w = .25; h = .045;
			color[] = {.1,.95,.1,1};
		};
		class fraction: RscText
		{
			idc = -1;
			text = $STR_pda_Fraction;
			x = 0.1125;y = 0.805;
			w = 0.1375;h = 0.06;
		};
		class fractiontext: RscText
		{
			idc = 8668;
			text = "";
			x = 0.2625;y = 0.805;
			w = 0.1625;h = 0.06;
		};
		class Bute : RscButton {
			idc = -1;
			text = $STR_pda_history;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[] spawn ARMST_pda_history_open;";
			x = .62; y = .745;
			w = .22; h = .045;
			color[] = {.95,.1,.1,1};
		};
		class ButtDiagnose : RscButton {
			idc = -1;
			text = $STR_Diagnostics;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1); [] spawn ARMST_pda_diagnose_open;";
			x = .41; y = .81;
			w = .15; h = .045;
			color[] = {.95,.1,.1,1};
		};
		class ButtDossier : RscButton {
			idc = -1;
			text = $STR_pda_Dossier;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1); [] spawn ARMST_pda_dossier_open;";
			x = .58; y = .81;
			w = .12; h = .045;
			color[] = {.95,.1,.1,1};
		};
		class ButtClose : RscButton {
			idc = -1;
			text = $STR_closed;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
			x = .72; y = .81;
			w = .12; h = .045;
			color[] = {.95,.1,.1,1};
		};
	};
};
class pdahistorymes
{
	idd = 88670;
	movingenable = 0;
	enableSimulation = true;
	class controlsBackground {
		class MainBG : RscPicture {
			idc = 1300;
			text = "armst_client\GUI\pda\pda.paa";		
			moving = false;
			x = 0; y = 0;
			w = 1; h = 1;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
		};
	};
	
	class Controls {
		class histmes: RscText
		{
			idc = -1;
			text = $STR_pda_MessageHistory; 
			x = 0.3;
			y = 0.14;
			w = 0.3625;
			h = 0.04;
		};
		class RscListbox_1500: RscListbox
		{
			onMouseButtonDblClick="_m = ((findDisplay 88670) displayCtrl 1500) lbText (lbCurSel ((findDisplay 88670) displayCtrl 1500));hint format['[КПК] %1',_m];";
			idc = 1500;
			x = 0.125;
			y = 0.2;
			w = 0.725;
			h = 0.6;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = $STR_pda_ClearHistory; 
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);player setVariable ['all_pda_mes',[]];";
			x = 0.5;
			y = 0.815;
			w = 0.1875;
			h = 0.04;
		};
		class RscButton_1601: RscButton
		{
			idc = -1;
			text = $STR_closed;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
			x = 0.7125;
			y = 0.815;
			w = 0.1375;
			h = 0.04;
		};
	};
};
class pda_dossier
{
	idd = 88600;
	movingenable = 0;
	enableSimulation = true;

	class controlsBackground {
		class MainBG : RscPicture {
			idc = 1300;
			text = "armst_client\GUI\pda\pda.paa";				
			moving = false;
			x = 0; y = 0;
			w = 1; h = 1;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
		};
	};
	
	class Controls {

		class RscText_1000: RscText
		{
			idc = 1000;
			text = $STR_pda_dosie;
			x = 0.1875;y = 0.14;
			w = 0.075;h = 0.04;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = $STR_pda_Fraction;
			x = 0.1;y = 0.2;
			w = 0.1125;h = 0.04;
		};
		class RscText_1002: RscText
		{
			idc = 1002;text = "";
			x = 0.2125;y = 0.2;
			w = 0.2;h = 0.04;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = $STR_pda_money;
			x = 0.1;y = 0.26;
			w = 0.125;h = 0.04;
		};
		class RscText_1004: RscText
		{
			idc = 1004;text = "";
			x = 0.2125;y = 0.26;
			w = 0.2;h = 0.04;
		};
		class RscText_1005: RscText
		{
			idc = 1005;
			text = $STR_pda_kills;
			x = 0.1;y = 0.32;
			w = 0.1125;h = 0.04;
		};
		class RscText_1006: RscText
		{
			idc = 1006;text = "";
			x = 0.2125;y = 0.32;
			w = 0.2;h = 0.04;
		};
		class RscText_1007: RscText
		{
			idc = 1007;
			text = $STR_pda_deads;
			x = 0.1;y = 0.38;
			w = 0.1125;h = 0.04;
		};
		class RscText_1008: RscText
		{
			idc = 1008;text = "";
			x = 0.2125;y = 0.38;
			w = 0.2;h = 0.04;
		};

		class RscText_1009: RscText
		{
			idc = 1009;
			text = $STR_pda_eat;
			x = 0.1;y = 0.44;
			w = 0.1125;h = 0.04;
		};
		class RscText_1010: RscText
		{
			idc = 1010;text = "";
			x = 0.2125;y = 0.44;
			w = 0.2;h = 0.04;
		};
		class RscText_1011: RscText
		{
			idc = 1011;
			text = $STR_pda_Thirst;
			x = 0.1;y = 0.5;
			w = 0.1125;h = 0.04;
		};
		class RscText_1012: RscText
		{
			idc = 1012;text = "";
			x = 0.2125;y = 0.5;
			w = 0.2;h = 0.04;
		};
		class ButtClose : RscButton {
			idc = -1;
			text = $STR_closed;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
			x = .69; y = .8;
			w = .15; h = .06;
			color[] = {.95,.1,.1,1};
		};
	};
};
class pda_diagnose
{
	idd = 88500;
	movingenable = 0;
	enableSimulation = true;

	class controlsBackground {
		class MainBG : RscPicture {
			idc = -1;
			text = "armst_client\GUI\pda\pda.paa";		
			moving = false;
			x = 0; y = 0;
			w = 1; h = 1;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
		};
	};
	
	class Controls {

		class head: RscPicture
		{
			idc = 1202;text = "";
			x = 0.1375;y = 0.18;
			w = 0.2625;h = 0.62;
		};
		class body: RscPicture
		{
			idc = 1203;text = "";
			x = 0.1375;y = 0.18;
			w = 0.2625;h = 0.62;
		};
		class right_arm: RscPicture
		{
			idc = 1204;text = "";
			x = 0.1375;y = 0.18;
			w = 0.2625;h = 0.62;
		};
		class left_arm: RscPicture
		{
			idc = 1205;text = "";
			x = 0.1375;y = 0.18;
			w = 0.2625;h = 0.62;
		};
		class right_leg: RscPicture
		{
			idc = 1206;text = "";
			x = 0.1375;y = 0.18;
			w = 0.2625;h = 0.62;
		};
		class left_leg: RscPicture
		{
			idc = 1207;text = "";
			x = 0.1375;y = 0.18;
			w = 0.2625;h = 0.62;
		};
		class bint_head: RscButton
		{
			idc = 1600;text = $STR_pda_head;
			x = 0.375;y = 0.48;
			w = 0.2;h = 0.04;
			onButtonClick = "[player, player, 'bandage', 'HitHead'] call AGM_Medical_fnc_treat;";
		};
		class bint_tors: RscButton
		{
			idc = 1601;text = $STR_pda_torso;
			x = 0.5875;y = 0.48;
			w = 0.2125;h = 0.04;
			onButtonClick = "[player, player, 'bandage', 'HitBody'] call AGM_Medical_fnc_treat;";
		};
		class bint_left_arm: RscButton
		{
			idc = 1602;text = $STR_pda_leftarm;
			x = 0.375;y = 0.56;
			w = 0.2;h = 0.04;
			onButtonClick = "[player, player, 'bandage', 'HitLeftArm'] call AGM_Medical_fnc_treat;";
		};
		class bint_right_arm: RscButton
		{
			idc = 1603;text = $STR_pda_rightarm;
			x = 0.5875;y = 0.56;
			w = 0.2125;h = 0.04;
			onButtonClick = "[player, player, 'bandage', 'HitRightArm'] call AGM_Medical_fnc_treat;";
		};
		class bint_left_leg: RscButton
		{
			idc = 1604;text = $STR_pda_leftleg;
			x = 0.375;y = 0.64;
			w = 0.2;h = 0.04;
			onButtonClick = "[player, player, 'bandage', 'HitLeftLeg'] call AGM_Medical_fnc_treat;";
		};
		class bint_right_leg: RscButton
		{
			idc = 1605;text = $STR_pda_rightleg;
			x = 0.5875;y = 0.64;
			w = 0.2125;h = 0.04;
			onButtonClick = "[player, player, 'bandage', 'HitRightLeg'] call AGM_Medical_fnc_treat;";
		};
		class RscButton_1612: RscText
		{
			idc = 1612;	text="Медицинская диагностика";
			x = 0.375;y = 0.16;
			w = 0.3375;h = 0.04;
		};
		class blood_title: RscText
		{
			idc = 1610;text = $STR_pdablood;
			x = 0.375;y = 0.2;
			w = 0.15;h = 0.04;
		};
		class blood_text: RscText
		{
			idc = 1611;text = "";
			x = 0.4375;y = 0.2;
			w = 0.4;h = 0.04;
		};
		class Pain_title: RscText
		{
			idc = 1608;text = $STR_pdapain;
			x = 0.375;y = 0.24;
			w = 0.15;h = 0.04;
		};
		class Pain_text: RscText
		{
			idc = 1609;text = "";
			x = 0.4375;y = 0.24;
			w = 0.4;h = 0.04;
		};
		class obluchenie_title: RscText
		{
			idc = 1606;text = $STR_Irradiation;
			x = 0.375;y = 0.28;
			w = 0.15;h = 0.04;
		};
		class obluchenie_text: RscText
		{
			idc = 1607;text = "";
			x = 0.5375;y = 0.28;
			w = 0.175;h = 0.04;
		};
		class temperature_title: RscText
		{
			idc = 1720;text = $STR_Temperature;
			x = 0.375;y = 0.32;
			w = 0.15;h = 0.04;
		};
		class temperature_text: RscText
		{
			idc = 1721;text = "";
			x = 0.5375;y = 0.32;
			w = 0.175;h = 0.04;
		};
		class blood_transfusion: RscButton
		{
			idc = 1612;
			text = $STR_FN_medkit;
			x = 0.375;y = 0.72;
			w = 0.2;h = 0.04;
			onButtonClick = "[player, player, 'bloodbag'] call AGM_Medical_fnc_treat;";
		};
		class stabbing_morphine: RscButton
		{
			idc = 1613;
			text = $STR_FN_morphiy;
			x = 0.5875;y = 0.72;
			w = 0.2125;h = 0.04;
			onButtonClick = "[player, player, 'morphine'] call AGM_Medical_fnc_treat;";
		};
		class radx: RscButton
		{
			idc = 1614;
			text = $STR_FN_radx;
			x = 0.375;y = 0.8;
			w = 0.2;h = 0.04;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);player playMoveNow 'AinvPknlMstpSnonWnonDnon_medic1';[5, player, 'Armst_fnc_radX_health','Ввожу антирадин', 'armst_abort'] spawn AGM_Core_fnc_progressBar;";
		};
		class ButtClose : RscButton {
			idc = -1;
			text = $STR_closed;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
			x = .69; y = .8;
			w = .15; h = .06;
			color[] = {.95,.1,.1,1};
		};
	};
};
class medicine
{
	idd = 45888;
	movingenable = 0;
	enableSimulation = true;
	class controlsBackground {
		class MainBG : RscPicture {
			idc = -1;
			text = "\armst\armst_uidata\ui\fon_pda.paa";
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.418 * safezoneH;
		};
	};
	
	class Controls {
		class head: RscButton
		{
			idc = 1600;
			text = "Перевязать голову"; 
			x = 0.434479 * safezoneW + safezoneX;
			y = 0.315667 * safezoneH + safezoneY;
			w = 0.140677 * safezoneW;
			h = 0.0477037 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[player, player, 'bandage', 'HitHead'] call AGM_Medical_fnc_treat;[] spawn armst_fnc_bandage_head";
		};
		class body: RscButton
		{
			idc = 1601;
			text = "Перевязать торс"; 
			x = 0.436042 * safezoneW + safezoneX;
			y = 0.372519 * safezoneH + safezoneY;
			w = 0.139114 * safezoneW;
			h = 0.0495556 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[player, player, 'bandage', 'HitBody'] call AGM_Medical_fnc_treat;[] spawn armst_fnc_bandage_body";
		};
		class left_arm: RscButton
		{
			idc = 1602;
			text = "Перевязать левую руку"; 
			x = 0.435 * safezoneW + safezoneX;
			y = 0.430296 * safezoneH + safezoneY;
			w = 0.140677 * safezoneW;
			h = 0.0495555 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[player, player, 'bandage', 'HitLeftArm'] call AGM_Medical_fnc_treat;";
		};
		class right_arm: RscButton
		{
			idc = 1603;
			text = "Перевязать правую руку"; 
			x = 0.435 * safezoneW + safezoneX;
			y = 0.487963 * safezoneH + safezoneY;
			w = 0.138594 * safezoneW;
			h = 0.0486297 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[player, player, 'bandage', 'HitRightArm'] call AGM_Medical_fnc_treat;";
		};
		class left_leg: RscButton
		{
			idc = 1604;
			text = "Перевязать левую ногу"; 
			x = 0.434531 * safezoneW + safezoneX;
			y = 0.543074 * safezoneH + safezoneY;
			w = 0.140677 * safezoneW;
			h = 0.0467778 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[player, player, 'bandage', 'HitLeftLeg'] call AGM_Medical_fnc_treat;";
		};
		class right_leg: RscButton
		{
			idc = 1605;
			text = "Перевязать правую ногу"; 
			x = 0.435052 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.140156 * safezoneW;
			h = 0.0477037 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);[player, player, 'bandage', 'HitRightLeg'] call AGM_Medical_fnc_treat;";
		};
		class exit: RscButton
		{
			idc = 1606;
			text = "Закрыть"; 
			x = 0.435573 * safezoneW + safezoneX;
			y = 0.66037 * safezoneH + safezoneY;
			w = 0.140156 * safezoneW;
			h = 0.0495556 * safezoneH;
			colorBackground[] = {0,0,0,0.1};
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
		};
	};
};
class craft
{
	idd = 88300;
	movingenable = 0;
	enableSimulation = true;

	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			//text = "craft\craft.paa";
			text = "armst_client\GUI\craft\craft.paa";
			idc = -1;	
			x = 0; y = 0;
			w = 1; h = 1;
			colorBackground[] = {0,0,0,1};
		};
	};
	
	class Controls {
		class RscListbox_1500: RscListbox
		{
			idc = 8300;
			x = 0.125;
			y = 0.16;
			w = 0.275;
			h = 0.6;
		};
		class RscListbox_1501: RscListbox
		{
			idc = 8301;
			x = 0.5875;
			y = 0.16;
			w = 0.2875;
			h = 0.6;
		};
		class add_item: RscButton
		{
			idc = 1600;
			text = ">>";
			x = 0.125;
			y = 0.8;
			w = 0.275;
			h = 0.04;
			onButtonClick = "call ARMST_craft_add_item_to_list;";
		};
		class remove_item: RscButton
		{
			idc = 1601;
			text = "<<"; 
			x = 0.125;
			y = 0.88;
			w = 0.275;
			h = 0.04;
			onButtonClick = "call ARMST_craft_remove_item_from_list;";
		};
		class craft: RscButton
		{
			idc = 1602;
			text = $STR_craft; 
			x = 0.5875;
			y = 0.8;
			w = 0.2875;
			h = 0.04;
			onButtonClick = "[] spawn ARMST_craft_click_button;";
		};
		class items_player: RscText
		{
			idc = 8310;
			text = $STR_Yourinventory; 
			x = 0.125;
			y = 0.1;
			w = 0.275;
			h = 0.04;
			lineSpacing=3;
			shadow=0;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0, 0, 0, 0};
		};
		class select_items: RscText
		{
			idc = 8311;
			text = $STR_selected; 
			x = 0.5875;
			y = 0.1;
			w = 0.2875;
			h = 0.04;
			lineSpacing=3;
			shadow=0;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0, 0, 0, 0};
		};
		class ButtClose : RscButton {
			idc = -1;
			text = $STR_closed;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
			x = 0.5875;
			y = 0.88;
			w = 0.2875;
			h = 0.04;
			color[] = {.95,.1,.1,1};
		};
	};
};
class keypad
{
	idd = 88555;
	movingenable = 0;
	enableSimulation = true;
	class controlsBackground {
		class MainBGkeypad : RscPicture {
			idc = 8498;
			text = "armst_client\GUI\keypad\keypad.paa";
			x = 0; y = 0;
			w = 1; h = 1;
		};
	};
	
	class Controls {

		class RscEdit_1400: RscEdit
		{
			idc = 8499;text="";
			x = 0.2875;y = 0.12;
			w = 0.4125;h = 0.12;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;text="";
			x = 0.287501;y = 0.3;
			w = 0.1;h = 0.08;
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "_text = ctrlText 8499;_text=_text+'7';ctrlSetText [8499, _text];";
		};
		class RscButton_1601: RscButton
		{
			idc = 1601;text="";
			x = 0.4;y = 0.3;
			w = 0.1;h = 0.08;
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "_text = ctrlText 8499;_text=_text+'8';ctrlSetText [8499, _text];";
		};
		class RscButton_1602: RscButton
		{
			idc = 1602;text="";
			x = 0.524999;y = 0.3;
			w = 0.0874999;h = 0.08;
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "_text = ctrlText 8499;_text=_text+'9';ctrlSetText [8499, _text];";
		};
		class RscButton_1603: RscButton
		{
			idc = 1603;text="";
			x = 0.287501;y = 0.42;
			w = 0.1;h = 0.08;
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "_text = ctrlText 8499;_text=_text+'4';ctrlSetText [8499, _text];";
		};
		class RscButton_1604: RscButton
		{
			idc = 1604;text="";
			x = 0.4;y = 0.42;
			w = 0.1;h = 0.08;
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "_text = ctrlText 8499;_text=_text+'5';ctrlSetText [8499, _text];";
		};
		class RscButton_1605: RscButton
		{
			idc = 1605;text="";
			x = 0.524999;y = 0.42;
			w = 0.0874999;h = 0.08;
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "_text = ctrlText 8499;_text=_text+'6';ctrlSetText [8499, _text];";
		};
		class RscButton_1606: RscButton
		{
			idc = 1606;text="";
			x = 0.287501;y = 0.54;
			w = 0.1;h = 0.08;
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "_text = ctrlText 8499;_text=_text+'1';ctrlSetText [8499, _text];";
		};
		class RscButton_1607: RscButton
		{
			idc = 1607;text="";
			x = 0.4;y = 0.54;
			w = 0.1;h = 0.08;
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "_text = ctrlText 8499;_text=_text+'2';ctrlSetText [8499, _text];";
		};
		class RscButton_1608: RscButton
		{
			idc = 1608;text="";
			x = 0.524999;y = 0.54;
			w = 0.1;h = 0.08;
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "_text = ctrlText 8499;_text=_text+'3';ctrlSetText [8499, _text];";
		};
		class RscButton_1609: RscButton
		{
			idc = 1609;text="";
			x = 0.287501;y = 0.64;
			w = 0.1;h = 0.1;
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "_text = ctrlText 8499;_text=_text+'0';ctrlSetText [8499, _text];";
		};
		class RscButton_1610: RscButton
		{
			idc = 1610;text="";
			x = 0.4;y = 0.64;
			w = 0.1;h = 0.1;
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "ctrlSetText [8499, ''];";
		};
		class RscButton_1611: RscButton
		{
			idc = 1611;text="";
			x = 0.524999;y = 0.64;
			w = 0.1;h = 0.1;
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "[(ctrlText 8499)] call ARMST_keypad_delete_one_symbol;";
		
		};
		class RscButton_1612: RscButton
		{
			idc = 1612;text="";
			x = 0.287501;y = 0.78;
			w = 0.1625;h = 0.08;
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "[(ctrlText 8499)] call ARMST_keypad_check_kod;";
		};
		class RscButton_1613: RscButton
		{
			idc = 1613;text="";
			x = 0.462499;y = 0.78;
			w = 0.1625;h = 0.08;
			colorFocused[] = {0,0,0,0.2};
			colorBackgroundActive[] = {0,0,0,0.2};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
		};
	};
};
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
			x = 0.635937 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.339375 * safezoneW;
			h = 0.11 * safezoneH;
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
	y = 0.500 * safezoneH + safezoneY;
	w = 0.135 * safezoneW;
	h = 0.025 * safezoneH;
		};
		class RscSlider_1907: dsl_Slider // sidearm
		{
			idc = 1907;
			type = CT_SLIDER;
			x = 0.0153125 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.135 * safezoneW;
			h = 0.025 * safezoneH;
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
	x = 0.651094 * safezoneW + safezoneX;
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
			x = 1000;
			y = 1000;
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

class armst_quest_church_1_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\church_1_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_church_2_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\church_2_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_church_3_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\church_3_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_church_4_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\church_4_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_expedition_1_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\expedition_1_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_expedition_2_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\expedition_2_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_expedition_3_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\expedition_3_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_expedition_4_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\expedition_4_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_expedition_5_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\expedition_5_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_expedition_6_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\expedition_6_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_expedition_7_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\expedition_7_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_expedition_8_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\expedition_8_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_father_note_1
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\father_note_1.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_father_note_2
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\father_note_2.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_father_note_3
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\father_note_3.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_father_note_4
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\father_note_4.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_father_note_5
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\father_note_5.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_father_note_6
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\father_note_6.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_fugitive_list_1
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\fugitive_list_1.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_fugitive_list_2
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\fugitive_list_2.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_fugitive_list_3
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\fugitive_list_3.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_fugitive_list_4
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\fugitive_list_4.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_fugitive_list_5
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\fugitive_list_5.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_fugitive_map
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\fugitive_map.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_Klondike_1_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\Klondike_1_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_Klondike_2_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\Klondike_2_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_Klondike_3_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\Klondike_3_pda.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_Klondike_4_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\Klondike_4_pda.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_Klondike_5_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\Klondike_5_pda.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_Klondike_6_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\Klondike_6_pda.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_Klondike_7_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\Klondike_7_pda.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_mushroom_1_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\mushroom_1_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_mushroom_2_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\mushroom_2_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_mushroom_3_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\mushroom_3_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_mushroom_4_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\mushroom_4_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_railway_1_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\railway_1_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_railway_2_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\railway_2_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_railway_3_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\railway_3_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_railway_4_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\railway_4_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_railway_5_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\railway_5_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_railway_6_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\railway_6_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_railway_7_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\railway_7_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_railway_8_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\railway_8_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_railway_9_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\railway_9_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_search_notebook
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\search_notebook.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_search_paper_1
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\search_paper_1.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_search_paper_2
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\search_paper_2.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_search_paper_3
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\search_paper_3.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_search_paper_4
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\search_paper_4.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_search_paper_5
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\search_paper_5.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_search_paper_6
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\search_paper_6.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_sencor_1_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\sencor_1_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_sencor_2_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\sencor_2_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_sencor_3_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\sencor_3_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};
class armst_quest_sencor_4_newspaper
{
	idd = 39880;
	movingenable = 0;
	enableSimulation = true;
	onDestroy="[[player, 'AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon'], 'switchMove'] call bis_fnc_mp;";
	class controlsBackground {
		class MainBG : RscPicture {	
			moving = false;
			idc = 1200;
			text = "\armst\armst_misc\armst_game\scripts\quest\sencor_4_newspaper.paa";
			x = 0.00142732 * safezoneW + safezoneX;
			y = -0.00411243 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
};