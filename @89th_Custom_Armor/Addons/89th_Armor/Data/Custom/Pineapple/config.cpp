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
	class ItemInfo;
	//Helmet 
	class 89th_Marine_WDL_VAC_Pineapple_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Pineapple)(WDL)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_WDL_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_WDL_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_Marine_WDL_VAC_Pineapple_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Pineapple)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_WDL_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_WDL_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_URB_VAC_Pineapple_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Pineapple)(URB)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_URB_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_URB_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_Marine_URB_VAC_Pineapple_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Pineapple)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_URB_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_URB_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_SNW_VAC_Pineapple_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Pineapple)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_SNW_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_SNW_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_Marine_SNW_VAC_Pineapple_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Pineapple)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_SNW_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_SNW_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_DES_VAC_Pineapple_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Pineapple)(DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_DES_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_DES_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_Marine_DES_VAC_Pineapple_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Pineapple)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_DES_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_DES_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_ARD_VAC_Pineapple_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Pineapple)(ARD)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_ARD_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_ARD_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_Marine_ARD_VAC_Pineapple_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Pineapple)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_ARD_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Pineapple\89th_marine_helmet_Pineapple_ARD_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	//Vest
};