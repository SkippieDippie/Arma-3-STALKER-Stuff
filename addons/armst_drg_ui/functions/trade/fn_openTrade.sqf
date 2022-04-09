	params ["_trader","_typetrade"];
	createDialog "dragster_empty_dialog";
	disableSerialization;

	if (isNull (findDisplay 67000)) exitWith {};
	_display = findDisplay 67000;
	
	_sizeMultiplier = (1 / (getResolution select 5));
	_pW = pixelW * 5 * (getResolution select 0) / 1920;
	_pH = pixelH * 5 * (getResolution select 1) / 1080;
	_tradeWindowWidth = 280 * _pW;
	_tradeWindowHeight = 154 * _pH;
	
	_tradeWindowGroup = _display ctrlCreate ["RscControlsGroupNoScrollbars",1100];
	_tradeWindowGroup ctrlSetPosition [safeZoneXabs + (safeZoneWAbs / 2) - (_tradeWindowWidth / 2),safeZoneY + (safeZoneH / 2) - (_tradeWindowHeight / 2),_tradeWindowWidth,_tradeWindowHeight];
	_tradeWindowGroup ctrlSetFade 1;
	_tradeWindowGroup ctrlCommit 0; 
	_tradeWindowGroup ctrlSetFade 0;
	_tradeWindowGroup ctrlCommit 0.25;
	

	{
		[_display,_tradeWindowGroup,(_x select 0) ,(_x select 1),(_x select 2),[0,0,0,1],false,false,""] call DRG_fnc_makePicture;
	} forEach [
		[-1,[0,0,_tradeWindowWidth,_tradeWindowHeight],"drg_ui\textures\trade\bg.paa"],
		[-1,[8.477*_pW,7.068*_pH, 13.672*_pW,15.039*_pH],getText(missionConfigFile >> "DRG_Trader_Config" >> _trader >> "avatar")],
		[-1,[26.660*_pW,16.393*_pH, 12.168*_pW,5.715*_pH],[getText(missionConfigFile >> "DRG_Trader_Config" >> _trader >> "faction")] call DRG_fnc_getEmblem],
		[-1,[257.031*_pW,7.068*_pH, 13.672*_pW,15.039*_pH],[] call DRG_fnc_getAvatar],
		[-1,[240.352*_pW,16.393*_pH, 12.168*_pW,5.715*_pH],[faction player] call DRG_fnc_getEmblem],
		[-1,[67.539*_pW,27.371*_pH,97.207*_pW,115.801*_pH],"drg_ui\textures\trade\listbox.paa"]
	];

	{
		[_display,_tradeWindowGroup,(_x select 0) ,(_x select 2),"drg_ui\textures\trade\button.paa",[0,0,0,1],false,false,""] call DRG_fnc_makePicture;
		_b = [_display,_tradeWindowGroup,(_x select 1),(_x select 2),(_x select 3),(_x select 4)] call DRG_fnc_makeButton;
		_b ctrlAddEventHandler ["ButtonClick",  (_x select 5) ]; 
	} forEach [
		[-1,-1,[8.340*_pW,27.371 *_pH, 47.852*_pW,10.527*_pH] ,"1",1,"[(findDisplay 67000) getVariable 'trader','weapons',(findDisplay 67000) getVariable 'typetrade'] spawn DRG_fnc_changeLB;"],
		[-1,-1,[8.340*_pW,42.410 *_pH, 47.852*_pW,10.527*_pH] ,"1",1,"[(findDisplay 67000) getVariable 'trader','weapitems',(findDisplay 67000) getVariable 'typetrade'] spawn DRG_fnc_changeLB;"],
		[-1,-1,[8.340*_pW,57.449 *_pH, 47.852*_pW,10.527*_pH] ,"1",1,"[(findDisplay 67000) getVariable 'trader','magazines',(findDisplay 67000) getVariable 'typetrade'] spawn DRG_fnc_changeLB;"],
		[-1,-1,[8.340*_pW,72.488 *_pH, 47.852*_pW,10.527*_pH] ,"1",1,"[(findDisplay 67000) getVariable 'trader','equipment',(findDisplay 67000) getVariable 'typetrade'] spawn DRG_fnc_changeLB;"],
		[-1,-1,[8.340*_pW,87.527 *_pH, 47.852*_pW,10.527*_pH] ,"1",1,"[(findDisplay 67000) getVariable 'trader','gasmasks',(findDisplay 67000) getVariable 'typetrade'] spawn DRG_fnc_changeLB;"],
		[-1,-1,[8.340*_pW,102.566 *_pH,47.852*_pW,10.527*_pH] ,"1",1,"[(findDisplay 67000) getVariable 'trader','foodwater',(findDisplay 67000) getVariable 'typetrade'] spawn DRG_fnc_changeLB;"],
		[-1,-1,[8.340*_pW,117.605 *_pH,47.852*_pW,10.527*_pH] ,"1",1,"[(findDisplay 67000) getVariable 'trader','medical',(findDisplay 67000) getVariable 'typetrade'] spawn DRG_fnc_changeLB;"],
		[-1,-1,[8.340*_pW,132.645 *_pH,47.852*_pW,10.527*_pH] ,"1",1,"[(findDisplay 67000) getVariable 'trader','other',(findDisplay 67000) getVariable 'typetrade'] spawn DRG_fnc_changeLB;"],
		[-1,67015,[175.957*_pW,132.645*_pH,43.750*_pW,10.527*_pH],"1",1,"if (lbCurSel 67022 == -1) exitWith {};(_this select 0) ctrlShow false;	if (((findDisplay 67000) getVariable 'typetrade') == ""buy"") then {if ((parseNumber (ctrlText 67021)) == 0) exitWith {ctrlSetText [67021,'1'];((findDisplay 67000) displayCtrl 67022) lbSetCurSel -1;};[lbData [67022, lbCurSel 67022],lbValue [67022, lbCurSel 67022],parseNumber(ctrlText 67021)] call DRG_fnc_tradeBtnBuy;} else {[lbData [67022, lbCurSel 67022],lbValue [67022, lbCurSel 67022], ((findDisplay 67000) displayCtrl 67021) lbValue (lbCurSel ((findDisplay 67000) displayCtrl 67021))] call DRG_fnc_tradeBtnSell;};"],
		[-1,-1,[226.543*_pW,132.645*_pH,43.750*_pW,10.527*_pH],"1",1,"(findDisplay 67000) closeDisplay 0"]
	];
	
	{
		[_display,_tradeWindowGroup,(_x select 0),(_x select 1),(_x select 2),(_x select 6),(_x select 3) ,(_x select 5),(_x select 4),0,_sizeMultiplier] call DRG_fnc_makeStructuredText;
	} forEach [
		[-1,	[_pW*104.590 ,_pH*5.264 ,_pW*71.230,_pH*9.369]	,localize "DRG_store",1,"center","#FFFFFF","TimesNewRoman"],
		[-1,	[_pW*26.660,_pH*7.520,_pW*41.016,_pH*6.768] 	,getText(missionConfigFile >> "DRG_Trader_Config" >> _trader >> "traderName"),0.8,"left","#FFFFFF","TimesNewRoman"],
		[-1,	[_pW*184.160,_pH*7.520,_pW*68.359,_pH*6.768] 	,name player,0.8,"right","#FFFFFF","TimesNewRoman"],
		[-1,	[_pW*8.340,_pH*28.973,_pW*47.852,_pH*9.926] 	,localize "DRG_weapon",0.8,"center","#FFFFFF","TimesNewRoman"],
		[-1,	[_pW*8.340,_pH*44.012,_pW*47.852,_pH*9.926] 	,localize "DRG_weapitem",0.8,"center","#FFFFFF","TimesNewRoman"],
		[-1,	[_pW*8.340,_pH*59.051,_pW*47.852,_pH*9.926] 	,localize "DRG_magazines",0.8,"center","#FFFFFF","TimesNewRoman"],
		[-1,	[_pW*8.340,_pH*74.090,_pW*47.852,_pH*9.926] 	,localize "DRG_equipment",0.8,"center","#FFFFFF","TimesNewRoman"],
		[-1,	[_pW*8.340,_pH*89.129,_pW*47.852,_pH*9.926] 	,localize "DRG_gasmask",0.8,"center","#FFFFFF","TimesNewRoman"],
		[-1,	[_pW*8.340,_pH*104.168,_pW*47.852,_pH*9.926] 	,localize "DRG_foodwater",0.8,"center","#FFFFFF","TimesNewRoman"],
		[-1,	[_pW*8.340,_pH*119.207,_pW*47.852,_pH*9.926] 	,localize "DRG_medicine",0.8,"center","#FFFFFF","TimesNewRoman"],
		[-1,	[_pW*8.340,_pH*134.246,_pW*47.852,_pH*9.926] 	,localize "DRG_other",0.8,"center","#FFFFFF","TimesNewRoman"],
		[67019,	[_pW*175.957,_pH*48.877,_pW*94.336,_pH*7.369] 	," ",1,"center","#FFFFFF","EpsilonCTT"],
		[67017,	[_pW*175.957,_pH*57.600,_pW*94.336,_pH*42.109]	," ",1,"right","#FFFFFF","EpsilonCTT"],
		[-1,	[_pW*175.957,_pH*104.070,_pW*43.750,_pH*6.316]	,localize "DRG_balance",1,"right","#000000","EpsilonCTT"],
		[67016,	[_pW*226.543,_pH*104.070,_pW*43.750,_pH*6.316]	,format["%1 р.",[player getVariable ["Money",0]] call BIS_fnc_numberText] ,1,"right","#000000","EpsilonCTT"],
		[-1,	[_pW*175.957,_pH*110.838,_pW*43.750,_pH*6.316]	,localize "DRG_price",1,"right","#000000","EpsilonCTT"],
		[67020,	[_pW*226.543,_pH*110.838,_pW*43.750,_pH*6.316] 	,"0 р." ,1,"right","#000000","EpsilonCTT"],
		[-1,	[_pW*175.957,_pH*121.365,_pW*43.750,_pH*6.316]	,localize "DRG_amount",1,"right","#000000","EpsilonCTT"],
		[-1,	[_pW*175.957,_pH*134.246,_pW*43.750,_pH*9.926]	,if (_typetrade == "buy") then {localize "DRG_buy"} else {localize "DRG_sell"},0.8,"center","#FFFFFF","TimesNewRoman"],
		[-1,	[_pW*226.543,_pH*134.246,_pW*43.750,_pH*9.926]	,localize "DRG_exit",0.8,"center","#FFFFFF","TimesNewRoman"],
		[67018,	[_pW*199.609,_pH*27.371,_pW*40.059,_pH*20.604]	," ",0.8,"center","#FFFFFF","EpsilonCTT"]
	];




	if (_typetrade == "buy") then {
		_eb = [_display,_tradeWindowGroup,67021,[226.543*_pW,118.809*_pH, 43.750*_pW,10.527*_pH],"1",[0,0,0,0],[1,1,1,1],"TimesNewRoman",_sizeMultiplier,1.4] call DRG_fnc_makeEditBox;
		_eb ctrlSetTextColor [0,0,0,1];
		_eb ctrlAddEventHandler ["KeyDown", {
			if ((_this select 1 in [14,211,28,29,42,58,56,219,157,221,54,220,184,57,87,88,183,70,197,210,199,207,201,209,69,156,59,60,61,62,63,64,65,67,68,0x0F,203,205,208,200])) exitWith {};
			_cou=parseNumber(ctrlText (_this select 0));
			_lb = ((findDisplay 67000) displayCtrl 67022);
			_lbcs = (lbCurSel _lb);
			if !((_this select 1) in [2,3,4,5,6,7,8,9,10,11,71,72,73,75,76,77,79,80,81,82]) exitWith {
				_b=toArray (ctrlText (_this select 0));
				_b deleteAt ((count _b)-1);
				(_this select 0) ctrlSetText (toString _b);
				if (_cou == 0) then {
				  (_this select 0) ctrlSetText '1';
				  ((findDisplay 67000) displayCtrl 67020) ctrlSetStructuredText (parseText format ['<t shadow="0" font="EpsilonCTT" align="right" size="%2" color="#000000">%1 р.</t>', ((_lb lbValue _lbcs) call BIS_fnc_numberText),1 * (1 / (getResolution select 5))]);
				};
			};
			if (_lbcs == -1) exitWith {};
			((findDisplay 67000) displayCtrl 67020) ctrlSetStructuredText (parseText format ['<t shadow="0" font="EpsilonCTT" align="right" size="%2" color="#000000">%1 р.</t>', (((_lb lbValue _lbcs)*_cou) call BIS_fnc_numberText),1 * (1 / (getResolution select 5))]);
		}]; 
		_eb ctrlAddEventHandler ["KeyUp", {
			if ((_this select 1) in [14,211]) exitWith {
				_cou=parseNumber(ctrlText (_this select 0));
				_lb = ((findDisplay 67000) displayCtrl 67022);
				_lbcs = (lbCurSel _lb);
				if (_lbcs == -1) exitWith {};
				((findDisplay 67000) displayCtrl 67020) ctrlSetStructuredText (parseText format ['<t shadow="0" font="EpsilonCTT" align="right" size="%2" color="#000000">%1 р.</t>', (((_lb lbValue _lbcs)*_cou) call BIS_fnc_numberText),1 * (1 / (getResolution select 5))]);
			};
		}];
	} else {	
		_xlb = [_display,_tradeWindowGroup,67021,[226.543*_pW,118.809*_pH, 43.750*_pW,10.527*_pH],0.09] call DRG_fnc_makeXListBox;
		_xlb ctrlAddEventHandler ["LBSelChanged", {
			_lbm = ((findDisplay 67000) displayCtrl 67022);
			_lbmcs = (lbCurSel _lbm);
			_lbmv = (_lbm lbValue _lbmcs);
			_cnt = (_this select 0) lbValue (_this select 1);
			((findDisplay 67000) displayCtrl 67020) ctrlSetStructuredText (parseText format ['<t shadow="0" font="EpsilonCTT" align="right" size="%2" color="#000000">%1 р.</t>',((_lbmv * _cnt) call BIS_fnc_numberText),1 * (1 / (getResolution select 5))]);
		}];
	};








			

	_lb = [_display,_tradeWindowGroup,67022,[70.263 * _pW,30.778 * _pH,92.695 * _pW,108.387 * _pH],[0,0,0,0],[1,1,1,1],true,0.045] call DRG_fnc_makeDRGListBox;
	_lb ctrlSetFont "TimesNewRoman";
	_lb ctrlAddEventHandler ["LBSelChanged", {
		if ((_this select 1) == -1) exitWith {};
		((findDisplay 67000) displayCtrl 67017) ctrlSetStructuredText (parseText format ['<t align="right" font="EpsilonCTT" size="%2">%1</t>',"",1 * (1 / (getResolution select 5))]);
		((findDisplay 67000) displayCtrl 67019) ctrlSetStructuredText (parseText format ['<t shadow="0" font="EpsilonCTT" align="center" size="%2" color="#000000">%1</t>',((_this select 0) lbText (_this select 1)),1 * (1 / (getResolution select 5))]);
		_lbc = ((findDisplay 67000) displayCtrl 67021);
		lbClear _lbc;
		((findDisplay 67000) displayCtrl 67020) ctrlSetStructuredText (parseText format ['<t shadow="0" font="EpsilonCTT" align="right" size="%2" color="#000000">%1 р.</t>', (((_this select 0) lbValue (_this select 1)) call BIS_fnc_numberText),1 * (1 / (getResolution select 5))]);
		
		_baseConf = [((_this select 0) lbData (_this select 1))] call DRG_fnc_getBaseConfig;
		_pic = getText(configFile >> _baseConf >> ((_this select 0) lbData (_this select 1)) >> 'picture');
		((findDisplay 67000) displayCtrl 67018) ctrlSetStructuredText (parseText format['<t align="center" size="%2"><img image="%1" /></t>',_pic,2 * (1 / (getResolution select 5))]);
		if (_baseConf == "CfgWeapons") then {
		  	_type = getNumber(configFile >> _baseConf >> ((_this select 0) lbData (_this select 1)) >> 'type');
		  	if (_type in [1,2,4]) then {
				  	_magz = getArray(configFile >> _baseConf >> ((_this select 0) lbData (_this select 1)) >> 'magazines');
				  	if ((count _magz)>3) then {
				  	  _magz resize 3;
				  	};
				  	_mgstring= localize "DRG_magazines";
				  	{
				  	  _mgstring = _mgstring + "<br />" + getText(configFile >> "CfgMagazines" >> _x >> 'displayName');
				  	} forEach _magz;
				  	((findDisplay 67000) displayCtrl 67017) ctrlSetStructuredText (parseText format['<t align="right" shadow="0" font="EpsilonCTT" color="#000000" size="%2">%1</t>',_mgstring,1 * (1 / (getResolution select 5))]);
		  	} else {
				_desc = getText(configFile >> _baseConf >> ((_this select 0) lbData (_this select 1)) >> 'descriptionShort');
				((findDisplay 67000) displayCtrl 67017) ctrlSetStructuredText (parseText format['<t align="right" shadow="0" font="EpsilonCTT" color="#000000" size="%2">%1</t>',_desc,1 * (1 / (getResolution select 5))]);

		  	};
		} else {
			_desc = getText(configFile >> _baseConf >> ((_this select 0) lbData (_this select 1)) >> 'descriptionShort');
			((findDisplay 67000) displayCtrl 67017) ctrlSetStructuredText (parseText format['<t align="right" shadow="0" font="EpsilonCTT" size="%2">%1</t>',_desc,1 * (1 / (getResolution select 5))]);
		};
		_item = ((_this select 0) lbData (_this select 1));
		_allThPl = [primaryWeapon player,secondaryWeapon player,handgunWeapon player] + itemsWithMagazines player + assignedItems player + [uniform player] + [vest player] + [backpack player] + [headgear player] + [goggles player];
		_count = {_x == _item} count _allThPl;

		for "_i" from _count to 1 step -1 do {
			_a = _lbc lbAdd (str _i);
			_lbc lbSetValue [_a,_i];
		};
		lbSortByValue _lbc;
		_lbc lbSetCurSel 0;
	}]; 

	(findDisplay 67000) setVariable ['trader',_trader];
	(findDisplay 67000) setVariable ['typetrade',_typetrade];
	[_trader,"weapons",_typetrade] call DRG_fnc_changeLB; 