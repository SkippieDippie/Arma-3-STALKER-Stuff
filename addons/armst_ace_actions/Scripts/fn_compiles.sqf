
player setVariable ["Attack",0,true];

armst_btr = {
    if (player isKindOf "ARMST_ARMY") then {
        deleteVehicle s_armst_btrs;
        _mes = format["Игрок %1(%2), распаковал вертолёт", name player, getPlayerUID player];
        ["OtherLog2", _mes] remoteExec["DRG_serverToLogFile", 2];
        _veh = "ARMST_Mi24V"
        createVehicle[13574.093, 234.749, 0];
        clearWeaponCargoGlobal _veh;
        clearMagazineCargoGlobal _veh;
        clearItemCargoGlobal _veh;
        clearBackpackCargoGlobal _veh;
        _veh disableTIEquipment true;
    };
};
armst_fnc_infect_attack = {
    _ar = player getVariable "Attack";
    if (_ar == 0) then {
        player setVariable["Attack", 1, true];
        private _b = player distance cursorTarget;
        [player, "ryck", 50] call CBA_fnc_globalSay3d;
        player playactionnow "cross1";
        if (_b <= 2) then {
            _prr = random 10;
            if (_prr < 6) then {
                cursorTarget setdammage((getdammage cursorTarget) + 0.3);
            } else {
                cursorTarget setVariable["Alcohol", 1, true];
                [player] spawn ArmMiss_fnc_disease;
                [] remoteExec["ArmMiss_fnc_disease", cursortarget];
                [] remoteExec["ArmMiss_fnc_diseaseStageOne", cursortarget];
                [
                    [cursorTarget, "Acts_InjuredLookingRifle04"], "switchMove"
                ] call bis_fnc_mp;
            };
        };
        Uisleep 3;
        player setVariable["Attack", 0, true];
    };
};
armst_fnc_infect_jump = {
    if (isTouchingGround player) then {
        if (Boost >= 50) then {
            Boost = Boost - 50;
            if (vehicle player != player) then {
                hint "You are in a vehicle"
            } else {};
            [player, "ryck", 50] call CBA_fnc_globalSay3d;
            player setvelocity[5 * (sin(getdir player)), 5 * (cos(getdir player)), 8];
            _damage = getDammage player;
            sleep 0.4;
            waitUntil {
                isTouchingGround player
            };
            if (vehicle player != player) then {
                hintSilent ""
            } else {};
            player setDamage _damage;
            sleep 4;
            Boost = Boost + 50;
        };
    };
};

armst_fnc_heal_inf = {
    ["Очень больно!!!"] call AGM_Core_fnc_displayTextStructured;
    [
        [player, "AttackCling_human_loop"], "switchMove"
    ] call bis_fnc_mp;
    player setdamage 0.8;
    player setVariable["Alcohol", 0, true];
    sleep 60;
    ["Действие антидота в течении 10 минут... Ожидайте"] call AGM_Core_fnc_displayTextStructured;
    player setVariable["Alcohol", 0, true];
    [
        [player, "Acts_InjuredLookingRifle04"], "switchMove"
    ] call bis_fnc_mp;
    player setVariable["Alcohol", 0, true];
    player setVariable["Alcohol", 0, true];
    player setVariable["Alcohol", 0, true];
    sleep 600;
    titleCut["Необходимо перезайти...", "BLACK", 10];
};


armst_fnc_detect_inf = {
    ["Поиск объекта..."] call AGM_Core_fnc_displayTextStructured;
    [player, "detector_2", 20] call CBA_fnc_globalSay3d;
    sleep 2;
    [player, "detector_2", 20] call CBA_fnc_globalSay3d;
    sleep 2;
    private _b = player distance cursorTarget;
    if (_b <= 4) then {
        ["Анализ объекта..."] call AGM_Core_fnc_displayTextStructured;
        [player, "detector_2", 20] call CBA_fnc_globalSay3d;
        sleep 2;
        [player, "detector_2", 20] call CBA_fnc_globalSay3d;
        sleep 2;
        _ar = cursortarget getVariable "Alcohol";
        if (_ar > 0) then {
            ["Объект инфицирован! Внимание! Опасность!"] call AGM_Core_fnc_displayTextStructured;
            [player, "detector_2", 20] call CBA_fnc_globalSay3d;
            sleep 0.5;
            [player, "detector_2", 20] call CBA_fnc_globalSay3d;
            sleep 0.5;
            ["Объект инфицирован! Внимание! Опасность!"] call AGM_Core_fnc_displayTextStructured;
            [player, "detector_2", 20] call CBA_fnc_globalSay3d;
            sleep 0.5;
            [player, "detector_2", 20] call CBA_fnc_globalSay3d;
            sleep 0.5;
            ["Объект инфицирован! Внимание! Опасность!"] call AGM_Core_fnc_displayTextStructured;
            [player, "detector_2", 20] call CBA_fnc_globalSay3d;
            sleep 0.5;
            [player, "detector_2", 20] call CBA_fnc_globalSay3d;
            sleep 0.5;
            ["Объект инфицирован! Внимание! Опасность!"] call AGM_Core_fnc_displayTextStructured;
            [player, "detector_2", 20] call CBA_fnc_globalSay3d;
            sleep 0.5;
            [player, "detector_2", 20] call CBA_fnc_globalSay3d;
            sleep 0.5;

        } else {
            ["Объект не инфицирован."] call AGM_Core_fnc_displayTextStructured;
        };
    } else {
        ["Объект не обнаружен..."] call AGM_Core_fnc_displayTextStructured;
    };

};

