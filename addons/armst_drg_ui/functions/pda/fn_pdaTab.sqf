params["_openTab", ["_tempvar",""]];
private ["_display", "_sizeMultiplier", "_pW", "_pH", "_pdaFrameWidth", "_pdaFrameHeight", "_marginLeft", "_marginTop", "_pdaW", "_pdaH",
 "_listW", "_listH", "_marginLeftNick", "_marginTopNick", "_nickW", "_nickH", "_tabW", "_tabH", "_pdaWindowGroup"];
disableSerialization;
if (isNull (findDisplay 72600)) exitWith {};
_display = findDisplay 72600;

if ((_display getVariable ["pdaCurrentTab",""]) == _openTab) exitWith {};

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

_mainButton = _display displayCtrl 1101;
_messageButton = _display displayCtrl 1102;
_medicineButton = _display displayCtrl 1103;
_notesButton = _display displayCtrl 1104;
_wikiButton = _display displayCtrl 1105;
_mapButton = _display displayCtrl 1106;
_settingsButton = _display displayCtrl 1107;

_pdaFrameGroup = _display displayCtrl 1100;
_pdaWindowGroup = _display displayCtrl 1200;

_pathButt = format["\drg_ui\textures\pda_new\menu_button\%1\",localize "str_drg_lang"];
_mainButton ctrlSetText (_pathButt + "main.jpg");
_mainButton ctrlSetTextColor [1,1,1,0.8];
_messageButton ctrlSetText (_pathButt + "message.jpg");
_messageButton ctrlSetTextColor [1,1,1,0.8];
_medicineButton ctrlSetText (_pathButt + "medicine.jpg");
_medicineButton ctrlSetTextColor [1,1,1,0.8];
_notesButton ctrlSetText (_pathButt + "notes.jpg");
_notesButton ctrlSetTextColor [1,1,1,0.8];
_wikiButton ctrlSetText (_pathButt + "wiki.jpg");
_wikiButton ctrlSetTextColor [1,1,1,0.8];
_mapButton ctrlSetText (_pathButt + "map.jpg");
_mapButton ctrlSetTextColor [1,1,1,0.8];
_settingsButton ctrlSetText (_pathButt + "settings.jpg");
_settingsButton ctrlSetTextColor [1,1,1,0.8];
ctrlDelete _pdaWindowGroup;

_pdaWindowGroup = _display ctrlCreate ["RscControlsGroupNoScrollbars",1200,_pdaFrameGroup];
_pdaWindowGroup ctrlSetPosition [_listW,_listH,_tabW,_tabH];
_pdaWindowGroup ctrlSetFade 1;
_pdaWindowGroup ctrlCommit 0; 
_pdaWindowGroup ctrlSetFade 0;
_pdaWindowGroup ctrlCommit 0.25;


switch (_openTab) do { 
	case "main" : 		{
		_display setVariable ["pdaCurrentTab",'main'];
		_mainButton ctrlSetText (_pathButt + "mainA.jpg");

		private ["_mainTextMarW", "_mainTextW", "_mainTextH"];
		_mainTextMarW = 5.5 * _pW;
		_mainTextW = 107 * _pW;
		_mainTextH = 6.5 * _pH;

		{
			[_display,_pdaWindowGroup,-1 ,(_x select 0),(_x select 1),"OpenSansSemibold" ,0.7,"#FFFFFF","left",0,_sizeMultiplier] call DRG_fnc_makeStructuredText;
		} forEach [
			[[_mainTextMarW,5 * _pH,_mainTextW,_mainTextH], format["%1: %2",localize "STR_DRG_pda_faction",getText(configFile >> "CfgFactionClasses" >> faction player >> "displayName")] ],
			[[_mainTextMarW,19.5 * _pH,_mainTextW,_mainTextH], format["%2: %1-"] ],
			[[_mainTextMarW,34 * _pH,_mainTextW,_mainTextH], format["%2: %1-"] ],
			[[_mainTextMarW,48.5 * _pH,_mainTextW,_mainTextH], format["%2: %1-"] ],
			[[_mainTextMarW,63 * _pH,_mainTextW,_mainTextH], format["%2: %1-"] ] 
		];

	}; 
	case "message" : 	{
		_display setVariable ["pdaCurrentTab",'message'];
		_messageButton ctrlSetText (_pathButt + "messageA.jpg");
		_lb=[_display,_pdaWindowGroup,1010,[7.3*_pW,7.3*_pH,62*_pW,61*_pH],[0,0,0,1],[1,1,1,1],true] call DRG_fnc_makePdaListBox;
		
		private _buttH = 11.6 * _pH;
		private _buttW1 = 62 * _pW;
		private _buttW2 = 55.6 * _pW;
		private _buttMarH1 = 74 * _pH;
		private _buttMarH2 = 87 * _pH;
		private _buttMarW1 = 7.3 * _pW;
		private _buttMarW2 = 72.3 * _pW;
		private _buttMarW3 = 130.8 * _pW;
		{
			if (isPlayer _x && {!isNull _x}) then {
				// if (("armst_item_pda" in (assignedItems _x)) && {_x getVariable ['DRG_network',true]}) then {
				if (!(([_x] call drg_fnc_getPdaItemFromAssign) == "") && {_x getVariable ['DRG_network',true]}) then {
					_u = getPlayerUID _x;
					_arr = [_u] call DRG_fnc_getIdWithName;
					_index = _lb lbAdd format["%1 - %2",_arr select 0,_arr select 1];
					// _lb lbSetPicture [_index,[faction _x] call DRG_fnc_getLogoFaction];
					_lb lbSetData [_index,_u];
				};
			};
		} count playableUnits;
		// _lb ctrlAddEventHandler ["LBSelChanged", "((findDisplay 72600) displayCtrl 72617) ctrlSetStructuredText (parseText ((_this select 0) lbData (_this select 1)));"  ]; 
		lbSortByValue _lb;
		[_display,_pdaWindowGroup,1011,[72.3*_pW,7.3*_pH,115.6*_pW,61*_pH],[1,1,1,1],[0,0,0,0],true,""] call DRG_fnc_makeEditBoxMulti;

		private _path = format["\drg_ui\textures\pda_new\message_button\%1\",localize "str_drg_lang"];
		{
			_ctrl = [_display,_pdaWindowGroup,(_forEachIndex + 3101),(_x select 0),(_x select 1),[0,0,0,1],false,true,""] call DRG_fnc_makePicture;
			_ctrl ctrlSetTextColor [1,1,1,0.8];
			_ctrl ctrlSetEventHandler ["mouseEnter","(_this select 0) ctrlSetTextColor [1,1,1,1]"];
			_ctrl ctrlSetEventHandler ["mouseExit","(_this select 0) ctrlSetTextColor [1,1,1,0.8]"];
			_ctrl ctrlSetEventHandler ["mouseButtonUp",format ["%1",(_x select 2)]];
		} forEach [
			[[_buttMarW1, _buttMarH1, _buttW1, _buttH],_path + "addfriend.jpg"		,"['addfriend',lbData [1010,lbCurSel 1010]] spawn drg_fnc_pdaTab"],					// friend
			[[_buttMarW1, _buttMarH2, _buttW1, _buttH],_path + "meshist.jpg"		,"'history' spawn drg_fnc_pdaTab"],				// history
			[[_buttMarW2, _buttMarH1, _buttW2, _buttH],_path + "send.jpg"			,'["ls",ctrlText 1011,lbData [1010, lbCurSel 1010]] spawn drg_fnc_pdaSendMessage;'],				// send
			[[_buttMarW3, _buttMarH1, _buttW2, _buttH],_path + "sendall.jpg"		,'["all",ctrlText 1011] spawn drg_fnc_pdaSendMessage;'],					// send anon
			[[_buttMarW2, _buttMarH2, _buttW2, _buttH],_path + "sendanon.jpg"		,'["lsa",ctrlText 1011,lbData [1010, lbCurSel 1010]] spawn drg_fnc_pdaSendMessage;'],					// send all
			[[_buttMarW3, _buttMarH2, _buttW2, _buttH],_path + "sendfaction.jpg"	,'["faction",ctrlText 1011] spawn drg_fnc_pdaSendMessage;']						// send faction
		];
	}; 
	case "medicine" : 	{
		_display setVariable ["pdaCurrentTab",'medicine'];
		_medicineButton ctrlSetText (_pathButt + "medicineA.jpg");
		private _marW1 = 49.2 * _pW;
		private _marW2 = 122.3 * _pW;
		private _bw = 65.8 * _pW;
		private _bh = 10.2 * _pH;
		private _marH1 = 7.3 * _pH;
		private _tw = 102.4 * _pW;
		private _th = 7.3 * _pH;

		{
			[_display,_pdaWindowGroup,-1 ,(_x select 0),(_x select 1),"OpenSansSemibold" ,0.6,"#FFFFFF","left",0,_sizeMultiplier] call DRG_fnc_makeStructuredText;
		} forEach [
			[[_marW1,_marH1 * 1,_tw,_th], format["%2: %1-"] ],
			[[_marW1,_marH1 * 2,_tw,_th], format["%2: %1-"] ],
			[[_marW1,_marH1 * 3,_tw,_th], if (({_x in ["DETECTOR_RKS20","DETECTOR_MKS1009","DETECTOR_DBG06M"]} count (weapons player))> 0) then {	format["%2: %1",ARMST_Radiation_Infection toFixed 5,localize "DRG_irradiation"]	} else { localize "DRG_noradimeter" } ],
			[[_marW1,_marH1 * 4,_tw,_th], format["%2: %1-"] ]
		];	
		
	}; 
	case "notes" : 		{
		_display setVariable ["pdaCurrentTab",'notes'];
		_notesButton ctrlSetText (_pathButt + "notesA.jpg");

		_lb=[_display,_pdaWindowGroup,1020,[7.3*_pW,7.3*_pH,61.5*_pW,88.6*_pH],[0,0,0,1],[1,1,1,1],true] call DRG_fnc_makePdaListBox;
		private _saved_name_player = profileNamespace getVariable ["DRG_player_oldName",""];
		if !((name player) == _saved_name_player) then {
			profileNamespace setVariable ["DRG_notes_array",[]];
			profileNamespace setVariable ["DRG_player_oldName",name player];
			saveProfileNamespace;
		};
		_mms=profileNamespace getVariable ["DRG_notes_array",[]];
		if (count _mms != 0) then {	{ _lb lbAdd _x;	} forEach _mms;};
		_lb ctrlAddEventHandler ["LBSelChanged", {
			private _ctmt = (findDisplay 72600) displayCtrl 1022;
			_ctmt ctrlSetText ((_this select 0) lbText (_this select 1));
			private _ppp = ctrlPosition _ctmt;
			private _nhp = ctrlTextHeight _ctmt;
			_ctmt ctrlSetPosition [_ppp select 0,_ppp select 1,_ppp select 2,_nhp];
			_ctmt ctrlCommit 0;
		}]; 


		[_display,_pdaWindowGroup,1021,[_pW*76,_pH*7.3,_pW*109.7,_pH*36.3],[1,1,1,1],[0,0,0,0],true,""] call DRG_fnc_makeEditBoxMulti;


		private _buttH = 11.6 * _pH;
		private _buttW = 51.2 * _pW;
		private _buttMarH = 45.8 * _pH;
		private _buttMarW1 = 76.1 * _pW;
		private _buttMarW2 = 134.6 * _pW;

		private _path = format["\drg_ui\textures\pda_new\notes_button\%1\",localize "str_drg_lang"];
		{
			_ctrl = [_display,_pdaWindowGroup,(_forEachIndex + 3101),[(_x select 0), _buttMarH, _buttW, _buttH],(_x select 1),[0,0,0,1],false,true,""] call DRG_fnc_makePicture;
			_ctrl ctrlSetTextColor [1,1,1,0.8];
			_ctrl ctrlSetEventHandler ["mouseEnter","(_this select 0) ctrlSetTextColor [1,1,1,1]"];
			_ctrl ctrlSetEventHandler ["mouseExit","(_this select 0) ctrlSetTextColor [1,1,1,0.8]"];
			_ctrl ctrlSetEventHandler ["mouseButtonUp",format ["%1",(_x select 2)]];
		} forEach [
			[_buttMarW1,_path + "add.jpg"		,"_text = ctrlText 1021;lbAdd [1020,_text];_mms=profileNamespace getVariable ['DRG_notes_array',[]];_mms pushBack _text;profileNamespace setVariable ['DRG_notes_array',_mms];saveProfileNamespace;"],					// friend
			[_buttMarW2,_path + "delete.jpg"	,"_c = lbCurSel 1020;if (_c != -1) then {_mms=profileNamespace getVariable ['DRG_notes_array',[]];_mms = _mms - [lbText [1020,_c]];profileNamespace setVariable ['DRG_notes_array',_mms];lbDelete [1020, _c];};ctrlSetText [1022, ''];saveProfileNamespace;"]				// back to message
		];


		_notesTextGroup = _display ctrlCreate ["RscControlsGroupNoHScrollbars",1300,_pdaWindowGroup];
		_notesTextGroup ctrlSetPosition [_pW*76,_pH*59.6,_pW*109.7,_pH*36.3];
		_notesTextGroup ctrlCommit 0; 
		_tb = [_display,_notesTextGroup,1022,[0,0,_pW*109.7,_pH*36.3],"",[1,1,1,1],[0,0,0,0],false,""] call DRG_fnc_makeTextMulti;
		_tb ctrlSetFont "OpenSansSemibold";
	}; 
	case "wiki" : 		{
		private ["_cfgDrgPdaWiki", "_ctrl", "_c", "_ppp", "_nhp"];
		_display setVariable ["pdaCurrentTab",'wiki'];
		_wikiButton ctrlSetText (_pathButt + "wikiA.jpg");
		_ctrl = [_display,_pdaWindowGroup,3100,[7.3 * _pW,7.3 * _pH,62.9 * _pW,87.2 * _pH],true] call DRG_fnc_makeDrgTree;
		_ctrl ctrlSetFont "CenturyGothic";
		_cfgDrgPdaWiki = configNull;
		if (isClass(missionConfigFile >> "cfgDrgPdaWiki")) then {
			_cfgDrgPdaWiki = missionConfigFile >> "cfgDrgPdaWiki";
		} else {
			_cfgDrgPdaWiki = configFile >> "cfgDrgPdaWiki";
		};
		if !(_cfgDrgPdaWiki isEqualTo configNull) then {
			for "_i" from 0 to (count _cfgDrgPdaWiki)-1 do {
				_mainSection = _cfgDrgPdaWiki select _i;
				_nameMainSection = getText(_mainSection >> "nameSection"); 
				_descMain = getText(_mainSection >> "description");
				_color = [0, 0.65, 0.13, 1];
				_ii = _ctrl tvAdd [[], _nameMainSection];
				_ctrl tvSetData [[_ii], _descMain];
				_ctrl tvSetColor [[_i], _color];
				for "_j" from 0 to (count _mainSection)-1 do {
					_section = _mainSection select _j;
					if (isClass _section) then	{
						_name = getText(_section >> "nameSection");
						_desc = getText(_section >> "description");
						_jj = _ctrl tvAdd [[_i], _name];
						_ctrl tvSetData [[_i,_jj], _desc];
						_ctrl tvSetColor [[_i,_jj], [0.8, 0.8, 0.8, 1]];
					};
				};
			};
		};
		_ctrl ctrlAddEventHandler ["TreeSelChanged", {
			private _ctst = (findDisplay 72600) displayCtrl 3101;
			_ctst ctrlSetStructuredText (parseText ((_this select 0) tvData (_this select 1)));
			private _ppp = ctrlPosition _ctst;
			private _nhp = ctrlTextHeight _ctst;
			_ctst ctrlSetPosition [_ppp select 0,_ppp select 1,_ppp select 2,_nhp];
			_ctst ctrlCommit 0;
		}];

		_wikiTextGroup = _display ctrlCreate ["RscControlsGroupNoHScrollbars",1300,_pdaWindowGroup];
		_wikiTextGroup ctrlSetPosition [77.5 * _pW,7.3 * _pH,110.6 * _pW,87.2 * _pH];
		_wikiTextGroup ctrlCommit 0; 
		[_display,_wikiTextGroup,3101 ,[0,0,110.6 * _pW,87.2 * _pH],"","CenturyGothic" ,0.54,"#FFFFFF","left",0,_sizeMultiplier] call DRG_fnc_makeStructuredText;
	};
	case "map" : 		{
		_display setVariable ["pdaCurrentTab",'map'];
		_mapButton ctrlSetText (_pathButt + "mapA.jpg");
		
		if (player getVariable ["DRG_network",true]) then {
			_ctrl = _display ctrlCreate ["RscmapControl", 1010,_pdaWindowGroup];
			// {
			//   _a = toArray _x;
			//   _a resize 14;
			//   if (toString _a == "DRG_PDA_Marker") then {
			//   	deleteMarkerLocal _x;
			//   };
			// } forEach allMapMarkers;
			// waitUntil {
			// 	_nE = player nearEntities ["Man",100];
			// 	{
			// 		if ((isPlayer _x) && !(isObjectHidden _x)) then {
			// 			if (_x getVariable ["DRG_network",true] && {"armst_item_pda" in (assignedItems _x)}) then {
			// 				_ml = createMarkerLocal [format["DRG_PDA_Marker%1",_forEachIndex],_x];
			// 				_ml setMarkerShapeLocal "ICON";
			// 				_ml setMarkerTypeLocal "mil_dot";
			// 				_ml setMarkerColorLocal "ColorLightOrange";
			// 			};
			// 		};
			// 	} forEach _nE;
			// 	true
			// };
			_ctrl ctrlSetPosition [
			safeZoneXabs + (safeZoneWAbs / 2) - ((300 * _pW) / 2)+(_pW*77.8),
			safeZoneY + (safeZoneH / 2) - ((150 * _pH) / 2)+_pH*37.2,
			_pW*180.8,
			_pH*90.1
			];
			_pos = position player;
			_ctrl ctrlMapAnimAdd [0, 0.1, [(_pos select 0)+550,(_pos select 1)-250,(_pos select 2)]];
			ctrlMapAnimCommit _ctrl;
			// _ctrl ctrlEnable false;
			_ctrl ctrlCommit 0;
		} else {
			[_display,_pdaWindowGroup,-1,[_pW*51.2,_pH*36.3,_pW*96.5,_pH*36.3] ,localize "STR_DRG_pda_notNetwork" ,"Roboto",1.6,"#FF7200","center",0,_sizeMultiplier] call DRG_fnc_makeStructuredText;
		};
	}; 
	case "settings" : 	{
		_display setVariable ["pdaCurrentTab",'settings'];
		_settingsButton ctrlSetText (_pathButt + "settingsA.jpg");
		private _cmbX = 7.3 * _pW;
		private _cmbY = 7.3 * _pH;
		private _cmbW = 43.9 * _pW;
		private _cmbH = 7.3 * _pH;

		private _comboNetwork = [_display,_pdaWindowGroup,3001,[_cmbX,_cmbY,_cmbW,_cmbH],"",[1,1,1,1],[0,0,0,0.8]] call DRG_fnc_makeComboBox;
		{
		  	_i=_comboNetwork lbAdd (_x select 0);
			_comboNetwork lbSetData [_i, _x select 1];
		} forEach [
			 [localize "STR_DRG_pda_settings_network_online","true"]
			,[localize "STR_DRG_pda_settings_network_offline","false"]
		];
		if (player getVariable ["DRG_network",true]) then {
			_comboNetwork lbSetCurSel 0;
		} else {
			_comboNetwork lbSetCurSel 1;
		};
			
		_comboNetwork ctrlAddEventHandler ["LBSelChanged", {_data = ((_this select 0) lbData (_this select 1));switch (_data) do { 	case "true" : {	player setVariable ["DRG_network",true,true];	((findDisplay 72600) displayCtrl 600) ctrlSetStructuredText parseText "<img image='\drg_ui\textures\pda_new\status\online.paa'/>";}; 	case "false" : {	player setVariable ["DRG_network",false,true];	((findDisplay 72600) displayCtrl 600) ctrlSetStructuredText parseText "<img image='\drg_ui\textures\pda_new\status\offline.paa'/>";}; };}]; 		

		private _comboVD = [_display,_pdaWindowGroup,3002,[_cmbX,_cmbY * 3,_cmbW,_cmbH],"",[1,1,1,1],[0,0,0,0.8]] call DRG_fnc_makeComboBox;
		{
		  	_i=_comboVD lbAdd _x;
			_comboVD lbSetData [_i, _x];
		} forEach ["200", "400"	,"600"	,"800"	,"1000"	,"1200"	,"1400"];

		_comboVD lbSetCurSel 0;		
		_comboVD ctrlAddEventHandler ["LBSelChanged", "_data = ((_this select 0) lbData (_this select 1));_num = parseNumber _data;setViewDistance _num;"]; 		

		private _comboVDO = [_display,_pdaWindowGroup,3003,[_cmbX,_cmbY * 5,_cmbW,_cmbH],"",[1,1,1,1],[0,0,0,0.8]] call DRG_fnc_makeComboBox;
		{
		  	_i=_comboVDO lbAdd _x;
			_comboVDO lbSetData [_i, _x];
		} forEach ["200", "400"	,"600"	,"800"	,"1000"	,"1200"];

		_comboVDO lbSetCurSel 0;		
		_comboVDO ctrlAddEventHandler ["LBSelChanged", "_data = ((_this select 0) lbData (_this select 1));_num = parseNumber _data;setObjectViewDistance _num;"]; 		

		private _txtX = 58.5 * _pW;
		private _txtY = 7.3 * _pH;
		private _txtW = 129.6 * _pW;
		private _txtH = 7.3 * _pH;
		{
			[_display,_pdaWindowGroup,-1,(_x select 0),(_x select 1),"Roboto" ,0.62,"#FFFFFF","left",0,_sizeMultiplier] call DRG_fnc_makeStructuredText;
		} forEach [
			[[_txtX,_txtY,_txtW,_txtH],localize "STR_DRG_pda_settings_network"],
			[[_txtX,_txtY * 3,_txtW,_txtH],localize "STR_DRG_pda_settings_vd"],
			[[_txtX,_txtY * 5,_txtW,_txtH],localize "STR_DRG_pda_settings_vdo"]
		];
	}; 
	case "history" : 	{
		_display setVariable ["pdaCurrentTab",'history'];

		_lb=[_display,_pdaWindowGroup,1020,[7.3*_pW,7.3*_pH,61.5*_pW,88.6*_pH],[0,0,0,1],[1,1,1,1],true] call DRG_fnc_makeListBox;

		_allmes=player getVariable ["drg_player_history_messages",[]];
		reverse _allmes;
		{
			_index = _lb lbAdd _x;_lb lbSetData [_index,str(_x)]; 
		} forEach _allmes;		
		_messHistoryTextGroup = _display ctrlCreate ["RscControlsGroupNoHScrollbars",1300,_pdaWindowGroup];
		_messHistoryTextGroup ctrlSetPosition [_pW*76,_pH*7.3,_pW*109.7,_pH*69.7];
		_messHistoryTextGroup ctrlCommit 0; 
		_lb ctrlAddEventHandler ["LBSelChanged", {
			private _ctmt = (findDisplay 72600) displayCtrl 1021;
			_ctmt ctrlSetText ((_this select 0) lbText (_this select 1));
			private _ppp = ctrlPosition _ctmt;
			private _nhp = ctrlTextHeight _ctmt;
			_ctmt ctrlSetPosition [_ppp select 0,_ppp select 1,_ppp select 2,_nhp];
			_ctmt ctrlCommit 0;
		}]; 
		[_display,_messHistoryTextGroup,1021,[0,0,_pW*109.7,_pH*69.7],"",[1,1,1,1],[0,0,0,0],false,""] call DRG_fnc_makeTextMulti;

		private _buttH = 11.6 * _pH;
		private _buttW = 51.2 * _pW;
		private _buttMarH = 84.3 * _pH;
		private _buttMarW1 = 76.1 * _pW;
		private _buttMarW2 = 134.6 * _pW;

		private _path = format["\drg_ui\textures\pda_new\history_button\%1\",localize "str_drg_lang"];
		{
			_ctrl = [_display,_pdaWindowGroup,(_forEachIndex + 3101),(_x select 0),(_x select 1),[0,0,0,1],false,true,""] call DRG_fnc_makePicture;
			_ctrl ctrlSetTextColor [1,1,1,0.8];
			_ctrl ctrlSetEventHandler ["mouseEnter","(_this select 0) ctrlSetTextColor [1,1,1,1]"];
			_ctrl ctrlSetEventHandler ["mouseExit","(_this select 0) ctrlSetTextColor [1,1,1,0.8]"];
			_ctrl ctrlSetEventHandler ["mouseButtonUp",format ["%1",(_x select 2)]];
		} forEach [
			[[_buttMarW1, _buttMarH, _buttW, _buttH],_path + "clear.jpg"		,"player setVariable ['drg_player_history_messages',[],true];lbClear 1020;"],					// friend
			[[_buttMarW2, _buttMarH, _buttW, _buttH],_path + "back.jpg"		,"'message' spawn drg_fnc_pdaTab"]				// back to message
		];
	}; 
	case "addfriend" : 	{
		_display setVariable ["pdaCurrentTab",'addfriend'];
		private _buttH = 11.6 * _pH;
		private _buttW = 27.8 * _pW;
		private _buttW1 = 51.2 * _pW;
		private _buttMarH = 58.1 * _pH;
		private _buttMarW1 = 93.3 * _pW;
		private _buttMarW2 = 124.1 * _pW;

		private _path = format["\drg_ui\textures\pda_new\addfr_button\%1\",localize "str_drg_lang"];
		{
			_ctrl = [_display,_pdaWindowGroup,(_forEachIndex + 3101),(_x select 0),(_x select 1),[0,0,0,1],false,true,""] call DRG_fnc_makePicture;
			_ctrl ctrlSetTextColor [1,1,1,0.8];
			_ctrl ctrlSetEventHandler ["mouseEnter","(_this select 0) ctrlSetTextColor [1,1,1,1]"];
			_ctrl ctrlSetEventHandler ["mouseExit","(_this select 0) ctrlSetTextColor [1,1,1,0.8]"];
			_ctrl ctrlSetEventHandler ["mouseButtonUp",format ["%1",(_x select 2)]];
		} forEach [
			[[_buttMarW1, _buttMarH, _buttW, _buttH],_path + "back.jpg"		,"'message' spawn drg_fnc_pdaTab"],
			[[_buttMarW2, _buttMarH, _buttW1, _buttH],_path + "addch.jpg"	,"[(findDisplay 72600) getVariable ['tmpvar',''],ctrlText 1021] call drg_fnc_addChFriend;'message' spawn drg_fnc_pdaTab"],
			[[14.6 * _pW,87.2 * _pH, _buttW1, _buttH],_path + "delete.jpg"	,""]	
		];
	
		_eb1 = [_display,_pdaWindowGroup,1020,[_buttMarW2,29.1*_pH, _buttW1, _buttH],"",[0,0,0,0],[1,1,1,1],"OpenSansSemibold",_sizeMultiplier,1.4] call DRG_fnc_makeEditBox;
		_eb1 ctrlEnable false;
		_eb2 = [_display,_pdaWindowGroup,1021,[_buttMarW2,43.6*_pH, _buttW1, _buttH],"",[0,0,0,0],[1,1,1,1],"OpenSansSemibold",_sizeMultiplier,1.4] call DRG_fnc_makeEditBox;

		{
			[_display,_pdaWindowGroup,-1 ,(_x select 0),(_x select 1),"Roboto" ,0.54,"#FFFFFF","right",0,_sizeMultiplier] call DRG_fnc_makeStructuredText;
		} forEach [
			[[_buttMarW1,34.1*_pH, _buttW, _buttH],"ID"],
			[[_buttMarW1,48.7*_pH, _buttW, _buttH],localize "STR_DRG_pda_addfr_nick"]
		];

		_lb=[_display,_pdaWindowGroup,1022,[7.3*_pW,7.3*_pH,65.8*_pW,72.6*_pH],[0,0,0,1],[1,1,1,1],true] call DRG_fnc_makeListBox;
		private _saved_name_player = profileNamespace getVariable ["DRG_player_oldName",""];
		if !((name player) == _saved_name_player) then {
			profileNamespace setVariable ["DRG_allPlayerFriends",[]];
			profileNamespace setVariable ["DRG_player_oldName",name player];
			saveProfileNamespace;
		};
		private _allfr=profileNamespace getVariable ["DRG_allPlayerFriends",[]];
		{
			if !(_x isEqualTo []) then {
				if !((_x select 1) isEqualTo "") then {
					_index = _lb lbAdd (_x select 1);
					_lb lbSetData [_index,_x select 0]; 
				};
			};
		} forEach _allfr;
		_lb ctrlAddEventHandler ["LBSelChanged", {
				ctrlSetText [1020,((_this select 0) lbData (_this select 1)) call drg_fnc_getIdFromUID];
				ctrlSetText [1021,((_this select 0) lbText (_this select 1))];
				(findDisplay 72600) setVariable ['tmpvar',((_this select 0) lbData (_this select 1))];
			}  
		]; 

		if (_tempvar == "") exitWith {};
		_arr = [_tempvar] call DRG_fnc_getIdWithName;
		_display setVariable ["tmpvar",_tempvar];
		_eb1 ctrlSetText (_arr select 0);
		_eb1 ctrlEnable false;
		_eb2 ctrlSetText (_arr select 1);
	}; 
};