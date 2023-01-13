class cfgPatches
{
	class 89th_CH252A_Custom
	{
		author="89th Mod Team";
		addonRootClass="89th_CH252_patches";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"89th_CH252_patches"
		};
		units[] = {};
		weapons[]=
		{
			"89th_CH252A_Buck",
			"89th_CH252A_Buck_dp"
		};
	};
};
class cfgWeapons
{
	class 89th_CH252A;
	class 89th_CH252A_dp;
	class ItemInfo;
    class 89th_CH252A_Buck: 89th_CH252A
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252A (Buck)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_gear\CH252_Custom\Buck\89th_CH252A_Buck",
			"89th_Gear\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_gear\CH252_Custom\Buck\89th_CH252A_Buck",
				"89th_Gear\Visors\89th_Marine_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_Buck_dp: 89th_CH252A_dp
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="CH252A (Buck)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_gear\CH252_Custom\Buck\89th_CH252A_Buck",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_gear\CH252_Custom\Buck\89th_CH252A_Buck",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
};