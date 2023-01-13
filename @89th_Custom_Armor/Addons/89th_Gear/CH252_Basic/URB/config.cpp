class cfgPatches
{
	class 89th_CH252_patches_URB
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
			"89th_CH252A_Light_URB",
			"89th_CH252A_M_Light_URB",
			"89th_CH252A_SLV_URB",
			"89th_CH252A_SLV_URB_dp",
			"89th_CH252A_GLD_URB",
			"89th_CH252A_GLD_URB_dp",
			"89th_CH252A_BLK_URB",
			"89th_CH252A_BLK_URB_dp",
			"89th_CH252A_BLU_URB",
			"89th_CH252A_BLU_URB_dp",
			"89th_CH252A_M_SLV_URB",
			"89th_CH252A_M_SLV_URB_dp",
			"89th_CH252A_M_GLD_URB",
			"89th_CH252A_M_GLD_URB_dp",
			"89th_CH252A_M_BLK_URB",
			"89th_CH252A_M_BLK_URB_dp",
			"89th_CH252A_M_BLU_URB",
			"89th_CH252A_M_BLU_URB_dp",
			"89th_CH252D_SLV_URB",
			"89th_CH252D_SLV_URB_dp",
			"89th_CH252D_GLD_URB",
			"89th_CH252D_GLD_URB_dp",
			"89th_CH252D_BLK_URB",
			"89th_CH252D_BLK_URB_dp",
			"89th_CH252D_BLU_URB",
			"89th_CH252D_BLU_URB_dp",
		};
	};
};
class cfgWeapons
{
	class 89th_CH252A_Light;
	class 89th_CH252A_M_Light;
	class 89th_CH252A;
	class 89th_CH252A_dp;
	class 89th_CH252A_M;
	class 89th_CH252A_M_dp;
	class 89th_CH252D;
	class 89th_CH252D_dp;
	class ItemInfo;
	//Open-Faced Helmet
	class 89th_CH252A_Light_URB: 89th_CH252A_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Shelly, Edford, Vespade and Smackles";
		displayName="[89th] CH252A Light (URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
				""
			};
		};
	};
	class 89th_CH252A_M_Light_URB: 89th_CH252A_M_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Jake, Shelly, Vespade and Smackles";
		displayName="[89th] CH252A Light (Medic)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
				""
			};
		};
	};
	//Closed Face Helmets
	class 89th_CH252A_SLV_URB: 89th_CH252A
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(URB)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_SLV_URB_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_GLD_URB: 89th_CH252A
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(URB)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_GLD_AR_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLK_URB: 89th_CH252A
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(URB)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_BLK_URB_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_URB: 89th_CH252A
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue){URB)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_URB_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_SLV_URB: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(Medic)(URB)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_M_SLV_URB_dp: 89th_CH252A_M_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(Medic)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_GLD_URB: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(Medic)(URB)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_M_GLD_URB_dp: 89th_CH252A_M_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(Medic)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_BLK_URB: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(Medic)(URB)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_M_BLK_URB_dp: 89th_CH252A_M_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(Medic)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_BLU_URB: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(Medic)(URB)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_BLU_URB_dp: 89th_CH252A_M_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(Medic)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252A_M_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	//ODST Helmets
	class 89th_CH252D_SLV_URB: 89th_CH252D
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Silver)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252D_URB.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252D_URB.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_SLV_URB_dp: 89th_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Silver)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252D_URB.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252D_URB.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_GLD_URB: 89th_CH252D
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Gold)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252D_URB.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252D_URB.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_GLD_URB_dp: 89th_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Gold)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252D_URB.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252D_URB.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_BLK_URB: 89th_CH252D
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Black)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252D_URB.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252D_URB.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_BLK_URB_dp: 89th_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Black)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252D_URB.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252D_URB.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_BLU_URB: 89th_CH252D
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Blue)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252D_URB.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252D_URB.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252D_BLU_URB_dp: 89th_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Blue)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\URB\89th_CH252D_URB.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\URB\89th_CH252D_URB.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
};