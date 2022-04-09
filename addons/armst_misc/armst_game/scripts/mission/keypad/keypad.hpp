/*
	Dialog for Keypad
	Author: Dragster <1dragsteron@gmail.com>
*/
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