Armst_merc_vhod_in = {
    if (player isKindOf "ARMST_mercenaries") then {
        playsound "door_sound";
        // player setPosATL [585.069,7004.877, 0.2]; 
        player setPosATL[18665.217, 18918.371, 4.4];
    };
};
Armst_merc_vhod_out = {
    if (player isKindOf "ARMST_mercenaries") then {
        playsound "door_sound";
        player setPosATL[2028.785, 4323.555, 0.2];
    };
};
Armst_bandit_vhod_in = {
    if (player isKindOf "ARMST_BANDITS") then {
        playsound "door_sound";
        // player setPosATL [585.069,7004.877, 0.2]; 
        player setPosATL[19530.69, 19037.7, 0];
    };
};
Armst_bandit_vhod_out = {
    if (player isKindOf "ARMST_BANDITS") then {
        playsound "door_sound";
        // player setPosATL [585.069,7004.877, 0.2]; 
        player setPosATL[13780.414, 3055.025, 0];
    };
};
Armst_dolg_vhod_in = {
    if (player isKindOf "ARMST_DOLG") then {
        playsound "door_sound";
        // player setPosATL [585.069,7004.877, 0.2]; 
        player setPosATL[19594.496, 19041.088, 0];
    };
};
Armst_dolg_vhod_out = {
    if (player isKindOf "ARMST_DOLG") then {
        playsound "door_sound";
        // player setPosATL [585.069,7004.877, 0.2]; 
        player setPosATL[9870.42, 6273, 0];
    };
};
Armst_freedom_vhod_in = {
    if (player isKindOf "ARMST_FREEDOM") then {
        playsound "door_sound";
        // player setPosATL [585.069,7004.877, 0.2]; 
        player setPosATL[19652.412, 19037.488, 0];
    };
};
Armst_freedom_vhod_out = {
    if (player isKindOf "ARMST_FREEDOM") then {
        playsound "door_sound";
        // player setPosATL [585.069,7004.877, 0.2]; 
        player setPosATL[17514.6, 4846.652, 0];
    };
};
Armst_clearsky_vhod_in = {
    if (player isKindOf "ARMST_CLEARSKY") then {
        playsound "door_sound";
        // player setPosATL [585.069,7004.877, 0.2]; 
        player setPosATL[19716.246, 19038.137, 0];
    };
};
Armst_clearsky_vhod_out = {
    if (player isKindOf "ARMST_CLEARSKY") then {
        playsound "door_sound";
        // player setPosATL [585.069,7004.877, 0.2]; 
        player setPosATL [16515.8,7548.78,0];
    };
};
Armst_renegade_vhod_in = {
    // if ((player isKindOf "bandit_new_1_3") or (player isKindOf "bandit_new_1") or (player isKindOf "bandit_elite") or (player isKindOf "bandit_new_2_3") or (player isKindOf "bandit_new_2_2") or (player isKindOf "bandit_new_2_3")) then 
    if ((typeOf player) in ["bandit_new_1_3", "bandit_new_1", "bandit_elite", "bandit_new_2_3", "bandit_new_2_2", "bandit_new_2_3"]) then {
        playsound "door_sound";
        // player setPosATL [585.069,7004.877, 0.2]; 
        player setPosATL[19767.742, 19040.543, 0];
    };
};
Armst_renegade_vhod_out = {
    // if ((player isKindOf "bandit_new_1_3") or (player isKindOf "bandit_new_1") or (player isKindOf "bandit_elite") or (player isKindOf "bandit_new_2_3") or (player isKindOf "bandit_new_2_2") or (player isKindOf "bandit_new_2_3")) then 
    if ((typeOf player) in ["bandit_new_1_3", "bandit_new_1", "bandit_elite", "bandit_new_2_3", "bandit_new_2_2", "bandit_new_2_3"]) then {
        playsound "door_sound";
        // player setPosATL [585.069,7004.877, 0.2]; 
        // player setPosATL [5250.267,2106.029,0]; 
        player setPosATL[13780.7, 3057.59, 0];
    };
};

