

class FactionTerminalDialog 
{
	idd = IDD_TERMINALDIALOG;
	onLoad = "_this call ARMST_Terminal_OnLoad";
	onUnload = "call ARMST_Terminal_CloseTerminal";
		
	class controlsBackground 
	{
		class Screen: outlw_MR_RscPicture
		{
			idc = IDC_TERMINAL_SCREEN;
			x = safeZoneXAbs;
			y = safezoneY;
			w = safeZoneWAbs;
			h = safezoneH;
			colorBackground[] = {0,0,0,0};
			text = "\armst_client\GUI\Images\terminal\display1.jpg";
		};
				
		/**/
		class TEST: outlw_MR_IGUIBack
		{
			idc = IDC_TERMINAL_TEST;
			x = 0.14 * safeZoneWAbs + safeZoneXAbs;
			y = 0.2 * safezoneH + safezoneY;
			w = 0.75 * safeZoneWAbs;
			h = 0.69 * safezoneH;
			colorBackground[] = {1,0,0,1};
		};
		class TEST_1: outlw_MR_IGUIBack
		{
			idc = IDC_TERMINAL_TEST_1;
			x = 0.0350293 * safeZoneWAbs + safeZoneXAbs;
			y = 0.1 * safezoneH + safezoneY;
			w = 0.919941 * safeZoneWAbs;
			h = 0.816037 * safezoneH;
			colorBackground[] = {0,1,0,0.5};
		};

	};
	
	class controls
	{
		
		////////////////////////////////////////////////////////
		// AUTHENTICATION
		////////////////////////////////////////////////////////
		
		class AuthGroup: outlw_MR_RscControlsGroup 
		{
			idc = IDC_TERMINAL_AUTH;
			fade = 0;
			
			x = 0.350293 * safeZoneWAbs + safeZoneXAbs;
			y = 0.309805 * safezoneH + safezoneY;
			w = 0.4 * safeZoneWAbs;
			h = 0.4 * safezoneH;
			
			class controls 
			{
				class AuthWindowBackground: outlw_MR_RscPicture
				{
					idc = -1;
					x = 0;
					y = 0;
					w = 0.4;
					h = 0.4;
					colorText[] = {1,1,1,1};
					colorBackground[] = {1,1,1,1};
					
					text = "\armst_client\GUI\Images\terminal\window_auth.jpg";
				};
				
				class AuthStatus: outlw_MR_RscStructuredText
				{
					idc = IDC_TERMINAL_AUTH_STATUS;
					x =  0.057526 +0.01;
					y = 0.118982;
					w = 0.3;
					h = 0.1;
					colorBackground[] = {0,0,0,0};
					colorText[] = {0,0,0,0.7};
					class Attributes
					{
					    font = "RobotoCondensed";
					    color = "#000000";
					    align = "left";
					    shadow = 0;
					};
					shadow = 0;
					size = 0.03;
					text = $STR_TERMINAL_AUTH_STATUS_DEFAULT;
				};
				
				class AuthUserInput: outlw_MR_RscEdit
				{
					idc = IDC_TERMINAL_AUTH_INPUT;
					x = 0.15;
					y = 0.23;
					w = 0.20;
					h = 0.035;
					colorBackground[] = {1,1,1,0};
					colorText[] = {0,0,0,1};
					size = 0.02;
					text ="";
				};
				
				class AuthWindowConfirm: outlw_MR_RscActiveText
				{
					idc = IDC_TERMINAL_AUTH_CONFIRM;
					x = 0.25;
					y = 0.33;
					w = 0.1;
					h = 0.05;
					
					style = 48 + 0x800;
					
					text = "\armst_client\GUI\Images\terminal\window_auth_confirm.jpg";
					
					onMouseButtonDown = "_this call ARMST_Terminal_authRequest";
				};
				
				class AuthWindowCancel: outlw_MR_RscActiveText
				{
					idc = -1;
					x = 0.15;
					y = 0.33;
					w = 0.1;
					h = 0.05;
					
					style = 48 + 0x800;
					
					text = "\armst_client\GUI\Images\terminal\window_auth_cancel.jpg";
					
					onMouseButtonDown = "call ARMST_Terminal_closeTerminal";
				};
				
			};

		};
						
		////////////////////////////////////////////////////////
		// DESKTOP
		////////////////////////////////////////////////////////
		
		class TerminalDesktop: outlw_MR_RscControlsGroup
		{
			idc = IDC_TERMINAL_DESKTOP;
			fade = 0;
			
			x = 0.0350293 * safeZoneWAbs + safeZoneXAbs;
			y = 0.1 * safezoneH + safezoneY;
			w = 0.919941 * safeZoneWAbs;
			h = 0.816037 * safezoneH;

			
			class controls 
			{
				
				class DesktopNotice: outlw_MR_RscStructuredText
				{
					idc = IDC_TERMINAL_DESKTOP_NOTICE;
					x =  0.85;
					y = 0;
					w = 0.25 * safeZoneWAbs;
					h = 0.1;
					colorBackground[] = {0,0,0,0};
					colorText[] = {1,1,1,0.4};
					class Attributes
					{
					    font = "RobotoCondensed";
					    color = "#F2F2F2";
					    align = "left";
					    shadow = 0;
					};
					text = "";
				};
				
				class ButtonSummary: outlw_MR_RscActiveText
				{
					idc = IDC_TERMINAL_DESKTOP_SUMMARY;
					
					x = 0.014405;
					y = 0.142984;
					w = 0.0531213;
					h = 0.0680031;
					
					style = 48 + 0x800;
				
					text = "\armst_client\GUI\Images\terminal\shortcut_info.paa";
					tooltip = $STR_TERMINAL_TOOLTIP_SUMMARY;
					
					onMouseButtonDown = "call ARMST_Terminal_changePage";
					
				};
				
				class ButtonPersonnel: outlw_MR_RscActiveText
				{
					idc = IDC_TERMINAL_DESKTOP_PERSONNEL;
				
					x = 0.014405;
					y = 0.227987;
					w = 0.0531213;
					h = 0.0680031;
					
					style = 48 + 0x800;
				
					text = "\armst_client\GUI\Images\terminal\shortcut_command.paa";
					tooltip = $STR_TERMINAL_TOOLTIP_PERSONNEL;
					
					onMouseButtonDown = "call ARMST_Terminal_changePage";
				};
				
				class ButtonLocations: outlw_MR_RscActiveText
				{
					idc = IDC_TERMINAL_DESKTOP_LOCATIONS;
					
					x = 0.014405;
					y = 0.312991;
					w = 0.0531213;
					h = 0.0680031;
					
					style = 48 + 0x800;
				
					text = "\armst_client\GUI\Images\terminal\shortcut_locations.paa";
					tooltip = $STR_TERMINAL_TOOLTIP_LOCATIONS;
					
					onMouseButtonDown = "call ARMST_Terminal_changePage";
				};
				
				class ButtonBudget: outlw_MR_RscActiveText
				{
					idc = IDC_TERMINAL_DESKTOP_BUDGET;
					
					x = 0.014405;
					y = 0.397995;
					w = 0.0531213;
					h = 0.0680031;
					
