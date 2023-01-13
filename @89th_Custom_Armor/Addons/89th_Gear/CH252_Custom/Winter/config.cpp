class cfgPatches
{
	class 89th_CH252C_Custom
	{
		author="89th Mod Team";
		addonRootClass="89th_CH252_patches";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"89th_CH252_patches",
			"V_FZ_Armor"
		};
		units[] = {};
		weapons[]=
		{
			"89th_CH252C_Winter"
		};
	};
};
class cfgWeapons
{
	class VES_CH252_MAR_Crew;
	class ItemInfo;
	class 89th_CH252C_Winter: VES_CH252_MAR_Crew
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Vespade";
		displayName="[89th] CH252C (Winter)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Custom\Winter\89th_CH252C_Winter.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Custom\Winter\89th_CH252C_Winter.paa",
				""
			};
		};
	};
};