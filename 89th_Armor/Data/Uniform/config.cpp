class cfgPatches
{
	class 89th_Armor_Uniform
	{
		author="89th Mod Team";
		name="89th JTF Mod";
		units[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"V_FZ_Armor",
		};
	};
};
class cfgWeapons
{
	class VES_BDU_R_Evolved_Slim;
	class VES_BDU_Evolved_Slim;
	class B_Soldier_base_F;
	class UniformItem;
	class UniformBase;
	class 19th_U: B_Soldier_base_F
	{
		scope=2;
		model="halo_marine\Halo_marine_01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Armor\Data\Uniform\Uni_89th_co.paa"
		};
	};
	class 89thu_U: UniformBase
	{
		scope=2;
		displayName="[89th] H2A Armor Urban";
		picture="\halo_marine\data\UniformIcon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="19th_U";
			containerClass="Supply200";
			mass=1;
			allowedSlots[]={"701","801","901"};
			armor=1;
		};
	};
	class 89th_BDU_WTS_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU [WDL] (Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_V_WTS_SLIM";
		};
	};
	class 89th_BDU_R_WTS_SLIM: VES_BDU_R_Evolved_Slim
	{
		displayName="[89th] BDU [WDL](Rolled)(Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_R_V_WTS_SLIM";
		};
	};
	class 89th_BDU_URB_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU [URB] (Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_V_URB_SLIM";
		};
	};
	class 89th_BDU_R_URB_SLIM: VES_BDU_R_Evolved_Slim
	{
		displayName="[89th] BDU [URB](Rolled)(Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_R_V_URB_SLIM";
		};
	};
	class 89th_BDU_SNW_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU [SNW] (Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_V_SNW_SLIM";
		};
	};
	class 89th_BDU_R_SNW_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU [SNW](Rolled)(Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_R_V_SNW_SLIM";
		};
	};
	class 89th_BDU_DES_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU [DES] (Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_V_DES_SLIM";
		};
	};
	class 89th_BDU_R_DES_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU [DES](Rolled)(Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_R_V_DES_SLIM";
		};
	};
	class 89th_BDU_ARD_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU [ARD] (Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_V_ARD_SLIM";
		};
	};
	class 89th_BDU_R_ARD_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU [ARD](Rolled)(Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_R_V_ARD_SLIM";
		};
	};
	class 89th_BDU_R_LEGION_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU [LEGION](Rolled)(Slim)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_R_V_LEGION_SLIM";

		};
	};
};
class cfgVehicles
{
	class VES_BDU_V_Evolved_Slim;
	class VES_BDU_R_V_Evolved_SLIM;
	class 89th_BDU_V_WTS_SLIM: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Uniform\89th_WDL_CO.paa",
			"89th_Armor\Data\Uniform\89th_WDL_CO.paa"
		};
		uniformClass="89th_BDU_WTS_SLIM";
	};
	class 89th_BDU_V_URB_SLIM: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Uniform\89th_URB_CO.paa",
			"89th_Armor\Data\Uniform\89th_URB_CO.paa"
		};
		uniformClass="89th_BDU_URB_SLIM";
	};
	class 89th_BDU_V_SNW_SLIM: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Uniform\89th_SNW_CO.paa",
			"89th_Armor\Data\Uniform\89th_SNW_CO.paa"
		};
		uniformClass="89th_BDU_SNW_SLIM";
	};
	class 89th_BDU_V_DES_SLIM: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Uniform\89th_DES_CO.paa",
			"89th_Armor\Data\Uniform\89th_DES_CO.paa"
		};
		uniformClass="89th_BDU_DES_SLIM";
	};
	class 89th_BDU_V_ARD_SLIM: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Uniform\89th_ARD_CO.paa",
			"89th_Armor\Data\Uniform\89th_ARD_CO.paa"
		};
		uniformClass="89th_BDU_ARD_SLIM";
	};
	class 89th_BDU_R_V_WTS_SLIM: VES_BDU_R_V_Evolved_SLIM
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Uniform\89th_WDL_CO.paa",
			"89th_Armor\Data\Uniform\89th_WDL_CO.paa"
		};
		uniformClass="89th_BDU_R_WTS_SLIM";
	};
	class 89th_BDU_R_V_URB_SLIM: VES_BDU_R_V_Evolved_SLIM
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Uniform\89th_URB_CO.paa",
			"89th_Armor\Data\Uniform\89th_URB_CO.paa"
		};
		uniformClass="89th_BDU_R_URB_SLIM";
	};
	class 89th_BDU_R_V_SNW_SLIM: VES_BDU_R_V_Evolved_SLIM
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Uniform\89th_SNW_CO.paa",
			"89th_Armor\Data\Uniform\89th_SNW_CO.paa"
		};
		uniformClass="89th_BDU_R_SNW_SLIM";
	};
	class 89th_BDU_R_V_DES_SLIM: VES_BDU_R_V_Evolved_SLIM
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Uniform\89th_DES_CO.paa",
			"89th_Armor\Data\Uniform\89th_DES_CO.paa"
		};
		uniformClass="89th_BDU_R_DES_SLIM";
	};
	class 89th_BDU_R_V_ARD_SLIM: VES_BDU_R_V_Evolved_SLIM
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Uniform\89th_ARD_CO.paa",
			"89th_Armor\Data\Uniform\89th_ARD_CO.paa"
		};
		uniformClass="89th_BDU_R_ARD_SLIM";
	};
	class 89th_BDU_R_V_LEGION_SLIM: VES_BDU_R_V_Evolved_SLIM
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Uniform\89th_BDU_Legion.PAA",
			"89th_Armor\Data\Uniform\89th_BDU_Legion.PAA"
		};
		uniformClass="89th_BDU_R_LEGION_SLIM";

	};
};