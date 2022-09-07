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
	class 89th_Marine_MadMike_WDL_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="[89th] CH252 (MadMike)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_WDL_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_WDL_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_MadMike_WDL_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="CH252 (MadMike)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_WDL_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_WDL_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_MadMike_URB_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="[89th] CH252 (MadMike)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_URB_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_URB_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_MadMike_URB_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="CH252 (MadMike)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_URB_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_URB_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_MadMike_DES_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="[89th] CH252 (MadMike)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_DES_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_DES_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_MadMike_DES_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="CH252 (MadMike)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_DES_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_DES_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_MadMike_ARD_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="[89th] CH252 (MadMike)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_ARD_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_ARD_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_MadMike_ARD_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="CH252 (MadMike)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_ARD_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_ARD_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_MadMike_SNW_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="[89th] CH252 (MadMike)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_SNW_CO.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_SNW_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_MadMike_SNW_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="CH252 (MadMike)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\MadMike\89th_Marine_MadMike_Helmet_SNW_CO.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\MadMike\89th_marine_MadMike_helmet_SNW_CO.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	//Vest
};