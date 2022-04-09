/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Перемещение юзера в список формирования отряда
	
	Parameter(s):
		_control 		(Control) - списка
		_index 		(Number) - индекс
		
*/
	#include "..\..\module.sqf";
	
	params ["_userListControl", "_userListIndex"];
	
	private _display = ctrlParent _userListControl;
	private _userBufferControl = _display displayCtrl IDC_TERMINAL_PAGE_PER_SQD_LIST_BUFFER;
	
	private _index = _userBufferControl lbAdd (format ["%1", _userListControl lbText _userListIndex]);
	_userBufferControl lbSetData [_index, _userListControl lbData _userListIndex];
	_userBufferControl lbSetPicture [_index, _userListControl lbPicture _userListIndex];
		
	_userListControl lbDelete  _userListIndex;
	