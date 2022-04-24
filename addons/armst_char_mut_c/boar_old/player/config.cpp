class DefaultEventhandlers;
class CfgPatches
{
	class armst_boar_player
	{
		units[]=
		{
			"armst_boar",
			"armst_boar2",
			"armst_boar3",
			"armst_boar4",
			"boar_old_test"
		};
		weapons[]=
		{
			"boar_old_testu",
			"boar_old_testu2"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F",
			"A3_Sounds_F",
			"A3_Data_F",
			"A3_Sounds_F",
			"A3_Anims_F"
		};
	};
};
class EventHandlers;
class CfgVehicles
{
	class B_Soldier_base_F;
	class Land;
	class Man: Land
	{
		class Eventhandlers;
	};
	class ARMST_MUTANT_HUM: B_Soldier_base_F
	{
		identityTypes[]=
		{
			"empty_Face"
		};
	};
	class boar_old_test;
	class armst_boar_player: boar_old_test
	{
		displayName="$STR_STST_boar_player_name";
		uniformClass="";
		model="\armst\armst_char\char_mut\boar_old\boar.p3d";
		uniformAccessories[]={};
		nakedUniform="armst_boar_player";
		linkedItems[]={};
		nightVision=1;
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\boar_old\boar2.paa"
		};
		fsmFormation="";
		fsmDanger="";
		fsmInspect="";
		fsmMove="";
		fsmDead="";
		fsmAttack="";
	};
};
