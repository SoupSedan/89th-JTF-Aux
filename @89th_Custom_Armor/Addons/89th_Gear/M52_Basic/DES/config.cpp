class CfgPatches
{
	class 89th_M52_DES_patches
	{
		author="89th Mod Team";
		addonRootClass="89th_M52_patches";
		requiredAddons[]=
		{
			"89th_M52_patches"
		};
		requiredVersion=0.1;
		weapons[]=
		{
			"89th_M52A_Rifleman_DES",
			"89th_M52A_TeamLeader_DES",
			"89th_M52A_Marksman_DES",
			"89th_M52A_Assault_DES",
			"89th_M52A_Security_DES",
			"89th_M52A_CLS_DES",
			"89th_M52A_M_DES",
			"89th_M52D_R_DES",
			"89th_M52D_SCT_DES",
			"89th_M52D_SNPR_DES",
			"89th_M52D_DEMO_DES",
			"89th_M52D_Marksman_DES",
			"89th_M52A_Rifleman_DES",
			"89th_M52A_TeamLeader_11_DES",
			"89th_M52A_Marksman_11_DES",
			"89th_M52A_Assault_11_DES",
			"89th_M52A_Security_11_DES",
			"89th_M52A_Rifleman_DES",
			"89th_M52A_TeamLeader_12_DES",
			"89th_M52A_Marksman_12_DES",
			"89th_M52A_Assault_12_DES",
			"89th_M52A_Security_12_DES",
			"89th_M52A_Rifleman_DES",
			"89th_M52A_TeamLeader_13_DES",
			"89th_M52A_Marksman_13_DES",
			"89th_M52A_Assault_13_DES",
			"89th_M52A_Security_13_DES",
			"89th_M52A_Rifleman_DES",
			"89th_M52A_TeamLeader_21_DES",
			"89th_M52A_Marksman_21_DES",
			"89th_M52A_Assault_21_DES",
			"89th_M52A_Security_21_DES",
			"89th_M52A_Rifleman_DES",
			"89th_M52A_TeamLeader_22_DES",
			"89th_M52A_Marksman_22_DES",
			"89th_M52A_Assault_22_DES",
			"89th_M52A_Security_22_DES",
			"89th_M52A_Rifleman_DES",
			"89th_M52A_TeamLeader_23_DES",
			"89th_M52A_Marksman_23_DES",
			"89th_M52A_Assault_23_DES",
			"89th_M52A_Security_23_DES"
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
	class 89th_M52A_Rifleman_DES: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="[89th] M52A (Rifleman)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_BLANK_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_TeamLeader_DES: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_BLANK_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Marksman_DES: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="[89th] M52A (Marksman)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_BLANK_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Assault_DES: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="[89th] M52A (Assault)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_BLANK_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Security_DES: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="[89th] M52A (Security)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_BLANK_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_CLS_DES: 89th_M52A_CLS
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52A (CLS)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_CLS_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_M_DES: 89th_M52A_M
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52A (Medic)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_M_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52D_R_DES: 89th_M52D_R
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Rifleman)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_BLANK_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52D_SCT_DES: 89th_M52D_SCT
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Scout)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_BLANK_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52D_SNPR_DES: 89th_M52D_SNPR
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Sniper)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_BLANK_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52D_DEMO_DES: 89th_M52D_DEMO
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Demolition)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_BLANK_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52D_Marksman_DES: 89th_M52D_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Marksman)(DES)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_BLANK_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	//Squad Vests
	class 89th_M52A_Rifleman_11_DES: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(1-1)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_11_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_TeamLeader_11_DES: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(1-1)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_11_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Marksman_11_DES: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(1-1)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_11_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Assault_11_DES: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(1-1)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_11_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Security_11_DES: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(1-1)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_11_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Rifleman_12_DES: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(1-2)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_12_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_TeamLeader_12_DES: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(1-2)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_12_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Marksman_12_DES: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(1-2)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_12_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Assault_12_DES: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(1-2)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_12_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Security_12_DES: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(1-2)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_12_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Rifleman_13_DES: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(1-3)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_13_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_TeamLeader_13_DES: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(1-3)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_13_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Marksman_13_DES: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(1-3)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_13_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Assault_13_DES: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(1-3)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_13_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Security_13_DES: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(1-3)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_13_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Rifleman_21_DES: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(2-1)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_21_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_TeamLeader_21_DES: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(2-1)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_21_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Marksman_21_DES: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(2-1)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_21_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Assault_21_DES: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(2-1)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_21_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Security_21_DES: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(2-1)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_21_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Rifleman_22_DES: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(2-2)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_22_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_TeamLeader_22_DES: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(2-2)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_22_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Marksman_22_DES: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(2-2)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_22_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Assault_22_DES: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(2-2)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_22_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Security_22_DES: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(2-2)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_22_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Rifleman_23_DES: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(2-3)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_23_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_TeamLeader_23_DES: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(2-3)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_23_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Marksman_23_DES: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(2-3)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_23_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Assault_23_DES: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(2-3)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_23_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
	class 89th_M52A_Security_23_DES: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(2-3)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52A_23_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_DES.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\DES\89th_M52D_DES.paa"
		};
	};
};
