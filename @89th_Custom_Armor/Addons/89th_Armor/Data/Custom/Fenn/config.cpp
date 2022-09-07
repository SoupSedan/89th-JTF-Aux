class cfgPatches
{
	class 89th_Armor_Custom
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
			"OPTRE_Core",
		};
	};
};
class cfgWeapons
{
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_MAR_Vacuum_dp;
	//Helmet
	class 89th_Marine_Fenn_WDL_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Fenn)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_WDL_CO.paa",
			"V_FZ_Armor\Data\Helmets\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_WDL_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Fenn_WDL_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="CH252 (Fenn)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_WDL_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_WDL_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Fenn_URB_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Fenn)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_URB_CO.paa",
			"V_FZ_Armor\Data\Helmets\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_URB_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Fenn_URB_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="CH252 (Fenn)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_URB_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_URB_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Fenn_DES_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Fenn)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_DES_CO.paa",
			"V_FZ_Armor\Data\Helmets\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_DES_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Fenn_DES_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="CH252 (Fenn)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_DES_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_DES_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Fenn_ARD_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thCUArmor";
		scope=2;
		author="Christmas, Soup";
		displayName="[89th] CH252 (Fenn)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_ARD_CO.paa",
			"V_FZ_Armor\Data\Helmets\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_ARD_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Fenn_ARD_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thCUArmor";
		scope=2;
		author="Christmas, Soup";
		displayName="CH252 (Fenn)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_ARD_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_ARD_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"

			};
		};
	};
	class 89th_Marine_Fenn_SNW_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thCUArmor";
		scope=2;
		author="Christmas, Soup";
		displayName="[89th] CH252 (Fenn)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_SNW_CO.paa",
			"V_FZ_Armor\Data\Helmets\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_SNW_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Fenn_SNW_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thCUArmor";
		scope=2;
		author="Christmas, Soup";
		displayName="CH252 (Fenn)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_SNW_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Fenn\89th_marine_helmet_Fenn_SNW_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
};