					style = 48 + 0x800;
				
					text = "\armst_client\GUI\Images\terminal\shortcut_budget.paa";
					tooltip = $STR_TERMINAL_TOOLTIP_BUDGET;
					
					onMouseButtonDown = "call ARMST_Terminal_changePage";
				};
				
				class ButtonTransfer: outlw_MR_RscActiveText
				{
					idc = IDC_TERMINAL_DESKTOP_TRANSFER;
					
					x = 0.014405;
					y = 0.397995;
					w = 0.0531213;
					h = 0.0680031;
					
					style = 48 + 0x800;
				
					text = "\armst_client\GUI\Images\terminal\shortcut_transfer.paa";
					tooltip = $STR_TERMINAL_TOOLTIP_TRANSFER;
					
					onMouseButtonDown = "call ARMST_Terminal_changePage";
				};
				
				class ButtonCommunicate: outlw_MR_RscActiveText
				{
					idc = IDC_TERMINAL_DESKTOP_COMMUNICATE;
					
					x = 0.014405;
					y = 0.397995;
					w = 0.0531213;
					h = 0.0680031;
					
					style = 48 + 0x800;
				
					text = "\armst_client\GUI\Images\terminal\shortcut_communicate.paa";
					tooltip = $STR_TERMINAL_TOOLTIP_COMMUNICATE;
					
					onMouseButtonDown = "call ARMST_Terminal_changePage";
				};
				
				class ButtonAccess: outlw_MR_RscActiveText
				{
					idc = IDC_TERMINAL_DESKTOP_ACCESS;
					
					x = 0.014405;
					y = 0.397995;
					w = 0.0531213;
					h = 0.0680031;
					
					style = 48 + 0x800;
				
					text = "\armst_client\GUI\Images\terminal\shortcut_access.paa";
					tooltip = $STR_TERMINAL_TOOLTIP_ACCESS;
					
					onMouseButtonDown = "call ARMST_Terminal_changePage";
				};
				
				class ButtonNotebook: outlw_MR_RscActiveText
				{
					idc = IDC_TERMINAL_DESKTOP_NOTEBOOK;
					
					x = 0.014405;
					y = 0.397995;
					w = 0.0531213;
					h = 0.0680031;
					
					style = 48 + 0x800;
				
					text = "\armst_client\GUI\Images\terminal\shortcut_notebook.paa";
					tooltip = $STR_TERMINAL_TOOLTIP_NOTEBOOK;
					
					onMouseButtonDown = "call ARMST_Terminal_changePage";
				};
				
				class ButtonResources: outlw_MR_RscActiveText
				{
					idc = IDC_TERMINAL_DESKTOP_RESOURCES;
					
					x = 0.014405;
					y = 0.397995;
					w = 0.0531213;
					h = 0.0680031;
					
					style = 48 + 0x800;
				
					text = "\armst_client\GUI\Images\terminal\shortcut_resources.paa";
					tooltip = $STR_TERMINAL_TOOLTIP_RESOURCES;
					
					onMouseButtonDown = "call ARMST_Terminal_changePage";
				};
				
				class ButtonObjectives: outlw_MR_RscActiveText
				{
					idc = IDC_TERMINAL_DESKTOP_OBJECTIVES;
					
					x = 0.014405;
					y = 0.397995;
					w = 0.0531213;
					h = 0.0680031;
					
					style = 48 + 0x800;
				
					text = "\armst_client\GUI\Images\terminal\shortcut_objective.paa";
					tooltip = $STR_TERMINAL_TOOLTIP_OBJECTIVES;
					
					onMouseButtonDown = "call ARMST_Terminal_changePage";
				};
				
				class ButtonBase: outlw_MR_RscActiveText
				{
					idc = IDC_TERMINAL_DESKTOP_BASE;
					
					x = 0.014405;
					y = 0.397995;
					w = 0.0531213;
					h = 0.0680031;
					
					style = 48 + 0x800;
				
					text = "\armst_client\GUI\Images\terminal\shortcut_base.paa";
					tooltip = $STR_TERMINAL_TOOLTIP_BASE;
					
					onMouseButtonDown = "call ARMST_Terminal_changePage";
				};
				
				class ButtonExit: outlw_MR_RscActiveText
				{
					idc = IDC_TERMINAL_DESKTOP_EXIT;
					
					x = 0.014405;
					y = 0.397995;
					w = 0.0531213;
					h = 0.0680031;
					
					style = 48 + 0x800;
				
					text = "\armst_client\GUI\Images\terminal\shortcut_exit.paa";
					tooltip = $STR_TERMINAL_TOOLTIP_EXIT;
					
					onMouseButtonDown = "call ARMST_Terminal_changePage";
				};
				
				class ButtonDesc: outlw_MR_RscActiveText
				{
					idc = IDC_TERMINAL_DESKTOP_DESC;
					
					x = 0.014405;
					y = 0.397995;
					w = 0.0531213;
					h = 0.0680031;
					
					style = 48 + 0x800;
				
					text = "\armst_client\GUI\Images\terminal\shortcut_desc.paa";
					tooltip = $STR_TERMINAL_TOOLTIP_DESC;
					
					onMouseButtonDown = "call ARMST_Terminal_changePage";
				};
			};
		};

		////////////////////////////////////////////////////////
		// APPLICATION BASE
		////////////////////////////////////////////////////////
		
		class ApplicationGroup: outlw_MR_RscControlsGroup 
		{
			idc = IDC_TERMINAL_APP;
			fade = 0;
			
			x = 0.14 * safeZoneWAbs + safeZoneXAbs;
			y = 0.2 * safezoneH + safezoneY;
			w = 0.75 * safeZoneWAbs;
			h = 0.69 * safezoneH;
			//h = 0.05 * safezoneH;
			
			class controls 
			{
			
				class AppWindowBackground: outlw_MR_IGUIBack
				{
					idc = IDC_TERMINAL_APP_BACKGROUND;
					
					x = 0;
					y = 0;
					w = 1 * safeZoneW;
					h = 1;
					colorText[] = {0,0,0,0};
					colorBackground[] = {0,0,0,0.7};
					onMouseButtonDown = "['CURRENT_APP'] call ARMST_Terminal_SetLayerFocus";
					//text = "armst_client\GUI\Images\terminal\window_app.jpg";
				};
				
				class AppWindowTitle: outlw_MR_RscStructuredText
				{
					idc = IDC_TERMINAL_APP_TITLE;
					
					x = 0.01;
					y = 0.01;
					w = 0.6 * safeZoneW;
					h = 0.05;
					colorBackground[] = {0,0,0,0};
					colorText[] = {0.7,0.7,0.7,1};
					class Attributes
					{
					    font = "RobotoCondensed";
					    color = "#B2B2B2";
					    align = "left";
					    shadow = 0;
					};
					size = 0.04;
					text = "Application";
					onMouseButtonDown = "['CURRENT_APP'] call ARMST_Terminal_SetLayerFocus";
				};
				
				class AppWindowClose: outlw_MR_RscActiveText
				{
					idc = -1;
					
					x = 0.70 * safeZoneW;
					y = 0.01;
					w = 0.045 * safeZoneW;
					h = 0.03;
					style = 48 + 0x800;
					
