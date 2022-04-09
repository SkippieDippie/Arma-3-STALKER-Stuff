
class SelectFactionDialog 
{
	idd = IDD_SELECTFACTION_DIALOG;
	onLoad = "_this call ARMST_Player_SelectDialogOnload";
	onUnload = "call ARMST_Player_SelectDialogOnUnload";
		
	class controlsBackground 
	{
		class Screen: outlw_MR_IGUIBack
		{
			idc = IDC_SELECTFACTION_SCREEN;
			x = safeZoneXAbs;
			y = safezoneY;
			w = safeZoneWAbs;
			h = safezoneH;
			colorBackground[] = {0,0,0,1};
		};
	};
	
	class controls
	{
		class SelectFaction1: outlw_MR_RscActiveText
		{
			idc = IDC_SELECTFACTION_1;
			
			x = safeZoneXAbs;
			y = 0;
			w = (safeZoneWAbs / 5);
			h = safeZoneH + safeZoneY;
			
			color[] = {1,1,1,0.3};
			colorActive[] = {1,1,1,1};
	  
			style = 48 + 0x800;
		
			text = "\armst_client\GUI\Images\select_art\1.jpg";
			tooltip = $STR_SELECTFACTION_TOOLTIP_FREEDOM;
			
			onMouseButtonDown = "call ARMST_Player_selectFaction";
			
		};
		
		class SelectFaction2: outlw_MR_RscActiveText
		{
			idc = IDC_SELECTFACTION_2;
			
			x = safeZoneXAbs + (safeZoneWAbs / 5) * 1;
			y = 0;
			w = (safeZoneWAbs / 5);
			h = safeZoneH + safeZoneY;
			
			color[] = {1,1,1,0.3};
			colorActive[] = {1,1,1,1};
			
			style = 48 + 0x800;
		
			text = "\armst_client\GUI\Images\select_art\2.jpg";
			tooltip = $STR_SELECTFACTION_TOOLTIP_DUTY;
			
			onMouseButtonDown = "call ARMST_Player_selectFaction";
			
		};
		
		class SelectFaction3: outlw_MR_RscActiveText
		{
			idc = IDC_SELECTFACTION_3;
			
			x = safeZoneXAbs + (safeZoneWAbs / 5) * 2;
			y = 0;
			w = (safeZoneWAbs / 5);
			h = safeZoneH + safeZoneY;
			
			color[] = {1,1,1,0.3};
			colorActive[] = {1,1,1,1};
			
			style = 48 + 0x800;
		
			text = "\armst_client\GUI\Images\select_art\3.jpg";
			tooltip = $STR_SELECTFACTION_TOOLTIP_MONOLITH;
			
			onMouseButtonDown = "call ARMST_Player_selectFaction";
			
		};
		
		class SelectFaction4: outlw_MR_RscActiveText
		{
			idc = IDC_SELECTFACTION_4;
			
			x = safeZoneXAbs + (safeZoneWAbs / 5) * 3;
			y = 0;
			w = (safeZoneWAbs / 5);
			h = safeZoneH + safeZoneY;
			
			color[] = {1,1,1,0.3};
			colorActive[] = {1,1,1,1};
			
			style = 48 + 0x800;
		
			text = "\armst_client\GUI\Images\select_art\4.jpg";
			tooltip = $STR_SELECTFACTION_TOOLTIP_BANDITS;
			
			onMouseButtonDown = "call ARMST_Player_selectFaction";
			
		};
		
		class SelectFaction5: outlw_MR_RscActiveText
		{
			idc = IDC_SELECTFACTION_5;
			
			x = safeZoneXAbs + (safeZoneWAbs / 5) * 4;
			y = 0;
			w = (safeZoneWAbs / 5);
			h = safeZoneH + safeZoneY;
			
			color[] = {1,1,1,0.3};
			colorActive[] = {1,1,1,1};
			
			style = 48 + 0x800;
		
			text = "\armst_client\GUI\Images\select_art\5.jpg";
			tooltip = $STR_SELECTFACTION_TOOLTIP_STALKERS;
			
			onMouseButtonDown = "call ARMST_Player_selectFaction";
			
		};
	};
};


