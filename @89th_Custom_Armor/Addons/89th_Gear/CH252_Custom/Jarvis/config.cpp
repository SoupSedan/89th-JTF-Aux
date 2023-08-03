class cfgPatches
{
	class 89th_CH252D_Custom
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
			"89th_CH252D_Jarvis_ARD",
			"89th_CH252D_Jarvis_ARD_dp",
			"89th_CH252D_Jarvis_DES",
			"89th_CH252D_Jarvis_DES_dp",
			"89th_CH252D_Jarvis_SNW",
			"89th_CH252D_Jarvis_SNW_dp",
			"89th_CH252D_Jarvis_URB",
			"89th_CH252D_Jarvis_URB_dp",
			"89th_CH252D_Jarvis_WDL",
			"89th_CH252D_Jarvis_WDL_dp"
		};
	};
};
class cfgWeapons
{
	class 89th_CH252D;
	class 89th_CH252D_dp;
	class ItemInfo;
	class 89th_CH252D_Jarvis_WDL: 89th_CH252D
    {
        dlc="89thCUArmor";
        scope=2;
        author="Tas, Geek, Vespade";
        displayName="[89th] CH252D (Jarvis)(WDL)";
        CTAB_Camera="true";
	hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
		\\	"camo4",
			"H_Ghillie"
		};
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_wdl.paa",
            "89th_Gear\Visors\89th_Goliath_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_wdl.paa",
                "89th_Gear\Visors\89th_Goliath_V_CO.paa"
            };
        };
    };
    class 89th_CH252D_Jarvis_WDL_dp: 89th_CH252D_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Tas, Geek, Vespade";
        displayName="CH252D (Jarvis)(WDL)[OFF]";
        CTAB_Camera="true";
	hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
		\\	"camo4",
			"H_Ghillie"
		};
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_WDL.paa",
            "89th_Gear\visors\goliath_hair.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_WDL.paa",
                "89th_Gear\visors\goliath_hair.paa"
            };
        };
    };
	class 89th_CH252D_Jarvis_URB: 89th_CH252D
    {
        dlc="89thCUArmor";
        scope=2;
        author="Tas, Geek, Vespade";
        displayName="[89th] CH252D (Jarvis)(URB)";
        CTAB_Camera="true";
	hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
		\\	"camo4",
			"H_Ghillie"
		};
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_URB.paa",
            "89th_Gear\Visors\89th_Goliath_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_URB.paa",
                "89th_Gear\Visors\89th_Goliath_V_CO.paa"
            };
        };
    };
    class 89th_CH252D_Jarvis_URB_dp: 89th_CH252D_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Tas, Geek, Vespade";
        displayName="CH252D (Jarvis)(URB)[OFF]";
        CTAB_Camera="true";
	hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
		\\	"camo4",
			"H_Ghillie"
		};
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_URB.paa",
            "89th_Gear\visors\goliath_hair.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_URB.paa",
                "89th_Gear\visors\goliath_hair.paa"
            };
        };
    };class 89th_CH252D_Jarvis_DES: 89th_CH252D
    {
        dlc="89thCUArmor";
        scope=2;
        author="Tas, Geek, Vespade";
        displayName="[89th] CH252D (Jarvis)(DES)";
        CTAB_Camera="true";
	hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
		\\	"camo4",
			"H_Ghillie"
		};
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_DES.paa",
            "89th_Gear\Visors\89th_Goliath_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_DES.paa",
                "89th_Gear\Visors\89th_Goliath_V_CO.paa"
            };
        };
    };
    class 89th_CH252D_Jarvis_DES_dp: 89th_CH252D_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Tas, Geek, Vespade";
        displayName="CH252D (Jarvis)(DES)[OFF]";
        CTAB_Camera="true";
	hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
		\\	"camo4",
			"H_Ghillie"
		};
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_DES.paa",
            "89th_Gear\visors\goliath_hair.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_DES.paa",
                "89th_Gear\visors\goliath_hair.paa"
            };
        };
    };class 89th_CH252D_Jarvis_ARD: 89th_CH252D
    {
        dlc="89thCUArmor";
        scope=2;
        author="Tas, Geek, Vespade";
        displayName="[89th] CH252D (Jarvis)(ARD)";
        CTAB_Camera="true";
	hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
		\\	"camo4",
			"H_Ghillie"
		};
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_ARD.paa",
            "89th_Gear\Visors\89th_Goliath_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_ARD.paa",
                "89th_Gear\Visors\89th_Goliath_V_CO.paa"
            };
        };
    };
    class 89th_CH252D_Jarvis_ARD_dp: 89th_CH252D_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Tas, Geek, Vespade";
        displayName="CH252D (Jarvis)(ARD)[OFF]";
        CTAB_Camera="true";
	hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
		\\	"camo4",
			"H_Ghillie"
		};
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_ARD.paa",
            "89th_Gear\visors\goliath_hair.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_ARD.paa",
                "89th_Gear\visors\goliath_hair.paa"
            };
        };
    };class 89th_CH252D_Jarvis_SNW: 89th_CH252D
    {
        dlc="89thCUArmor";
        scope=2;
        author="Tas, Geek, Vespade";
        displayName="[89th] CH252D (Jarvis)(SNW)";
        CTAB_Camera="true";
	hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
		\\	"camo4",
			"H_Ghillie"
		};
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_SNW.paa",
            "89th_Gear\Visors\89th_Goliath_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_SNW.paa",
                "89th_Gear\Visors\89th_Goliath_V_CO.paa"
            };
        };
    };
    class 89th_CH252D_Jarvis_SNW_dp: 89th_CH252D_dp
    {
        dlc="89thCUArmor";
        scope=2;
        author="Tas, Geek, Vespade";
        displayName="CH252D (Jarvis)(SNW)[OFF]";
        CTAB_Camera="true";
	hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
		\\	"camo4",
			"H_Ghillie"
		};
        hiddenSelectionsTextures[]=
        {
            "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_SNW.paa",
            "89th_Gear\visors\goliath_hair.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "89th_Gear\CH252_Custom\Jarvis\89th_CH252D_Jarvis_SNW.paa",
                "89th_Gear\visors\goliath_hair.paa"
            };
        };
    };
};
class XtdGearModels
{
	class CfgWeapons
	{
		class 89th_Jarvis_CH252D
		{
			label="[89th] Jarvis CH252D";
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
		class 89th_CH252D_Jarvis_ARD
		{
			model="89th_Jarvis_CH252D";
			camo="ARD";
			visor="on";
		};
		class 89th_CH252D_Jarvis_ARD_dp
		{
			model="89th_Jarvis_CH252D";
			camo="ARD";
			visor="off";
		};
		class 89th_CH252D_Jarvis_DES
		{
			model="89th_Jarvis_CH252D";
			camo="DES";
			visor="on";
		};
		class 89th_CH252D_Jarvis_DES_dp
		{
			model="89th_Jarvis_CH252D";
			camo="DES";
			visor="off";
		};class 89th_CH252D_Jarvis_SNW
		{
			model="89th_Jarvis_CH252D";
			camo="SNW";
			visor="on";
		};
		class 89th_CH252D_Jarvis_SNW_dp
		{
			model="89th_Jarvis_CH252D";
			camo="SNW";
			visor="off";
		};class 89th_CH252D_Jarvis_URB
		{
			model="89th_Jarvis_CH252D";
			camo="URB";
			visor="on";
		};
		class 89th_CH252D_Jarvis_URB_dp
		{
			model="89th_Jarvis_CH252D";
			camo="URB";
			visor="off";
		};class 89th_CH252D_Jarvis_WDL
		{
			model="89th_Jarvis_CH252D";
			camo="WDL";
			visor="on";
		};
		class 89th_CH252D_Jarvis_WDL_dp
		{
			model="89th_Jarvis_CH252D";
			camo="WDL";
			visor="off";
		};
	};
};
