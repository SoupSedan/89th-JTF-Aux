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
			"89th_CH252A_Apa_ARD",
			"89th_CH252A_Apa_DES",
			"89th_CH252A_Apa_SNW",
			"89th_CH252A_Apa_URB",
			"89th_CH252A_Apa_WDL"
		};
	};
};
class cfgWeapons
{
	class 89th_CH252A_Light;
	class ItemInfo;
	class 89th_CH252A_Apa_ARD: 89th_CH252A_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252A (Apa)(ARD)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Custom\Apa\89th_CH252A_Apa_ARD.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Custom\Apa\89th_CH252A_Apa_ARD.paa",
				""
			};
		};
	};
		class 89th_CH252A_Apa_DES: 89th_CH252A_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252A (Apa)(DES)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Custom\Apa\89th_CH252A_Apa_DES.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Custom\Apa\89th_CH252A_Apa_DES.paa",
				""
			};
		};
	};
	class 89th_CH252A_Apa_SNW: 89th_CH252A_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252A (Apa)(SNW)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Custom\Apa\89th_CH252A_Apa_SNW.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Custom\Apa\89th_CH252A_Apa_SNW.paa",
				""
			};
		};
	};
	class 89th_CH252A_Apa_URB: 89th_CH252A_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252A (Apa)(URB)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Custom\Apa\89th_CH252A_Apa_URB.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Custom\Apa\89th_CH252A_Apa_URB.paa",
				""
			};
		};
	};
	class 89th_CH252A_Apa_WDL: 89th_CH252A_Light
	{
		dlc="89thJTF";
		scope=2;
		author="Soup, Vespade";
		displayName="[89th] CH252A (Apa)(WDL)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Custom\Apa\89th_CH252A_Apa_WDL.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Custom\Apa\89th_CH252A_Apa_WDL.paa",
				""
			};
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class 89th_Apa_CH252A
		{
			label="[89th] Apa CH252A";
			author="89th Mod Team";
			options[]=
			{
				"camo"
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
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class 89th_CH252A_Apa_ARD
		{
			model="89th_Apa_CH252A";
			camo="ARD";
		};
		class 89th_CH252A_Apa_DES
		{
			model="89th_Apa_CH252A";
			camo="DES";
		};
		class 89th_CH252A_Apa_SNW
		{
			model="89th_Apa_CH252A";
			camo="SNW";
		};
		class 89th_CH252A_Apa_URB
		{
			model="89th_Apa_CH252A";
			camo="URB";
		};
		class 89th_CH252A_Apa_WDL
		{
			model="89th_Apa_CH252A";
			camo="WDL";
		};
	};
};