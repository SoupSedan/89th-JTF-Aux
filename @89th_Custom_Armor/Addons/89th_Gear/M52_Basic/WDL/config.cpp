class CfgPatches
{
	class 89th_M52_WDL_patches
	{
		author="89th Mod Team";
		addonRootClass="89th_M52_patches";
		requiredAddons[]=
		{
			"89th_M52_patches"
		};
		requiredVersion=0.1;
		units[] = {};
		weapons[]=
		{
			"89th_M52A_Rifleman_WDL",
			"89th_M52A_TeamLeader_WDL",
			"89th_M52A_Marksman_WDL",
			"89th_M52A_Assault_WDL",
			"89th_M52A_Security_WDL",
			"89th_M52A_CLS_WDL",
			"89th_M52A_M_WDL",
			"89th_M52D_R_WDL",
			"89th_M52D_SCT_WDL",
			"89th_M52D_SNPR_WDL",
			"89th_M52D_DEMO_WDL",
			"89th_M52D_Marksman_WDL"
		};
	};
};
class cfgWeapons
{
	class 89th_M52A_Rifleman;
	class 89th_M52A_TeamLeader;
	class 89th_M52A_Marksman;
	class 89th_M52A_Assault;
	class 89th_M52A_Security;
	class 89th_M52A_CLS;
	class 89th_M52A_M;
	class 89th_M52D_R;
	class 89th_M52D_SCT;
	class 89th_M52D_SNPR;
	class 89th_M52D_DEMO;
	class 89th_M52D_Marksman;
	class 89th_M52A_Rifleman_WDL: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="[89th] M52A (Rifleman)(WDL)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\WDL\89th_SoftVest_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_BLANK_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_Underlay_WDL.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52D_WDL.paa"
		};
	};
	class 89th_M52A_TeamLeader_WDL: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(WDL)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\WDL\89th_SoftVest_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_BLANK_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_Underlay_WDL.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52D_WDL.paa"
		};
	};
	class 89th_M52A_Marksman_WDL: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="[89th] M52A (Marksman)(WDL)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\WDL\89th_SoftVest_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_BLANK_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_Underlay_WDL.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52D_WDL.paa"
		};
	};
	class 89th_M52A_Assault_WDL: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="[89th] M52A (Assault)(WDL)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\WDL\89th_SoftVest_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_BLANK_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_Underlay_WDL.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52D_WDL.paa"
		};
	};
	class 89th_M52A_Security_WDL: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="[89th] M52A (Security)(WDL)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\WDL\89th_SoftVest_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_BLANK_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_Underlay_WDL.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52D_WDL.paa"
		};
	};
	class 89th_M52A_CLS_WDL: 89th_M52A_CLS
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52A (CLS)(WDL)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\WDL\89th_SoftVest_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52A_CLS_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_Underlay_WDL.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52D_WDL.paa"
		};
	};
	class 89th_M52A_M_WDL: 89th_M52A_M
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52A (Medic)(WDL)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\WDL\89th_SoftVest_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52A_M_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_Underlay_WDL.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52D_WDL.paa"
		};
	};
	class 89th_M52D_R_WDL: 89th_M52D_R
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Rifleman)(WDL)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\WDL\89th_SoftVest_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_BLANK_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_Underlay_WDL.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52D_WDL.paa"
		};
	};
	class 89th_M52D_SCT_WDL: 89th_M52D_SCT
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Scout)(WDL)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\WDL\89th_SoftVest_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_BLANK_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_Underlay_WDL.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52D_WDL.paa"
		};
	};
	class 89th_M52D_SNPR_WDL: 89th_M52D_SNPR
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Sniper)(WDL)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\WDL\89th_SoftVest_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_BLANK_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_Underlay_WDL.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52D_WDL.paa"
		};
	};
	class 89th_M52D_DEMO_WDL: 89th_M52D_DEMO
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Demolition)(WDL)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\WDL\89th_SoftVest_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_BLANK_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_Underlay_WDL.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52D_WDL.paa"
		};
	};
	class 89th_M52D_Marksman_WDL: 89th_M52D_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Marksman)(WDL)(WDL)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\WDL\89th_SoftVest_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_BLANK_WDL.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52_Underlay_WDL.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\WDL\89th_M52D_WDL.paa"
		};
	};
};