					text = "\armst_client\GUI\Images\terminal\window_app_close.jpg";
					tooltip = $STR_TERMINAL_APP_CLOSE;
					onMouseButtonDown = "call ARMST_Terminal_changePage";
				};
				
				class AppWindowRefresh: outlw_MR_RscActiveText
				{
					idc = IDC_TERMINAL_APP_REFRESH;
					
					x = 0.65 * safeZoneW;
					y =0.01;
					w = 0.045 * safeZoneW;
					h = 0.03;
					style = 48 + 0x800;
					
					text = "\armst_client\GUI\Images\terminal\window_app_refresh.jpg";
					tooltip = $STR_TERMINAL_APP_REFRESH;
					onMouseButtonDown = "[ctrlParent (_this select 0)] call ARMST_Terminal_refreshPage";
				};
				
			};
		};
		
		
		////////////////////////////////////////////////////////
		// GUI  APPLICTIONS: SUMMARY
		////////////////////////////////////////////////////////
		
		class SummaryAppGroup: outlw_MR_RscControlsGroup 
		{
			idc = IDC_TERMINAL_PAGE_SUMMARY;
			fade = 0;

			x = 0.14 * safeZoneWAbs + safeZoneXAbs;
			y = 0.25 * safezoneH + safezoneY;
			w = 0.75 * safeZoneWAbs;
			h = 0.69 * safezoneH;
			
			class controls 
			{
				
				class AboutFactionList: outlw_MR_RscListBox
				{
					idc = IDC_TERMINAL_PAGE_SUM_LIST;
					text = ""; //--- ToDo: Localize;
					x = 0.01;
					y = 0.015;
					w = 0.2;
					h = 0.6;
					colorDisabled[] = {0,0,0,0.25};
					colorScrollbar[] = {0,0,0,0.5};
					colorSelect[] = {0.8,0.8,0.8,1};
					colorSelect2[] = {1,1,1,1};
					colorSelectBackground[] = {0.2,0.2,0.2,0};
					colorSelectBackground2[] = {0.2,0.2,0.2,0};
					colorBackground[] = {0,0,0,0};
					colorPicture[] = {1,1,1,1};
					colorPictureSelected[] = {1,1,1,1};
					colorText[] = {1,1,1,0.5};
					rowHeight = 0.05;
					onLBSelChanged = "_this call ARMST_Terminal_ActionSummarySelectFaction";
				};
				
				class AboutFactionMain: outlw_MR_RscStructuredText
				{
					idc = IDC_TERMINAL_PAGE_SUM_ABOUTMAIN;
					x = 0.442463 * safeZoneW;
					y = 0.015;
					w = 0.30 * safeZoneW;
					h = 0.5;
					colorBackground[] = {0,0,0,0};
					colorText[] = {1,1,1,0.8};
					class Attributes
					{
					    font = "RobotoCondensed";
					    color = "#C1C1C1";
					    align = "left";
					    shadow = 0;
					};
					 shadow = 0;
				};
			};
		};
		
		////////////////////////////////////////////////////////
		// GUI  APPLICTIONS: PERSONNEL
		////////////////////////////////////////////////////////
		class PersonnelAppGroup: outlw_MR_RscControlsGroup 
		{
			idc = IDC_TERMINAL_PAGE_PERSONNEL;
			fade = 0;

			x = 0.14 * safeZoneWAbs + safeZoneXAbs;
			y = 0.25 * safezoneH + safezoneY;
			w = 0.75 * safeZoneWAbs;
			h = 0.70 * safezoneH;
			
			class controls 
			{
				//Menu
				class PersonnelAppMainMenu: outlw_MR_RscControlsGroup 
				{
					idc = IDC_TERMINAL_PAGE_PER_MAINMENU;
					fade = 0;

					x = 0;
					y = 0;
					w = 0.75 * safeZoneW;
					h = 0.05;
					
					class controls 
					{
						class MenuBackground: outlw_MR_IGUIBack
						{
							idc = -1;
							x = 0;
							y = 0;
							w = 0.75 * safeZoneW;
							h = 0.05;
							colorText[] = {1,1,1,0};
							colorBackground[] = {0,0,0,0.8};
						};
						
						class MenuButtonBarrack: outlw_MR_RscButtonMenu
						{
							idc = IDC_TERMINAL_PAGE_PER_MAINMENU_BARRACK;
							
							x = 0.01 * safeZoneW;
							y =0.01;
							w = 0.1 * safeZoneW;
							h = 0.04;
							
							style = 48 + 0x800;
							
							class Attributes
							{
								font = "PuristaLight";
								color = "#E5E5E5";
								align = "center";
								shadow = "false";
							};
							
							text = $STR_TERMINAL_BUTTON_PERSONNEL_BARRACK;
							onMouseButtonDown = "call ARMST_Terminal_changePage";
						};
						
						class MenuButtonSquads: outlw_MR_RscButtonMenu
						{
							idc = IDC_TERMINAL_PAGE_PER_MAINMENU_SQUADS;
							
							x = 0.11 * safeZoneW;
							y =0.01;
							w = 0.1 * safeZoneW;
							h = 0.04;
							
							style = 48 + 0x800;
							
							class Attributes
							{
								font = "PuristaLight";
								color = "#E5E5E5";
								align = "center";
								shadow = "false";
							};
							
							text = $STR_TERMINAL_BUTTON_PERSONNEL_SQUADS;
							onMouseButtonDown = "call ARMST_Terminal_changePage";
						};
						
						class MenuButtonRecruits: outlw_MR_RscButtonMenu
						{
							idc = IDC_TERMINAL_PAGE_PER_MAINMENU_RECRUITS;
							
							x = 0.21 * safeZoneW;
							y =0.01;
							w = 0.1 * safeZoneW;
							h = 0.04;
							
							style = 48 + 0x800;
							
							class Attributes
							{
								font = "PuristaLight";
								color = "#E5E5E5";
								align = "center";
								shadow = "false";
							};
							
							text = $STR_TERMINAL_BUTTON_PERSONNEL_RECRUITS;
							onMouseButtonDown = "call ARMST_Terminal_changePage";
						};
					};
				};
				
				//Page Barrack
				class PersonnelAppBarrack: outlw_MR_RscControlsGroup 
				{
					idc = IDC_TERMINAL_PAGE_PER_BARRACK;
					fade = 0;

					x = 0;
					y = 0.055;
					w = 0.75 * safeZoneW;
					h = 0.7;
					
					class controls 
					{
						class BarrackList: outlw_MR_RscListBox
						{
							idc = IDC_TERMINAL_PAGE_PER_BAR_LIST;
							text = ""; //--- ToDo: Localize;
							x = 0.01;
							y = 0.03;
							w = 0.2 * safeZoneW;
							h = 0.65;
							colorDisabled[] = {1,1,1,0.25};
							colorScrollbar[] = {1,1,1,0.5};
							colorSelect[] = {1,1,1,1};
							colorSelect2[] = {1,1,1,1};
							colorSelectBackground[] = {0.2,0.2,0.2,0};
							colorSelectBackground2[] = {0.2,0.2,0.2,0};
							colorBackground[] = {0,0,0,0.8};
							colorPicture[] = {1,1,1,1};
							colorPictureSelected[] = {1,1,1,1};
							colorText[] = {1,1,1,0.5};
							rowHeight = 0.03;
							onLBSelChanged = "call ARMST_Terminal_ActionBarrackSelectUser";
						};
						
