class cfgPatches
{
	class OPTRE_FC_VX19_Helmet_Custom
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
			"89th_VX19_Legion",
			"89th_VX19_Legion_dp"
		};
	};
};
class cfgWeapons
{
	class OPTRE_FC_VX19_Helmet;
	class OPTRE_FC_VX19_Helmet_dp;
	class ItemInfo;
    class 89th_VX19_Legion: OPTRE_FC_VX19_Helmet
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] VX19 (Legion)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Custom\Legion\89th_VX19_Legion.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Custom\Legion\89th_VX19_Legion.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
			};
		};
	};
	class 89th_VX19_Legion_dp: OPTRE_FC_VX19_Helmet_dp
	{
		dlc="89thJTF";
		scope=0;
		author="Soup, Vespade";
		displayName="VX19 (Legion)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_gear\CH252_Custom\Legion\89th_VX19_Legion.paa",
			"89th_gear\CH252_Custom\Legion\h3_pilothelmet_visor_clear_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Custom\Legion\89th_VX19_Legion.paa",
				"89th_gear\CH252_Custom\Legion\h3_pilothelmet_visor_clear_CO.paa"
			};
		};
	};
};