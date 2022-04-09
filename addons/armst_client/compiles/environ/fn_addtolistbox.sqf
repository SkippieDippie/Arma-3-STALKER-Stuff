	/*
	Author: Aloe
		
	Description:
	Adds an formated item to the listbox
		
	Parameter(s):
	_this select 0: <Control> listbox control
	_this select 1: <Array> consolidated array
	_this select 2: <Array> items configs
	
	*/
	
	params ["_control", "_items", "_itemsCfg"];
	
	{
		private ["_item", "_count", "_config", "_pic", "_text", "_index"];
			
		_item = _x select 0;
		_count = _x select 1;
	
		{
			if(isClass (configFile >> _x >> _item))exitWith{_config = _x};
		}foreach _itemsCfg;
		
		if(_item != "" and !isNil "_config")then{
		
			_pic = getText (configFile >> _config >> _item >> "picture");
			_text = getText (configFile >> _config >> _item >> "displayName");
		
			if(_text=="")then{_text=_item};
		
			_index = _control lbAdd format ["%1X %2", _count, _text];

			_control lbSetPicture [_index, _pic];
			_control lbSetData [_index, format ["['%1',%2]", _item, _count]];
			
		};
		
	}foreach _items;