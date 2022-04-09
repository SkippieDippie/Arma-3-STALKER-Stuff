private ["_display", "_sizeMultiplier", "_pW", "_pH", "_pdaFrameWidth", "_pdaFrameHeight", "_marginLeft", "_marginTop", "_pdaW", "_pdaH", "_listW", "_listH", 
"_marginLeftNick", "_marginTopNick", "_nickW", "_nickH", "_tabW", "_tabH", "_pdaMainGroup", "_pdaFrameGroup", "_uid", "_pdaWindowGroup","_textW","_textH","_marHTextU","_marHTextC","_marHTextD"];
createDialog "dragster_pda_dialog";
disableSerialization;
if (isNull (findDisplay 72600)) exitWith {};
_display = findDisplay 72600;

_sizeMultiplier = (1 / (getResolution select 5));
_pW = pixelW * 5 * (getResolution select 0) / 1920;
_pH = pixelH * 5 * (getResolution select 1) / 1080;
_pdaFrameWidth = 300 * _pW;
_pdaFrameHeight = 150 * _pH;
_marginLeft = _pW * 21;
_marginTop = _pH * 16;
_pdaW = _pW * 246;
_pdaH = _pH * 118;
_listW =_pW * 49.5;
_listH =_pH * 14.5;
_tabW = _pW * 195;
_tabH = _pH * 103;

_textW = _pW * 49;
_textH = _pH * 6;
_marHTextU = _pH * 2.2;
_marHTextC = _pH * 5;
_marHTextD = _pH * 8;


showHUD false;
// showChat false;
hintSilent "";

