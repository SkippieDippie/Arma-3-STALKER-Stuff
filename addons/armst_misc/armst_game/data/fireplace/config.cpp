
class CfgPatches 
{

	class armst_s
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 1.620000;
		requiredAddons[] = {
		};
	};
};

class CfgVehicles 
{

	class Land_Fire;

	class Land_Campfire: Land_Fire
	{
		model = "\armst\armst_misc\armst_game\data\fireplace\xRay_fireplace";
		displayName= str_Campfire;

	};
	class Land_Campfire_burning: Land_Campfire
	{
		accuracy=1000; // never recognize
		displayName= str_Campfire_burning;
		class EventHandlers
		{
			init="(_this select 0) inflame true";
		};
	};
	class Land_Campfire_burning_F: Land_Campfire
	{
		accuracy=1000; // never recognize
		displayName= str_Campfire;
		class EventHandlers
		{
			init="(_this select 0) inflame true";
		};
	};
	class Campfire_burning_F: Land_Campfire
	{
		model = "\armst\armst_misc\armst_game\data\fireplace\xRay_fireplace";
		accuracy=1000; // never recognize
		displayName= str_Campfire;
		class EventHandlers
		{
			init="(_this select 0) inflame true";
		};
	};
};