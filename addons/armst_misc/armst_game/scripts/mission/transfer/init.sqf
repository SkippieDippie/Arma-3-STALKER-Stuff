ARMST_transfer_start={
	disableSerialization;
	createDialog "transfer";
	_dialog = findDisplay 56565;
	_playerItemListBox = _dialog displayCtrl 1500;
	_magazinesplayer = magazines player;
	{
		_text = getText (configFile >> 'CfgMagazines' >> _x >> 'displayName');
		_pic = getText (configFile >> 'CfgMagazines' >> _x >> 'picture');
		_index = _playerItemListBox lbAdd _text;
		_playerItemListBox lbSetPicture [_index,_pic];
		_playerItemListBox lbSetData [_index,_x];
	} forEach _magazinesplayer;

	_itemsplayer = items player;
	{
		_text = getText (configFile >> 'CfgWeapons' >> _x >> 'displayName');
		_pic =  getText (configFile >> 'CfgWeapons' >> _x >> 'picture');
		_index = _playerItemListBox lbAdd _text;
		_playerItemListBox lbSetPicture [_index,_pic];
		_playerItemListBox lbSetData [_index,_x];
	} forEach _itemsplayer;
	lbSortByValue _playerItemListBox;
};
ARMST_transfer_item={
	params["_player","_target","_item","_item_name","_count_item"];
	if (_item == "") exitWith {};
	if (isNull _target) exitWith {};
	if ((_player distance _target)>3) exitWith {};
	if !(_target canAdd _item) exitWith {};
	_count_item={_x==_item} count (items player + magazines player);
	[_player,_target,_item,_item_name,_count_item] remoteExec ["ARMST_transfer_confirm", _target];
};
ARMST_transfer_confirm={
	params["_player","_target","_item","_item_name","_count_item"];
	disableSerialization;
	createDialog "transfer_confirm";
	_dialog = findDisplay 56566;
	(_dialog displayCtrl 222) ctrlSetStructuredText (parseText format ["<t size='2' font='PuristaLight'>Игрок %1 передаёт вам  <br />%2</t>",name _player,_item_name]);
	(_dialog displayCtrl 223) ctrlSetStructuredText (parseText format ["<t size='2' font='PuristaLight'>%1</t>","Отказаться"]);
	(_dialog displayCtrl 224) ctrlSetStructuredText (parseText format ["<t size='2' font='PuristaLight'>%1</t>","Принять"]);
	_dialog setVariable ["player_transferer",_player];
	_dialog setVariable ["item",_item];
	_dialog setVariable ["count_item",_count_item];
};
ARMST_transfer_accept={
	params["_target","_item","_count_item"];
	if (isNull _target) exitWith {};
	if (_item == "") exitWith {};
	disableSerialization;
	_count_item_target={_x==_item} count (items _target + magazines _target);
	if (_count_item!=_count_item_target) exitWith { format["<Dragster_Log> Transfer Item Error,<Player1:%1> and <Player2:%2> try use bug in transfer items",name _target,name player] remoteExec ["diag_log",2];};
	[_target,_item] remoteExec ["removeItem",_target];
	player addItem _item;
};