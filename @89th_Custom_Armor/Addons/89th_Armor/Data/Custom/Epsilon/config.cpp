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
	class VES_CH252D
	class VES_CH252D_dp
	//Helmet
	class 89th_CH252D_Epsilon_ARD: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Epsilon)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_ARD_CO.paa",
			"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_ARD_CO.paa",
				"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_Epsilon_ARD_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Epsilon)(ARD)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_ARD_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_ARD_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"

			};
		};
	};

class 89th_CH252D_Epsilon_DES: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Epsilon)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_DES_CO.paa",
			"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_DES_CO.paa",
				"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_Epsilon_DES_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Epsilon)(DES)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_DES_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_DES_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};

class 89th_CH252D_Epsilon_SNW: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Epsilon)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_SNW_CO.paa",
			"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_SNW_CO.paa",
				"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_Epsilon_SNW_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Epsilon)(SNW)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_SNW_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_SNW_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};

class 89th_CH252D_Epsilon_WDL: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Epsilon)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_WDL_CO.paa",
			"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_WDL_CO.paa",
				"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_Epsilon_WDL_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Epsi)(WDL)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_WDL_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_WDL_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};

class 89th_CH252D_Epsilon_URB: VES_CH252D
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Epsilon)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_URB_CO.paa",
			"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_URB_CO.paa",
				"89th_Armor\Data\Custom\Epsilon\89th_GoliathEpsi_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_Epsilon_URB_dp: VES_CH252D_dp
	{
		dlc="89thJTF";
		author="Ice, Vespade";
		displayName="[89th] CH252D (Epsilon)(URB)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_URB_CO.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Epsilon\89th_EPSILON_URB_CO.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"
			};
		};
	};
	//Vest
};