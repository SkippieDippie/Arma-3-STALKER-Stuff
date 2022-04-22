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
		displayname="$STR_STST_workbench_medical_name";
		model="\armst\armst_item\workbench\Workbench_bints.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, localize 'STR_STST_workbench_medical_action','','','_this distance _target < 2','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;playsound 'craft';},{[player] spawn Armst_fnc_make_bints},{},[],30,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_Workbench_nails: Building2
	{
		scope=2;
		displayname="$STR_STST_workbench_nails_name";
		model="\armst\armst_item\workbench\Workbench_nails.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, localize 'STR_STST_workbench_nails_action','','','_this distance _target < 2 && ""ARMST_metalolom"" in items player','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;playsound 'craft'; },{[player] spawn Armst_fnc_make_metall_to_nails},{},[],25,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_Workbench_puli: Building2
	{
		scope=2;
		displayname="$STR_STST_workbench_buckshot_name";
		model="\armst\armst_item\workbench\Workbench_puli.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, localize 'STR_STST_workbench_buckshot_action','','','_this distance _target < 2 && ""ARMST_metalolom"" in items player','true',{playsound 'craft';},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;},{[player] spawn Armst_fnc_make_kartech},{},[],40,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_Workbench_trubki: Building2
	{
		scope=2;
		displayname="$STR_STST_workbench_pipes_name";
		model="\armst\armst_item\workbench\Workbench_trubki.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, localize 'STR_STST_workbench_pipes_action','','','_this distance _target < 2 && ""ARMST_metalolom"" in items player','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;playsound 'craft'; },{[player] spawn Armst_fnc_make_metall_to_trubki},{},[],25,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_Workbench_wood: Building2
	{
		scope=2;
		displayname="$STR_STST_workbench_planks_name";
		model="\armst\armst_item\workbench\Workbench_wood.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, localize 'STR_STST_workbench_planks_action','','','_this distance _target < 2','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;playsound 'craft'; },{[player] spawn Armst_fnc_make_wood},{},[],30,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_workbench_kanabis: Building2
	{
		scope=2;
		displayname="$STR_STST_greenhouse_weed_name";
		model="\ca\structures\Misc\Misc_Greenhouse\Misc_Greenhouse.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, localize 'STR_STST_greenhouse_weed_action','','','_this distance _target < 2','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;playsound 'craft'; },{[player] spawn Armst_fnc_make_kanabis},{},[],30,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_workbench_konserv: Building2
	{
		scope=2;
		displayname="$STR_STST_cookingtable_name";
		model="\armst\armst_item\workbench\Workbench_trubki.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, localize 'STR_STST_cookingtable_action','','','_this distance _target < 2 && ""ARMST_metalolom"" in items player','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;playsound 'craft'; },{[player] spawn Armst_fnc_make_konserv},{},[],35,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_workbench_drugs: Building2
	{
		scope=2;
		displayname="$STR_STST_workbench_meth_name";
		model="\armst\armst_item\workbench\Workbench_puli.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, localize 'STR_STST_workbench_meth_action','','','_this distance _target < 2 && ""armst_item_medkit3"" in items player','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;playsound 'craft'; },{[player] spawn Armst_fnc_make_drugs},{},[],50,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_apteka_fnc: Building2
	{
		scope=2;
		displayname="$STR_STST_medkit_name";
		model="\ca\misc\lekarnika_proxy.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, localize 'STR_STST_medkit_action','','','_this distance _target < 2','true',{},{player playmove 'AinvPknlMstpSnonWnonDnon_medic_1';['Работаю...'] call AGM_Core_fnc_displayTextStructured;playsound 'craft'; },{[player] spawn Armst_fnc_make_apteka},{},[],20,nil,false,true] call BIS_fnc_holdActionAdd;";
		};
	};
	class land_chair_sitdown: Building2
	{
		scope=2;
		displayname="$STR_STST_chair_name";
		model="\A3\Structures_F\Furniture\ChairWood_F.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0, localize 'STR_STST_sitdown_action','','','_this distance _target < 2','true',{['Сажусь...'] call AGM_Core_fnc_displayTextStructured;},{},{[_target,player] execvm ""\armst\armst_misc\armst_game\scripts\sitdown.sqf""},{},[],3,nil,false,false] call BIS_fnc_holdActionAdd;";
		};
	};
	class armst_toulet: Building2
	{
		scope=2;
		displayname="$STR_STST_toilet_name";
		model="\xRay_objects\misc\obj_WC.p3d";
		destrType="DestructNo";
		class EventHandlers: Eventhandlers
		{
			init="[_this select 0,localize 'STR_STST_generic_use_name','','','_this distance _target < 2','true',{},{},{[player] execvm ""\armst\armst_misc\armst_game\scripts\fn_pee.sqf""},{},[],3,nil,false,false] call BIS_fnc_holdActionAdd;";
		};
	};
};
