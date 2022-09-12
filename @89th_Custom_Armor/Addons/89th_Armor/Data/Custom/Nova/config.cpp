class cfgPatches
{
	class 89th_Custom_Nova
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
	class VES_CH252_MAR_Light;
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_MAR_Vacuum_dp;
	class VES_S1ONIR;
	class VES_S1ONIR_dp;
	class VES_M52D_Rifleman;
	class VES_M52D_Demolitions;
	class VES_M52A_MAR_Rifleman_C;
	class VES_CH252D;
	class VES_CH252D_dp;
	class OPTRE_UNSC_M52A_Armor_Rifleman_MAR;
	class 89th_M52A_TeamLeader;
	class 89th_M52A_MAR_Sniper;
	class Ves_CH252_MAR_Crew;
	class OPTRE_UNSC_M52D_Armor_Light;
	class ItemInfo;
	class VestItem;
//Nova Helmet
	class 89th_Marine_Nova_WDL_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Nova)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_wdl_CO.paa",
			"V_FZ_Armor\Data\Helmets\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_wdl_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Nova_WDL_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="CH252 (Nova)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_wdl_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_wdl_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Nova_URB_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Nova)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_urb_CO.paa",
			"V_FZ_Armor\Data\Helmets\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_urb_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Nova_URB_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="CH252 (Nova)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_urb_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_urb_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Nova_ARD_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Nova)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_ard_CO.paa",
			"V_FZ_Armor\Data\Helmets\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_ard_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Nova_ARD_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="CH252 (Nova)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_ard_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_ard_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Nova_SNW_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Nova)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_snw_CO.paa",
			"V_FZ_Armor\Data\Helmets\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_snw_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Nova_SNW_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="CH252 (Nova)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_snw_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_snw_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_Nova_DES_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Nova)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_des_CO.paa",
			"V_FZ_Armor\Data\Helmets\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_des_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_Nova_DES_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thCUArmor";
		scope=2;
		author="Soup, Vespade";
		displayName="CH252 (Nova)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_des_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Nova\89th_Nova_helmet_des_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
};
