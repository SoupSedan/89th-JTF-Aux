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
	class VES_CH252_MAR_Light;
	class ItemInfo;
	//Helmet 
	class 89th_Marine_URB_Meszaros_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, Vespade";
		displayName="[89th] CH252 (Meszaros)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_URB_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_URB_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_WDL_Meszaros_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Flips, Vespade";
		displayName="[89th] CH252 (Meszaros)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_WDL_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_WDL_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_SNW_Meszaros_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Flips, Vespade";
		displayName="[89th] CH252 (Meszaros)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_SNW_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_SNW_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_DES_Meszaros_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Flips, Vespade";
		displayName="[89th] CH252 (Meszaros)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_DES_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_DES_CO.paa",
				""
			};
		};
	};
	class 89th_Marine_ARD_Meszaros_CH252: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Flips, Vespade";
		displayName="[89th] CH252 (Meszaros)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_ARD_CO.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Armor\Data\Custom\Meszaros\89th_Meszaros_helmet_ARD_CO.paa",
				""
			};
		};
	};
	//Vest
};