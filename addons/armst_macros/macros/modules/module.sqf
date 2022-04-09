/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 04.11.2015
 * Time     : 0:25
`*/


// Название модуля
#define MODULE_NAME /* Nothing */

// Путь до директории с модулями
#define MODULES_ROOT /* Nothing */

/*
	Префикс для названий глобальных функций и переменных
*/
#define MODULE_FUNC_PREFIX ARMST

/*

	Макрос используется для сокращения записи имени глобальной переменной модуля, при обращении к ней внутри модуля.
	А также для независимости кода внутри модуля от названия самого модуля.

	Например:

		В модуле "Database" определена функция "Execute"
			код >>> moduleCompileFunction(Execute)

		В любом месте модуля "Database" можно вызвать функцию "Execute" помошью макроса module(Var_Name)
			код >>> _someData = _params call module(Execute);


		Если требуется вызвать функцию "Execute" из другого модуля - то нужно обратиться к функции по
		ее полному имени    : MODULE_FUNC_PREFIX + "_" + MODULE_NAME + "_" + FUNCTION_NAME
		в нашем случае это  : Module_Database_Execute
			код >>> _someData = _params call Module_Database_Execute;

*/
#define module(Var_Name) MODULE_FUNC_PREFIX##_##MODULE_NAME##_##Var_Name


/*
	Макрос используется для сокращения записи имени глобальной переменной модуля, при обращении из другого модуля
*/
#define app(PARAM_MODULE_NAME,PARAM_VARIABLE_NAME) MODULE_FUNC_PREFIX##_##PARAM_MODULE_NAME##_##PARAM_VARIABLE_NAME

/*
	Относительный путь до функций модуля (используется в макросе moduleCompileFunction)
	При необходимости можно переопределять
*/
#define MODULE_FUNC_PATH \compiles



/*
	Компилирует код функции и сохраняет в глобальную переменную модуля.
	Внутри модуля к функции можно обращаться используя макрос module(Var_Name)
*/
#define moduleCompileFunction(FUNCTION_NAME) \
MODULE_FUNC_PREFIX##_##MODULE_NAME##_##FUNCTION_NAME = compile preprocessFileLineNumbers format['%1\%2%3\_%4.sqf', #MODULES_ROOT, #MODULE_NAME, #MODULE_FUNC_PATH, #FUNCTION_NAME]; \
diag_log format["[module] %1 : add function {%1_%2_%3} (%4\%2%5\_%3.sqf)  %5" ,#MODULE_FUNC_PREFIX, #MODULE_NAME, #FUNCTION_NAME, #MODULES_ROOT, (["", "[failed] - code empty"] select ((str MODULE_FUNC_PREFIX##_##MODULE_NAME##_##FUNCTION_NAME) isEqualTo (str{}))), #FUNC_PATH];

// лог - начало инициализации модуля
#define moduleInitStart() \
diag_log format ["[module] %1 : init start", #MODULE_NAME];

// лог - завершение инициализации модуля
#define moduleInitEnd() \
diag_log format ["[module] %1 : init end", #MODULE_NAME];