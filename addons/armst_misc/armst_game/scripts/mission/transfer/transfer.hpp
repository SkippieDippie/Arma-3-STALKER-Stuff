class RscStructuredText1 {
	idc = -1; 
	type = CT_STRUCTURED_TEXT;  
	style = ST_LEFT;            
	colorBackground[] = { 1, 1, 1, 0 }; 
	x = 0.1; 
	y = 0.1; 
	w = 0.3; 
	h = 0.1; 
	size = 0.018;
	text = "";
	class Attributes {
	  font = "TahomaB";
	  color = "#FFFFFF";
	  align = "center";
	  valign = "middle";
	  shadow = false;
	  shadowColor = "#ff0000";
	  size = "1";
	};
};
class transfer {
	name = "transfer";
	idd = 56565;
	movingEnable = false; 
	enableSimulation = true; 
	class controls {
		class Title:RscStructuredText1
		{
			idc = -1;
			text = "<t size='3' font='PuristaLight'>Выберите вещь</t>";
			x = 0.439582 * safezoneW + safezoneX;
			y = 0.302518 * safezoneH + safezoneY;
			w = 0.120169 * safezoneW;
			h = 0.0340512 * safezoneH;
		};
		class Itemslb: RscListbox
		{
			idc = 1500;
			x = 0.438822 * safezoneW + safezoneX;
			y = 0.34249 * safezoneH + safezoneY;
			w = 0.121211 * safezoneW;
			h = 0.305461 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
		};
		class TransferButt: RscButton
		{
			idc = -1;
			text = "Передать"; //--- ToDo: Localize;
			x = 0.439582 * safezoneW + safezoneX;
			y = 0.671264 * safezoneH + safezoneY;
			w = 0.120169 * safezoneW;
			h = 0.0331249 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			onButtonClick = "[player, cursorTarget,lbData [1500, lbCurSel 1500],lbText [1500, lbCurSel 1500] ] spawn ARMST_transfer_item;(findDisplay 56565) closeDisplay 1;";
		};
	};
	class controlsBackground {
		class RscPicture_1200: RscPicture
		{
			idc = -1;
			text = "\armst\armst_misc\armst_game\scripts\mission\transfer\transfer.jpg";
			x = 0.411858 * safezoneW + safezoneX;
			y = 0.264902 * safezoneH + safezoneY;
			w = 0.176284 * safezoneW;
			h = 0.470196 * safezoneH;
		};
	};
};
class transfer_confirm {
	name = "transfer_confirm";
	idd = 56566;
	movingEnable = false; 
	enableSimulation = true; 
	class controls {
		class conf_text: RscStructuredText1
		{
			idc = 222;
			text = "";
			x = 0.39423 * safezoneW + safezoneX;
			y = 0.423983 * safezoneH + safezoneY;
			w = 0.204039 * safezoneW;
			h = 0.0442406 * safezoneH;
		};
		class cancel_text: RscStructuredText1
		{
			idc = 223;
			text = "";
			x = 0.407451 * safezoneW + safezoneX;
			y = 0.481192 * safezoneH + safezoneY;
			w = 0.0602615 * safezoneW;
			h = 0.0201566 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class accept_text: RscStructuredText1
		{
			idc = 224;
			text = "";
			x = 0.523622 * safezoneW + safezoneX;
			y = 0.481192 * safezoneH + safezoneY;
			w = 0.0602615 * safezoneW;
			h = 0.0192303 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class cancel: RscButton
		{
			idc = -1;
			x = 0.403565 * safezoneW + safezoneX;
			y = 0.470861 * safezoneH + safezoneY;
			w = 0.0680754 * safezoneW;
			h = 0.0386828 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1);";
		};
		class accept: RscButton
		{
			idc = -1;
			x = 0.518233 * safezoneW + safezoneX;
			y = 0.471284 * safezoneH + safezoneY;
			w = 0.0691173 * safezoneW;
			h = 0.0386828 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			onButtonClick = "[(findDisplay 56566) getVariable 'player_transferer',(findDisplay 56566) getVariable 'item'] spawn ARMST_transfer_accept;((ctrlParent (_this select 0)) closeDisplay 1);";
		};
	};
	class controlsBackground {
		class back: RscPicture
		{
			idc = -1;
			text = "\armst\armst_misc\armst_game\scripts\mission\transfer\confirm.jpg";
			x = 0.385416 * safezoneW + safezoneX;
			y = 0.415365 * safezoneH + safezoneY;
			w = 0.220355 * safezoneW;
			h = 0.112847 * safezoneH;
		};
	};
};