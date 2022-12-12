class cfgPatches
{
	class 89th_BDU_patch
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
	class UniformItem;
	class 89th_BDU_WDL_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU (WDL)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_V_WDL_SLIM";
		};
	};
	class 89th_BDU_R_WDL_SLIM: VES_BDU_R_Evolved_Slim
	{
		displayName="[89th] BDU Rolled (WDL)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_R_V_WDL_SLIM";
		};
	};
	class 89th_BDU_URB_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU (URB)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_V_URB_SLIM";
		};
	};
	class 89th_BDU_R_URB_SLIM: VES_BDU_R_Evolved_Slim
	{
		displayName="[89th] BDU Rolled (URB)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_R_V_URB_SLIM";
		};
	};
	class 89th_BDU_SNW_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU (SNW)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_V_SNW_SLIM";
		};
	};
	class 89th_BDU_R_SNW_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU Rollled (SNW)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_R_V_SNW_SLIM";
		};
	};
	class 89th_BDU_DES_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU (DES)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_V_DES_SLIM";
		};
	};
	class 89th_BDU_R_DES_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU [Rolled (DES)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_R_V_DES_SLIM";
		};
	};
	class 89th_BDU_ARD_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU (ARD)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_V_ARD_SLIM";
		};
	};
	class 89th_BDU_R_ARD_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU Rolled (ARD)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_R_V_ARD_SLIM";
		};
	};
	class 89th_BDU_LEGION_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU Rolled (Legion)";
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
			containerClass="Supply200";
			uniformClass="89th_BDU_V_LEGION_SLIM";

		};
	};
	class 89th_BDU_R_LEGION_SLIM: VES_BDU_Evolved_Slim
	{
		displayName="[89th] BDU (Legion)";
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
	class VES_BDU_R_V_Evolved_Slim;
	class 89th_BDU_V_WDL_SLIM: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\BDU\89th_BDU_WDL.paa",
			"89th_Gear\BDU\89th_BDU_WDL.paa"
		};
		uniformClass="89th_BDU_WDL_SLIM";
	};
	class 89th_BDU_V_URB_SLIM: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\BDU\89th_BDU_URB.paa",
			"89th_Gear\BDU\89th_BDU_URB.paa"
		};
		uniformClass="89th_BDU_URB_SLIM";
	};
	class 89th_BDU_V_SNW_SLIM: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\BDU\89th_BDU_SNW.paa",
			"89th_Gear\BDU\89th_BDU_SNW.paa"
		};
		uniformClass="89th_BDU_SNW_SLIM";
	};
	class 89th_BDU_V_DES_SLIM: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\BDU\89th_BDU_DES.paa",
			"89th_Gear\BDU\89th_BDU_DES.paa"
		};
		uniformClass="89th_BDU_DES_SLIM";
	};
	class 89th_BDU_V_ARD_SLIM: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\BDU\89th_BDU_ARD.paa",
			"89th_Gear\BDU\89th_BDU_ARD.paa"
		};
		uniformClass="89th_BDU_ARD_SLIM";
	};
	class 89th_BDU_R_V_WDL_SLIM: VES_BDU_R_V_Evolved_SLIM
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\BDU\89th_BDU_WDL.paa",
			"89th_Gear\BDU\89th_BDU_WDL.paa"
		};
		uniformClass="89th_BDU_R_WTS_SLIM";
	};
	class 89th_BDU_R_V_URB_SLIM: VES_BDU_R_V_Evolved_SLIM
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\BDU\89th_BDU_URB.paa",
			"89th_Gear\BDU\89th_BDU_URB.paa"
		};
		uniformClass="89th_BDU_R_URB_SLIM";
	};
	class 89th_BDU_R_V_SNW_SLIM: VES_BDU_R_V_Evolved_SLIM
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\BDU\89th_BDU_SNW.paa",
			"89th_Gear\BDU\89th_BDU_SNW.paa"
		};
		uniformClass="89th_BDU_R_SNW_SLIM";
	};
	class 89th_BDU_R_V_DES_SLIM: VES_BDU_R_V_Evolved_SLIM
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\BDU\89th_BDU_DES.paa",
			"89th_Gear\BDU\89th_BDU_DES.paa"
		};
		uniformClass="89th_BDU_R_DES_SLIM";
	};
	class 89th_BDU_R_V_ARD_SLIM: VES_BDU_R_V_Evolved_SLIM
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\BDU\89th_BDU_ARD.paa",
			"89th_Gear\BDU\89th_BDU_ARD.paa"
		};
		uniformClass="89th_BDU_R_ARD_SLIM";
	};
	class 89th_BDU_V_LEGION_SLIM: VES_BDU_R_V_Evolved_SLIM
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\BDU\89th_BDU_Legion.paa",
			"89th_Gear\BDU\89th_BDU_Legion.paa"
		};
		uniformClass="89th_BDU_LEGION_SLIM";
	};
	class 89th_BDU_R_V_LEGION_SLIM: VES_BDU_R_V_Evolved_SLIM
	{
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\BDU\89th_BDU_Legion.paa",
			"89th_Gear\BDU\89th_BDU_Legion.paa"
		};
		uniformClass="89th_BDU_R_LEGION_SLIM";
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class 89th_BDU
		{
			label="[89th] BDU";
			author="89th Mod Team";
			options[]=
			{
				"style",
				"camo"
			};
			class style
			{
				label="Style";
				alwaysSelectable=2;
				values[]=
				{
					"normal",
					"rolled"
				};
				class normal
				{
					label="Standard";
				};
				class rolled
				{
					label="Rolled";
				};
			};
			class camo
			{
				label="Camo";
				alwaysSelectable=1;
				values[]=
				{
					"ARD",
					"DES",
					"SNW",
					"URB",
					"WDL",
					"Legion"
				};
				class ARD
				{
					label="Arid";
					image="#(rgb,8,8,3)color(0.278,0.243,0.149,1)";
				};
				class DES
				{
					label="Desert";
					image="#(rgb,8,8,3)color(0.431,0.369,0.302,1)";
				};
				class SNW
				{
					label="Snow";
					image="#(rgb,8,8,3)color(0.882,0.894,0.902,1)";
				};
				class URB
				{
					label="Urban";
					image="#(rgb,8,8,3)color(0.192,0.212,0.259,1)";
				};
				class WDL
				{
					label="Woodland";
					image="#(rgb,8,8,3)color(0.118,0.137,0.020,1)";
				};
				class legion
				{
					label="Legion";
					image="89th_Core\Emblems\Legion.paa"
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class 89th_BDU_ARD_SLIM
		{
			model="89th_BDU";
			style="normal";
			camo="ARD";
		};
		class 89th_BDU_R_ARD_SLIM
		{
			model="89th_BDU";
			style="rolled";
			camo="ARD";
		};
		class 89th_BDU_DES_SLIM
		{
			model="89th_BDU";
			style="normal";
			camo="DES";
		};
		class 89th_BDU_R_DES_SLIM
		{
			model="89th_BDU";
			style="rolled";
			camo="DES";
		};
		class 89th_BDU_SNW_SLIM
		{
			model="89th_BDU";
			style="normal";
			camo="SNW";
		};
		class 89th_BDU_R_SNW_SLIM
		{
			model="89th_BDU";
			style="rolled";
			camo="SNW";
		};
		class 89th_BDU_URB_SLIM
		{
			model="89th_BDU";
			style="normal";
			camo="URB";
		};
		class 89th_BDU_R_URB_SLIM
		{
			model="89th_BDU";
			style="rolled";
			camo="URB";
		};
		class 89th_BDU_WDL_SLIM
		{
			model="89th_BDU";
			style="normal";
			camo="WDL";
		};
		class 89th_BDU_R_WDL_SLIM
		{
			model="89th_BDU";
			style="rolled";
			camo="WDL";
		};
		class 89th_BDU_Legion_SLIM
		{
			model="89th_BDU";
			style="normal";
			camo="Legion";
		};
		class 89th_BDU_R_Legion_SLIM
		{
			model="89th_BDU";
			style="rolled";
			camo="Legion";
		};
	};
};
	
