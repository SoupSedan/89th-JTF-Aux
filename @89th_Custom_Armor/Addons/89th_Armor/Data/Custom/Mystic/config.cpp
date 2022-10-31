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
	class ItemInfo;
	//Helmet 
	class 89th_Marine_Mystic_WDL_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="[89th] CH252 (Mystic)(WDL)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_wdl.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_wdl.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
    class 89th_Marine_Mystic_WDL_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="CH252 (Mystic)(WDL)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_WDL.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_WDL.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
	class 89th_Marine_Mystic_URB_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="[89th] CH252 (Mystic)(URB)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_URB.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_URB.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
    class 89th_Marine_Mystic_URB_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="CH252 (Mystic)(URB)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_URB.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_URB.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };class 89th_Marine_Mystic_DES_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="[89th] CH252 (Mystic)(DES)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_DES.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_DES.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
    class 89th_Marine_Mystic_DES_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="CH252 (Mystic)(DES)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_DES.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_DES.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };class 89th_Marine_Mystic_ARD_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="[89th] CH252 (Mystic)(ARD)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_ARD.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_ARD.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
    class 89th_Marine_Mystic_ARD_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="CH252 (Mystic)(ARD)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_ARD.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_ARD.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };class 89th_Marine_Mystic_SNW_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="[89th] CH252 (Mystic)(SNW)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_SNW.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_SNW.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
    class 89th_Marine_Mystic_SNW_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="CH252 (Mystic)(SNW)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_SNW.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Mystic\CH252_Mystic_helmet_SNW.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
};