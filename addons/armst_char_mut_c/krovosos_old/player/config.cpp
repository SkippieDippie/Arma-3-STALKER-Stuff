class DefaultEventhandlers;
class CfgPatches
{
	class armst_krovosos_player
	{
		units[]=
		{
			"armst_krovosos",
			"armst_krovosos2",
			"armst_krovosos3",
			"armst_krovosos4"
		};
		weapons[]=
		{
			"krovosos_old",
			"krovosos_old2",
			"krovosos_old3",
			"krovosos_old4"
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
	class krovosos_old_test;
	class armst_krovosos_player: krovosos_old_test
	{
		displayName="Кровосос игрок";
		uniformClass="";
		uniformAccessories[]={};
		linkedItems[]={};
		nakedUniform="armst_krovosos_player";
		nightVision=1;
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"armst\armst_char\char_mut\krovosos_old\krovosos4.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"armst\armst_char\char_mut\krovosos_old\krovosos.rvmat"
		};
		fsmFormation="";
		fsmDanger="";
		fsmInspect="";
		fsmMove="";
		fsmDead="";
		fsmAttack="armst_mutants\Logics\Attack\Bloodsucker.fsm";
	};
};
