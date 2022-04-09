/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Переключение страниц терминала
	
	Parameter(s):
		_control 		(Control) - кнопка
		
*/
	#include "..\module.sqf";
	
	disableserialization;
	params ["_control"];
	
	private _display = ctrlParent (_this select 0);
	private _ctrlIDC = ctrlIDC _control;
	
	{
		if (ctrlParentControlsGroup _x isEqualTo controlNull) then {
			_x ctrlShow false;
		} else {
			_x ctrlShow true;
		};
	} foreach (allControls _display);

	(_display displayCtrl IDC_TERMINAL_SCREEN) ctrlShow true;
	if !(_ctrlIDC isEqualTo IDC_TERMINAL_AUTH) then {
		(_display displayCtrl IDC_TERMINAL_DESKTOP) ctrlShow true;
		(_display displayCtrl IDC_TERMINAL_DESKTOP) ctrlEnable true;
		[_display] call module(BuildDesktop);
	};
	
	//(_display displayCtrl IDC_TERMINAL_TEST_1) ctrlShow true;
	//(_display displayCtrl IDC_TERMINAL_TEST) ctrlShow true;

	switch (_ctrlIDC) do {
		
		//APP: AUTHENTICATION
		case IDC_TERMINAL_AUTH : {
			(_display displayCtrl IDC_TERMINAL_SCREEN) ctrlSetText "armst_client\GUI\Images\terminal\display.jpg";
			(_display displayCtrl IDC_TERMINAL_AUTH) ctrlShow true;
			/*
			[_display displayCtrl IDC_TERMINAL_AUTH] spawn {
				(_this select 0 ) ctrlSetFade 0;
				(_this select 0 ) ctrlCommit 3;
				uiSleep 3;
			};
			*/
		};
		
		//APP: SUMMARY
		case IDC_TERMINAL_DESKTOP_SUMMARY : {
			
			(_display displayCtrl IDC_TERMINAL_APP) ctrlShow true;
			
			(_display displayCtrl IDC_TERMINAL_PAGE_SUMMARY) ctrlShow true;
			[_display, _display displayCtrl IDC_TERMINAL_PAGE_SUMMARY] call module(LoadPage);
		};
		
		//APP: PERSONNEL
		case IDC_TERMINAL_DESKTOP_PERSONNEL;
		case IDC_TERMINAL_PAGE_PER_MAINMENU_BARRACK : {
			
			(_display displayCtrl IDC_TERMINAL_APP) ctrlShow true;
			(_display displayCtrl IDC_TERMINAL_PAGE_PERSONNEL) ctrlShow true;
			
			(_display displayCtrl IDC_TERMINAL_PAGE_PER_BARRACK)  ctrlShow true;
			
			{(_display displayCtrl _x)  ctrlShow false} foreach [
				IDC_TERMINAL_PAGE_PER_SQUADS,
				IDC_TERMINAL_PAGE_PER_RECRUITS
			];
			
			[_display, _display displayCtrl IDC_TERMINAL_PAGE_PER_BARRACK] call module(LoadPage);
		};
		
		case IDC_TERMINAL_PAGE_PER_MAINMENU_SQUADS : {
			
			(_display displayCtrl IDC_TERMINAL_APP) ctrlShow true;
			(_display displayCtrl IDC_TERMINAL_PAGE_PERSONNEL) ctrlShow true;
			
			(_display displayCtrl IDC_TERMINAL_PAGE_PER_SQUADS)  ctrlShow true;
			
			{(_display displayCtrl _x)  ctrlShow false} foreach [
				IDC_TERMINAL_PAGE_PER_BARRACK,
				IDC_TERMINAL_PAGE_PER_RECRUITS
			];
			
			[_display, _display displayCtrl IDC_TERMINAL_PAGE_PER_SQUADS] call module(LoadPage);
		};
		
		case IDC_TERMINAL_PAGE_PER_MAINMENU_RECRUITS : {
			
			(_display displayCtrl IDC_TERMINAL_APP) ctrlShow true;
			(_display displayCtrl IDC_TERMINAL_PAGE_PERSONNEL) ctrlShow true;
			
			(_display displayCtrl IDC_TERMINAL_PAGE_PER_RECRUITS)  ctrlShow true;
			
			{(_display displayCtrl _x)  ctrlShow false} foreach [
				IDC_TERMINAL_PAGE_PER_BARRACK,
				IDC_TERMINAL_PAGE_PER_SQUADS
			];
			
			[_display, _display displayCtrl IDC_TERMINAL_PAGE_PER_RECRUITS] call module(LoadPage);
		};
		
		//APP: LOCATIONS
		case IDC_TERMINAL_DESKTOP_LOCATIONS;
		case IDC_TERMINAL_PAGE_LOC_MAINMENU_MAP : {
		
			(_display displayCtrl IDC_TERMINAL_APP) ctrlShow true;
			(_display displayCtrl IDC_TERMINAL_PAGE_LOCATIONS) ctrlShow true;
			
			(_display displayCtrl IDC_TERMINAL_PAGE_LOC_MAIN)  ctrlShow true;
			
			{(_display displayCtrl _x)  ctrlShow false} foreach [
				IDC_TERMINAL_PAGE_LOC_MANAGE
			];
			
			[_display, _display displayCtrl IDC_TERMINAL_PAGE_LOC_MAIN] call module(LoadPage);
		};
		
		case IDC_TERMINAL_PAGE_LOC_MAINMENU_MANAGE : {
		
		};
		
		//APP: BUDGET
		case IDC_TERMINAL_DESKTOP_BUDGET;
		case IDC_TERMINAL_PAGE_BUD_MAINMENU_WITHDRAW : {
		
			(_display displayCtrl IDC_TERMINAL_APP) ctrlShow true;
			(_display displayCtrl IDC_TERMINAL_PAGE_BUDGET) ctrlShow true;
			
			(_display displayCtrl IDC_TERMINAL_PAGE_BUD_WITHDRAW)  ctrlShow true;
			
			{(_display displayCtrl _x)  ctrlShow false} foreach [
				IDC_TERMINAL_PAGE_BUD_PLANNING
			];
			
			[_display, _display displayCtrl IDC_TERMINAL_PAGE_BUD_WITHDRAW] call module(LoadPage);
			
		};
		
		case IDC_TERMINAL_PAGE_BUD_MAINMENU_PLANNING : {
		
		};
		
		case IDC_TERMINAL_DESKTOP_TRANSFER : {
		
			(_display displayCtrl IDC_TERMINAL_APP) ctrlShow true;
			(_display displayCtrl IDC_TERMINAL_PAGE_TRANSFER) ctrlShow true;
			
			[_display, _display displayCtrl IDC_TERMINAL_PAGE_TRANSFER] call module(LoadPage);
		};
		
		case IDC_TERMINAL_DESKTOP_ACCESS : {
		
			(_display displayCtrl IDC_TERMINAL_APP) ctrlShow true;
			(_display displayCtrl IDC_TERMINAL_PAGE_ACCESS) ctrlShow true;
			
			[_display, _display displayCtrl IDC_TERMINAL_PAGE_ACCESS] call module(LoadPage);
		};
		
		case IDC_TERMINAL_DESKTOP_EXIT : {
			
			module(Authed) = false;
			module(Status) = "";
			
			call module(CloseTerminal);
			
		};
		
		case IDC_TERMINAL_DESKTOP_COMMUNICATE;
		case IDC_TERMINAL_DESKTOP_NOTEBOOK;
		case IDC_TERMINAL_DESKTOP_RESOURCES;
		case IDC_TERMINAL_DESKTOP_OBJECTIVES;
		case IDC_TERMINAL_DESKTOP_BASE;
		case IDC_TERMINAL_DESKTOP_DESC: {
			[localize "STR_TERMINAL_HINT_APP_DEVELOPMENT", 3] call module(ShowNotice);
		};
		
		
		default {
			(_display displayCtrl IDC_TERMINAL_SCREEN) ctrlSetText "armst_client\GUI\Images\terminal\display1.jpg";
		};
	};
	
	