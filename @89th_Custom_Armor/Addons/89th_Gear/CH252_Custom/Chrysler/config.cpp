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
			"89th_CH252A_Chrysler_ARD",
			"89th_CH252A_Chrysler_DES",
			"89th_CH252A_Chrysler_SNW",
			"89th_CH252A_Chrysler_URB",
			"89th_CH252A_Chrysler_WDL"
		};
	};
};
class cfgWeapons
{
	class 89th_CH252A_Light;
	class ItemInfo;
	class 89th_CH252A_Chrysler_WDL: 89th_CH252A_Light
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="[89th] CH252A (Chrysler)(WDL)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Chrysler\89th_CH252A_Chrysler_wdl.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Chrysler\89th_CH252A_Chrysler_wdl.paa"
            };
        };
    };
	class 89th_CH252A_Chrysler_URB: 89th_CH252A_Light
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="[89th] CH252A (Chrysler)(URB)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Chrysler\89th_CH252A_Chrysler_URB.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Chrysler\89th_CH252A_Chrysler_URB.paa"
            };
        };
    };
    class 89th_CH252A_Chrysler_DES: 89th_CH252A_Light
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="[89th] CH252A (Chrysler)(DES)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Chrysler\89th_CH252A_Chrysler_DES.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Chrysler\89th_CH252A_Chrysler_DES.paa"
            };
        };
    };
    class 89th_CH252A_Chrysler_ARD: 89th_CH252A_Light
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="[89th] CH252A (Chrysler)(ARD)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Chrysler\89th_CH252A_Chrysler_ARD.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Chrysler\89th_CH252A_Chrysler_ARD.paa"
            };
        };
    };
   class 89th_CH252A_Chrysler_SNW: 89th_CH252A_Light
    {
        dlc="89thCUArmor";
        scope=2;
        author="Soup, Vespade";
        displayName="[89th] CH252A (Chrysler)(SNW)";
        CTAB_Camera="true";
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Chrysler\89th_CH252A_Chrysler_SNW.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Chrysler\89th_CH252A_Chrysler_SNW.paa"
            };
        };
    };    
};
class XtdGearModels
{
	class CfgWeapons
	{
		class 89th_Chrysler_CH252A
		{
			label="[89th] Chrysler CH252A";
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
		class 89th_CH252A_Chrysler_ARD
		{
			model="89th_Chrysler_CH252A";
			camo="ARD";
			visor="on";
		};
		class 89th_CH252A_Chrysler_ARD_dp
		{
			model="89th_Chrysler_CH252A";
			camo="ARD";
			visor="off";
		};
		class 89th_CH252A_Chrysler_DES
		{
			model="89th_Chrysler_CH252A";
			camo="DES";
			visor="on";
		};
		class 89th_CH252A_Chrysler_DES_dp
		{
			model="89th_Chrysler_CH252A";
			camo="DES";
			visor="off";
		};class 89th_CH252A_Chrysler_SNW
		{
			model="89th_Chrysler_CH252A";
			camo="SNW";
			visor="on";
		};
		class 89th_CH252A_Chrysler_SNW_dp
		{
			model="89th_Chrysler_CH252A";
			camo="SNW";
			visor="off";
		};class 89th_CH252A_Chrysler_URB
		{
			model="89th_Chrysler_CH252A";
			camo="URB";
			visor="on";
		};
		class 89th_CH252A_Chrysler_URB_dp
		{
			model="89th_Chrysler_CH252A";
			camo="URB";
			visor="off";
		};class 89th_CH252A_Chrysler_WDL
		{
			model="89th_Chrysler_CH252A";
			camo="WDL";
			visor="on";
		};
		class 89th_CH252A_Chrysler_WDL_dp
		{
			model="89th_Chrysler_CH252A";
			camo="WDL";
			visor="off";
		};
	};
};