						class BarrackAboutMember: outlw_MR_RscStructuredText
						{
							idc = IDC_TERMINAL_PAGE_PER_BAR_ABOUT;
							x = 0.21 * safeZoneW;
							y = 0.03;
							w = 0.25 * safeZoneW;
							h = 0.65;
							colorBackground[] = {0,0,0,0};
							colorText[] = {1,1,1,0.3};
							class Attributes
							{
							    font = "RobotoCondensed";
							    color = "#B2B2B2";
							    align = "left";
							    shadow = 0;
							};
							 shadow = 0;
							 size = 0.03;
							 sizeEx = 0.03;
						};
						
						class BarrackFindResult: outlw_MR_RscStructuredText
						{
							idc = IDC_TERMINAL_PAGE_PER_BAR_FIND_RESULT;
							x = 0.47 * safeZoneW;
							y = 0.06;
							w = 0.25 * safeZoneW;
							h = 0.03;
							colorBackground[] = {0,0,0,0};
							colorText[] = {0.3,0,0,0.3};
							class Attributes
							{
							    font = "RobotoCondensed";
							    color = "#B2B2B2";
							    align = "left";
							    shadow = 0;
							};
							 shadow = 0;
							 size = 0.03;
							 sizeEx = 0.05;
							 text = $STR_TERMINAL_TITTLE_PERSONNEL_BARRACK_FIND_DEFAULT;
						};
						
						class BarrackFindInput: outlw_MR_RscEdit
						{
							idc = IDC_TERMINAL_PAGE_PER_BAR_FIND_INPUT;
							x = 0.47 * safeZoneW;
							y = 0.03;
							w = 0.15 * safeZoneW;
							h = 0.03;
							colorBackground[] = {1,1,1,0.3};
							colorText[] = {0,0,0,1};
							size = 0.02;
							sizeEx = 0.04;
							text ="";
						};
						
						class BarrackFindButton: outlw_MR_RscButtonMenu
						{
							idc = IDC_TERMINAL_PAGE_PER_BAR_FIND_BUTTON;
							
							x = 0.62 * safeZoneW;
							y = 0.03;
							w = 0.1 * safeZoneW;
							h = 0.03;
							
							style = 48 + 0x800;
							
							period = 1;
							periodFocus = 0;
							periodOver = 0;
							
							class Attributes
							{
								font = "PuristaLight";
								color = "#E5E5E5";
								align = "center";
								shadow = "false";
							};
							
							text = $STR_TERMINAL_BUTTON_PERSONNEL_BARRACK_FIND;
							onMouseButtonDown = "call ARMST_Terminal_ActionBarrackFindUser";
						};
						
						class BarrackExcludeInput: outlw_MR_RscEdit
						{
							idc = IDC_TERMINAL_PAGE_PER_BAR_EXCLUDE_INPUT;
							x = 0.47 * safeZoneW;
							y = 0.50;
							w = 0.25 * safeZoneW;
							h = 0.13;
							style = ST_UP + ST_MULTI;
							colorBackground[] = {0,0,0,0.8};
							colorText[] = {1,1,1,1};
							size = 0.04;
							sizeEx = 0.03;
							text ="";
						};
						
						class BarrackExcludeButton: outlw_MR_RscButtonMenu
						{
							idc = IDC_TERMINAL_PAGE_PER_BAR_EXCLUDE_BUTTON;
							
							x = 0.47 * safeZoneW;
							y = 0.63;
							w = 0.25 * safeZoneW;
							h = 0.05;
							
							style = 48 + 0x800;
							
							class Attributes
							{
								font = "PuristaLight";
								color = "#E5E5E5";
								align = "center";
								shadow = "false";
							};
							
							text = $STR_TERMINAL_BUTTON_PERSONNEL_BARRACK_EXCLUDE;
							onMouseButtonDown = "call ARMST_Terminal_ActionBarrackExcludeUser";
						};
					};
				};
				
				//Page Squads
				class PersonnelAppSquads: outlw_MR_RscControlsGroup 
				{
					idc = IDC_TERMINAL_PAGE_PER_SQUADS;
					fade = 0;

					x = 0;
					y = 0.055;
					w = 0.75 * safeZoneW;
					h = 0.7;
					
					class controls 
					{
						
						class SquadsListSquads: outlw_MR_RscTree
						{
							idc = IDC_TERMINAL_PAGE_PER_SQD_LIST_SQUADS;
							
							multiselectEnabled = 0;
							
							x = 0.01;
							y = 0.03;
							w = (0.75 * safeZoneW) / 3 - 0.02;
							h = 0.60;
							
							sizeEx = 0.03;
							colorSelect[] = {0.5,0.5,0.5,0.5};
							colorSelectText[] = {1,1,1,1};							
							colorBackground[] = {0,0,0,0.8};
							
							onTreeDblClick = "call ARMST_Terminal_ActionSquadsSetLeader";
							onTreeSelChanged = "call ARMST_Terminal_ActionSquadsDisbandChangeButton";
							
						};
						
						class SquadsDisbandButton: outlw_MR_RscButtonMenu
						{
							idc = IDC_TERMINAL_PAGE_PER_SQD_DISBAND_BUTTON;
							
							x = 0.01;
							y = 0.63;
							w = (0.75 * safeZoneW) / 3 - 0.02;
							h = 0.05;
							
							style = 48 + 0x800;
							
							class Attributes
							{
								font = "PuristaLight";
								color = "#E5E5E5";
								align = "center";
								shadow = "false";
							};
							
							text = $STR_TERMINAL_BUTTON_PERSONNEL_SQUADS_DISBAND;
							
							onMouseButtonDown = "call ARMST_Terminal_ActionSquadsDisband";
						};
						
						class SquadsComboGroups: outlw_MR_RscCombo
						{
							idc = IDC_TERMINAL_PAGE_PER_SQD_COMBO_GROUPS;
							
							x = (0.75 * safeZoneW) / 3;
							y = 0.03;
							w = (0.75 * safeZoneW) / 3 - 0.01;
							h = 0.05;
							
							color[] = {1,1,1,1};
							colorActive[] = {1,0,0,1};
							colorDisabled[] = {1,1,1,0.25};
							colorText[] = {1,1,1,1};
							colorBackground[] = {0,0,0,1};
							colorSelect[] = {0,0,0,1};
							colorSelectBackground[] = {1,1,1,0.7};
							colorPicture[] = {1,1,1,1};
							colorPictureSelected[] = {1,1,1,1};
							colorScrollbar[] = {1,0,0,1};
							wholeHeight = 0.45;
							
						};
						
						class SquadsListUsers: outlw_MR_RscListBox
						{
							idc = IDC_TERMINAL_PAGE_PER_SQD_LIST_USERS;
							text = ""; //--- ToDo: Localize;
							x = (0.75 * safeZoneW) / 3;
							y = 0.08;
							w = (0.75 * safeZoneW) / 3 - 0.01;
							h = 0.55;
							
