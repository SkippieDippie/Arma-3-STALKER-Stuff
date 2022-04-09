/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 07.11.2015
 * Time     : 23:48
`*/

#define arrayFill(ARRAY_NAME, COUNT_ELEMENTS, VALUE) \
for [{_i##_##ARRAY_NAME=0},{_i##_##ARRAY_NAME < COUNT_ELEMENTS},{_i##_##ARRAY_NAME = _i##_##ARRAY_NAME+1}] do { \
	ARRAY_NAME set [_i##_##ARRAY_NAME, VALUE]; \
}; \
_i##_##ARRAY_NAME = nil;