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
	class VES_M52D_Rifleman;
	//Helmet 
	class 89th_Marine_Sheep_WDL_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="[89th] CH252 (Sheep)(WDL)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_wdl_CO.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_wdl_CO.paa",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
            };
        };
    };
    class 89th_Marine_Sheep_WDL_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="CH252 (Sheep)(WDL)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_wdl_CO.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_wdl_CO.paa",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
            };
        };
    };class 89th_Marine_Sheep_URB_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="[89th] CH252 (Sheep)(URB)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_URB_CO.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_URB_CO.paa",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
            };
        };
    };
    class 89th_Marine_Sheep_URB_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="CH252 (Sheep)(URB)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_URB_CO.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_URB_CO.paa",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
            };
        };
    };class 89th_Marine_Sheep_DES_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="[89th] CH252 (Sheep)(DES)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_DES_CO.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_DES_CO.paa",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
            };
        };
    };
    class 89th_Marine_Sheep_DES_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="CH252 (Sheep)(DES)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_DES_CO.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_DES_CO.paa",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
            };
        };
    };class 89th_Marine_Sheep_ARD_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="[89th] CH252 (Sheep)(ARD)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_ARD_CO.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_ARD_CO.paa",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
            };
        };
    };
    class 89th_Marine_Sheep_ARD_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="CH252 (Sheep)(ARD)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_ARD_CO.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_ARD_CO.paa",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
            };
        };
    };class 89th_Marine_Sheep_SNW_CH252: VES_CH252_MAR_Vacuum
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="[89th] CH252 (Sheep)(SNW)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_SNW_CO.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_SNW_CO.paa",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
            };
        };
    };
    class 89th_Marine_Sheep_SNW_CH252_dp: VES_CH252_MAR_Vacuum_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="CH252 (Sheep)(SNW)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_SNW_CO.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Armor\Data\Custom\Sheep\89th_Sheep_helmet_SNW_CO.paa",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
            };
        };
    };
	//Vest
};