							colorDisabled[] = {1,1,1,0.25};
							colorScrollbar[] = {1,1,1,0.5};
							colorSelect[] = {1,1,1,1};
							colorSelect2[] = {1,1,1,1};
							colorSelectBackground[] = {0.2,0.2,0.2,0};
							colorSelectBackground2[] = {0.2,0.2,0.2,0};
							colorBackground[] = {0,0,0,0.8};
							colorPicture[] = {1,1,1,1};
							colorPictureSelected[] = {1,1,1,1};
							colorText[] = {1,1,1,0.5};
							rowHeight = 0.03;
							
							onLBDblClick = "call ARMST_Terminal_ActionSquadsUserToBuffer";
						};
						
						class SquadsAssignButton: outlw_MR_RscButtonMenu
						{
							idc = IDC_TERMINAL_PAGE_PER_SQD_ASSIGN_BUTTON;
							
							x = (0.75 * safeZoneW) / 3;
							y = 0.63;
							w = (0.75 * safeZoneW) / 3 - 0.01;
							h = 0.05;
							
							style = 48 + 0x800;
							
							class Attributes
							{
								font = "PuristaLight";
								color = "#E5E5E5";
								align = "center";
								shadow = "false";
							};
							
							text = $STR_TERMINAL_BUTTON_PERSONNEL_SQUADS_ASSIGN;
							onMouseButtonDown = "call ARMST_Terminal_ActionSquadsAssignUser";
						};
						
						class SquadsInputBuffer: outlw_MR_RscEdit
						{
							idc = IDC_TERMINAL_PAGE_PER_SQD_NAME_INPUT;
							x = ((0.75 * safeZoneW) / 3) * 2;
							y = 0.03;
							w = (0.75 * safeZoneW) / 3 - 0.02;
							h = 0.05;
							
							colorBackground[] = {0,0,0,0.8};
							colorText[] = {1,1,1,1};
							size = 0.02;
							sizeEx = 0.03;
						};
						
						class SquadsComboColors: outlw_MR_RscCombo
						{
							idc = IDC_TERMINAL_PAGE_PER_SQD_COMBO_COLORS;
							
							x = ((0.75 * safeZoneW) / 3) * 2;
							y = 0.08;
							w = (0.75 * safeZoneW) / 3 - 0.02;
							h = 0.05;
							
							color[] = {1,1,1,1};
							colorActive[] = {1,0,0,1};
							colorDisabled[] = {1,1,1,0.25};
							colorText[] = {1,1,1,1};
							colorBackground[] = {0,0,0,1};
							colorSelect[] = {0,0,0,1};
							colorSelectBackground[] = {1,1,1,0.7};
							colorPicture[] = {1,1,1,1};
							colorPictureSelected[] = {1,1,1,1};
							colorScrollbar[] = {1,0,0,1};
							wholeHeight = 0.45;
							
						};
						
						class SquadsListBuffer: outlw_MR_RscListBox
						{
							idc = IDC_TERMINAL_PAGE_PER_SQD_LIST_BUFFER;
							text = ""; //--- ToDo: Localize;
							
							x = ((0.75 * safeZoneW) / 3) * 2;
							y = 0.13;
							w = (0.75 * safeZoneW) / 3 - 0.02;
							h = 0.50;
							
							colorDisabled[] = {1,1,1,0.25};
							colorScrollbar[] = {1,1,1,0.5};
							colorSelect[] = {1,1,1,1};
							colorSelect2[] = {1,1,1,1};
							colorSelectBackground[] = {0.2,0.2,0.2,0};
							colorSelectBackground2[] = {0.2,0.2,0.2,0};
							colorBackground[] = {0,0,0,0.8};
							colorPicture[] = {1,1,1,1};
							colorPictureSelected[] = {1,1,1,1};
							colorText[] = {1,1,1,0.5};
							rowHeight = 0.03;
							
							onLBDblClick = "call ARMST_Terminal_ActionSquadsBufferToUser";
						};
						
						class SquadsFormButton: outlw_MR_RscButtonMenu
						{
							idc = IDC_TERMINAL_PAGE_PER_SQD_FORM_BUTTON;
							
							x = ((0.75 * safeZoneW) / 3) * 2;
							y = 0.63;
							w = (0.75 * safeZoneW) / 3 - 0.02;
							h = 0.05;
							
							style = 48 + 0x800;
							
							class Attributes
							{
								font = "PuristaLight";
								color = "#E5E5E5";
								align = "center";
								shadow = "false";
							};
							
							text = $STR_TERMINAL_BUTTON_PERSONNEL_SQUADS_FORM;
							
							onMouseButtonDown = "call ARMST_Terminal_ActionSquadsForm";
						};
						
						
					};
				};
				
				//Page Recruits
				class PersonnelAppRecruits: outlw_MR_RscControlsGroup 
				{
					idc = IDC_TERMINAL_PAGE_PER_RECRUITS;
					fade = 0;

					x = 0;
					y = 0.055;
					w = 0.75 * safeZoneW;
					h = 0.7;
					
					class controls 
					{
						class RecruitsList: outlw_MR_RscListBox
						{
							idc = IDC_TERMINAL_PAGE_PER_REC_LIST;
							text = ""; //--- ToDo: Localize;
							x = 0.01;
							y = 0.03;
							w = 0.2 * safeZoneW;
							h = 0.65;
							colorDisabled[] = {1,1,1,0.25};
							colorScrollbar[] = {1,1,1,0.5};
							colorSelect[] = {1,1,1,1};
							colorSelect2[] = {1,1,1,1};
							colorSelectBackground[] = {0.2,0.2,0.2,0};
							colorSelectBackground2[] = {0.2,0.2,0.2,0};
							colorBackground[] = {0,0,0,0.8};
							colorPicture[] = {1,1,1,1};
							colorPictureSelected[] = {1,1,1,1};
							colorText[] = {1,1,1,0.5};
							rowHeight = 0.03;
							
							onLBSelChanged = "call ARMST_Terminal_ActionRecruitsSelectRecruit";
						};
						
						class RecruitsAboutRecruit: outlw_MR_RscStructuredText
						{
							idc = IDC_TERMINAL_PAGE_PER_REC_ABOUT;
							x = 0.21 * safeZoneW;
							y = 0.03;
							w = 0.25 * safeZoneW;
							h = 0.65;
							colorBackground[] = {0,0,0,0};
							colorText[] = {1,1,1,0.3};
							class Attributes
							{
							    font = "RobotoCondensed";
							    color = "#B2B2B2";
							    align = "left";
							    shadow = 0;
							};
							 shadow = 0;
							 size = 0.03;
							 sizeEx = 0.03;
						};
						
						class RecruitsComboShapes: outlw_MR_RscCombo
						{
							idc = IDC_TERMINAL_PAGE_PER_REC_SHAPES;
							
							x = 0.47 * safeZoneW;
							y = 0.03;
							w = 0.25 * safeZoneW;
							h = 0.05;
							
