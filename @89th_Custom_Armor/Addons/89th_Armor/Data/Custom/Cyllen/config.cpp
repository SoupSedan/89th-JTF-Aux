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
	class 89th_Marine_VAC_Cyllen_WDL_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Cyllen)(WDL)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_WDL.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_WDL.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen_WDL_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Cyllen)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen_URB_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Cyllen)(URB)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_URB.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_URB.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen_URB_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Cyllen)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen_SNW_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Cyllen)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen_SNW_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Cyllen)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen2_DES_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Cyllen)(DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_DES.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_DES.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen2_DES_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Cyllen)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen_ARD_ECH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Cyllen)(ARD)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_ARD.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_ARD.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_Marine_VAC_Cyllen_ARD_ECH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, Shelly, Vespade";
		displayName="[89th] CH252 (Cyllen)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_ARD.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Cyllen\89th_marine_helmet_Cyllen_ARD.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	//Vest
};