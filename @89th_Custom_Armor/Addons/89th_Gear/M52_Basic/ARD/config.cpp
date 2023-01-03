class CfgPatches
{
	class 89th_M52_ARD_patches
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
			"89th_M52A_Rifleman_ARD",
			"89th_M52A_TeamLeader_ARD",
			"89th_M52A_Marksman_ARD",
			"89th_M52A_Assault_ARD",
			"89th_M52A_Security_ARD",
			"89th_M52A_CLS_ARD",
			"89th_M52A_M_ARD",
			"89th_M52D_R_ARD",
			"89th_M52D_SCT_ARD",
			"89th_M52D_SNPR_ARD",
			"89th_M52D_DEMO_ARD",
			"89th_M52D_Marksman_ARD",
			"89th_M52A_Rifleman_ARD",
			"89th_M52A_TeamLeader_11_ARD",
			"89th_M52A_Marksman_11_ARD",
			"89th_M52A_Assault_11_ARD",
			"89th_M52A_Security_11_ARD",
			"89th_M52A_Rifleman_ARD",
			"89th_M52A_TeamLeader_12_ARD",
			"89th_M52A_Marksman_12_ARD",
			"89th_M52A_Assault_12_ARD",
			"89th_M52A_Security_12_ARD",
			"89th_M52A_Rifleman_ARD",
			"89th_M52A_TeamLeader_13_ARD",
			"89th_M52A_Marksman_13_ARD",
			"89th_M52A_Assault_13_ARD",
			"89th_M52A_Security_13_ARD",
			"89th_M52A_Rifleman_ARD",
			"89th_M52A_TeamLeader_21_ARD",
			"89th_M52A_Marksman_21_ARD",
			"89th_M52A_Assault_21_ARD",
			"89th_M52A_Security_21_ARD",
			"89th_M52A_Rifleman_ARD",
			"89th_M52A_TeamLeader_22_ARD",
			"89th_M52A_Marksman_22_ARD",
			"89th_M52A_Assault_22_ARD",
			"89th_M52A_Security_22_ARD",
			"89th_M52A_Rifleman_ARD",
			"89th_M52A_TeamLeader_23_ARD",
			"89th_M52A_Marksman_23_ARD",
			"89th_M52A_Assault_23_ARD",
			"89th_M52A_Security_23_ARD"
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
	class 89th_M52A_Rifleman_ARD: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="[89th] M52A (Rifleman)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_TeamLeader_ARD: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Marksman_ARD: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="[89th] M52A (Marksman)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Assault_ARD: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="[89th] M52A (Assault)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Security_ARD: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="[89th] M52A (Security)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_CLS_ARD: 89th_M52A_CLS
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52A (CLS)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_CLS_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_M_ARD: 89th_M52A_M
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52A (Medic)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_M_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52D_R_ARD: 89th_M52D_R
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Rifleman)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52D_SCT_ARD: 89th_M52D_SCT
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Scout)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52D_SNPR_ARD: 89th_M52D_SNPR
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Sniper)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52D_DEMO_ARD: 89th_M52D_DEMO
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Demolition)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52D_Marksman_ARD: 89th_M52D_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Marksman)(ARD)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_BLANK_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	//Squad Vests
	class 89th_M52A_Rifleman_11_ARD: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(1-1)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_11_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_TeamLeader_11_ARD: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(1-1)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_11_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Marksman_11_ARD: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(1-1)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_11_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Assault_11_ARD: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(1-1)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_11_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Security_11_ARD: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(1-1)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_11_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Rifleman_12_ARD: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(1-2)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_12_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_TeamLeader_12_ARD: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(1-2)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_12_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Marksman_12_ARD: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(1-2)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_12_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Assault_12_ARD: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(1-2)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_12_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Security_12_ARD: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(1-2)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_12_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Rifleman_13_ARD: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(1-3)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_13_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_TeamLeader_13_ARD: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(1-3)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_13_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Marksman_13_ARD: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(1-3)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_13_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Assault_13_ARD: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(1-3)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_13_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Security_13_ARD: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(1-3)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_13_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Rifleman_21_ARD: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(2-1)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_21_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_TeamLeader_21_ARD: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(2-1)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_21_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Marksman_21_ARD: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(2-1)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_21_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Assault_21_ARD: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(2-1)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_21_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Security_21_ARD: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(2-1)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_21_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Rifleman_22_ARD: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(2-2)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_22_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_TeamLeader_22_ARD: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(2-2)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_22_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Marksman_22_ARD: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(2-2)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_22_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Assault_22_ARD: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(2-2)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_22_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Security_22_ARD: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(2-2)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_22_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Rifleman_23_ARD: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(2-3)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_23_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_TeamLeader_23_ARD: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(2-3)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_23_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Marksman_23_ARD: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(2-3)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_23_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Assault_23_ARD: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(2-3)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_23_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
	class 89th_M52A_Security_23_ARD: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(2-3)(ARD)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\ARD\89th_SoftVest_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52A_23_ARD.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52_Underlay_ARD.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\ARD\89th_M52D_ARD.paa"
		};
	};
};
