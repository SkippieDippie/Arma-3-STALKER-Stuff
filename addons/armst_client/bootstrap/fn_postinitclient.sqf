	
	//----Инициализация модулей клиента
	//isMultiplayer	
	if (!isDedicated && hasInterface) then {

		//Mодуль игрока
		#include "\armst_client\modules\Player\Player.sqf";
		
		#include "\armst_client\dragster\init.sqf";
		//Модуль торговли
		#include "\armst_client\modules\Trade\Trade.sqf";
		
		//Модуль рейтинга
		#include "\armst_client\modules\Rating\Rating.sqf";
		
		//Модуль терминала
		#include "\armst_client\modules\Terminal\Terminal.sqf";
		
		//Модуль радиации
		#include "\armst_client\modules\Radiation\Radiation.sqf";
		
		//Модуль детекторов аномалий
		#include "\armst_client\modules\Detectors\Detectors.sqf";
		
		//Модуль записок
		#include "\armst_client\modules\Paper\Paper.sqf";
				
		//Mодуль тайников (клиент)
		#include "\armst_client\modules\StashC\StashC.sqf";

		//Модуль аномалий
		#include "\armst_anomalies\modules\anomaly\anomaly.sqf";
		
		[] execVM "armst_client\flex\start.sqf";
	};
