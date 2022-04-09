/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 27.09.2015
 * Time     : 6:31
`*/

/* ----------------------------------------------------------------------------
Macros: assocNew()

Description:
	Создает пустую структуру, которая в дальнейем будет использоваться как альтернаива ассоциативному массиву. (далее Ассоциативный Массив)
	Представляет собой массив, первым элементом которого является ма массив с ключами, вторым элементом - массив со значениями

Parameters:
	None

Returns:
	>>> (assocArray) [[],[]]

Examples:
	(begin example)
		_player     = assocNew(); // _player = [[],[]];
		_character  = assocNew();
	(end)
---------------------------------------------------------------------------- */
#define assocNew()  [[],[]]


/* ----------------------------------------------------------------------------
Macros: assocCreate(AssocArrayKeys,AssocArrayValues)

Description:
	Создает  заполненый Ассоциативный Массив.

Parameters:
	>>> AssocArrayKeys    (array) ключи
	>>> AssocArrayValues  (array) значения

Returns:
	[[],[]]

Examples:
	(begin example)

		_keys   = ['red', 'green', 'blue'];
		_values = [100, 255, 125];

		_colorData = assocCreate(_keys, _values) // _colorData equals [['red','green','blue'],[100,255,125]]
	(end)
---------------------------------------------------------------------------- */
#define assocCreate(AssocArrayKeys,AssocArrayValues) [AssocArrayKeys,AssocArrayValues]



/* ----------------------------------------------------------------------------
Macros: >>> assocGet(AssocArray,AssocArrayKey)

Description:
	Получить значение из ассоциативного массива по ключу

Parameters:
	>>> AssocArray    (array)   - ассоциативный массив (см. assocNew())
	>>> AssocArrayKey (string)  - ключ

Returns:
	>>> _value (anything) - значение

Examples:
	(begin example)
		_id = assocGet(_playerData, "id");
		_id = assocGet(_playerData, "vitality");
	(end)
---------------------------------------------------------------------------- */
#define assocGet(AssocArray,AssocArrayKey)  (AssocArray select 1 select ((AssocArray select 0) find AssocArrayKey))



/* ----------------------------------------------------------------------------
Macros: >>> assocSet(AssocArray,AssocArrayKey,AssocArrayValue)

Description:
	Установить значение в ассоциативном массиве

Parameters:
	>>> AssocArray      (array)     - ассоциативный массив (см. assocNew())
	>>> AssocArrayKey   (string)    - ключ
	>>> AssocArrayValue (anything)  - значение

Returns:
	>>> None

Examples:
	(begin example)
		assocSet(_playerData,"bulletResist",15);
		assocSet(_playerData,"fireResist",14);
	(end)
---------------------------------------------------------------------------- */
#define assocSet(AssocArray,AssocArrayKey,AssocArrayValue)  \
_valueKey = (AssocArray select 0) find AssocArrayKey; \
if (_valueKey == -1) then { \
	_valueKey = (AssocArray select 0) pushBack AssocArrayKey; \
}; \
(AssocArray select 1) set [_valueKey, AssocArrayValue]


/* ----------------------------------------------------------------------------
Macros: >>> assocKeyExist(AssocArray,AssocArrayKey)

Description:
	Проверяет наличие ключа в ассоциативном массиве

Parameters:
	>>> AssocArray    (array)   - ассоциативный массив (см. assocNew())
	>>> AssocArrayKey (string)  - ключ

Returns:
	>>> _value (boolean) - вернет true, если ключ существует

Examples:
	(begin example)
		if (assocKeyExist(_playerData, "id")) then {
			// some code
		}
	(end)
---------------------------------------------------------------------------- */
#define assocKeyExist(AssocArray,AssocArrayKey)  (AssocArrayKey in (AssocArray select 0))
