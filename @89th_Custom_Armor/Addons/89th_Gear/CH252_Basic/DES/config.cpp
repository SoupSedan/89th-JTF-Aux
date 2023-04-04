class cfgPatches
{
	class 89th_CH252_patches_DES
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
			"89th_CH252A_Light_DES",
			"89th_CH252A_M_Light_DES",
			"89th_CH252A_RTO_Light_DES",
			"89th_CH252A_SLV_DES",
			"89th_CH252A_SLV_DES_dp",
			"89th_CH252A_GLD_DES",
			"89th_CH252A_GLD_DES_dp",
			"89th_CH252A_BLK_DES",
			"89th_CH252A_BLK_DES_dp",
			"89th_CH252A_BLU_DES",
			"89th_CH252A_BLU_DES_dp",
			"89th_CH252A_M_SLV_DES",
			"89th_CH252A_M_SLV_DES_dp",
			"89th_CH252A_M_GLD_DES",
			"89th_CH252A_M_GLD_DES_dp",
			"89th_CH252A_M_BLK_DES",
			"89th_CH252A_M_BLK_DES_dp",
			"89th_CH252A_M_BLU_DES",
			"89th_CH252A_M_BLU_DES_dp",
			"89th_CH252A_RTO_SLV_DES",
			"89th_CH252A_RTO_SLV_DES_dp",
			"89th_CH252A_RTO_GLD_DES",
			"89th_CH252A_RTO_GLD_DES_dp",
			"89th_CH252A_RTO_BLK_DES",
			"89th_CH252A_RTO_BLK_DES_dp",
			"89th_CH252A_RTO_BLU_DES",
			"89th_CH252A_RTO_BLU_DES_dp",
			"89th_CH252D_SLV_DES",
			"89th_CH252D_SLV_DES_dp",
			"89th_CH252D_GLD_DES",
			"89th_CH252D_GLD_DES_dp",
			"89th_CH252D_BLK_DES",
			"89th_CH252D_BLK_DES_dp",
			"89th_CH252D_BLU_DES",
			"89th_CH252D_BLU_DES_dp",
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
	class 89th_CH252A_Light_DES: 89th_CH252A_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Shelly, Edford, Vespade and Smackles";
		displayName="[89th] CH252A Light (DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
				""
			};
		};
	};
	class 89th_CH252A_M_Light_DES: 89th_CH252A_M_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Jake, Shelly, Vespade and Smackles";
		displayName="[89th] CH252A Light (Medic)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
				""
			};
		};
	};
	class 89th_CH252A_RTO_Light_DES: 89th_CH252A_RTO_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Rojas, Vespade";
		displayName="[89th] CH252A Light (RTO)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
				""
			};
		};
	};
	//Closed Face Helmets
	class 89th_CH252A_SLV_DES: 89th_CH252A
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_SLV_DES_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_GLD_DES: 89th_CH252A
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_GLD_DES_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLK_DES: 89th_CH252A
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_BLK_DES_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_DES: 89th_CH252A
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue){DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_DES_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_SLV_DES: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(Medic)(DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_M_SLV_DES_dp: 89th_CH252A_M_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(Medic)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_GLD_DES: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(Medic)(DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_M_GLD_DES_dp: 89th_CH252A_M_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(Medic)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_BLK_DES: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(Medic)(DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_M_BLK_DES_dp: 89th_CH252A_M_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(Medic)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_BLU_DES: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(Medic)(DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_BLU_DES_dp: 89th_CH252A_M_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(Medic)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_M_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_RTO_SLV_DES: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(Medic)(DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_RTO_SLV_DES_dp: 89th_CH252A_RTO_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(Medic)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_RTO_GLD_DES: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(Medic)(DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_RTO_GLD_DES_dp: 89th_CH252A_RTO_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(Medic)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_RTO_BLK_DES: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(Medic)(DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_RTO_BLK_DES_dp: 89th_CH252A_RTO_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(Medic)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_RTO_BLU_DES: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(Medic)(DES)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_RTO_BLU_DES_dp: 89th_CH252A_RTO_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(Medic)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252A_RTO_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	//ODST Helmets
	class 89th_CH252D_SLV_DES: 89th_CH252D
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Silver)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252D_DES.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252D_DES.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_SLV_DES_dp: 89th_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Silver)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252D_DES.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252D_DES.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_GLD_DES: 89th_CH252D
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Gold)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252D_DES.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252D_DES.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_GLD_DES_dp: 89th_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Gold)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252D_DES.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252D_DES.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_BLK_DES: 89th_CH252D
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Black)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252D_DES.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252D_DES.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_BLK_DES_dp: 89th_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Black)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252D_DES.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252D_DES.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_BLU_DES: 89th_CH252D
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Blue)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252D_DES.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252D_DES.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252D_BLU_DES_dp: 89th_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Blue)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\DES\89th_CH252D_DES.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\DES\89th_CH252D_DES.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
};