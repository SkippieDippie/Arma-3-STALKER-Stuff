/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 01.11.2015
 * Time     : 20:24
`*/

 /* Ахтунг! || _x == 0 !!!!*/
#define logVar(VAR_NAME) \
_nilIndex = objNull; \
_writeEmpty = false; \
_logStr = ''; \
if (typeName VAR_NAME == "ARRAY") then { \
	diag_log format['[logVar] [ %3 : $4 ] {%1} ##VAR_NAME## (%2 elements): ', (typeName VAR_NAME), (count VAR_NAME), __FILE__, __LINE__]; \
	{ \
		if (isNil {_x} || (_x isEqualTo 0)) then { \
			if (_nilIndex isEqualTo objNull) then { \
			_nilIndex = _forEachIndex; \
			}; \
			if ((_forEachIndex == (count VAR_NAME) - 1) && (!(_nilIndex isEqualTo objNull))) then { \
				_writeEmpty = true; \
			} \
		}else{ \
			if (!(_nilIndex isEqualTo objNull)) then { \
        _writeEmpty = true; \
      }; \
			_logStr =  format['[logVar] [ %3 : $4 ]     ##VAR_NAME##[%1] : %2', _forEachIndex, _x, __FILE__, __LINE__]; \
		}; \
		if (_writeEmpty) then { \
			diag_log format['[logVar] [ %3 : $4 ]     ##VAR_NAME##[%1 - %2] :  nil', _nilIndex, (_forEachIndex - 1), __FILE__, __LINE__]; \
			_writeEmpty = false; \
			_nilIndex = objNull; \
		}; \
		if (_logStr != "") then { \
			diag_log _logStr; \
			_logStr = ""; \
		} \
	} forEach VAR_NAME; \
} else { \
	diag_log format["[logVar] [ %4 : $5 ] {%1} %2 : %3", (typeName VAR_NAME), 'VAR_NAME', VAR_NAME, __FILE__, __LINE__]; \
}; \
