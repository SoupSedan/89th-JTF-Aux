class cfgPatches
{
	class 89th_CH252_patches_SNW
	{
		author="89th Mod Team";
		addonRootClass="89th_CH252_patches";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"89th_CH252_patches",
		};
		weapons[]=
		{
			"89th_CH252A_Light_SNW",
			"89th_CH252A_M_Light_SNW",
			"89th_CH252A_SLV_SNW",
			"89th_CH252A_SLV_SNW_dp",
			"89th_CH252A_GLD_SNW",
			"89th_CH252A_GLD_SNW_dp",
			"89th_CH252A_BLK_SNW",
			"89th_CH252A_BLK_SNW_dp",
			"89th_CH252A_BLU_SNW",
			"89th_CH252A_BLU_SNW_dp",
			"89th_CH252A_M_SLV_SNW",
			"89th_CH252A_M_SLV_SNW_dp",
			"89th_CH252A_M_GLD_SNW",
			"89th_CH252A_M_GLD_SNW_dp",
			"89th_CH252A_M_BLK_SNW",
			"89th_CH252A_M_BLK_SNW_dp",
			"89th_CH252A_M_BLU_SNW",
			"89th_CH252A_M_BLU_SNW_dp",
			"89th_CH252D_SLV_SNW",
			"89th_CH252D_SLV_SNW_dp",
			"89th_CH252D_GLD_SNW",
			"89th_CH252D_GLD_SNW_dp",
			"89th_CH252D_BLK_SNW",
			"89th_CH252D_BLK_SNW_dp",
			"89th_CH252D_BLU_SNW",
			"89th_CH252D_BLU_SNW_dp",
			"89th_CH252A_Light_11_SNW",
			"89th_CH252A_Light_12_SNW",
			"89th_CH252A_Light_13_SNW",
			"89th_CH252A_Light_21_SNW",
			"89th_CH252A_Light_22_SNW",
			"89th_CH252A_Light_23_SNW",
			"89th_CH252A_SLV_11_SNW",
			"89th_CH252A_SLV_11_SNW_dp",
			"89th_CH252A_GLD_11_SNW",
			"89th_CH252A_GLD_11_SNW_dp",
			"89th_CH252A_BLK_11_SNW",
			"89th_CH252A_BLK_11_SNW_dp",
			"89th_CH252A_BLU_11_SNW",
			"89th_CH252A_BLU_11_SNW_dp",
			"89th_CH252A_SLV_12_SNW",
			"89th_CH252A_SLV_12_SNW_dp",
			"89th_CH252A_GLD_12_SNW",
			"89th_CH252A_GLD_12_SNW_dp",
			"89th_CH252A_BLK_12_SNW",
			"89th_CH252A_BLK_12_SNW_dp",
			"89th_CH252A_BLU_12_SNW",
			"89th_CH252A_BLU_12_SNW_dp",
			"89th_CH252A_SLV_13_SNW",
			"89th_CH252A_SLV_13_SNW_dp",
			"89th_CH252A_GLD_13_SNW",
			"89th_CH252A_GLD_13_SNW_dp",
			"89th_CH252A_BLK_13_SNW",
			"89th_CH252A_BLK_13_SNW_dp",
			"89th_CH252A_BLU_13_SNW",
			"89th_CH252A_BLU_13_SNW_dp",
			"89th_CH252A_SLV_21_SNW",
			"89th_CH252A_SLV_21_SNW_dp",
			"89th_CH252A_GLD_21_SNW",
			"89th_CH252A_GLD_21_SNW_dp",
			"89th_CH252A_BLK_21_SNW",
			"89th_CH252A_BLK_21_SNW_dp",
			"89th_CH252A_BLU_21_SNW",
			"89th_CH252A_BLU_21_SNW_dp",
			"89th_CH252A_SLV_22_SNW",
			"89th_CH252A_SLV_22_SNW_dp",
			"89th_CH252A_GLD_22_SNW",
			"89th_CH252A_GLD_22_SNW_dp",
			"89th_CH252A_BLK_22_SNW",
			"89th_CH252A_BLK_22_SNW_dp",
			"89th_CH252A_BLU_22_SNW",
			"89th_CH252A_BLU_22_SNW_dp",
			"89th_CH252A_SLV_23_SNW",
			"89th_CH252A_SLV_23_SNW_dp",
			"89th_CH252A_GLD_23_SNW",
			"89th_CH252A_GLD_23_SNW_dp",
			"89th_CH252A_BLK_23_SNW",
			"89th_CH252A_BLK_23_SNW_dp",
			"89th_CH252A_BLU_23_SNW",
			"89th_CH252A_BLU_23_SNW_dp"
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
	class 89th_CH252A_Light_SNW: 89th_CH252A_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Shelly, Edford, Vespade and Smackles";
		displayName="[89th] CH252A Light (SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
				""
			};
		};
	};
	class 89th_CH252A_M_Light_SNW: 89th_CH252A_M_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Jake, Shelly, Vespade and Smackles";
		displayName="[89th] CH252A Light (Medic)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
				""
			};
		};
	};
	//Closed Face Helmets
	class 89th_CH252A_SLV_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_SLV_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_GLD_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_GLD_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLK_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_BLK_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_SLV_SNW: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(Medic)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_M_SLV_SNW_dp: 89th_CH252A_M_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(Medic)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_GLD_SNW: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(Medic)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_M_GLD_SNW_dp: 89th_CH252A_M_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Gold)(Medic)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_BLK_SNW: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(Medic)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_M_BLK_SNW_dp: 89th_CH252A_M_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Black)(Medic)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_BLU_SNW: 89th_CH252A_M
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(Medic)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M_BLU_SNW_dp: 89th_CH252A_M_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Blue)(Medic)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_M_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	//ODST Helmets
	class 89th_CH252D_SLV_SNW: 89th_CH252D
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Silver)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252D_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252D_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_SLV_SNW_dp: 89th_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Silver)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252D_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252D_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_GLD_SNW: 89th_CH252D
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Gold)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252D_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252D_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_GLD_SNW_dp: 89th_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Gold)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252D_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252D_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_BLK_SNW: 89th_CH252D
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Black)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252D_SNW.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252D_SNW.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_BLK_SNW_dp: 89th_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Black)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252D_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252D_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	class 89th_CH252D_BLU_SNW: 89th_CH252D
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Blue)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252D_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252D_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252D_BLU_SNW_dp: 89th_CH252D_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Blue)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252D_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252D_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	//Open-faced Squad Helmets
	class 89th_CH252A_Light_11_SNW: 89th_CH252A_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Rojas, Vespade";
		displayName="[89th] CH252A Light (1-1)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
				""
			};
		};
	};
	class 89th_CH252A_Light_12_SNW: 89th_CH252A_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Rojas, Vespade";
		displayName="[89th] CH252A Light (1-2)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
				""
			};
		};
	};
	class 89th_CH252A_Light_13_SNW: 89th_CH252A_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Rojas, Vespade";
		displayName="[89th] CH252A Light (1-3)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
				""
			};
		};
	};
	class 89th_CH252A_Light_21_SNW: 89th_CH252A_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Rojas, Vespade";
		displayName="[89th] CH252A Light (2-1)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
				""
			};
		};
	};
	class 89th_CH252A_Light_22_SNW: 89th_CH252A_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Rojas, Vespade";
		displayName="[89th] CH252A Light (2-2)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
				""
			};
		};
	};
	class 89th_CH252A_Light_23_SNW: 89th_CH252A_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Rojas, Vespade";
		displayName="[89th] CH252A Light (2-3)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
				""
			};
		};
	};
	//Vac Squad Helmets
	class 89th_CH252A_SLV_11_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Silver)(1-1)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_SLV_11_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Silver)(1-1)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_GLD_11_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Gold)(1-1)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_GLD_11_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Gold)(1-1)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLK_11_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Black)(1-1)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_BLK_11_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Black)(1-1)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_11_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Blue)(1-1)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_11_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Blue)(1-1)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_11_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_SLV_12_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Silver)(1-2)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_SLV_12_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Silver)(1-2)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_GLD_12_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Gold)(1-2)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_GLD_12_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Gold)(1-2)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLK_12_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Black)(1-2)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_BLK_12_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Black)(1-2)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_12_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Blue)(1-2)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_12_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Blue)(1-2)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_12_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_SLV_13_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Silver)(1-3)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_SLV_13_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Silver)(1-3)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_GLD_13_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Gold)(1-3)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_GLD_13_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Gold)(1-3)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLK_13_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Black)(1-3)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_BLK_13_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Black)(1-3)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_13_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Blue)(1-3)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_13_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Blue)(1-3)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_13_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_SLV_21_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Silver)(2-1)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_SLV_21_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Silver)(2-1)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_GLD_21_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Gold)(2-1)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_GLD_21_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Gold)(2-1)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLK_21_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Black)(2-1)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_BLK_21_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Black)(2-1)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_21_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Blue)(2-1)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_21_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Blue)(2-1)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_21_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_SLV_22_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Silver)(2-2)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_SLV_22_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Silver)(2-2)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_GLD_22_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Gold)(2-2)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_GLD_22_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Gold)(2-2)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLK_22_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Black)(2-2)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_BLK_22_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Black)(2-2)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_22_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Blue)(2-2)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_22_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Blue)(2-2)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_22_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_SLV_23_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Silver)(2-3)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_SLV_23_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Silver)(2-3)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_GLD_23_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Gold)(2-3)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_GLD_23_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Gold)(2-3)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLK_23_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Black)(2-3)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_BLK_23_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Black)(2-3)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_23_SNW: 89th_CH252A
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Blue)(2-3)(SNW)";
		scope=2;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_BLU_23_SNW_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		author="Flips, Rojas Vespade";
		displayName="[89th] CH252A (Blue)(2-3)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\SNW\89th_CH252A_23_SNW.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
};