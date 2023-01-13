class cfgPatches
{
	class 89th_CH252_Joker
	{
		author="89th Mod Team";
		addonRootClass="89th_CH252_patches";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"89th_CH252_patches",
			"V_FZ_Armor"
		};
		units[] = {};
		weapons[]=
		{
			"89th_S1ONIR_Joker",
			"89th_S1ONIR_Joker_dp"
		};
	};
};
class cfgWeapons
{
	class VES_S1ONIR;
	class VES_S1ONIR_dp;
	class ItemInfo;
	class 89th_S1ONIR_Joker: VES_S1ONIR
	{
		dlc="89thJTF";
		author="Flips, Vespade";
		displayName="[89th] S1/ONI/R (Joker)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\Ch252_Custom\Joker\89th_S1ONIR_Joker",
			"V_FZ_Armor\Data\Helmets\V_S1ONIR_GLD_V_CO"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\Ch252_Custom\Joker\89th_S1ONIR_Joker",
				"V_FZ_Armor\Data\Helmets\V_S1ONIR_GLD_V_CO"
			};
		};
	};
	class 89th_S1ONIR_Joker_dp: VES_S1ONIR_dp
	{
		dlc="89thJTF";
		author="Flips, Vespade";
		displayName="[89th] Joker S1/ONI/R [OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\Ch252_Custom\Joker\89th_S1ONIR_Joker",
			"V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\Ch252_Custom\Joker\89th_S1ONIR_Joker",
				"V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA"
			};
		};
	};
};