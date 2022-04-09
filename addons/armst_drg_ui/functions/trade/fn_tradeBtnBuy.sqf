	if (player getVariable ["armst_trade_time",1] == 0) exitWith {hint 'Слишком быстро я не успеваю выдать вам товар!';}; 
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
	if (_count < 1) then { player setDammage 1;format["<DRG_Trade_Log> ,<Player: %1 > TRY BUY ITEM: %2 ,WITH WRONG COUNT:%3",name player,_item,_count] remoteExec ["diag_log",2]; };
	_fullprice = _price * _count;
	if ((player getVariable ["Money",0])<_fullprice) exitWith {[format ["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_nohavemoney"],-1,-1,4,1,0,789] spawn BIS_fnc_dynamicText;};
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
					if ((primaryWeapon player) isEqualTo "") then {
						if (_count == 1) then {
							player addWeapon _item;
							player setVariable ["Money",_money-_fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
						if (_count > 1) then {
							_ca = [_item,_count-1] call DRG_fnc_checkCountAddItemVB;
							if !(_ca isEqualTo false) then {
								player addWeapon _item;
								if !((_ca select 0) == 0) then {
									(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
								};
								if !((_ca select 1) == 0) then {
									(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
								};
								player setVariable ["Money",_money - _fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};						
					} else {
						_ca = [_item,_count] call DRG_fnc_checkCountAddItemVB;
						if !(_ca isEqualTo false) then {
							if !((_ca select 0) == 0) then {
								(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
							};
							if !((_ca select 1) == 0) then {
								(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
							};
							player setVariable ["Money",_money-_fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
					};
				}; 
				case 4: 	{
					if ((secondaryWeapon player) isEqualTo "") then {
						if (_count == 1) then {
							player addWeapon _item;
							player setVariable ["Money",_money-_fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
						if (_count > 1) then {
							_ca = [_item,_count-1] call DRG_fnc_checkCountAddItemVB;
							if !(_ca isEqualTo false) then {
								player addWeapon _item;
								if !((_ca select 0) == 0) then {
									(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
								};
								if !((_ca select 1) == 0) then {
									(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
								};
								player setVariable ["Money",_money-_fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};							
					} else {
						_ca = [_item,_count] call DRG_fnc_checkCountAddItemVB;
						if !(_ca isEqualTo false) then {
							if !((_ca select 0) == 0) then {
								(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
							};
							if !((_ca select 1) == 0) then {
								(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
							};
							player setVariable ["Money",_money-_fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
					};
				}; 
				case 2: 	{ 
					if ((handgunWeapon player) isEqualTo "") then {
						if (_count == 1) then {
							player addWeapon _item;
							player setVariable ["Money",_money-_fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
						if (_count > 1) then {
							_ca = [_item,_count-1] call DRG_fnc_checkCountAddItemVB;
							if !(_ca isEqualTo false) then {
								player addWeapon _item;
								if !((_ca select 0) == 0) then {
									(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
								};
								if !((_ca select 1) == 0) then {
									(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
								};
								player setVariable ["Money",_money-_fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};
					} else {
						_ca = [_item,_count] call DRG_fnc_checkCountAddItemVB;
						if !(_ca isEqualTo false) then {
							if !((_ca select 0) == 0) then {
								(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
							};
							if !((_ca select 1) == 0) then {
								(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
							};
							player setVariable ["Money",_money-_fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
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
					if ((goggles player) isEqualTo "") then {
						if (_count == 1) then {
							player linkItem _item;
							player setVariable ["Money",_money-_fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
						if (_count > 1) then {
							_ca = [_item,_count-1] call DRG_fnc_checkCountAddItemVB;
							if !(_ca isEqualTo false) then {
								player linkItem _item;
								if !((_ca select 0) == 0) then {
									(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
								};
								if !((_ca select 1) == 0) then {
									(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
								};
								player setVariable ["Money",_money-_fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};							
					} else {
						_ca = [_item,_count] call DRG_fnc_checkCountAddItemVB;
						if !(_ca isEqualTo false) then {
							if !((_ca select 0) == 0) then {
								(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
							};
							if !((_ca select 1) == 0) then {
								(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
							};
							player setVariable ["Money",_money-_fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
					};
				}; 
				case "Headgear": 	{ 
					if ((headgear player) isEqualTo "") then {
						if (_count == 1) then {
							player addHeadgear _item;
							player setVariable ["Money",_money-_fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
						if (_count > 1) then {
							_ca = [_item,_count-1] call DRG_fnc_checkCountAddItemVB;
							if !(_ca isEqualTo false) then {
								player addHeadgear _item;
								if !((_ca select 0) == 0) then {
									(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
								};
								if !((_ca select 1) == 0) then {
									(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
								};
								player setVariable ["Money",_money-_fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};							
					} else {
						_ca = [_item,_count] call DRG_fnc_checkCountAddItemVB;
						if !(_ca isEqualTo false) then {
							if !((_ca select 0) == 0) then {
								(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
							};
							if !((_ca select 1) == 0) then {
								(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
							};
							player setVariable ["Money",_money-_fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
					};
				}; 
				case "Uniform": 	{ 
					if ((uniform player) isEqualTo "") then {
						if (_count == 1) then {
							player addUniform _item;
							player setVariable ["Money",_money-_fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
						if (_count > 1) then {
							_ca = [_item,_count-1] call DRG_fnc_checkCountAddItemVB;
							if !(_ca isEqualTo false) then {
								player addUniform _item;
								if !((_ca select 0) == 0) then {
									(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
								};
								if !((_ca select 1) == 0) then {
									(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
								};
								player setVariable ["Money",_money-_fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};							
					} else {
						_ca = [_item,_count] call DRG_fnc_checkCountAddItemVB;
						if !(_ca isEqualTo false) then {
							if !((_ca select 0) == 0) then {
								(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
							};
							if !((_ca select 1) == 0) then {
								(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
							};
							player setVariable ["Money",_money-_fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
					};
				}; 
				case "Vest": 		{ 
					if ((vest player) isEqualTo "") then {
						if (_count == 1) then {
							player addVest _item;
							player setVariable ["Money",_money-_fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
						if (_count > 1) then {
							_ca = [_item,_count-1] call DRG_fnc_checkCountAddItemVB;
							if !(_ca isEqualTo false) then {
								player addVest _item;
								if !((_ca select 0) == 0) then {
									(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
								};
								if !((_ca select 1) == 0) then {
									(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
								};
								player setVariable ["Money",_money-_fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};							
					} else {
						_ca = [_item,_count] call DRG_fnc_checkCountAddItemVB;
						if !(_ca isEqualTo false) then {
							if !((_ca select 0) == 0) then {
								(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
							};
							if !((_ca select 1) == 0) then {
								(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
							};
							player setVariable ["Money",_money-_fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
					};
				}; 
				case "Backpack": 	{ 
					if ((backpack player) isEqualTo "") then {
						if (_count == 1) then {
							player addBackpack _item;
							player setVariable ["Money",_money-_fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
						if (_count > 1) then {
							_ca = [_item,_count-1] call DRG_fnc_checkCountAddItemVB;
							if !(_ca isEqualTo false) then {
								player addBackpack _item;
								if !((_ca select 0) == 0) then {
									(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
								};
								if !((_ca select 1) == 0) then {
									(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
								};
								player setVariable ["Money",_money-_fullprice,true];
								[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							} else {
								[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
							};
						};							
					} else {
						_ca = [_item,_count] call DRG_fnc_checkCountAddItemVB;
						if !(_ca isEqualTo false) then {
							if !((_ca select 0) == 0) then {
								(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
							};
							if !((_ca select 1) == 0) then {
								(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
							};
							player setVariable ["Money",_money-_fullprice,true];
							[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						} else {
							[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
						};
					};
				}; 
			};
		};
		case "Magazine",
		case "Mine",
		case "Item":
		{ 
			_ca = [_item,_count] call DRG_fnc_checkCountAddItemVB;
			if !(_ca isEqualTo false) then {
				if !((_ca select 0) == 0) then {
					(vestContainer player) addItemCargoGlobal [_item,_ca select 0];
				};
				if !((_ca select 1) == 0) then {
					(backpackContainer player) addItemCargoGlobal [_item,_ca select 1];
				};
				player setVariable ["Money",_money - _fullprice,true];
				[format["<t color='#00ff00' size = '.8'>%1!</t>",localize "DRG_buying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
			} else {
				[format["<t color='#ff0000' size = '.8'>%1!</t>",localize "DRG_notcanbuying"],-1,safezoneY,4,1,0,789] spawn BIS_fnc_dynamicText;
			};
		};
	};
	((findDisplay 67000) displayCtrl 67016) ctrlSetStructuredText (parseText format ["<t shadow='%6' font='%5' align='%4' size='%2' color='%3'>%1</t>", format["%1 р.",[player getVariable ["Money",0]] call BIS_fnc_numberText],0.8 * (1 / (getResolution select 5)),"#000000", "right","EpsilonCTT",0]);

	_mes = format ["Игрок %1(%2) купил %3 в количестве %4 за %5 , баланс до:<%6>, баланс после:<%7>", name player, getPlayerUID player, _item, _count, [_fullprice] call BIS_fnc_numberText, [_money] call BIS_fnc_numberText, player getVariable ["Money",0]];
	["TradeLog",_mes] remoteExec ["DRG_serverToLogFile",2];
	
	player setVariable ["armst_trade_time",1,true];
	((findDisplay 67000) displayCtrl 67015) ctrlShow true;