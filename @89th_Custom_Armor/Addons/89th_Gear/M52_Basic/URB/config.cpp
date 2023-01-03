class CfgPatches
{
	class 89th_M52_URB_patches
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
			"89th_M52A_Rifleman_URB",
			"89th_M52A_TeamLeader_URB",
			"89th_M52A_Marksman_URB",
			"89th_M52A_Assault_URB",
			"89th_M52A_Security_URB",
			"89th_M52A_CLS_URB",
			"89th_M52A_M_URB",
			"89th_M52D_R_URB",
			"89th_M52D_SCT_URB",
			"89th_M52D_SNPR_URB",
			"89th_M52D_DEMO_URB",
			"89th_M52D_Marksman_URB",
			"89th_M52A_Rifleman_URB",
			"89th_M52A_TeamLeader_11_URB",
			"89th_M52A_Marksman_11_URB",
			"89th_M52A_Assault_11_URB",
			"89th_M52A_Security_11_URB",
			"89th_M52A_Rifleman_URB",
			"89th_M52A_TeamLeader_12_URB",
			"89th_M52A_Marksman_12_URB",
			"89th_M52A_Assault_12_URB",
			"89th_M52A_Security_12_URB",
			"89th_M52A_Rifleman_URB",
			"89th_M52A_TeamLeader_13_URB",
			"89th_M52A_Marksman_13_URB",
			"89th_M52A_Assault_13_URB",
			"89th_M52A_Security_13_URB",
			"89th_M52A_Rifleman_URB",
			"89th_M52A_TeamLeader_21_URB",
			"89th_M52A_Marksman_21_URB",
			"89th_M52A_Assault_21_URB",
			"89th_M52A_Security_21_URB",
			"89th_M52A_Rifleman_URB",
			"89th_M52A_TeamLeader_22_URB",
			"89th_M52A_Marksman_22_URB",
			"89th_M52A_Assault_22_URB",
			"89th_M52A_Security_22_URB",
			"89th_M52A_Rifleman_URB",
			"89th_M52A_TeamLeader_23_URB",
			"89th_M52A_Marksman_23_URB",
			"89th_M52A_Assault_23_URB",
			"89th_M52A_Security_23_URB"
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
	class 89th_M52A_Rifleman_URB: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="[89th] M52A (Rifleman)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_BLANK_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_TeamLeader_URB: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_BLANK_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Marksman_URB: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="[89th] M52A (Marksman)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_BLANK_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Assault_URB: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="[89th] M52A (Assault)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_BLANK_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Security_URB: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice and Vespade";
		displayName="[89th] M52A (Security)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_BLANK_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_CLS_URB: 89th_M52A_CLS
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52A (CLS)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_CLS_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_M_URB: 89th_M52A_M
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52A (Medic)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_M_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52D_R_URB: 89th_M52D_R
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Rifleman)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_BLANK_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52D_SCT_URB: 89th_M52D_SCT
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Scout)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_BLANK_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52D_SNPR_URB: 89th_M52D_SNPR
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Sniper)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_BLANK_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52D_DEMO_URB: 89th_M52D_DEMO
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Demolition)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_BLANK_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52D_Marksman_URB: 89th_M52D_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Tas, Geek, and Vespade";
		displayName="[89th] M52D (Marksman)(URB)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_BLANK_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	//Squad Vests
	class 89th_M52A_Rifleman_11_URB: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(1-1)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_11_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_TeamLeader_11_URB: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(1-1)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_11_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Marksman_11_URB: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(1-1)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_11_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Assault_11_URB: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(1-1)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_11_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Security_11_URB: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(1-1)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_11_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Rifleman_12_URB: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(1-2)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_12_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_TeamLeader_12_URB: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(1-2)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_12_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Marksman_12_URB: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(1-2)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_12_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Assault_12_URB: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(1-2)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_12_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Security_12_URB: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(1-2)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_12_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Rifleman_13_URB: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(1-3)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_13_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_TeamLeader_13_URB: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(1-3)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_13_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Marksman_13_URB: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(1-3)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_13_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Assault_13_URB: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(1-3)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_13_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Security_13_URB: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(1-3)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_13_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Rifleman_21_URB: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(2-1)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_21_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_TeamLeader_21_URB: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(2-1)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_21_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Marksman_21_URB: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(2-1)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_21_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Assault_21_URB: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(2-1)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_21_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Security_21_URB: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(2-1)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_21_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Rifleman_22_URB: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(2-2)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_22_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_TeamLeader_22_URB: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(2-2)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_22_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Marksman_22_URB: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(2-2)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_22_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Assault_22_URB: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(2-2)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_22_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Security_22_URB: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(2-2)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_22_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Rifleman_23_URB: 89th_M52A_Rifleman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Rifleman)(2-3)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_23_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_TeamLeader_23_URB: 89th_M52A_TeamLeader
	{
		dlc="89thJTF";
		scope=2;
		author="Ice andd Vespade";
		displayName="[89th] M52A (Team Leader)(2-3)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_23_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Marksman_23_URB: 89th_M52A_Marksman
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Marksman)(2-3)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_23_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Assault_23_URB: 89th_M52A_Assault
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Assault)(2-3)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_23_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
	class 89th_M52A_Security_23_URB: 89th_M52A_Security
	{
		dlc="89thJTF";
		scope=2;
		author="Ice, Flips, Rojas, Vespade";
		displayName="[89th] M52A (Security)(2-3)(URB)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\URB\89th_SoftVest_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52A_23_URB.paa",
			"89th_Gear\M52_Basic\URB\89th_M52_Underlay_URB.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"89th_Gear\M52_Basic\URB\89th_M52D_URB.paa"
		};
	};
};