							color[] = {1,1,1,1};
							colorActive[] = {1,0,0,1};
							colorDisabled[] = {1,1,1,0.25};
							colorText[] = {1,1,1,1};
							colorBackground[] = {0,0,0,1};
							colorSelect[] = {0,0,0,1};
							colorSelectBackground[] = {1,1,1,0.7};
							colorPicture[] = {1,1,1,1};
							colorPictureSelected[] = {1,1,1,1};
							colorScrollbar[] = {1,0,0,1};
						};
						
						class RecruitsConfirmButton: outlw_MR_RscButtonMenu
						{
							idc = IDC_TERMINAL_PAGE_PER_REC_CONFIRM;
							
							x = 0.47 * safeZoneW;
							y = 0.58;
							w = 0.25 * safeZoneW;
							h = 0.05;
							
							style = 48 + 0x800;
							
							class Attributes
							{
								font = "PuristaLight";
								color = "#E5E5E5";
								align = "center";
								shadow = "false";
							};
							
							text = $STR_TERMINAL_BUTTON_PERSONNEL_RECRUITS_CONFIRM;
							onMouseButtonDown = "[_this select 0, true] call ARMST_Terminal_ActionRecruitsConfirm";
						};
						
						class RecruitsRejectButton: outlw_MR_RscButtonMenu
						{
							idc = IDC_TERMINAL_PAGE_PER_REC_REJECT;
							
							x = 0.47 * safeZoneW;
							y = 0.63;
							w = 0.25 * safeZoneW;
							h = 0.05;
							
							style = 48 + 0x800;
							
							class Attributes
							{
								font = "PuristaLight";
								color = "#E5E5E5";
								align = "center";
								shadow = "false";
							};
							
							text = $STR_TERMINAL_BUTTON_PERSONNEL_RECRUITS_REJECT;
							onMouseButtonDown = "[_this select 0, false] call ARMST_Terminal_ActionRecruitsConfirm";
						};
					};
				};
			};
		};
		
		////////////////////////////////////////////////////////
		// GUI  APPLICTIONS: LOCATIONS
		////////////////////////////////////////////////////////
		class LocationsAppGroup: outlw_MR_RscControlsGroup 
		{
			idc = IDC_TERMINAL_PAGE_LOCATIONS;
			fade = 0;

			x = 0.14 * safeZoneWAbs + safeZoneXAbs;
			y = 0.25 * safezoneH + safezoneY;
			w = 0.75 * safeZoneWAbs;
			h = 0.70 * safezoneH;
			
			class controls 
			{
				//Menu
				class LocationsAppMainMenu: outlw_MR_RscControlsGroup 
				{
					idc = IDC_TERMINAL_PAGE_LOC_MAINMENU;
					fade = 0;

					x = 0;
					y = 0;
					w = 0.75 * safeZoneW;
					h = 0.05;
					
					class controls 
					{
						class MenuBackground: outlw_MR_IGUIBack
						{
							idc = -1;
							x = 0;
							y = 0;
							w = 0.75 * safeZoneW;
							h = 0.05;
							colorText[] = {1,1,1,0};
							colorBackground[] = {0,0,0,0.8};
						};
						
						class MenuButtonMap: outlw_MR_RscButtonMenu
						{
							idc = IDC_TERMINAL_PAGE_LOC_MAINMENU_MAP;
							
							x = 0.01 * safeZoneW;
							y =0.01;
							w = 0.1 * safeZoneW;
							h = 0.04;
							
							style = 48 + 0x800;
							
							class Attributes
							{
								font = "PuristaLight";
								color = "#E5E5E5";
								align = "center";
								shadow = "false";
							};
							
							text = $STR_TERMINAL_BUTTON_LOCATIONS_MAP;
							onMouseButtonDown = "call ARMST_Terminal_changePage";
						};
						
						class MenuButtonManage: outlw_MR_RscButtonMenu
						{
							idc = IDC_TERMINAL_PAGE_LOC_MAINMENU_MANAGE;
							
							x = 0.11 * safeZoneW;
							y =0.01;
							w = 0.1 * safeZoneW;
							h = 0.04;
							
							style = 48 + 0x800;
							
							class Attributes
							{
								font = "PuristaLight";
								color = "#E5E5E5";
								align = "center";
								shadow = "false";
							};
							
							text = $STR_TERMINAL_BUTTON_LOCATIONS_MANAGE;
							//onMouseButtonDown = "call ARMST_Terminal_changePage";
						};
					};
				};
				
				//Page Main
				class LocationsAppMain: outlw_MR_RscControlsGroup 
				{
					idc = IDC_TERMINAL_PAGE_LOC_MAIN;
					fade = 0;

					x = 0;
					y = 0.055;
					w = 0.75 * safeZoneW;
					h = 0.7;
					
					class controls 
					{
						
						//RscMap don`t support relative RscControlsGroup position
						class LocationsMap: outlw_MR_RscMapControl
						{
							idc = IDC_TERMINAL_PAGE_LOC_MAIN_MAP;
							x = 0.15 * safeZoneWAbs + safeZoneXAbs;
							y = 0.3 * safezoneH + safezoneY;
							w = 0.5 * safeZoneWAbs;
							h = 0.5 * safezoneH;
						};
						
						class LocationsList: outlw_MR_RscListBox
						{
							idc = IDC_TERMINAL_PAGE_LOC_MAIN_LIST;
							
							x = 0.53 * safeZoneW;
							y = 0.01;
							w = 0.2 * safeZoneW;
							h = 0.45;
							
							colorDisabled[] = {1,1,1,0.25};
							colorScrollbar[] = {1,1,1,0.5};
							colorSelect[] = {1,1,1,1};
							colorSelect2[] = {1,1,1,1};
							colorSelectBackground[] = {0.2,0.2,0.2,0};
							colorSelectBackground2[] = {0.2,0.2,0.2,0};
							colorBackground[] = {0,0,0,0.8};
							colorPicture[] = {1,1,1,1};
							colorPictureSelected[] = {1,1,1,1};
							colorText[] = {1,1,1,0.5};
							rowHeight = 0.03;
							
							onLBSelChanged = "call ARMST_Terminal_ActionLocationsSelect";
						};
						
						class LocationsAbout: outlw_MR_RscStructuredText
						{
							idc = IDC_TERMINAL_PAGE_LOC_MAIN_ABOUT;
							x = 0.53 * safeZoneW;
							y = 0.46;
							w = 0.2 * safeZoneW;
							h = 0.2;
							colorBackground[] = {0,0,0,0};
							colorText[] = {1,1,1,0.3};
							class Attributes
							{
							    font = "RobotoCondensed";
							    color = "#B2B2B2";
							    align = "left";
							    shadow = 0;
							};
							 shadow = 0;
							 size = 0.03;
							 sizeEx = 0.03;
						};
					};
				};
				
				//Page Manage (TODO)
				class LocationsAppManage: outlw_MR_RscControlsGroup 
				{
					idc = IDC_TERMINAL_PAGE_LOC_MANAGE;
					fade = 0;

					x = 0;
					y = 0.055;
					w = 0.75 * safeZoneW;
					h = 0.7;
					
