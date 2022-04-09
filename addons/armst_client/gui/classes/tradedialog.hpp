		
	class tradeDialog {

		idd = IDD_TRADEDIALOG;
		movingEnable = 0;
		enableSimulation = 1;
		onLoad = "(_this select 0) call ARMST_Trade_onLoadDialog";
		onUnload = "missionNamespace setVariable ['ARMST_Trade_ControlIndex', 0]";
		
		class controlsBackground 
		{
			class Mainbackgrnd: outlw_MR_IGUIBack
			{
				idc = IDC_TRADEDIALOG_BCGND;
				x = 0 * safezoneW + safezoneX;
				y = 0.8 * safezoneH + safezoneY;
				w = 1 * safezoneW;
				h = 0.2 * safezoneH;
				colorBackground[] = {0,0,0,0.7};
			};
		};

		class controls 
		{
			class MainListBox: outlw_MR_RscListBox
			{
				idc = IDC_TRADEDIALOG_LIST;
				x = 0.025 * safezoneW + safezoneX;
				y = 0.8 * safezoneH + safezoneY;
				w = 0.2125 * safezoneW;
				h = 0.18 * safezoneH;
				colorText[] = {1,1,1,1};
				colorBackground[] = {0,0,0,0.6};
				colorDisabled[] = {1,1,1,0.25};
				colorSelect[] = {0,0,0,1};
				colorSelect2[] = {0,0,0,1};
				colorSelectBackground[] = {0.95,0.95,0.95,1};
				colorSelectBackground2[] = {1,1,1,0.5};
				rowHeight = 0.05;
				onLBSelChanged = "";
				onLBDblClick = "_this call ARMST_Trade_onSelectGroup";
			};
			
			class Money: outlw_MR_RscStructuredText
			{
				idc = IDC_TRADEDIALOG_TITLE_MONEY;
				x = 0.775 * safezoneW + safezoneX;
				y = 0.8 * safezoneH + safezoneY;
				w = 0.175 * safezoneW;
				h = 0.04 * safezoneH;			
				colorText[] = {0,0,0,1};
				colorBackground[] = {1,1,1,0};
				size = 0.04;
				text = "";
			};
			
			class GoodTitle: outlw_MR_RscStructuredText
			{
				idc = IDC_TRADEDIALOG_TITLE_GOODINFO;
				x = 0.2375 * safezoneW + safezoneX;
				y = 0.84 * safezoneH + safezoneY;
				w = 0.425 * safezoneW;
				h = 0.04 * safezoneH;
				colorText[] = {1,1,1,1};
				colorBackground[] = {1,1,1,0};
				size = 0.04;
				text = "";
			};
			
			class GoodPrice: outlw_MR_RscStructuredText
			{
				idc = IDC_TRADEDIALOG_TITLE_GOODPRICE;
				x = 0.775 * safezoneW + safezoneX;
				y = 0.84 * safezoneH + safezoneY;
				w = 0.175 * safezoneW;
				h = 0.04 * safezoneH;
				colorText[] = {0,0,0,1};
				colorBackground[] = {1,1,1,0};
				size = 0.04;
				text = "";
			};

			class GoodDesc: outlw_MR_RscStructuredText
			{
				idc = IDC_TRADEDIALOG_TITLE_GOODDESC;
				x = 0.2375 * safezoneW + safezoneX;
				y = 0.88 * safezoneH + safezoneY;
				w = 0.712503 * safezoneW;
				h = 0.1 * safezoneH;
				colorText[] = {0,0,0,1};
				colorBackground[] = {0.85,0.9,0.98,1};
				class Attributes
				{
					font = "PuristaMedium";
					color = "#020202";
					align = "left";
					shadow = 0;
				};
				size = 0.035;
				text = "";
			};
			
			class TradeHint: outlw_MR_RscStructuredText
			{
				idc = IDC_TRADEDIALOG_TITLE_HINTCONTROL;
				x = 0.701275 * safezoneW + safezoneX;
				y = 0.0144171 * safezoneH + safezoneY;
				w = 0.297537 * safezoneW;
				h = 0.144362 * safezoneH;
				colorText[] = {1,1,1,1};
				colorBackground[] = {0,0,0,0.7};
				text = $STR_DAP_TRADE_HINT;
			};
			
			
			class FullBuyListButton: outlw_MR_RscButtonMenu
			{
				idc = IDC_TRADEDIALOG_BUTTON_FULLBUY;
				x = 0.701275 * safezoneW + safezoneX;
				y = 0.762477 * safezoneH + safezoneY;
				w = 0.315039 * safezoneW;
				h = 0.0262477 * safezoneH;
				font = "PuristaMedium";
				action = "call ARMST_Trade_ToggleFullBuyList";
				text = $STR_DAP_TRADE_BUTTON_FULLBUYLIST;
			};
			
			class FullBuyList: outlw_MR_RscListBox
			{
				idc = IDC_TRADEDIALOG_LIST_FULLBUY;
				x = 0.701275 * safezoneW + safezoneX;
				y = 0.198151 * safezoneH + safezoneY;
				w = 0.315039 * safezoneW;
				h = 0.564326 * safezoneH;
				colorText[] = {1,1,1,1};
				colorBackground[] = {0,0,0,0.6};
				colorDisabled[] = {1,1,1,0.25};
				colorSelect[] = {0,0,0,1};
				colorSelect2[] = {0,0,0,1};
				colorSelectBackground[] = {0.95,0.95,0.95,1};
				colorSelectBackground2[] = {1,1,1,0.5};
				rowHeight = 0.05;
				onLBSelChanged = "";
				onLBDblClick = "";
			};
			
		};
	};
