/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 05.04.2016
 * Time     : 16:00
`*/


#include "..\__module.sqf";

/* ----------------------------------------------------------------------------
Function:   >>> _ClientMainHandler

Description:
	Основной обработчик аномалий на клиенте. Создает / удаляет партиклы, исходя из положения игрока.

Parameters:
	>>> _this {nil}

Returns:
	>>> {nil}

---------------------------------------------------------------------------- */
private ['_createList','_removeList','_prevActiveSquares', '_currentActiveSquares'];

_createList           = []; // номера квадратов в которых нужно создать партиклы
_removeList           = []; // номера квадратов в которых нужно удалить партиклы
_prevActiveSquares    = []; // предыдущие активные квадраты
_currentActiveSquares = []; // текущие активные квадраты

while {true} do {


	_createList = [];
  _removeList = [];

	_prevActiveSquares    = _currentActiveSquares;
	_currentActiveSquares = [];

	_squareId = (getPos player) call module(GetSquareIdByPos);


	// foreach module(_squarePriorityOffsetMask) - получаем номера активных квадратов, согласно маске
  {
    // добавляем номер активного квадрата
    _currentActiveSquares pushBack (_squareId + (_x select 0));

    // todo: еще можно запоминать приоритет и управлять детализацией, исходя из удаленности аномлаии от клиента
  } foreach module(_squarePriorityOffsetMask);

    // foreach _currentActiveSquares - проверяем, какие из квадратов новые (в них нужно будет соспавнить партиклы)
    {
      _currentActiveSquareIndex = _x;
      _isNew = true;
      {
				if (_currentActiveSquareIndex == _x) then {
					_isNew = false;
				};
      } foreach _prevActiveSquares;

      if (_isNew) then {
				_createList pushBack _currentActiveSquareIndex;
      };
    } foreach _currentActiveSquares;

    // foreach _prevActiveSquares - проверяем, какие из квадратов исчезли (в них нужно будет удалить партиклы)
    {
      _prevActiveSquareIndex = _x;
      _isRemoved = true;
      {
				if (_prevActiveSquareIndex == _x) then {
					_isRemoved = false;
				};
      } foreach _currentActiveSquares;
      if (_isRemoved) then  {
				_removeList pushBack _prevActiveSquareIndex;
      };
    } foreach _prevActiveSquares;

		// foreach _createList
		{
			_x spawn module(SquareParticlesCreate); // todo возможно лучше вызывать последовательно
		} foreach _createList;

		// foreach _removeList
    {
      _x spawn module(SquareParticlesRemove); // todo возможно лучше вызывать последовательно
    } foreach _removeList;


//		hint format [" add list : %1 , remove list %2 ", _createList, _removeList];

    uiSleep 10;
};


