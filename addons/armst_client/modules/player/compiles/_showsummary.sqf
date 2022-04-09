hint parseText format [
	"<t align = 'left' size = '1.3'>Досье: <br/><br/>
	Фракция: %1 <br/>
	Деньги: %2<br/>
	Здоровье: %3<br/>
	Убийств: %4 <br/>
	Смертей: %5<br/>
	Рейтинг: %6<br/>
	Ранг: %7<br/><br/>
	Голод: %8 <br/>
	Жажда: %9 <br/>
	Облучение: %10 <br/><br/>
	Дата прибытия (в зону): %11<br/>
	Дата вступления: %12<br/></t>
	", 
	getText(configFile >> "CfgFactionClasses" >> faction player >> "displayName"),
	player getVariable "Money",
	1 - (getDammage player),
	player getVariable "Kills", 
	player getVariable "Deaths",
	player getVariable "Score",
	[player getVariable ["Score", 0]] call ARMST_Rating_GetRank,
	(player getVariable "ARMST_HUNGER") * 100,
	(player getVariable "ARMST_THIRST") * 100,
	ARMST_Radiation_Infection,
	player getVariable "Datestamp",
	player getVariable "FactionEntry"
];