// _display displayAddEventHandler ["unload","showChat true; showHUD true;"];
_display displayAddEventHandler ["unload","showHUD true;
		{
		  _a = toArray _x;
		  _a resize 14;
		  if (toString _a == 'DRG_PDA_Marker') then {
		  	deleteMarkerLocal _x;
		  };
		} forEach allMapMarkers;
"];

_pdaMainGroup = _display ctrlCreate ["RscControlsGroupNoScrollbars",1000];
_pdaMainGroup ctrlSetPosition [safeZoneXAbs,safeZoneY,safeZoneWAbs,safeZoneH];
_pdaMainGroup ctrlSetFade 1;
_pdaMainGroup ctrlCommit 0;
_pdaMainGroup ctrlSetFade 0;
_pdaMainGroup ctrlCommit 0.3;

// [_display,_pdaMainGroup,-1,
// [(safeZoneWAbs / 2) - (_pdaFrameWidth / 2),(safeZoneH / 2) - (_pdaFrameHeight / 2),_pdaFrameWidth,_pdaFrameHeight],
// "\drg_ui\textures\pda_new\background.paa",[0,0,0,1],false,false,""] call DRG_fnc_makePicture;

private _pdaitem = [] call drg_fnc_getPdaItemFromAssign;
private _newBG = _pdaitem call drg_fnc_getBackgroundByPdaItem;
[_display,_pdaMainGroup,-1,
[(safeZoneWAbs / 2) - (_pdaFrameWidth / 2),(safeZoneH / 2) - (_pdaFrameHeight / 2),_pdaFrameWidth,_pdaFrameHeight],
_newBG,[0,0,0,1],false,false,""] call DRG_fnc_makePicture;

_pdaFrameGroup = _display ctrlCreate ["RscControlsGroupNoScrollbars",1100];
_pdaFrameGroup ctrlSetPosition [safeZoneXabs + (safeZoneWAbs / 2) - (_pdaFrameWidth / 2) + _marginLeft,safeZoneY + (safeZoneH / 2) - (_pdaFrameHeight / 2) + _marginTop,_pdaFrameWidth,_pdaFrameHeight];
_pdaFrameGroup ctrlSetFade 1;
_pdaFrameGroup ctrlCommit 0; 
_pdaFrameGroup ctrlSetFade 0;
_pdaFrameGroup ctrlCommit 0.25;

[_display,_pdaFrameGroup,-1,[0,0,_listW,_listH],[faction player] call DRG_fnc_getNewEmblem,[0,0,0,1],true,false,""] call DRG_fnc_makePicture;

_path = format["\drg_ui\textures\pda_new\menu_button\%1\",localize "str_drg_lang"];
{
	_ctrl = [_display,_pdaFrameGroup,(_forEachIndex + 1101),[0,_listH*(_x select 0),_listW,_listH],(_x select 1),[0,0,0,1],false,true,""] call DRG_fnc_makePicture;
	_ctrl ctrlSetTextColor [1,1,1,0.8];
	_ctrl ctrlSetEventHandler ["mouseEnter",format ["if (((findDisplay 72600) getVariable ['pdaCurrentTab','']) != '%1') then {(_this select 0) ctrlSetTextColor [1,1,1,1]}",(_x select 2)]];
	_ctrl ctrlSetEventHandler ["mouseExit",format ["if (((findDisplay 72600) getVariable ['pdaCurrentTab','']) != '%1') then {(_this select 0) ctrlSetTextColor [1,1,1,0.8]}",(_x select 2)]];
	_ctrl ctrlSetEventHandler ["mouseButtonUp",format ["'%1' spawn drg_fnc_pdaTab",(_x select 2)]];
} forEach [
	[1,_path + "mainA.jpg","main"],
	[2,_path + "message.jpg","message"],
	[3,_path + "medicine.jpg","medicine"],
	[4,_path + "notes.jpg","notes"],
	[5,_path + "wiki.jpg","wiki"],
	[6,_path + "map.jpg","map"],
	[7,_path + "settings.jpg","settings"]
];




[_display,_pdaFrameGroup,-1 ,[_pW * 49,_marHTextC,_textW,_textH] ,profilename,"Roboto" ,0.7,"#FFFFFF","left",0,_sizeMultiplier] call DRG_fnc_makeStructuredText;

[_display,_pdaFrameGroup,600 ,
[210.5* _pW,_marHTextC,13.5* _pW,_textH],
if (player getVariable ["DRG_network",true]) then {"<img image='\drg_ui\textures\pda_new\status\online.paa'/>"}else{"<img image='\drg_ui\textures\pda_new\status\offline.paa'/>"},"Roboto" ,0.5,"#FFFFFF","left",0,_sizeMultiplier] call DRG_fnc_makeStructuredText;


date params ["_year","_month","_day","_hour","_minute"];
[_display,_pdaFrameGroup,-1 ,
[223.5* _pW,_marHTextC,18 * _pW,_textH],
format["%1:%3%2",_hour,_minute,if (_minute<10) then {"0"}else{""}],"Roboto" ,0.7,"#FFFFFF","left",0,_sizeMultiplier] call DRG_fnc_makeStructuredText;



[_display,_pdaFrameGroup,-1 ,
[112* _pW,_marHTextU,_textW,_textH],
localize "STR_DRG_pda_myID","Roboto" ,0.7,"#FFFFFF","center",0,_sizeMultiplier] call DRG_fnc_makeStructuredText;

[_display,_pdaFrameGroup,-1 ,
[112* _pW,_marHTextD,_textW,_textH],
(getPlayerUID player) call drg_fnc_getIdFromUID,"Roboto" ,0.7,"#FFFFFF","center",0,_sizeMultiplier] call DRG_fnc_makeStructuredText;

[_display,_pdaFrameGroup,-1 ,
[162* _pW,_marHTextU,_textW,_textH],
localize "STR_DRG_pda_myBalance","Roboto" ,0.7,"#FFFFFF","center",0,_sizeMultiplier] call DRG_fnc_makeStructuredText;

[_display,_pdaFrameGroup,-1 ,
[162* _pW,_marHTextD,_textW,_textH],
[player getVariable ["Money",0]] call BIS_fnc_numberText,"Roboto" ,0.7,"#FFFFFF","center",0,_sizeMultiplier] call DRG_fnc_makeStructuredText;

'main' spawn drg_fnc_pdaTab;
uiSleep 0.25;