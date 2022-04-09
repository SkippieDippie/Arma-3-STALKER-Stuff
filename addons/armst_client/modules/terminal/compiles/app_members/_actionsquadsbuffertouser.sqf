/*
	Author: Aloe <itfruit@mail.ru>

	Description:  Перемещение юзера из списка формирования отряда
	
	Parameter(s):
		_control 		(Control) - списка
		_index 		(Number) - индекс
		
*/
	#include "..\..\module.sqf";
	
	params ["_userBufferControl", "_userBufferIndex"];
	
	private _display = ctrlParent _userBufferControl;
	private _userListControl = _display displayCtrl IDC_TERMINAL_PAGE_PER_SQD_LIST_USERS;
	
	private _index = _userListControl lbAdd (format ["%1", _userBufferControl lbText _userBufferIndex]);
	_userListControl lbSetData [_index, _userBufferControl lbData _userBufferIndex];
	_userListControl lbSetPicture [_index, _userBufferControl lbPicture _userBufferIndex];

	_userBufferControl lbDelete  _userBufferIndex;