class CfgPatches
{
	class Urikis_Masks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgGlasses
{
	class G_Balaclava_lowprofile;
	class G_Balaclava_oli;
	class G_Bandanna_blk;
	class G_Bandanna_aviator;
	class armst_bandanna_Skull_des: G_Bandanna_blk
	{
		displayName="Бандана (череп песочный)";
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_kom\GasMasks\balacl\ghost_recon\Balaclava_GhostRecon_Khaki.paa"
		};
	};
	class armst_bandanna_Skull_Grn: G_Bandanna_blk
	{
		displayName="Бандана (череп зеленый)";
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_kom\GasMasks\balacl\ghost_recon\Balaclava_GhostRecon_Green.paa"
		};
	};
	class armst_bandanna_Skull_Blk: G_Bandanna_blk
	{
		displayName="Бандана (череп черный)";
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_kom\GasMasks\balacl\ghost_recon\Balaclava_GhostRecon_Black.paa"
		};
	};
	class Armst_balaclava_SKULL_Blk: G_Balaclava_oli
	{
		displayName="Балаклава (череп черный)";
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_kom\GasMasks\balacl\cod_ghosts\Balaclava_CodGhosts_01_Blk.paa"
		};
	};
	class Armst_balaclava_SKULL_Grn: G_Balaclava_oli
	{
		displayName="Балаклава (череп зеленый)";
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_kom\GasMasks\balacl\cod_ghosts\Balaclava_CodGhosts_01_Lsh.paa"
		};
	};
	class Armst_balaclava_SKULL_des: G_Balaclava_oli
	{
		displayName="Балаклава (череп песочный)";
		hiddenSelectionsTextures[]=
		{
			"\armst\armst_kom\GasMasks\balacl\cod_ghosts\Balaclava_CodGhosts_01_Ard.paa"
		};
	};
};