armst_block_podvals = {
	params ["_player"];
	private _ADMINS = getArray (missionConfigfile >> "ADMINS" >> "uids");
	if !(getPlayerUID player in _ADMINS) then {
		_player setdamage 1;
		_mes = format ["Игрок %1, был убит триггером смерти между подвалов", name _player];
		["OtherLog",_mes] remoteExec ["DRG_serverToLogFile",2];
	};
};




Armst_fnc_radX_health = {
	params[
		 ["_player",player]
		,["_targ",player]
	];
	if ("armst_item_antirad" in (itemsWithMagazines _player)) then {
		uiSleep 0.2;
		_player switchmove 'AinvPknlMstpSnonWnonDnon_medic1';
		// armst_radiation_infection = 0;
		if ("armst_item_antirad" in (backpackItems _player)) then {
			_player removeItemFromBackpack "armst_item_antirad";
		} else {
			if ("armst_item_antirad" in (vestItems _player)) then {
				_player removeItemFromVest "armst_item_antirad";
			};
		};
		_targ setVariable ["ARMST_THIRST",((_targ getVariable ["ARMST_THIRST",0]) - 0.1),true];
		[] remoteExec ["armst_fnc_antiradBlockTime",_targ];
	};
};
armst_fnc_antiradBlockTime = {
	_smash = 0;
	while {true} do {
		_smash = _smash + 1;
		// [0] call ARMST_Radiation_SetInfection;
		armst_radiation_infection = 0;
		sleep 1;
		if (_smash>60) exitWith {["Эффект антирада истощен."] call AGM_Core_fnc_displayTextStructured; }
	};
};


