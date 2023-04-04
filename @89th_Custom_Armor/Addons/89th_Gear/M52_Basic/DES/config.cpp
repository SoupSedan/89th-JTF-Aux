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
		units[] = {};
		weapons[]=
		{
			"89th_M52A_Rifleman_DES",
			"89th_M52A_TeamLeader_DES",
			"89th_M52A_Marksman_DES",
			"89th_M52A_Assault_DES",
			"89th_M52A_Security_DES",
			"89th_M52A_CLS_DES",
			"89th_M52A_M_DES",
			"89th_M52A_RTO_DES",
			"89th_M52D_R_DES",
			"89th_M52D_SCT_DES",
			"89th_M52D_SNPR_DES",
			"89th_M52D_DEMO_DES",
			"89th_M52D_Marksman_DES"
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
	class 89th_M52A_RTO;
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
	class 89th_M52A_RTO_DES: 89th_M52A_RTO
	{
		dlc="89thJTF";
		scope=2;
		author="Flips, Rojas, Vespade";
		displayName="[89th] M52A (RTO)(DES)";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\M52_Basic\DES\89th_SoftVest_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_BLANK_DES.paa",
			"89th_Gear\M52_Basic\DES\89th_M52_Underlay_RTO_DES.paa",
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
};
