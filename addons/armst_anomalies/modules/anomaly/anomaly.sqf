/**
 * Created by PhpStorm.
 * Project  : idbeholdl_arma_dev
 * User     : IdbeHoldL
 * Date     : 22.03.2016
 * Time     : 15:57
`*/


#include "__module.sqf";


moduleInitStart();

#define MODULE_FUNC_PATH \compiles
	//moduleCompileFunction(AnomalyParticlesCreate);  // Создает партиклы для аномалии (исходя из приоритета квадрата)
	//moduleCompileFunction(AnomalyParticlesRemove);  // Удаляет созданные партиклы аномалии
	moduleCompileFunction(SquareParticlesCreate);   // Создает партиклы для всех аномалий, находящихся в данном квадрате
	moduleCompileFunction(SquareParticlesRemove);   // Удаляет все партиклы аномалий, находящихся в данном квадрате

	moduleCompileFunction(ClientMainHandler); // Основной обработчик. Исходя из координат игрока создает/удаляет партиклы

#define MODULE_FUNC_PATH \compiles\particles
	moduleCompileFunction(ParticlesGravy);
	moduleCompileFunction(ParticlesGravyBesplod);
	moduleCompileFunction(ParticlesMEAT);
	moduleCompileFunction(ParticlesMEATBesplod);
	moduleCompileFunction(ParticlesMEAT_visible);
	moduleCompileFunction(ParticlesTeleport);
	moduleCompileFunction(ParticlesSOULS);
	moduleCompileFunction(ParticlesKOSTOLOM);
	moduleCompileFunction(ParticlesRJAVICNA);
	moduleCompileFunction(ParticlesJarka);
	moduleCompileFunction(ParticlesJarka_v2);
	moduleCompileFunction(ParticlesJarka_invisible);
	moduleCompileFunction(ParticlesElectra);
	moduleCompileFunction(ParticlesElectraBesplod);
	moduleCompileFunction(ParticlesElectraShar);
	moduleCompileFunction(ParticlesBuzz);
	moduleCompileFunction(ParticlesBuzzSnow);
	moduleCompileFunction(ParticlesBuzzBezdna);
	moduleCompileFunction(ParticlesBuzz_v2);
	moduleCompileFunction(ParticlesTrampoline);
	moduleCompileFunction(ParticlesTrampolineBesplod);
	moduleCompileFunction(ParticlesSpringboard);
	moduleCompileFunction(ParticlesGhosts);
	moduleCompileFunction(ParticlesPeak);
	moduleCompileFunction(ParticlesFog);
	moduleCompileFunction(ParticlesFogSmoke);
	moduleCompileFunction(ParticlesSpore);
	moduleCompileFunction(ParticlesRadiation);
	moduleCompileFunction(TestLandCircle);

#define MODULE_FUNC_PATH \compiles\particles\hit
	moduleCompileFunction(ParticlesHitGravy);
	moduleCompileFunction(ParticlesHitGravyBesplod);
	moduleCompileFunction(ParticlesHitMEAT);
	moduleCompileFunction(ParticlesHitMEATBesplod);
	moduleCompileFunction(ParticlesHitMEAT_visible);
	moduleCompileFunction(ParticlesHitTeleport);
	moduleCompileFunction(ParticlesHitRJAVICNA);
	moduleCompileFunction(ParticlesHitJarka);
	moduleCompileFunction(ParticlesHitKOSTOLOM);
	moduleCompileFunction(ParticlesHitJarka_V2);
	moduleCompileFunction(ParticlesHitJarka_invisible);
	moduleCompileFunction(ParticlesHitElectra);
	moduleCompileFunction(ParticlesHitElectraBesplod);
	moduleCompileFunction(ParticlesHitElectraShar);
	moduleCompileFunction(ParticlesHitBuzz);
	moduleCompileFunction(ParticlesHitBuzzSnow);
	moduleCompileFunction(ParticlesHitBuzzBezdna);
	moduleCompileFunction(ParticlesHitBuzz_v2);
	moduleCompileFunction(ParticlesHitTrampoline);
	moduleCompileFunction(ParticlesHitTrampolineBesplod);
	moduleCompileFunction(ParticlesHitSpringboard);
	moduleCompileFunction(ParticlesHitGhosts);
	moduleCompileFunction(ParticlesHitFog);
	moduleCompileFunction(ParticlesHitFogSmoke);
	moduleCompileFunction(ParticlesHitSpore);
	moduleCompileFunction(ParticlesHitRadiation);
	moduleCompileFunction(ParticlesHitPeak);