drg_fnc_opencraft = {
    private _ADMINS = getArray (missionConfigfile >> "ADMINS" >> "uids");
    if (getPlayerUID player in _ADMINS) then {
        createDialog "dragster_empty_dialog";
        disableSerialization;

        if (isNull (findDisplay 67000)) exitWith {};
        _display = findDisplay 67000;
        
        _sizeMultiplier = (1 / (getResolution select 5));
        _pW = pixelW * 5 * (getResolution select 0) / 1920;
        _pH = pixelH * 5 * (getResolution select 1) / 1080;
        _craftWindowWidth = 280 * _pW;
        _craftWindowHeight = 154 * _pH;
        
        _craftWindowGroup = _display ctrlCreate ["RscControlsGroupNoScrollbars",1100];
        _craftWindowGroup ctrlSetPosition [safeZoneXabs + (safeZoneWAbs / 2) - (_craftWindowWidth / 2),safeZoneY + (safeZoneH / 2) - (_craftWindowHeight / 2),_craftWindowWidth,_craftWindowHeight];
        _craftWindowGroup ctrlSetFade 1;
        _craftWindowGroup ctrlCommit 0; 
        _craftWindowGroup ctrlSetFade 0;
        _craftWindowGroup ctrlCommit 0.25;
        
        [_display,_craftWindowGroup,-1,[0,0,_craftWindowWidth,_craftWindowHeight],"drg_ui\textures\craft\background.paa",[0,0,0,1],false,false,""] call DRG_fnc_makePicture;

        {
            _b = [_display,_craftWindowGroup,(_x select 0),(_x select 1),(_x select 2),(_x select 3)] call DRG_fnc_makeButton;
            _b ctrlAddEventHandler ["ButtonClick",  (_x select 4) ]; 
            _b ctrlSetTooltip (_x select 5);
        } forEach [
            [200,[138.223*_pW,118.959 *_pH,24.883*_pW,27.371*_pH] ,"1",1,"_butt = ((findDisplay 67000) displayCtrl 200);_butt ctrlShow true;_lb = (findDisplay 67000) displayCtrl 67022;_index = lbCurSel _lb;if (_index == -1) exitWith {};[(_lb lbData _index)] call DRG_fnc_startCraft;_butt ctrlShow false;","Создать"],
            [-1 ,[246.777*_pW,118.959*_pH, 24.883*_pW,27.371*_pH],"1",1,"hint '';(findDisplay 67000) closeDisplay 0","Выход"]
        ];




        _lb = [_display,_craftWindowGroup,67022,[33.246 *_pW,15.189*_pH,93.847*_pW,124.840*_pH],[0,0,0,0],[0,0,0,1],true,0.07] call DRG_fnc_makeDRGCraftListBox;
        _lb ctrlSetFont "EpsilonCTT";
        
        _lb ctrlAddEventHandler ["LBSelChanged", {
            params ['_lb','_index'];
            private ["_cfg", "_ingridients", "_instruments", "_lbingrid", "_lbinstrum", "_butt","_can"];
            _can = true;
            _cfg = missionConfigFile >> "DRG_Craft_Config" >> (_lb lbData _index);
            // _cfg = ConfigFile >> "DRG_Craft_Config" >> (_lb lbData _index);
            _ingridients = getArray(_cfg >> "ingridients");
            _instruments = getArray(_cfg >> "instruments");
            _lbingrid = ((findDisplay 67000) displayCtrl 67023);
            _lbinstrum = ((findDisplay 67000) displayCtrl 67024);
            _butt = ((findDisplay 67000) displayCtrl 200);
            _butt ctrlShow true;
            lbClear _lbingrid;
            lbClear _lbinstrum;
            if !(_ingridients isEqualTo [""]) then {
                {
                    if (typename _x == "STRING") then {
                        if (isNil _x) then {
                            _bc = [_x] call DRG_fnc_getBaseConfig;
                            _displName = getText(configFile >> _bc >> _x >> "displayName");
                            _pic = getText(configFile >> _bc >> _x >> "picture");
                            _i = _lbingrid lbAdd format['1x %1',_displName];
                            _lbingrid lbSetPicture [_i,_pic];
                            _lbingrid lbSetTooltip [_i,'Список необходимых предметов'];
                            if !(_x in (itemsWithMagazines player)) then {
                                _lbingrid lbSetColor [_i, [0.3, 0, 0, 0.7]];
                                _lbingrid lbSetSelectColor [_i, [0.3, 0, 0, 0.7]];
                                _lbingrid lbSetSelectColorRight [_i, [0.3, 0, 0, 0.7]];
                                _can = false;
                            } else {
                                _lbingrid lbSetColor [_i, [0, 0.3, 0, 0.7]];
                                _lbingrid lbSetSelectColor [_i, [0, 0.3, 0, 0.7]];
                                _lbingrid lbSetSelectColorRight [_i, [0, 0.3, 0, 0.7]];
                            };
                        };
                    } else {
                        _itm = _x select 0;
                        if (isNil (_itm)) then {
                            _bc = [_itm] call DRG_fnc_getBaseConfig;
                            _displName = getText(configFile >> _bc >> _itm>> "displayName");
                            _pic = getText(configFile >> _bc >> _itm >> "picture");
                            _i = _lbingrid lbAdd format['%2x %1',_displName,_x select 1];
                            _lbingrid lbSetPicture [_i,_pic];
                            _lbingrid lbSetTooltip [_i,'Список необходимых предметов'];
                            if !(({_x == _itm} count itemsWithMagazines player) >= _x select 1) then {
                                _lbingrid lbSetColor [_i, [0.3, 0, 0, 0.7]];
                                _lbingrid lbSetSelectColor [_i, [0.3, 0, 0, 0.7]];
                                _lbingrid lbSetSelectColorRight [_i, [0.3, 0, 0, 0.7]];
                                _can = false;
                            } else {
                                _lbingrid lbSetColor [_i, [0, 0.3, 0, 0.7]];
                                _lbingrid lbSetSelectColor [_i, [0, 0.3, 0, 0.7]];
                                _lbingrid lbSetSelectColorRight [_i, [0, 0.3, 0, 0.7]];
                            };
                        };
                    };
                } forEach _ingridients;
            };
            if !(_instruments isEqualTo [""]) then {
                {
                    if (typename _x == "STRING") then {
                        if (isNil _x) then {
                            _bc = [_x] call DRG_fnc_getBaseConfig;
                            _displName = getText(configFile >> _bc >> _x >> "displayName");
                            _pic = getText(configFile >> _bc >> _x >> "picture");
                            _i = _lbinstrum lbAdd format['1x %1',_displName];
                            _lbinstrum lbSetPicture [_i,_pic];
                            _lbinstrum lbSetTooltip [_i,'Список необходимых инструментов'];
                            if !(_x in (itemsWithMagazines player)) then {
                                _lbinstrum lbSetColor [_i, [0.3, 0, 0, 0.7]];
                                _lbinstrum lbSetSelectColor [_i, [0.3, 0, 0, 0.7]];
                                _lbinstrum lbSetSelectColorRight [_i, [0.3, 0, 0, 0.7]];
                                _can = false;
                            } else {
                                _lbinstrum lbSetColor [_i, [0, 0.3, 0, 0.7]];
                                _lbinstrum lbSetSelectColor [_i, [0, 0.3, 0, 0.7]];
                                _lbinstrum lbSetSelectColorRight [_i, [0, 0.3, 0, 0.7]];
                            };
                        };
                    } else {
                        _itm = _x select 0;
                        if (isNil (_itm)) then { 
                            _bc = [_itm] call DRG_fnc_getBaseConfig;
                            _displName = getText(configFile >> _bc >> _itm >> "displayName");
                            _pic = getText(configFile >> _bc >> _itm >> "picture");
                            _i = _lbinstrum lbAdd format['%2x %1',_displName,_x select 1];
                            _lbinstrum lbSetPicture [_i,_pic];
                            _lbinstrum lbSetTooltip [_i,'Список необходимых инструментов'];
                            if !(({_x == _itm} count itemsWithMagazines player) >= _x select 1) then {
                                _lbinstrum lbSetColor [_i, [0.3, 0, 0, 0.7]];
                                _lbinstrum lbSetSelectColor [_i, [0.3, 0, 0, 0.7]];
                                _lbinstrum lbSetSelectColorRight [_i, [0.3, 0, 0, 0.7]];
                                _can = false;
                            } else {
                                _lbinstrum lbSetColor [_i, [0, 0.3, 0, 0.7]];
                                _lbinstrum lbSetSelectColor [_i, [0, 0.3, 0, 0.7]];
                                _lbinstrum lbSetSelectColorRight [_i, [0, 0.3, 0, 0.7]];
                            };
                        };
                    };
                } forEach _instruments;
            };
            if !(_can) then {
                _butt ctrlShow false;
            };
        }];

        _lb1 = [_display,_craftWindowGroup,67023,[142.461*_pW,27.213*_pH,130.293*_pW,37.598*_pH],[0,0,0,0],[0,0,0,1],true,0.07] call DRG_fnc_makeDRGCraftListBox;
        _lb2 = [_display,_craftWindowGroup,67024,[142.461*_pW,77.301*_pH,130.293*_pW,37.598*_pH],[0,0,0,0],[0,0,0,1],true,0.07] call DRG_fnc_makeDRGCraftListBox;
        _lb1 ctrlSetFont "EpsilonCTT";
        _lb2 ctrlSetFont "EpsilonCTT";

        {
            private["_item","_count","_pic","_i","_bc"];
            if (isArray(_x >> "item")) then {
                _arr = getArray(_x >> "item");
            _item =  _arr select 0;
            _count = _arr select 1;
            } else {
                    _item = getText(_x >> "item");
                    _count = 1;
            };
            _bc = [_item] call DRG_fnc_getBaseConfig;
            _displName = getText(configFile >> _bc >> _item >> "displayName");
            _pic = getText(configFile >> _bc >> _item >> "picture");
            _i = _lb lbAdd format['%1',_displName];
            _lb lbSetData [_i, configName _x];
            _lb lbSetTextRight [_i,format['%1x',_count]];
            _lb lbSetPictureRightColor [_i, [1, 0.9647, 0.847, 1]];
            _lb lbSetPictureRight [_i,_pic];
            _lb lbSetTooltip [_i,'Список доступных крафтов'];
        } forEach ("true" configClasses (missionConfigFile >> "DRG_Craft_Config"));
    };
};
drg_fnc_startcraft = {
    private _ADMINS = getArray (missionConfigfile >> "ADMINS" >> "uids");
    if (getPlayerUID player in _ADMINS) then {
            if (player getVariable ['AGM_isCaptive', false]) exitWith {
            player setDammage 1;
            removeAllWeapons player;
            removeAllItems player;
            removeBackpack player;
            removeVest player;
            _near = nearestObjects [player, [], 7];
            _nearMan = nearestObjects [player, ["Man"], 7];
            _arrnearman=[];
            {
                _a pushBack (name _x);
            } forEach _nearMan;
            format["<DRG_LOG> <DUPE_LOG> ,<Player:%1> try dupe with craft and nearest objects <%3>  near Mans  <%2>",name player,str _near,str _arrnearman] remoteExec ["diag_log",2];
        };
        params ["_cfg"];
        private ["_cfgCraft", "_item", "_countItem","_ingridients", "_instruments","_hIngr","_hInstr","_ca"];
        _cfgCraft = missionConfigFile >> "DRG_Craft_Config" >> _cfg;
        if (isArray(_cfgCraft >> "item")) then {
            _arr = getArray(_cfgCraft >> "item");
            _item =  _arr select 0;
            _countItem = _arr select 1;
        } else {
            _item = getText(_cfgCraft >> "item");
            _countItem = 1;
        };
        _ingridients = getArray(_cfgCraft >> "ingridients");
        _instruments = getArray(_cfgCraft >> "instruments");
        if (_ingridients isEqualTo [""]) exitWith {[format["<t color='#ff0000' size = '.8'>%1!</t>","Список ингридиентов не может быть пуст"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;};
        if !(player canAdd [_item,_countItem]) exitWith {[format["<t color='#ff0000' size = '.8'>%1!</t>","У вас не хватает места для нового предмета"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;};
        _iwm = itemsWithMagazines player;
        _hIngr = true;
        {
            if (typename _x == "STRING") then {
                    if !(_x in _iwm) exitWith {_hIngr = false;};
            } else {
                _itm = _x select 0;
                if !(({_x == _itm} count _iwm) >= _x select 1) then {_hIngr = false;};
            };
        } forEach _ingridients;
        if !(_hIngr) exitWith {[format["<t color='#ff0000' size = '.8'>%1!</t>","У вас не хватает ингридиентов"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;};
        _hInstr = true;
        if !(_instruments isEqualTo [""]) then {
            {
                if (typename _x == "STRING") then {
                        if !(_x in (itemsWithMagazines player)) then {_hInstr = false;};
                } else {
                    _itm = _x select 0;
                    if !(({_x == _itm} count itemsWithMagazines player) >= _x select 1) then {_hInstr = false;};
                };
            } forEach _instruments;
        };
        if !(_hInstr) exitWith {[format["<t color='#ff0000' size = '.8'>%1!</t>","У вас не хватает инструментов"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;};


        (findDisplay 67000) closeDisplay 0;
        player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
        {
            _cnt = 1;
            _itemIngr = "";
            if (typename _x == "STRING") then {
                _itemIngr = _x;
            } else {
                _itemIngr = _x select 0;
                _cnt = _x select 1;
            };
            _itemIngrInf = [_itemIngr] call BIS_fnc_itemType;
            _itemIngrCat = _itemIngrInf select 0;
            _itemIngrTp = _itemIngrInf select 1;
            
            switch (_itemIngrCat) do 
            {
                case "Weapon":
                {
                    _weaponType = getNumber( configFile >> "CfgWeapons" >> _itemIngr >> "type"); 
                    switch (_weaponType) do 
                    {
                        case 1:     { 
                            if !((primaryWeapon player) isEqualTo "") then {
                                if ((primaryWeapon player) == _itemIngr) then {
                                    if (_cnt == 1) then {
                                        player removeWeapon _itemIngr;
                                    };
                                    if (_cnt > 1) then {
                                        _ci = [_itemIngr,_cnt-1] call DRG_fnc_countItemInVB;
                                        if !(_ci isEqualTo [0,0]) then {
                                            player removeWeapon _itemIngr;
                                            if !((_ci select 0) == 0) then {
                                                [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
                                            };
                                            if !((_ci select 1) == 0) then {
                                                [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
                                            };
                                        } else {
                                            [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                        };
                                    };
                                } else {
                                    _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                                    if !(_ci isEqualTo [0,0]) then {
                                        if !((_ci select 0) == 0) then {
                                            _a=[vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
                                            
                                        };
                                        if !((_ci select 1) == 0) then {
                                            _a=[backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
                                            
                                        };
                                    } else {
                                        [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                    };
                                };                      
                            } else {
                                _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                                if !(_ci isEqualTo [0,0]) then {
                                    if !((_ci select 0) == 0) then {
                                        _a=[vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
                                        
                                    };
                                    if !((_ci select 1) == 0) then {
                                        _a=[backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
                                        
                                    };
                                    
                                    
                                } else {
                                    [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                };
                            };
                        }; 
                        case 4:     {
                            if !((secondaryWeapon player) isEqualTo "") then {
                                if ((secondaryWeapon player) == _itemIngr) then {
                                    if (_cnt == 1) then {
                                        player removeWeapon _itemIngr;
                                    };
                                    if (_cnt > 1) then {
                                        _ci = [_itemIngr,_cnt-1] call DRG_fnc_countItemInVB;
                                        if !(_ci isEqualTo [0,0]) then {
                                            player removeWeapon _itemIngr;
                                            if !((_ci select 0) == 0) then {
                                                [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
                                            };
                                            if !((_ci select 1) == 0) then {
                                                [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
                                            };
                                        } else {
                                            [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                        };
                                    };      
                                } else {
                                    _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                                    if !(_ci isEqualTo [0,0]) then {
                                        if !((_ci select 0) == 0) then {
                                            _a=[vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
                                            
                                        };
                                        if !((_ci select 1) == 0) then {
                                            _a=[backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
                                            
                                        };
                                    } else {
                                        [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                    };
                                };                  
                            } else {
                                _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                                if !(_ci isEqualTo [0,0]) then {
                                    if !((_ci select 0) == 0) then {
                                        [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
                                    };
                                    if !((_ci select 1) == 0) then {
                                        [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
                                    };
                                    
                                    
                                } else {
                                    [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                };
                            };
                        }; 
                        case 2:     { 
                            if !((handgunWeapon player) isEqualTo "") then {
                                if ((handgunWeapon player) == _itemIngr) then {
                                    if (_cnt == 1) then {
                                        player removeWeapon _itemIngr;
                                    };
                                    if (_cnt > 1) then {
                                        _ci = [_itemIngr,_cnt-1] call DRG_fnc_countItemInVB;
                                        if !(_ci isEqualTo [0,0]) then {
                                            player removeWeapon _itemIngr;
                                            if !((_ci select 0) == 0) then {
                                                [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
                                            };
                                            if !((_ci select 1) == 0) then {
                                                [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
                                            };
                                        } else {
                                            [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                        };
                                    };  
                                } else {
                                    _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                                    if !(_ci isEqualTo [0,0]) then {
                                        if !((_ci select 0) == 0) then {
                                            _a=[vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
                                            
                                        };
                                        if !((_ci select 1) == 0) then {
                                            _a=[backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
                                            
                                        };
                                    } else {
                                        [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                    };
                                };                      
                            } else {
                                _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                                if !(_ci isEqualTo [0,0]) then {
                                    if !((_ci select 0) == 0) then {
                                        [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
                                    };
                                    if !((_ci select 1) == 0) then {
                                        [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
                                    };
                                    
                                    
                                } else {
                                    [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                };
                            };
                        }; 
                    };
                };
                case "Equipment":
                {
                    switch (_itemIngrTp) do
                    {
                        case "Glasses":     { 
                            if !((goggles player) isEqualTo "") then {
                                if ((goggles player) == _itemIngr) then {
                                    if (_cnt == 1) then {
                                        removeGoggles player;
                                    };
                                    if (_cnt > 1) then {
                                        _ci = [_itemIngr,_cnt-1] call DRG_fnc_countItemInVB;
                                        if !(_ci isEqualTo [0,0]) then {
                                            removeGoggles player;
                                            if !((_ci select 0) == 0) then {
                                                [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
                                            };
                                            if !((_ci select 1) == 0) then {
                                                [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
                                            };
                                        } else {
                                            [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                        };
                                    };  
                                } else {
                                    _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                                    if !(_ci isEqualTo [0,0]) then {
                                        if !((_ci select 0) == 0) then {
                                            [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
                                        };
                                        if !((_ci select 1) == 0) then {
                                            [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
                                        };
                                    } else {
                                        [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                    };
                                };                          
                            } else {
                                _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                                if !(_ci isEqualTo [0,0]) then {
                                    if !((_ci select 0) == 0) then {
                                        [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
                                    };
                                    if !((_ci select 1) == 0) then {
                                        [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
                                    };
                                    
                                    
                                } else {
                                    [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                };
                            };
                        }; 
                        case "Headgear":    { 
                            if !((headgear player) isEqualTo "") then {
                                if ((headgear player) == _itemIngr) then {
                                    if (_cnt == 1) then {
                                        removeHeadgear player;
                                    };
                                    if (_cnt > 1) then {
                                        _ci = [_itemIngr,_cnt-1] call DRG_fnc_countItemInVB;
                                        if !(_ci isEqualTo [0,0]) then {
                                            removeHeadgear player;
                                            if !((_ci select 0) == 0) then {
                                                [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
                                            };
                                            if !((_ci select 1) == 0) then {
                                                [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
                                            };
                                        } else {
                                            [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                        };
                                    };      
                                } else {
                                    _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                                    if !(_ci isEqualTo [0,0]) then {
                                        if !((_ci select 0) == 0) then {
                                            [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
                                        };
                                        if !((_ci select 1) == 0) then {
                                            [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
                                        };
                                    } else {
                                        [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                    };
                                };                  
                            } else {
                                _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                                if !(_ci isEqualTo [0,0]) then {
                                    if !((_ci select 0) == 0) then {
                                        [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
                                    };
                                    if !((_ci select 1) == 0) then {
                                        [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
                                    };
                                    
                                    
                                } else {
                                    [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                };
                            };
                        }; 
                        case "Uniform":     { 
                            if !((uniform player) isEqualTo "") then {
                                if ((uniform player) == _itemIngr) then {
                                    if (_cnt == 1) then {
                                        removeUniform player;
                                    };
                                    if (_cnt > 1) then {
                                        _ci = [_itemIngr,_cnt-1] call DRG_fnc_countItemInVB;
                                        if !(_ci isEqualTo [0,0]) then {
                                            removeUniform player;
                                            if !((_ci select 0) == 0) then {
                                                [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
                                            };
                                            if !((_ci select 1) == 0) then {
                                                [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
                                            };
                                        } else {
                                            [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                        };
                                    };          
                                } else {
                                    _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                                    if !(_ci isEqualTo [0,0]) then {
                                        if !((_ci select 0) == 0) then {
                                            [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
                                        };
                                        if !((_ci select 1) == 0) then {
                                            [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
                                        };
                                    } else {
                                        [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                    };
                                };              
                            } else {
                                _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                                if !(_ci isEqualTo [0,0]) then {
                                    if !((_ci select 0) == 0) then {
                                        [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
                                    };
                                    if !((_ci select 1) == 0) then {
                                        [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
                                    };
                                    
                                    
                                } else {
                                    [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                };
                            };
                        }; 
                        case "Vest":        { 
                            if !((vest player) isEqualTo "") then {
                                if ((vest player) == _itemIngr) then {
                                    if (_cnt == 1) then {
                                        removeVest player;
                                    };
                                    if (_cnt > 1) then {
                                        _ci = [_itemIngr,_cnt-1] call DRG_fnc_countItemInVB;
                                        if !(_ci isEqualTo [0,0]) then {
                                            removeVest player;
                                            if !((_ci select 0) == 0) then {
                                                [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
                                            };
                                            if !((_ci select 1) == 0) then {
                                                [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
                                            };
                                        } else {
                                            [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                        };
                                    };  
                                } else {
                                    _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                                    if !(_ci isEqualTo [0,0]) then {
                                        if !((_ci select 0) == 0) then {
                                            [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
                                        };
                                        if !((_ci select 1) == 0) then {
                                            [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
                                        };
                                    } else {
                                        [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                    };
                                };  
                            } else {
                                _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                                if !(_ci isEqualTo [0,0]) then {
                                    if !((_ci select 0) == 0) then {
                                        [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
                                    };
                                    if !((_ci select 1) == 0) then {
                                        [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
                                    };
                                    
                                    
                                } else {
                                    [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                };
                            };
                        }; 
                        case "Backpack":    { 
                            if !((backpack player) isEqualTo "") then {
                                if ((backpack player) == _itemIngr) then {
                                    if (_cnt == 1) then {
                                        removeBackpack player;
                                    };
                                    if (_cnt > 1) then {
                                        _ci = [_itemIngr,_cnt-1] call DRG_fnc_countItemInVB;
                                        if !(_ci isEqualTo [0,0]) then {
                                            removeBackpack player;
                                            if !((_ci select 0) == 0) then {
                                                [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
                                            };
                                            if !((_ci select 1) == 0) then {
                                                [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
                                            };
                                        } else {
                                            [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                        };
                                    };      
                                } else {
                                    _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                                    if !(_ci isEqualTo [0,0]) then {
                                        if !((_ci select 0) == 0) then {
                                            [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
                                        };
                                        if !((_ci select 1) == 0) then {
                                            [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
                                        };
                                    } else {
                                        [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                    };
                                };                  
                            } else {
                                _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                                if !(_ci isEqualTo [0,0]) then {
                                    if !((_ci select 0) == 0) then {
                                        [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
                                    };
                                    if !((_ci select 1) == 0) then {
                                        [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
                                    };
                                    
                                    
                                } else {
                                    [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                                };
                            };
                        }; 
                    };
                };
                case "Magazine",
                case "Mine": {
                    _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                    if !(_ci isEqualTo [0,0]) then {
                        if !((_ci select 0) == 0) then {
                            [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeMagazineCargoGlobal;
                        };
                        if !((_ci select 1) == 0) then {
                            [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeMagazineCargoGlobal;
                        };
                        
                        
                    } else {
                        [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                    };
                };
                case "Item":
                { 
                    _ci = [_itemIngr,_cnt] call DRG_fnc_countItemInVB;
                    if !(_ci isEqualTo [0,0]) then {
                        if !((_ci select 0) == 0) then {
                            [vestContainer player,_itemIngr,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
                        };
                        if !((_ci select 1) == 0) then {
                            [backpackContainer player,_itemIngr,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
                        };
                        
                        
                    } else {
                        [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanremove"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                    };
                };
            };
        } forEach _ingridients;

        _itemInformation = [_item] call BIS_fnc_itemType;
        _itemCategory = _itemInformation select 0;
        _itemType = _itemInformation select 1;

        switch (_itemCategory) do 
        {
            case "Magazine",
            case "Mine":
            { 
                _ca = [_item,_countItem] call DRG_fnc_checkCountAddItemVB;
                if !(_ca isEqualTo false) then {
                    if !((_ca select 0) == 0) then {
                        (vestContainer player) addMagazineCargoGlobal [_item,_ca select 0];
                    };
                    if !((_ca select 1) == 0) then {
                        (backpackContainer player) addMagazineCargoGlobal [_item,_ca select 1];
                    };
                
                    [format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_craft_created"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                } else {
                    [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanadd"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                };
            };
            case "Item",
            case "Weapon",
            case "Equipment":
            { 
                _ca = [_item,_countItem] call DRG_fnc_checkCountAddItemVB;
                if !(_ca isEqualTo false) then {
                    if !((_ca select 0) == 0) then {
                        (vestContainer player) addItemCargoGlobal [_item,_ca select 0];
                    };
                    if !((_ca select 1) == 0) then {
                        (backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
                    };
                
                    [format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_craft_created"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                } else {
                    [format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_craft_notcanadd"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
                };
            };
        };
        [format["<t color='#00ff00' size = '.8'>%1!</t>","Готово"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
    };
};