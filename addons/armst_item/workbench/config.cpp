class CfgPatches
{
	class armst_workbench
	{
		units[]=
		{
			"armst_Workbench_bints",
			"armst_Workbench_nails",
			"armst_Workbench_puli",
			"armst_Workbench_trubki",
			"armst_Workbench_wood",
			"armst_workbench_kanabis",
			"armst_workbench_konserv",
			"armst_workbench_drugs",
			"armst_apteka_fnc",
			"land_chair_sitdown",
			"armst_toulet"
		};
		weapons[]={};
		requiredVersion=1.02;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F"
		};
	};
};
class EventHandlers;
class CfgVehicles
{
	class Building;
	class Building2: Building
	{
		class Eventhandlers;
	};
	class armst_Workbench_bints: Building2
	{
		scope=2;
		displayname="Верстак (аптечки)";
		model="\armst\armst_item\workbench\Workbench_bints.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, 'Работать с бинтами','','','_this distance _target < 2','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;playsound 'craft';},{[player] spawn Armst_fnc_make_bints},{},[],30,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_Workbench_nails: Building2
	{
		scope=2;
		displayname="Верстак (гвозди)";
		model="\armst\armst_item\workbench\Workbench_nails.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, 'Работать с металлом (гвозди)','','','_this distance _target < 2 && ""ARMST_metalolom"" in items player','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;playsound 'craft'; },{[player] spawn Armst_fnc_make_metall_to_nails},{},[],25,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_Workbench_puli: Building2
	{
		scope=2;
		displayname="Верстак (картечь)";
		model="\armst\armst_item\workbench\Workbench_puli.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, '12x70 Картечь (4 ед.)','','','_this distance _target < 2 && ""ARMST_metalolom"" in items player','true',{playsound 'craft';},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;},{[player] spawn Armst_fnc_make_kartech},{},[],40,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_Workbench_trubki: Building2
	{
		scope=2;
		displayname="Верстак (трубки)";
		model="\armst\armst_item\workbench\Workbench_trubki.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, 'Работать с металлом (трубки)','','','_this distance _target < 2 && ""ARMST_metalolom"" in items player','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;playsound 'craft'; },{[player] spawn Armst_fnc_make_metall_to_trubki},{},[],25,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_Workbench_wood: Building2
	{
		scope=2;
		displayname="Верстак (доски)";
		model="\armst\armst_item\workbench\Workbench_wood.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, 'Работать с деревом','','','_this distance _target < 2','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;playsound 'craft'; },{[player] spawn Armst_fnc_make_wood},{},[],30,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_workbench_kanabis: Building2
	{
		scope=2;
		displayname="Теплица (травка)";
		model="\ca\structures\Misc\Misc_Greenhouse\Misc_Greenhouse.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, 'Работать в теплице','','','_this distance _target < 2','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;playsound 'craft'; },{[player] spawn Armst_fnc_make_kanabis},{},[],30,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_workbench_konserv: Building2
	{
		scope=2;
		displayname="Стол для готовки";
		model="\armst\armst_item\workbench\Workbench_trubki.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, 'Работать с мясом','','','_this distance _target < 2 && ""ARMST_metalolom"" in items player','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;playsound 'craft'; },{[player] spawn Armst_fnc_make_konserv},{},[],35,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_workbench_drugs: Building2
	{
		scope=2;
		displayname="Верстак (метамфетамин)";
		model="\armst\armst_item\workbench\Workbench_puli.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, 'Работать с мясом','','','_this distance _target < 2 && ""armst_item_medkit3"" in items player','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;playsound 'craft'; },{[player] spawn Armst_fnc_make_drugs},{},[],50,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_apteka_fnc: Building2
	{
		scope=2;
		displayname="Аптечка";
		model="\ca\misc\lekarnika_proxy.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, 'Использовать аптечку','','','_this distance _target < 2','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;playsound 'craft'; },{[player] spawn Armst_fnc_make_apteka},{},[],20,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class land_chair_sitdown: Building2
	{
		scope=2;
		displayname="Стул";
		model="\A3\Structures_F\Furniture\ChairWood_F.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0,'Сесть','','','_this distance _target < 2','true',{['Сажусь...'] call AGM_Core_fnc_displayTextStructured;},{},{[_target,player] execvm ""\armst\armst_misc\armst_game\scripts\sitdown.sqf""},{},[],3,nil,false,false] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_toulet: Building2
	{
		scope=2;
		displayname="Туалет";
		model="\xRay_objects\misc\obj_WC.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0,'Использовать','','','_this distance _target < 2','true',{},{},{[player] execvm ""\armst\armst_misc\armst_game\scripts\fn_pee.sqf""},{},[],3,nil,false,false] call BIS_fnc_holdActionAdd;";
		};
	};
};
