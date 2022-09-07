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
	class 89th_Legion_CH252: VES_CH252_MAR_Vacuum
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252 (Legion)(BLK)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Legion\89th_Legion_Helmet_BLK.paa",
			"89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
			"89th_Armor\Data\Custom\Legion\89th_Legion_Helmet_BLK.paa",
				""
			};
		};
	};
	class 89th_Legion_CH252_dp: VES_CH252_MAR_Vacuum_dp
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="CH252 (Legion)(BLK)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Armor\Data\Custom\Legion\89th_Legion_Helmet_BLK.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
			"89th_Armor\Data\Custom\Legion\89th_Legion_Helmet_BLK.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	//Vest
};