#define MODULE_FUNC_PATH \compiles\particles\blowout
	moduleCompileFunction(ParticlesBlowoutGravy);
	moduleCompileFunction(ParticlesBlowoutGravyBesplod);
	moduleCompileFunction(ParticlesBlowoutMEAT);
	moduleCompileFunction(ParticlesBlowoutMEATBesplod);
	moduleCompileFunction(ParticlesBlowoutMEAT_visible);
	moduleCompileFunction(ParticlesBlowoutTeleport);
	moduleCompileFunction(ParticlesBlowoutRJAVICNA);
	moduleCompileFunction(ParticlesBlowoutKOSTOLOM);
	moduleCompileFunction(ParticlesBlowoutJarka);
	moduleCompileFunction(ParticlesBlowoutJarka_v2);
	moduleCompileFunction(ParticlesBlowoutJarka_invisible);
	moduleCompileFunction(ParticlesBlowoutElectra);
	moduleCompileFunction(ParticlesBlowoutElectraBesplod);
	moduleCompileFunction(ParticlesBlowoutElectraShar);
	moduleCompileFunction(ParticlesBlowoutBuzz);
	moduleCompileFunction(ParticlesBlowoutBuzzSnow);
	moduleCompileFunction(ParticlesBlowoutBuzzBezdna);
	moduleCompileFunction(ParticlesBlowoutBuzz_v2);
	moduleCompileFunction(ParticlesBlowoutTrampoline);
	moduleCompileFunction(ParticlesBlowoutTrampolineBesplod);
	moduleCompileFunction(ParticlesBlowoutSpringboard);
	moduleCompileFunction(ParticlesBlowoutGhosts);
	moduleCompileFunction(ParticlesBlowoutRadiation);
	moduleCompileFunction(ParticlesBlowoutPeak);



// Ожидаем пока сервер инициализирует переменные


// ожидание инициализации переменных
//waitUntil{!isnil stringify(module(_squareMaxX))};               // Ширина карты в квадратах
//waitUntil{!isnil stringify(module(_squareMaxY))};               // Длинна карты в квадратах
//waitUntil{!isnil stringify(module(_squaresCount))};             // количество квадратов
//waitUntil{!isnil stringify(module(_squareAnomalies))};          // аномалии по квадратам (номер элемента - id квадрата, значение - список model_anomaly)
//waitUntil{!isnil stringify(module(_squarePriorityOffsetMask))}; // маска приоритетов с учетом смещения (использеутся для быстрого нахождения активных квадтатов вокруг точки)

// ожидание инициализации функций
//waitUntil{!isnil stringify(module(GetSquareIdByPos))}; // Получение номера квадрата по координатам

/**
 * Партиклы по квадратам (номер элемента - id квадрата, значение - список активных ParticleSource objects)
 * @type {*[]}
`*/
//module(_squareParticles) = [];
//arrayFill(module(_squareParticles), module(_squaresCount), []);

// Запускаем основной обработчик клиентской части модуля, запоминаем запоминаем указатель на запущенный скрипт.
//module(_clientMainScriptHandle) = [] spawn module(ClientMainHandler);


//show_health = true;
//[] spawn {
//
//	while {show_health} do {
//		hint str (player getVariable "poisonData");
//		uisleep 1;
//	};
//
//};

moduleInitEnd();