					class controls 
					{
						
					};
				};
			};
		};
		
		////////////////////////////////////////////////////////
		// GUI  APPLICTIONS: BUDGET
		////////////////////////////////////////////////////////
		class BudgetAppGroup: outlw_MR_RscControlsGroup 
		{
			idc = IDC_TERMINAL_PAGE_BUDGET;
			fade = 0;

			x = 0.14 * safeZoneWAbs + safeZoneXAbs;
			y = 0.25 * safezoneH + safezoneY;
			w = 0.75 * safeZoneWAbs;
			h = 0.70 * safezoneH;
			
			class controls 
			{
				//Menu
				class BudgetAppMainMenu: outlw_MR_RscControlsGroup 
				{
					idc = IDC_TERMINAL_PAGE_BUD_MAINMENU;
					fade = 0;

					x = 0;
					y = 0;
					w = 0.75 * safeZoneW;
					h = 0.05;
					
					class controls 
					{
						class MenuBackground: outlw_MR_IGUIBack
						{
							idc = -1;
							x = 0;
							y = 0;
							w = 0.75 * safeZoneW;
							h = 0.05;
							colorText[] = {1,1,1,0};
							colorBackground[] = {0,0,0,0.8};
						};
						
						class MenuButtonWithdraw: outlw_MR_RscButtonMenu
						{
							idc = IDC_TERMINAL_PAGE_BUD_MAINMENU_WITHDRAW;
							
							x = 0.01 * safeZoneW;
							y =0.01;
							w = 0.1 * safeZoneW;
							h = 0.04;
							
							style = 48 + 0x800;
							
							class Attributes
							{
								font = "PuristaLight";
								color = "#E5E5E5";
								align = "center";
								shadow = "false";
							};
							
							text = $STR_TERMINAL_BUTTON_BUDGET_WITHDRAW;
							onMouseButtonDown = "call ARMST_Terminal_changePage";
						};
						
						class MenuButtonPlanning: outlw_MR_RscButtonMenu
						{
							idc = IDC_TERMINAL_PAGE_BUD_MAINMENU_PLANNING;
							
							x = 0.11 * safeZoneW;
							y =0.01;
							w = 0.1 * safeZoneW;
							h = 0.04;
							
							style = 48 + 0x800;
							
							class Attributes
							{
								font = "PuristaLight";
								color = "#E5E5E5";
								align = "center";
								shadow = "false";
							};
							
							text = $STR_TERMINAL_BUTTON_BUDGET_PLANNING;
							//onMouseButtonDown = "call ARMST_Terminal_changePage";
						};
					};
				};
				
				//Page Withdraw
				class BudgetAppWithdraw: outlw_MR_RscControlsGroup 
				{
					idc = IDC_TERMINAL_PAGE_BUD_WITHDRAW;
					fade = 0;

					x = 0;
					y = 0.055;
					w = 0.75 * safeZoneW;
					h = 0.7;
					
					class controls 
					{
						class BudgetAbout: outlw_MR_RscStructuredText
						{
							idc = IDC_TERMINAL_PAGE_BUD_WDW_BUDGET;
							x = 0.01;
							y = 0.01;
							w = 0.2 * safeZoneW;
							h = 0.03;
							colorBackground[] = {1,1,1,1};
							colorText[] = {0,0,0,0.5};
							class Attributes
							{
							    font = "RobotoCondensed";
							    color = "#000000";
							    align = "left";
							    shadow = 0;
							};
							 shadow = 0;
							 size = 0.03;
							 sizeEx = 0.03;
							 text = "";
						};
						
						class BudgetInput: outlw_MR_RscEdit
						{
							idc = IDC_TERMINAL_PAGE_BUD_WDW_INPUT;
							x = 0.01;
							y = 0.05;
							w = 0.2 * safeZoneW;
							h = 0.03;
							colorBackground[] = {1,1,1,0.3};
							colorText[] = {0,0,0,1};
							size = 0.03;
							sizeEx = 0.03;
							text ="";
						};
						
						class BudgetReceiver: outlw_MR_RscCombo
						{
							idc = IDC_TERMINAL_PAGE_BUD_WDW_RECEIVER;
							
							x = 0.01;
							y = 0.09;
							w = 0.2 * safeZoneW;
							h = 0.03;
							
							color[] = {1,1,1,1};
							colorActive[] = {1,0,0,1};
							colorDisabled[] = {1,1,1,0.25};
							colorText[] = {1,1,1,1};
							colorBackground[] = {0,0,0,1};
							colorSelect[] = {0,0,0,1};
							colorSelectBackground[] = {1,1,1,0.7};
							colorPicture[] = {1,1,1,1};
							colorPictureSelected[] = {1,1,1,1};
							colorScrollbar[] = {1,0,0,1};
							wholeHeight = 0.45;
							
						};
						
						class BudgetWithdrawButton: outlw_MR_RscButtonMenu
						{
							idc = IDC_TERMINAL_PAGE_BUD_WDW_WITHDRAW;
							
							x = 0.01;
							y = 0.13;
							w = 0.2 * safeZoneW;
							h = 0.05;
							
							style = 48 + 0x800;
							
							class Attributes
							{
								font = "PuristaLight";
								color = "#E5E5E5";
								align = "center";
								shadow = "false";
							};
							
							text = $STR_TERMINAL_BUTTON_BUDGET_WDW_WITHDRAW;
							onMouseButtonDown = "call ARMST_Terminal_ActionBudgetWithdraw";
						};
						
						class BudgetHisoryType: outlw_MR_RscCombo
						{
							idc = IDC_TERMINAL_PAGE_BUD_WDW_HISTORYTYPE;
							
							x = 0.25 * safeZoneW;
							y = 0.01;
							w = 0.2 * safeZoneW;
							h = 0.03;
							
							color[] = {1,1,1,1};
							colorActive[] = {1,0,0,1};
							colorDisabled[] = {1,1,1,0.25};
							colorText[] = {1,1,1,1};
							colorBackground[] = {0,0,0,1};
							colorSelect[] = {0,0,0,1};
							colorSelectBackground[] = {1,1,1,0.7};
							colorPicture[] = {1,1,1,1};
							colorPictureSelected[] = {1,1,1,1};
							colorScrollbar[] = {1,0,0,1};
							wholeHeight = 0.45;
							
							onLBSelChanged = "call ARMST_Terminal_ActionBudgetHistory";
						};
						
						class BudgetHisory: outlw_MR_RscListBox
						{
							idc = IDC_TERMINAL_PAGE_BUD_WDW_HISTORY;
							
							x = 0.25 * safeZoneW;
							y = 0.05;
							w = 0.5 * safeZoneW;
							h = 0.58;
							
							colorDisabled[] = {1,1,1,0.25};
							colorScrollbar[] = {1,1,1,0.5};
							colorSelect[] = {1,1,1,1};
							colorSelect2[] = {1,1,1,1};
							colorSelectBackground[] = {0.2,0.2,0.2,0};
							colorSelectBackground2[] = {0.2,0.2,0.2,0};
							colorBackground[] = {0,0,0,0.8};
							colorPicture[] = {1,1,1,1};
							colorPictureSelected[] = {1,1,1,1};
							colorText[] = {1,1,1,0.5};
							rowHeight = 0.03;
							sizeEx = 0.03;
						};
					};
				};
				
