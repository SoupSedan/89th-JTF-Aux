class cfgPatches
{
	class OPTRE_FC_VX19_Helmet_Custom
	{
		author="89th Mod Team";
		addonRootClass="89th_CH252_patches";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"89th_CH252_patches",
			"OPTRE_FC_Units_Marines"
		};
		units[] = {};
		weapons[]=
		{
			"89th_VX19_Buck",
			"89th_VX19_Buck_dp"
		};
	};
};
class cfgWeapons
{
	class OPTRE_FC_VX19_Helmet;
	class OPTRE_FC_VX19_Helmet_dp;
	class ItemInfo;
    class 89th_VX19_Buck: OPTRE_FC_VX19_Helmet
	{
		dlc="89thJTF";
		scope=2;
		author="Flips";
		displayName="[89th] VX19 (Buck)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Custom\Buck\89th_VX19_Buck.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Custom\Buck\89th_VX19_Buck.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
			};
		};
	};
	class 89th_VX19_Buck_dp: OPTRE_FC_VX19_Helmet_dp
	{
		dlc="89thJTF";
		scope=0;
		author="Flips";
		displayName="VX19 (Buck)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_gear\CH252_Custom\Buck\89th_VX19_Buck.paa",
			"89th_gear\CH252_Custom\Buck\h3_pilothelmet_visor_clear_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Custom\Buck\89th_VX19_Buck.paa",
				"89th_gear\CH252_Custom\Buck\h3_pilothelmet_visor_clear_CO.paa"
			};
		};
	};
};
