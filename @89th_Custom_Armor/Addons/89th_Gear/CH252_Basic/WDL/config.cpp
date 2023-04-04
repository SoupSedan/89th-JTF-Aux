class cfgPatches
{
	class 89th_CH252_patches_WDL
	{
		author="89th Mod Team";
		addonRootClass="89th_CH252_patches";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"89th_CH252_patches",
		};
		units[] = {};
		weapons[]=
		{
			"89th_CH252A_Light_WDL",
			"89th_CH252A_M_Light_WDL",
			"89th_CH252A_RTO_Light_WDL",
			"89th_CH252A_SLV_WDL",
			"89th_CH252A_SLV_WDL_dp",
			"89th_CH252A_GLD_WDL",
			"89th_CH252A_GLD_WDL_dp",
			"89th_CH252A_BLK_WDL",
			"89th_CH252A_BLK_WDL_dp",
			"89th_CH252A_BLU_WDL",
			"89th_CH252A_BLU_WDL_dp",
			"89th_CH252A_M_SLV_WDL",
			"89th_CH252A_M_SLV_WDL_dp",
			"89th_CH252A_M_GLD_WDL",
			"89th_CH252A_M_GLD_WDL_dp",
			"89th_CH252A_M_BLK_WDL",
			"89th_CH252A_M_BLK_WDL_dp",
			"89th_CH252A_M_BLU_WDL",
			"89th_CH252A_M_BLU_WDL_dp",
			"89th_CH252A_RTO_SLV_WDL",
			"89th_CH252A_RTO_SLV_WDL_dp",
			"89th_CH252A_RTO_GLD_WDL",
			"89th_CH252A_RTO_GLD_WDL_dp",
			"89th_CH252A_RTO_BLK_WDL",
			"89th_CH252A_RTO_BLK_WDL_dp",
			"89th_CH252A_RTO_BLU_WDL",
			"89th_CH252A_RTO_BLU_WDL_dp",
			"89th_CH252D_SLV_WDL",
			"89th_CH252D_SLV_WDL_dp",
			"89th_CH252D_GLD_WDL",
			"89th_CH252D_GLD_WDL_dp",
			"89th_CH252D_BLK_WDL",
			"89th_CH252D_BLK_WDL_dp",
			"89th_CH252D_BLU_WDL",
			"89th_CH252D_BLU_WDL_dp",
		};
	};
};
class cfgWeapons
{
	class 89th_CH252A_Light;
	class 89th_CH252A_M_Light;
	class 89th_CH252A_RTO_Light;
	class 89th_CH252A;
	class 89th_CH252A_dp;
	class 89th_CH252A_M;
	class 89th_CH252A_M_dp;
	class 89th_CH252A_RTO;
	class 89th_CH252A_RTO_dp;
	class 89th_CH252D;
	class 89th_CH252D_dp;
	class ItemInfo;
	//Open-Faced Helmet
	class 89th_CH252A_Light_WDL: 89th_CH252A_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Shelly, Edford, Vespade and Smackles";
		displayName="[89th] CH252A Light (WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
				""
			};
		};
	};
	class 89th_CH252A_M_Light_WDL: 89th_CH252A_M_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Jake, Shelly, Vespade and Smackles";
		displayName="[89th] CH252A Light (Medic)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
				""
			};
		};
	};
	class 89th_CH252A_RTO_Light_WDL: 89th_CH252A_RTO_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Rojas, Vespade";
		displayName="[89th] CH252A Light (RTO)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
				""
			};
		};
	};
	//Closed Face Helmets
	class 89th_CH252A_SLV_WDL: 89th_CH252A
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(WDL)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_SLV_WDL_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_GLD_WDL: 89th_CH252A
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(WDL)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_GLD_WDL_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLK_WDL: 89th_CH252A
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(WDL)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_BLK_WDL_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_WDL: 89th_CH252A
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue){WDL)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_WDL_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_SLV_WDL: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(Medic)(WDL)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_M_SLV_WDL_dp: 89th_CH252A_M_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(Medic)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_GLD_WDL: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(Medic)(WDL)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_M_GLD_WDL_dp: 89th_CH252A_M_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(Medic)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_BLK_WDL: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(Medic)(WDL)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_M_BLK_WDL_dp: 89th_CH252A_M_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(Medic)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_BLU_WDL: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(Medic)(WDL)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_BLU_WDL_dp: 89th_CH252A_M_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(Medic)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_M_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_RTO_SLV_WDL: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(Medic)(WDL)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_RTO_SLV_WDL_dp: 89th_CH252A_RTO_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(Medic)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_RTO_GLD_WDL: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(Medic)(WDL)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_RTO_GLD_WDL_dp: 89th_CH252A_RTO_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(Medic)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_RTO_BLK_WDL: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(Medic)(WDL)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_RTO_BLK_WDL_dp: 89th_CH252A_RTO_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(Medic)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_RTO_BLU_WDL: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(Medic)(WDL)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_RTO_BLU_WDL_dp: 89th_CH252A_RTO_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(Medic)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252A_RTO_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	//ODST Helmets
	class 89th_CH252D_SLV_WDL: 89th_CH252D
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Silver)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252D_WDL.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252D_WDL.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_SLV_WDL_dp: 89th_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Silver)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252D_WDL.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252D_WDL.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_GLD_WDL: 89th_CH252D
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Gold)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252D_WDL.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252D_WDL.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_GLD_WDL_dp: 89th_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Gold)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252D_WDL.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252D_WDL.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_BLK_WDL: 89th_CH252D
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Black)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252D_WDL.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252D_WDL.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_BLK_WDL_dp: 89th_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Black)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252D_WDL.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252D_WDL.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_BLU_WDL: 89th_CH252D
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Blue)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252D_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252D_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252D_BLU_WDL_dp: 89th_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Blue)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\WDL\89th_CH252D_WDL.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\WDL\89th_CH252D_WDL.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
};