				//Page Planning (TODO)
				class BudgetAppPlanning: outlw_MR_RscControlsGroup 
				{
					idc = IDC_TERMINAL_PAGE_BUD_PLANNING;
					fade = 0;

					x = 0;
					y = 0.055;
					w = 0.75 * safeZoneW;
					h = 0.7;
					
					class controls 
					{
						
					};
				};
			};
		};
		
		////////////////////////////////////////////////////////
		// GUI  APPLICTIONS: TRANSFER
		////////////////////////////////////////////////////////
		class TransferAppGroup: outlw_MR_RscControlsGroup 
		{
			idc = IDC_TERMINAL_PAGE_TRANSFER;
			fade = 0;

			x = 0.14 * safeZoneWAbs + safeZoneXAbs;
			y = 0.25 * safezoneH + safezoneY;
			w = 0.75 * safeZoneWAbs;
			h = 0.70 * safezoneH;
			
			class controls 
			{

				class TransferAbout: outlw_MR_RscStructuredText
				{
					idc = IDC_TERMINAL_PAGE_TFR_ABOUT;
					x = (0.275 * safeZoneW);
					y = 0.11;
					w = 0.2 * safeZoneW;
					h = 0.03;
					colorBackground[] = {1,1,1,1};
					colorText[] = {0,0,0,0.5};
					class Attributes
					{
					    font = "RobotoCondensed";
					    color = "#000000";
					    align = "left";
					    shadow = 0;
					};
					 shadow = 0;
					 size = 0.03;
					 sizeEx = 0.03;
					 text = "";
				};
				
				class TransferInput: outlw_MR_RscEdit
				{
					idc = IDC_TERMINAL_PAGE_TFR_INPUT;
					x = (0.275 * safeZoneW);
					y = 0.15;
					w = 0.2 * safeZoneW;
					h = 0.03;
					colorBackground[] = {1,1,1,0.3};
					colorText[] = {0,0,0,1};
					size = 0.03;
					sizeEx = 0.03;
					text ="";
				};
				
				class TransferReceiver: outlw_MR_RscCombo
				{
					idc = IDC_TERMINAL_PAGE_TFR_RECEIVER;
					
					x = (0.275 * safeZoneW);
					y = 0.19;
					w = 0.2 * safeZoneW;
					h = 0.03;
					
					color[] = {1,1,1,1};
					colorActive[] = {1,0,0,1};
					colorDisabled[] = {1,1,1,0.25};
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,1};
					colorSelect[] = {0,0,0,1};
					colorSelectBackground[] = {1,1,1,0.7};
					colorPicture[] = {1,1,1,1};
					colorPictureSelected[] = {1,1,1,1};
					colorScrollbar[] = {1,0,0,1};
					wholeHeight = 0.45;
					
				};
				
				class TransferButton: outlw_MR_RscButtonMenu
				{
					idc = IDC_TERMINAL_PAGE_TFR_CONFIRM;
					
					x = (0.275 * safeZoneW);
					y = 0.23;
					w = 0.2 * safeZoneW;
					h = 0.05;
					
					style = 48 + 0x800;
					
					class Attributes
					{
						font = "PuristaLight";
						color = "#E5E5E5";
						align = "center";
						shadow = "false";
					};
					
					text = $STR_TERMINAL_BUTTON_TRANSFER_CONFIRM;
					onMouseButtonDown = "call ARMST_Terminal_ActionTransferConfirm";
				};
				
			};
		};
		
		////////////////////////////////////////////////////////
		// GUI  APPLICTIONS: ACCESS
		////////////////////////////////////////////////////////
		class AccessAppGroup: outlw_MR_RscControlsGroup 
		{
			idc = IDC_TERMINAL_PAGE_ACCESS;
			fade = 0;

			x = 0.14 * safeZoneWAbs + safeZoneXAbs;
			y = 0.25 * safezoneH + safezoneY;
			w = 0.75 * safeZoneWAbs;
			h = 0.70 * safezoneH;
			
			class controls 
			{
				class AccessAppList: outlw_MR_RscListBox
				{
					idc = IDC_TERMINAL_PAGE_ACS_LIST;
					x = 0.01;
					y = 0.03;
					w = 0.2 * safeZoneW;
					h = 0.65;
					colorDisabled[] = {1,1,1,0.25};
					colorScrollbar[] = {1,1,1,0.5};
					colorSelect[] = {1,1,1,1};
					colorSelect2[] = {1,1,1,1};
					colorSelectBackground[] = {0.2,0.2,0.2,0};
					colorSelectBackground2[] = {0.2,0.2,0.2,0};
					colorBackground[] = {0,0,0,0.8};
					colorPicture[] = {1,1,1,1};
					colorPictureSelected[] = {1,1,1,1};
					colorText[] = {1,1,1,0.5};
					rowHeight = 0.03;
					onLBSelChanged = "call ARMST_Terminal_ActionAccessSelectApp";
				};
				
				class AccessUserCheckbox: outlw_MR_RscTextCheckBox
				{
					idc = IDC_TERMINAL_PAGE_ACS_CHECKUSER;
					x = 0.2 * safeZoneW + 0.02;
					y = 0.03;
					w = 0.2 * safeZoneW;
					h = 0.05;
					
					colorText[] = {1,0,0,1};
					colorTextSelect[] = {0,0.8,0,1};
					colorSelectedBg[] = {0,0,0,0.3};
					
					strings[] = {$STR_TERMINAL_TITTLE_ACCESS_USER_DENIED};
					checked_strings[] = {$STR_TERMINAL_TITTLE_ACCESS_USER_ALLOWED};
				};
				
				class AccessGuestCheckbox: outlw_MR_RscTextCheckBox
				{
					idc = IDC_TERMINAL_PAGE_ACS_CHECKGUEST;
					x = 0.2 * safeZoneW + 0.02;
					y = 0.09;
					w = 0.2 * safeZoneW;
					h = 0.05;
					
					colorText[] = {1,0,0,1};
					colorTextSelect[] = {0,0.8,0,1};
					colorSelectedBg[] = {0,0,0,0.3};
					
					strings[] = {$STR_TERMINAL_TITTLE_ACCESS_GUEST_DENIED};
					checked_strings[] = {$STR_TERMINAL_TITTLE_ACCESS_GUEST_ALLOWED};
				};
				
				class AccessConfirmButton: outlw_MR_RscButtonMenu
				{
					idc = IDC_TERMINAL_PAGE_ACS_CONFIRM;
					
					x = 0.2 * safeZoneW + 0.02;
					y = 0.15;
					w = 0.2 * safeZoneW;
					h = 0.05;
					
					style = 48 + 0x800;
					
					class Attributes
					{
						font = "PuristaLight";
						color = "#E5E5E5";
						align = "center";
						shadow = "false";
					};
					
					text = $STR_TERMINAL_BUTTON_ACCESS_CONFIRM;
					onMouseButtonDown = "call ARMST_Terminal_ActionAccessConfirm";
				};
			};
		};
	};
	
};
