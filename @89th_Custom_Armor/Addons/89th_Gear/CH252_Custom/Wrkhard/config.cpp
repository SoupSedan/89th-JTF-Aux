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
			"89th_CH252A_Wrkhard_ARD",
			"89th_CH252A_Wrkhard_ARD_dp",
			"89th_CH252A_Wrkhard_DES",
			"89th_CH252A_Wrkhard_DES_dp",
			"89th_CH252A_Wrkhard_SNW",
			"89th_CH252A_Wrkhard_SNW_dp",
			"89th_CH252A_Wrkhard_URB",
			"89th_CH252A_Wrkhard_URB_dp",
			"89th_CH252A_Wrkhard_WDL",
			"89th_CH252A_Wrkhard_WDL_dp"
		};
	};
};
class cfgWeapons
{
	class 89th_CH252A;
	class 89th_CH252A_dp;
	class ItemInfo;
	class 89th_CH252A_Wrkhard_WDL: 89th_CH252A
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="[89th] CH252A (Wrkhard)(WDL)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_wdl.paa",
            "89th_Gear\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_wdl.paa",
                "89th_Gear\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
    class 89th_CH252A_Wrkhard_WDL_dp: 89th_CH252A_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="CH252A (Wrkhard)(WDL)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_WDL.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_WDL.paa",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
            };
        };
    };
	class 89th_CH252A_Wrkhard_URB: 89th_CH252A
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="[89th] CH252A (Wrkhard)(URB)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_URB.paa",
            "89th_Gear\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_URB.paa",
                "89th_Gear\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
    class 89th_CH252A_Wrkhard_URB_dp: 89th_CH252A_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="CH252A (Wrkhard)(URB)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_URB.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_URB.paa",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
            };
        };
    };class 89th_CH252A_Wrkhard_DES: 89th_CH252A
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="[89th] CH252A (Wrkhard)(DES)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_DES.paa",
            "89th_Gear\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_DES.paa",
                "89th_Gear\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
    class 89th_CH252A_Wrkhard_DES_dp: 89th_CH252A_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="CH252A (Wrkhard)(DES)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_DES.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_DES.paa",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
            };
        };
    };class 89th_CH252A_Wrkhard_ARD: 89th_CH252A
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="[89th] CH252A (Wrkhard)(ARD)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_ARD.paa",
            "89th_Gear\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_ARD.paa",
                "89th_Gear\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
    class 89th_CH252A_Wrkhard_ARD_dp: 89th_CH252A_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="CH252A (Wrkhard)(ARD)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_ARD.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_ARD.paa",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
            };
        };
    };class 89th_CH252A_Wrkhard_SNW: 89th_CH252A
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="[89th] CH252A (Wrkhard)(SNW)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_SNW.paa",
            "89th_Gear\Visors\89th_Marine_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_SNW.paa",
                "89th_Gear\Visors\89th_Marine_V_CO.paa"
            };
        };
    };
    class 89th_CH252A_Wrkhard_SNW_dp: 89th_CH252A_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="CH252A (Wrkhard)(SNW)[OFF]";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_SNW.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Wrkhard\89th_CH252A_Wrkhard_SNW.paa",
                "optre_unsc_units\army\data\helmet_visor_ca.paa"
            };
        };
    };
};
class XtdGearModels
{
	class CfgWeapons
	{
		class 89th_Wrkhard_CH252A
		{
			label="[89th] Wrkhard CH252A";
			author="89th Mod Team";
			options[]=
			{
				"camo",
				"visor"
				
			};
			class camo
			{
				label="Camo";
				alwaysSelectable=1;
				values[]=
				{
					"ARD",
					"DES",
					"SNW",
					"URB",
					"WDL"
				};
				class ARD
				{
					label="Arid";
					image="#(rgb,8,8,3)color(0.278,0.243,0.149,1)";
				};
				class DES
				{
					label="Desert";
					image="#(rgb,8,8,3)color(0.431,0.369,0.302,1)";
				};
				class SNW
				{
					label="Snow";
					image="#(rgb,8,8,3)color(0.882,0.894,0.902,1)";
				};
				class URB
				{
					label="Urban";
					image="#(rgb,8,8,3)color(0.192,0.212,0.259,1)";
				};
				class WDL
				{
					label="Woodland";
					image="#(rgb,8,8,3)color(0.118,0.137,0.020,1)";
				};
			};
			class visor
			{
				label="Visor";
				alwaysSelectable=1;
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="On";
				}
				class off
				{
					label="Off";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class 89th_CH252A_Wrkhard_ARD
		{
			model="89th_Wrkhard_CH252A";
			camo="ARD";
			visor="on";
		};
		class 89th_CH252A_Wrkhard_ARD_dp
		{
			model="89th_Wrkhard_CH252A";
			camo="ARD";
			visor="off";
		};
		class 89th_CH252A_Wrkhard_DES
		{
			model="89th_Wrkhard_CH252A";
			camo="DES";
			visor="on";
		};
		class 89th_CH252A_Wrkhard_DES_dp
		{
			model="89th_Wrkhard_CH252A";
			camo="DES";
			visor="off";
		};
		class 89th_CH252A_Wrkhard_SNW
		{
			model="89th_Wrkhard_CH252A";
			camo="SNW";
			visor="on";
		};
		class 89th_CH252A_Wrkhard_SNW_dp
		{
			model="89th_Wrkhard_CH252A";
			camo="SNW";
			visor="off";
		};
		class 89th_CH252A_Wrkhard_URB
		{
			model="89th_Wrkhard_CH252A";
			camo="URB";
			visor="on";
		};
		class 89th_CH252A_Wrkhard_URB_dp
		{
			model="89th_Wrkhard_CH252A";
			camo="URB";
			visor="off";
		};class 89th_CH252A_Wrkhard_WDL
		{
			model="89th_Wrkhard_CH252A";
			camo="WDL";
			visor="on";
		};
		class 89th_CH252A_Wrkhard_WDL_dp
		{
			model="89th_Wrkhard_CH252A";
			camo="WDL";
			visor="off";
		};
	};
};
