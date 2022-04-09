/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Создания диалога просмотра записки
	
	Parameter(s):
		_text 				(String) - текст
		_image 				(String) - картинка фона
		_font 				(String) - фонт 
		_size 				(Scalar) - размер
	
	Return: (Nothing)
*/
	#include "..\module.sqf";
	
	params [["_text",""],["_image",1],["_font","EpsilonCTT"],["_size",1.6]];

	createDialog "dragster_empty_dialog";
	disableSerialization;
	
	if (isNull (findDisplay 67000)) exitWith {};
	_display = findDisplay 67000;

	_sizeMultiplier = (1 / (getResolution select 5));
	_pW = pixelW * 5 * (getResolution select 0) / 1920;
	_pH = pixelH * 5 * (getResolution select 1) / 1080;
	_windowFrameWidth = 300 * _pW;
	_windowFrameHeight = 150 * _pH;
	_marginLeft = _pW * 21;
	_marginTop = _pH * 16;
	_windowW = _pW * 246;
	_windowH = _pH * 118;
	_windowMainGroup = _display ctrlCreate ["RscControlsGroupNoScrollbars",1000];
	_windowMainGroup ctrlSetPosition [safeZoneXAbs,safeZoneY,safeZoneWAbs,safeZoneH];
	_windowMainGroup ctrlSetFade 1;
	_windowMainGroup ctrlCommit 0;
	_windowMainGroup ctrlSetFade 0;
	_windowMainGroup ctrlCommit 0.3;

	private _imgBg = "";
	private _color = "#000000";
	switch (_image) do { 
		case 1 : {  _imgBg = "\drg_ui\textures\papper\papper.paa"; }; 
		case 2 : {  _imgBg = "\drg_ui\textures\papper\papper2.paa"; }; 
		case 3 : {  _imgBg = "\drg_ui\textures\papper\papper3.paa"; }; 
		case 4 : {  _imgBg = "\drg_ui\textures\papper\papper4.paa"; }; 
		case 5 : {  _imgBg = "\drg_ui\textures\pda\backgpda.paa";_color = "#FFFFFF"; }; 
		default  {  _imgBg = "\drg_ui\textures\papper\papper.paa"; }; 
	};
	[_display,_windowMainGroup,-1,
	[(safeZoneWAbs / 2) - (_windowFrameWidth / 2),(safeZoneH / 2) - (_windowFrameHeight / 2),_windowFrameWidth,_windowFrameHeight],
	_imgBg,[0,0,0,1],false,false,""] call DRG_fnc_makePicture;


	_windowFrameGroup = _display ctrlCreate ["RscControlsGroupNoScrollbars",1100];
	_windowFrameGroup ctrlSetPosition [safeZoneXabs + (safeZoneWAbs / 2) - (_windowFrameWidth / 2) + _marginLeft,safeZoneY + (safeZoneH / 2) - (_windowFrameHeight / 2) + _marginTop,_windowFrameWidth,_windowH];
	_windowFrameGroup ctrlSetFade 1;
	_windowFrameGroup ctrlCommit 0; 
	_windowFrameGroup ctrlSetFade 0;
	_windowFrameGroup ctrlCommit 0.25;

	private _ctrl = _display ctrlCreate ["ARM_PaperEdit", -1, _windowFrameGroup];
	_ctrl ctrlSetPosition [5* _pW,5* _pH,(_windowW - (5 *_pW)),100*_pH];
	_ctrl ctrlSetTextColor [0.3,0.3,0.3,1];
	_ctrl ctrlSetBackgroundColor [1,1,1,0];
	_ctrl ctrlEnable true;
	_ctrl ctrlSetTooltip "";
	_ctrl ctrlSetFont "EpsilonCTT";
	_ctrl ctrlSetFontHeight 0.1;
	_ctrl ctrlSetText _text;
	_ctrl ctrlCommit 0;
	
	_ctrl;
	
	
	