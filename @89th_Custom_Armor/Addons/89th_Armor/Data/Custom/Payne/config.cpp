
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
	class 89th_Marine_Payne_WDL_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="[89th] CH252 (Payne)(WDL)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_wdl.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_wdl.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
    class 89th_Marine_Payne_WDL_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="CH252 (Payne)(WDL)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_WDL.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_WDL.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
	class 89th_Marine_Payne_URB_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="[89th] CH252 (Payne)(URB)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_URB.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_URB.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
    class 89th_Marine_Payne_URB_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="CH252 (Payne)(URB)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_URB.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_URB.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };class 89th_Marine_Payne_DES_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="[89th] CH252 (Payne)(DES)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_DES.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_DES.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
    class 89th_Marine_Payne_DES_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="CH252 (Payne)(DES)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_DES.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_DES.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };class 89th_Marine_Payne_ARD_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="[89th] CH252 (Payne)(ARD)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_ARD.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_ARD.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
    class 89th_Marine_Payne_ARD_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="CH252 (Payne)(ARD)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_ARD.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_ARD.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };class 89th_Marine_Payne_SNW_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="[89th] CH252 (Payne)(SNW)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_SNW.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_SNW.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
    class 89th_Marine_Payne_SNW_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="CH252 (Payne)(SNW)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_SNW.paa",
            "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Payne\CH252_MARINE_HELMET_Payne_SNW.paa",
                "89th_Armor\Data\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
};