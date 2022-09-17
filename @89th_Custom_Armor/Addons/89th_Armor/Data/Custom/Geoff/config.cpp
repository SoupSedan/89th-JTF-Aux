class cfgPatches
{
	class 89th_Geoff_Custom
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
	class VES_M52D_Rifleman;
	class ItemInfo;
	class VestItem;
	//Helmet
	class 89th_Marine_Geoff_WDL_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Geoff)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Geoff\89th_geoff_helmet_WDL_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_wdl_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Geoff_WDL_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="CH252 (Geoff)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_wdl_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_wdl_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Geoff_URB_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Geoff)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_urb_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_urb_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Geoff_URB_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="CH252 (Geoff)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_urb_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_urb_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Geoff_DES_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Geoff)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_des_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_des_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Geoff_DES_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="CH252 (Geoff)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_des_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_des_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Geoff_ARD_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thCUArmor";
		scope=2;
		author="Christmas, Soup";
		displayName="[89th] CH252 (Geoff)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_ard_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_ard_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Geoff_ARD_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thCUArmor";
		scope=2;
		author="Christmas, Soup";
		displayName="CH252 (Geoff)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_ard_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_ard_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Geoff_SNW_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thCUArmor";
		scope=2;
		author="Christmas, Soup";
		displayName="[89th] CH252 (Geoff)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_snw_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_snw_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Geoff_SNW_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thCUArmor";
		scope=2;
		author="Christmas, Soup";
		displayName="CH252 (Geoff)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_snw_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Geoff\89th_Geoff_helmet_snw_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
};
