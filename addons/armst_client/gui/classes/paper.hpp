
class ARM_PaperEdit : outlw_MR_RscEdit
{
	idc = -1;
	type = 2;
	style = "16 + 512"; // multi line + no border  
	x = 0;
	y = 0;
	h = 0.2;
	w = 1;
	font = "PuristaMedium";
	sizeEx = 0.04;
	autocomplete = "";
	canModify = true; 
	maxChars = 350; 
	forceDrawCaret = false;
	lineSpacing = 1;
	colorSelection[] = {0,0,0,0.8};
	colorText[] = {0,0,1,1};
	colorDisabled[] = {1,0,0,1}; 
	colorBackground[] = {0,0,0,0.5}; 
	class VScrollbar 
	{
		width = 0.021;
		autoScrollSpeed = -1;
		autoScrollDelay = 1;
		autoScrollRewind = 0;
		shadow=0;
	};
	text = "";
};