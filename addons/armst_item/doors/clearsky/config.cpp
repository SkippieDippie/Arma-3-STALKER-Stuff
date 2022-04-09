class cfgPatches
{
	class science_ARMST_CLEARSKY
	{
		units[]=
		{
			"land_ARMST_CLEARSKY_door",
			"land_ARMST_CLEARSKY_lab_door",
			"land_ARMST_CLEARSKY_metal_door",
			"land_ARMST_CLEARSKY_metal2_door",
			"land_ARMST_CLEARSKY_lab2_door",
			"land_ARMST_CLEARSKY_metal3_door",
			"land_ARMST_CLEARSKY_wood_door",
			"land_ARMST_CLEARSKY_wood2_door",
			"land_armst_gate_ARMST_CLEARSKY",
			"land_armst_wood3_door_ARMST_CLEARSKY",
			"land_armst_gate_big_ARMST_CLEARSKY"
		};
		requiredaddons[]=
		{
			"A3_Weapons_F"
		};
		weapons[]={};
		requiredVersion=0.1;
	};
};
class CfgVehicles
{
	class House;
	class House_F: House
	{
	};
	class land_ARMST_CLEARSKY_door: House_F
	{
		scope=2;
		displayName="Бронированная дверь (чистое небо)";
		model="\armst\armst_item\doors\science_door\science_door.p3d";
		vehicleClass="Structures";
		class AnimationSources
		{
			class Door_1_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Открыть";
				position="Door_1_trigger";
				priority=0.40000001;
				radius=3;
				onlyForPlayer=1;
				condition="((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName="Close Door";
				priority=0.2;
				condition="((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
		};
	};
	class land_ARMST_CLEARSKY_lab_door: House_F
	{
		scope=2;
		displayName="Лабораторная дверь (чистое небо)";
		model="\armst\armst_item\doors\1\armst_door_1.p3d";
		vehicleClass="Structures";
		class AnimationSources
		{
			class Door_1_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Открыть";
				position="Door_1_trigger";
				priority=0.40000001;
				radius=3;
				onlyForPlayer=1;
				condition="((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName="Close Door";
				priority=0.2;
				condition="((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
		};
	};
	class land_ARMST_CLEARSKY_metal_door: House_F
	{
		scope=2;
		displayName="Металлическая дверь (чистое небо)";
		model="\armst\armst_item\doors\2\armst_door_2.p3d";
		vehicleClass="Structures";
		class AnimationSources
		{
			class Door_1_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Открыть";
				position="Door_1_trigger";
				priority=0.40000001;
				radius=3;
				onlyForPlayer=1;
				condition="((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName="Close Door";
				priority=0.2;
				condition="((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
		};
	};
	class land_ARMST_CLEARSKY_metal2_door: House_F
	{
		scope=2;
		displayName="Металлическая дверь 2 (чистое небо)";
		model="\armst\armst_item\doors\3\armst_door_3.p3d";
		vehicleClass="Structures";
		class AnimationSources
		{
			class Door_1_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Открыть";
				position="Door_1_trigger";
				priority=0.40000001;
				radius=3;
				onlyForPlayer=1;
				condition="((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName="Close Door";
				priority=0.2;
				condition="((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
		};
	};
	class land_ARMST_CLEARSKY_lab2_door: House_F
	{
		scope=2;
		displayName="Лабораторная дверь 2 (чистое небо)";
		model="\armst\armst_item\doors\4\armst_door_4.p3d";
		vehicleClass="Structures";
		class AnimationSources
		{
			class Door_1_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Открыть";
				position="Door_1_trigger";
				priority=0.40000001;
				radius=3;
				onlyForPlayer=1;
				condition="((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName="Close Door";
				priority=0.2;
				condition="((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
		};
	};
	class land_ARMST_CLEARSKY_metal3_door: House_F
	{
		scope=2;
		displayName="Металлическая дверь 3 (чистое небо)";
		model="\armst\armst_item\doors\5\armst_door_5.p3d";
		vehicleClass="Structures";
		class AnimationSources
		{
			class Door_1_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Открыть";
				position="Door_1_trigger";
				priority=0.40000001;
				radius=3;
				onlyForPlayer=1;
				condition="((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName="Close Door";
				priority=0.2;
				condition="((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
		};
	};
	class land_ARMST_CLEARSKY_wood_door: House_F
	{
		scope=2;
		displayName="Деревянная дверь (чистое небо)";
		model="\armst\armst_item\doors\6\armst_door_6.p3d";
		vehicleClass="Structures";
		class AnimationSources
		{
			class Door_1_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Открыть";
				position="Door_1_trigger";
				priority=0.40000001;
				radius=3;
				onlyForPlayer=1;
				condition="((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName="Close Door";
				priority=0.2;
				condition="((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
		};
	};
	class land_ARMST_CLEARSKY_wood2_door: House_F
	{
		scope=2;
		displayName="Деревянная дверь 2 (чистое небо)";
		model="\armst\armst_item\doors\7\armst_door_7.p3d";
		vehicleClass="Structures";
		class AnimationSources
		{
			class Door_1_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Открыть";
				position="Door_1_trigger";
				priority=0.40000001;
				radius=3;
				onlyForPlayer=1;
				condition="((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName="Close Door";
				priority=0.2;
				condition="((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
		};
	};
	class land_armst_gate_ARMST_CLEARSKY: House_F
	{
		scope=2;
		displayName="Дверь ворота (чистое небо)";
		model="\armst\armst_item\doors\8\armst_door_8.p3d";
		vehicleClass="Structures";
		class AnimationSources
		{
			class Door_1_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Открыть";
				position="Door_1_trigger";
				priority=0.40000001;
				radius=3;
				onlyForPlayer=1;
				condition="((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName="Close Door";
				priority=0.2;
				condition="((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
		};
	};
	class land_armst_wood3_door_ARMST_CLEARSKY: House_F
	{
		scope=2;
		displayName="Деревянная дверь 3 (чистое небо)";
		model="\armst\armst_item\doors\9\armst_door_9.p3d";
		vehicleClass="Structures";
		class AnimationSources
		{
			class Door_1_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Открыть";
				position="Door_1_trigger";
				priority=0.40000001;
				radius=3;
				onlyForPlayer=1;
				condition="((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName="Close Door";
				priority=0.2;
				condition="((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
		};
	};
	class land_armst_gate_big_ARMST_CLEARSKY: House_F
	{
		scope=2;
		displayName="Дверь ворота большие (чистое небо)";
		model="\armst\armst_item\doors\10\armst_door_10.p3d";
		vehicleClass="Structures";
		class AnimationSources
		{
			class Door_1_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="Открыть";
				position="Door_1_trigger";
				priority=0.40000001;
				radius=3;
				onlyForPlayer=1;
				condition="((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName="Close Door";
				priority=0.2;
				condition="((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999) && (player isKindOf 'ARMST_CLEARSKY')";
				statement="([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose)";
			};
		};
	};
};
