/*
	Author: Vladimir Vorobev <Dragster>
	E-mail:1dragsteron@gmail.com

	Description:
	Check and start craft

	Parameter(s):
		CfgCraft - STRING

	Returns:
		None
*/
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
					case 1: 	{ 
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
					case 4: 	{
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
					case 2: 	{ 
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
					case "Glasses": 	{ 
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
					case "Headgear": 	{ 
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
					case "Uniform": 	{ 
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
					case "Vest": 		{ 
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
					case "Backpack": 	{ 
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

