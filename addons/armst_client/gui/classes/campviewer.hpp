
class DisplayCampViewer
{
	onLoad="['Init',_this select 0] spawn (uinamespace getVariable 'ARMST_Camp_ViewCreate');";
	onUnload="['Exit',_this select 1] spawn (uinamespace getvariable 'ARMST_Camp_ViewCreate');";
	idd=198700;
	
	class controlsBackground
	{
		class MouseArea: RscText
		{
			idc=198701;
			style=16;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneH";
			text="";
		};
	};
	
	class controls
	{
		class RscControlsGroup_MainMenu: outlw_MR_RscControlsGroup
		{
			idc = 198702;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 0.03 * safezoneH;
			
			class controls
			{
				class RscCamp_MainMenu_Background: outlw_MR_IGUIBack
				{
					idc = -1;
					x = 0;
					y = 0;
					w = 1 * safezoneW;
					h = 0.03 * safezoneH;
					colorBackground[] = {0,0,0,0.9};
				};
				
				class RscCamp_MainMenu_Resources: outlw_MR_RscActiveText
				{
					idc = 198703;
					style = 2;
					x = 0.00125001;
					y = 0.00125002;
					w = 0.157513;
					h = 0.03;
					
					text = "Ресурсы";	
					onMouseButtonDown = "'resources' call ARMST_Camp_Ui_Create";
				};
				
				class RscCamp_MainMenu_Objects: outlw_MR_RscActiveText
				{
					idc = 198704;
					style = 2;
					x = 0.149971;
					y = 0.00113329;
					w = 0.157513;
					h = 0.03;
					
					text = "Объекты";
					onMouseButtonDown = "'objects' call ARMST_Camp_Ui_Create";
				};
				
				class RscCamp_MainMenu_Party: outlw_MR_RscActiveText
				{
					idc = 198705;
					style = 2;
					x = 0.307484;
					y = 0.00113329;
					w = 0.157513;
					h = 0.03;

					text = "Участники";
					onMouseButtonDown = "'party' call ARMST_Camp_Ui_Create";
				};
				
				class RscCamp_MainMenu_Help: outlw_MR_RscActiveText
				{
					idc = 198706;
					style = 2;
					x = 0.465;
					y = 0.00125002;
					w = 0.157513;
					h = 0.03;

					text = "Помощь";
					onMouseButtonDown = "'help' call ARMST_Camp_Ui_Create";
				};
				
				class RscCamp_MainMenu_Delete: outlw_MR_RscActiveText
				{
					idc = 198707;
					style = 2;
					x = 0.622516;
					y = 0.00125002;
					w = 0.157513;
					h = 0.03;
					
					color[] = {1,0,0,0.4};

					text = "Удалить лагерь";
					onMouseButtonDown = "'delete' call ARMST_Camp_Ui_Create";
				};
				
			};
		};
	};
};


