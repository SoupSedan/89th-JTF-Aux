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
	class 89th_Marine_BBTman_WDL_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="[89th] CH252 (BBTman)(WDL)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\BBTman\CH252_BBTman_wdl.paa",
            "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\BBTman\CH252_BBTman_wdl.paa",
                "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
            };
        };
    };
    class 89th_Marine_BBTman_WDL_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="CH252 (BBTman)(WDL)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\BBTman\CH252_BBTman_WDL.paa",
            "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\BBTman\CH252_BBTman_WDL.paa",
                "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
            };
        };
    };
	class 89th_Marine_BBTman_URB_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="[89th] CH252 (BBTman)(URB)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\BBTman\CH252_BBTman_URB.paa",
            "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\BBTman\CH252_BBTman_URB.paa",
                "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
            };
        };
    };
    class 89th_Marine_BBTman_URB_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="CH252 (BBTman)(URB)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\BBTman\CH252_BBTman_URB.paa",
            "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\BBTman\CH252_BBTman_URB.paa",
                "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
            };
        };
    };class 89th_Marine_BBTman_DES_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="[89th] CH252 (BBTman)(DES)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\BBTman\CH252_BBTman_DES.paa",
            "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\BBTman\CH252_BBTman_DES.paa",
                "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
            };
        };
    };
    class 89th_Marine_BBTman_DES_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="CH252 (BBTman)(DES)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\BBTman\CH252_BBTman_DES.paa",
            "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\BBTman\CH252_BBTman_DES.paa",
                "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
            };
        };
    };class 89th_Marine_BBTman_ARD_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="[89th] CH252 (BBTman)(ARD)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\BBTman\CH252_BBTman_ARD.paa",
            "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\BBTman\CH252_BBTman_ARD.paa",
                "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
            };
        };
    };
    class 89th_Marine_BBTman_ARD_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="CH252 (BBTman)(ARD)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\BBTman\CH252_BBTman_ARD.paa",
            "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\BBTman\CH252_BBTman_ARD.paa",
                "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
            };
        };
    };class 89th_Marine_BBTman_SNW_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="[89th] CH252 (BBTman)(SNW)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\BBTman\CH252_BBTman_SNW.paa",
            "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\BBTman\CH252_BBTman_SNW.paa",
                "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
            };
        };
    };
    class 89th_Marine_BBTman_SNW_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Flips, Vespade";
        displayName="CH252 (BBTman)(SNW)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\BBTman\CH252_BBTman_SNW.paa",
            "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\BBTman\CH252_BBTman_SNW.paa",
                "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
            };
        };
    };
};