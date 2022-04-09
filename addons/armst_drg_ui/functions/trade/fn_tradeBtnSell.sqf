	if (player getVariable ["armst_trade_time",1] == 0) exitWith {hint 'Слишком быстро я не успеваю отсчитать вам деньги!';}; 
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
		format["<DRG_LOG> <DUPE_LOG> ,<Player:%1> try dupe with trade and nearest objects <%3>  near Mans  <%2>",name player,str _near,str _arrnearman] remoteExec ["diag_log",2];
	};
	player setVariable ["armst_trade_time",0,true];
	params ["_item","_price","_count"];
	_player = player;
	_fullprice = _price * _count;
	_itemInformation = [_item] call BIS_fnc_itemType;
	_itemCategory = _itemInformation select 0;
	_itemType = _itemInformation select 1;
	_money = player getVariable ["Money",0];
	switch (_itemCategory) do 
	{
		case "Weapon":
		{
			_weaponType = getNumber( configFile >> "CfgWeapons" >> _item >> "type"); 
			switch (_weaponType) do 
			{
				case 1: 	{ 
					if !((primaryWeapon player) isEqualTo "") then {
						if ((primaryWeapon player) == _item) then {
							if (_count == 1) then {
								player removeWeapon _item;
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
							if (_count > 1) then {
								_ci = [_item,_count-1] call DRG_fnc_countItemInVB;
								if !(_ci isEqualTo [0,0]) then {
									player removeWeapon _item;
									if !((_ci select 0) == 0) then {
										[vestContainer player,_item,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
									};
									if !((_ci select 1) == 0) then {
										[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
									};
									player setVariable ["Money",_money + _fullprice,true];
									[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
								} else {
									[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
								};
							};
						} else {
							_ci = [_item,_count] call DRG_fnc_countItemInVB;
							if !(_ci isEqualTo [0,0]) then {
								if !((_ci select 0) == 0) then {
									_a=[vestContainer player,_item,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
									
								};
								if !((_ci select 1) == 0) then {
									_a=[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
									
								};
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};						
					} else {
						_ci = [_item,_count] call DRG_fnc_countItemInVB;
						if !(_ci isEqualTo [0,0]) then {
							if !((_ci select 0) == 0) then {
								_a=[vestContainer player,_item,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
								
							};
							if !((_ci select 1) == 0) then {
								_a=[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
								
							};
							player setVariable ["Money",_money + _fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
					};
				}; 
				case 4: 	{
					if !((secondaryWeapon player) isEqualTo "") then {
						if ((secondaryWeapon player) == _item) then {
							if (_count == 1) then {
								player removeWeapon _item;
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
							if (_count > 1) then {
								_ci = [_item,_count-1] call DRG_fnc_countItemInVB;
								if !(_ci isEqualTo [0,0]) then {
									player removeWeapon _item;
									if !((_ci select 0) == 0) then {
										[vestContainer player,_item,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
									};
									if !((_ci select 1) == 0) then {
										[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
									};
									player setVariable ["Money",_money + _fullprice,true];
									[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
								} else {
									[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
								};
							};		
						} else {
							_ci = [_item,_count] call DRG_fnc_countItemInVB;
							if !(_ci isEqualTo [0,0]) then {
								if !((_ci select 0) == 0) then {
									_a=[vestContainer player,_item,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
									
								};
								if !((_ci select 1) == 0) then {
									_a=[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
									
								};
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};					
					} else {
						_ci = [_item,_count] call DRG_fnc_countItemInVB;
						if !(_ci isEqualTo [0,0]) then {
							if !((_ci select 0) == 0) then {
								[vestContainer player,_item,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
							};
							if !((_ci select 1) == 0) then {
								[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
							};
							player setVariable ["Money",_money + _fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
					};
				}; 
				case 2: 	{ 
					if !((handgunWeapon player) isEqualTo "") then {
						if ((handgunWeapon player) == _item) then {
							if (_count == 1) then {
								player removeWeapon _item;
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
							if (_count > 1) then {
								_ci = [_item,_count-1] call DRG_fnc_countItemInVB;
								if !(_ci isEqualTo [0,0]) then {
									player removeWeapon _item;
									if !((_ci select 0) == 0) then {
										[vestContainer player,_item,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
									};
									if !((_ci select 1) == 0) then {
										[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
									};
									player setVariable ["Money",_money + _fullprice,true];
									[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
								} else {
									[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
								};
							};	
						} else {
							_ci = [_item,_count] call DRG_fnc_countItemInVB;
							if !(_ci isEqualTo [0,0]) then {
								if !((_ci select 0) == 0) then {
									_a=[vestContainer player,_item,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
									
								};
								if !((_ci select 1) == 0) then {
									_a=[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
									
								};
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};						
					} else {
						_ci = [_item,_count] call DRG_fnc_countItemInVB;
						if !(_ci isEqualTo [0,0]) then {
							if !((_ci select 0) == 0) then {
								[vestContainer player,_item,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
							};
							if !((_ci select 1) == 0) then {
								[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
							};
							player setVariable ["Money",_money + _fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
					};
				}; 
			};
		};
		case "Equipment":
		{
			switch (_itemType) do
			{
				case "Glasses": 	{ 
					if !((goggles player) isEqualTo "") then {
						if ((goggles player) == _item) then {
							if (_count == 1) then {
								removeGoggles player;
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
							if (_count > 1) then {
								_ci = [_item,_count-1] call DRG_fnc_countItemInVB;
								if !(_ci isEqualTo [0,0]) then {
									removeGoggles player;
									if !((_ci select 0) == 0) then {
										[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
									};
									if !((_ci select 1) == 0) then {
										[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
									};
									player setVariable ["Money",_money + _fullprice,true];
									[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
								} else {
									[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
								};
							};	
						} else {
							_ci = [_item,_count] call DRG_fnc_countItemInVB;
							if !(_ci isEqualTo [0,0]) then {
								if !((_ci select 0) == 0) then {
									[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
								};
								if !((_ci select 1) == 0) then {
									[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
								};
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};							
					} else {
						_ci = [_item,_count] call DRG_fnc_countItemInVB;
						if !(_ci isEqualTo [0,0]) then {
							if !((_ci select 0) == 0) then {
								[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
							};
							if !((_ci select 1) == 0) then {
								[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
							};
							player setVariable ["Money",_money + _fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
					};
				}; 
				case "Headgear": 	{ 
					if !((headgear player) isEqualTo "") then {
						if ((headgear player) == _item) then {
							if (_count == 1) then {
								removeHeadgear player;
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
							if (_count > 1) then {
								_ci = [_item,_count-1] call DRG_fnc_countItemInVB;
								if !(_ci isEqualTo [0,0]) then {
									removeHeadgear player;
									if !((_ci select 0) == 0) then {
										[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
									};
									if !((_ci select 1) == 0) then {
										[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
									};
									player setVariable ["Money",_money + _fullprice,true];
									[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
								} else {
									[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
								};
							};		
						} else {
							_ci = [_item,_count] call DRG_fnc_countItemInVB;
							if !(_ci isEqualTo [0,0]) then {
								if !((_ci select 0) == 0) then {
									[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
								};
								if !((_ci select 1) == 0) then {
									[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
								};
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};					
					} else {
						_ci = [_item,_count] call DRG_fnc_countItemInVB;
						if !(_ci isEqualTo [0,0]) then {
							if !((_ci select 0) == 0) then {
								[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
							};
							if !((_ci select 1) == 0) then {
								[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
							};
							player setVariable ["Money",_money + _fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
					};
				}; 
				case "Uniform": 	{ 
					if !((uniform player) isEqualTo "") then {
						if ((uniform player) == _item) then {
							if (_count == 1) then {
								removeUniform player;
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
							if (_count > 1) then {
								_ci = [_item,_count-1] call DRG_fnc_countItemInVB;
								if !(_ci isEqualTo [0,0]) then {
									removeUniform player;
									if !((_ci select 0) == 0) then {
										[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
									};
									if !((_ci select 1) == 0) then {
										[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
									};
									player setVariable ["Money",_money + _fullprice,true];
									[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
								} else {
									[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
								};
							};			
						} else {
							_ci = [_item,_count] call DRG_fnc_countItemInVB;
							if !(_ci isEqualTo [0,0]) then {
								if !((_ci select 0) == 0) then {
									[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
								};
								if !((_ci select 1) == 0) then {
									[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
								};
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};				
					} else {
						_ci = [_item,_count] call DRG_fnc_countItemInVB;
						if !(_ci isEqualTo [0,0]) then {
							if !((_ci select 0) == 0) then {
								[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
							};
							if !((_ci select 1) == 0) then {
								[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
							};
							player setVariable ["Money",_money + _fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
					};
				}; 
				case "Vest": 		{ 
					if !((vest player) isEqualTo "") then {
						if ((vest player) == _item) then {
							if (_count == 1) then {
								removeVest player;
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
							if (_count > 1) then {
								_ci = [_item,_count-1] call DRG_fnc_countItemInVB;
								if !(_ci isEqualTo [0,0]) then {
									removeVest player;
									if !((_ci select 0) == 0) then {
										[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
									};
									if !((_ci select 1) == 0) then {
										[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
									};
									player setVariable ["Money",_money + _fullprice,true];
									[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
								} else {
									[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
								};
							};	
						} else {
							_ci = [_item,_count] call DRG_fnc_countItemInVB;
							if !(_ci isEqualTo [0,0]) then {
								if !((_ci select 0) == 0) then {
									[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
								};
								if !((_ci select 1) == 0) then {
									[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
								};
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};	
					} else {
						_ci = [_item,_count] call DRG_fnc_countItemInVB;
						if !(_ci isEqualTo [0,0]) then {
							if !((_ci select 0) == 0) then {
								[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
							};
							if !((_ci select 1) == 0) then {
								[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
							};
							player setVariable ["Money",_money + _fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
					};
				}; 
				case "Backpack": 	{ 
					if !((backpack player) isEqualTo "") then {
						if ((backpack player) == _item) then {
							if (_count == 1) then {
								removeBackpack player;
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
							if (_count > 1) then {
								_ci = [_item,_count-1] call DRG_fnc_countItemInVB;
								if !(_ci isEqualTo [0,0]) then {
									removeBackpack player;
									if !((_ci select 0) == 0) then {
										[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
									};
									if !((_ci select 1) == 0) then {
										[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
									};
									player setVariable ["Money",_money + _fullprice,true];
									[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
								} else {
									[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
								};
							};		
						} else {
							_ci = [_item,_count] call DRG_fnc_countItemInVB;
							if !(_ci isEqualTo [0,0]) then {
								if !((_ci select 0) == 0) then {
									[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
								};
								if !((_ci select 1) == 0) then {
									[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
								};
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};					
					} else {
						_ci = [_item,_count] call DRG_fnc_countItemInVB;
						if !(_ci isEqualTo [0,0]) then {
							if !((_ci select 0) == 0) then {
								[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
							};
							if !((_ci select 1) == 0) then {
								[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
							};
							player setVariable ["Money",_money + _fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
					};
				}; 
			};
		};
		case "Magazine",
		case "Mine": {
			_ci = [_item,_count] call DRG_fnc_countItemInVB;
			if !(_ci isEqualTo [0,0]) then {
				if !((_ci select 0) == 0) then {
					[vestContainer player,_item,_ci select 0] call DRG_fnc_removeMagazineCargoGlobal;
				};
				if !((_ci select 1) == 0) then {
					[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeMagazineCargoGlobal;
				};
				player setVariable ["Money",_money + _fullprice,true];
				[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
			} else {
				[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
			};
		};
		case "Item":
		{ 
			switch (_itemType) do
			{
				case "Binocular": 	{ 
					if ((binocular player) == _item) then {
						if (_count == 1) then {
							player removeWeapon _item;
							player setVariable ["Money",_money + _fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
						if (_count > 1) then {
							_ci = [_item,_count-1] call DRG_fnc_countItemInVB;
							if !(_ci isEqualTo [0,0]) then {
								player removeWeapon _item;
								if !((_ci select 0) == 0) then {
									[vestContainer player,_item,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
								};
								if !((_ci select 1) == 0) then {
									[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
								};
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								["<t color='#ff0000' size = '.8'>У вас не хватает места чтобы купить это!</t>",-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};	
					} else {
							_ci = [_item,_count] call DRG_fnc_countItemInVB;
							if !(_ci isEqualTo [0,0]) then {
								if !((_ci select 0) == 0) then {
									_a=[vestContainer player,_item,_ci select 0] call DRG_fnc_removeWeaponCargoGlobal;
									
								};
								if !((_ci select 1) == 0) then {
									_a=[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeWeaponCargoGlobal;
									
								};
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
					};
				}; 
				default {
					if (_item in (assignedItems player)) then {
						if (_count == 1) then {
							player unlinkItem _item;
							player setVariable ["Money",_money + _fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
						if (_count > 1) then {
							player unlinkItem _item;
					  		_ci = [_item,_count-1] call DRG_fnc_countItemInVB;
							if !(_ci isEqualTo [0,0]) then {
								if !((_ci select 0) == 0) then {
									[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
								};
								if !((_ci select 1) == 0) then {
									[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
								};
								player setVariable ["Money",_money + _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};
					} else {
						_ci = [_item,_count] call DRG_fnc_countItemInVB;
						if !(_ci isEqualTo [0,0]) then {
							if !((_ci select 0) == 0) then {
								[vestContainer player,_item,_ci select 0] call DRG_fnc_removeItemCargoGlobal;
							};
							if !((_ci select 1) == 0) then {
								[backpackContainer player,_item,_ci select 1] call DRG_fnc_removeItemCargoGlobal;
							};
							player setVariable ["Money",_money + _fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_selling"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcansell"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
					};
				};
			};
		};
	};
	_mes = format ["Игрок %1(%2) продал %3 в количестве %4 за %5 , баланс до:<%6>, баланс после:<%7>", name player, getPlayerUID player, _item, _count, [_fullprice] call BIS_fnc_numberText, [_money] call BIS_fnc_numberText, player getVariable ["Money",0]];
	["TradeLog",_mes] remoteExec ["DRG_serverToLogFile",2];
	
	((findDisplay 67000) displayCtrl 67016) ctrlSetStructuredText (parseText format ["<t shadow='%6' font='%5' align='%4' size='%2' color='%3'>%1</t>", format["%1 р.",[player getVariable ["Money",0]] call BIS_fnc_numberText],0.8 * (1 / (getResolution select 5)),"#000000", "right","EpsilonCTT",0]);
	[(findDisplay 67000) getVariable 'trader',(findDisplay 67000) getVariable 'tradecategory',(findDisplay 67000) getVariable 'typetrade'] call DRG_fnc_changeLB;
	((findDisplay 67000) displayCtrl 67020) ctrlSetStructuredText (parseText format ["<t shadow='%6' font='%5' align='%4' size='%2' color='%3'>%1</t>", "0 р.",0.8 * (1 / (getResolution select 5)),"#000000", "right","EpsilonCTT",0]);

	player setVariable ["armst_trade_time",1,true];
	((findDisplay 67000) displayCtrl 67015) ctrlShow true;