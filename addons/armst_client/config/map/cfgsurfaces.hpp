class CfgSurfaces 
{
	class Default	{};

	class arm_gras_grassSurface : Default
	{
		files = "ARMst_gras";
		rough = 0.5;
		dust = 0.05;
		maxSpeedCoef = 0.9;
		soundEnviron = "grass";
		character = "arm_gras_grassCharacter";
		soundHit = "soft_ground";
	};
	
	class armst_snow : Default
	{
		access = 2;
		character = "arm_snow_grassCharacter";
		dust = 0;
		maxSpeedCoef = 0.5;
		files = "ARMst_snow";
		impact = "hitGroundSoft";
		rough = 0.010000;
		soundEnviron = "snow_ground";
		soundHit = "snow_ground";
	};
};

class CfgSurfaceCharacters 
{

	class arm_gras_grassCharacter 
	{
		probability[] = {0.4, 0.01, 0.1};
		names[] = {"arm_gras_StrGrassGreenGroup", "arm_gras_BranchBig", "arm_gras_StrGrassTalll"};
	};
	class arm_snow_grassCharacter 
	{
		probability[] = {0.8, 0.2};
		names[] = {"armst_snows","armst_snows2"};
	};
};