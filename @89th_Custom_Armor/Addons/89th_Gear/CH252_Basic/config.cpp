class cfgPatches
{
	class 89th_CH252_patches
	{
		author="89th Mod Team";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"V_FZ_Armor",
			"OPTRE_Core"
		};
		units[] = {};
		weapons[]= {};
	};
};
class cfgWeapons
{
	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class VES_CH252_MAR_Light;
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_MAR_Vacuum_dp;
	class ItemInfo;
	//Open-Faced Helmet
	class 89th_CH252A_Light: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=0;
		author="Tas, Shelly, Edford, Vespade and Smackles";
		displayName="[89th] CH252A Light";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\ARD\89th_CH252A_ARD.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\ARD\89th_CH252A_ARD.paa",
				""
			};
		};
	};
	class 89th_CH252A_M_Light: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=0;
		author="Tas, Jake, Shelly, Vespade and Smackles";
		displayName="[89th] CH252A Light (Medic)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\ARD\89th_CH252A_M_ARD.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\ARD\89th_CH252A_M_ARD.paa",
				""
			};
		};
	};
	class 89th_CH252A_RTO_Light: VES_CH252_MAR_Light
	{
		dlc="89thJTF";
		scope=0;
		author="Tas, Jake, Shelly, Vespade and Smackles";
		displayName="[89th] CH252A Light (RTO)";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\ARD\89th_CH252A_RTO_ARD.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\ARD\89th_CH252A_RTO_ARD.paa",
				""
			};
		};
	};
	//Closed Face Helmet
	class 89th_CH252A: VES_CH252_MAR_VACuum
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)";
		scope=0;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\AR\89th_CH252A.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\AR\89th_CH252A.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_dp: VES_CH252_MAR_VACuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\ARD\89th_CH252A_ARD.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\ARD\89th_CH252A_ARD.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_M: VES_CH252_MAR_VACuum
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(Medic)";
		scope=0;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\ARD\89th_CH252A_M_ARD.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\ARD\89th_CH252A_M_ARD.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_M_dp: VES_CH252_MAR_VACuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(Medic)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\ARD\89th_CH252A_M_ARD.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\ARD\89th_CH252A_M_ARD.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	class 89th_CH252A_RTO: VES_CH252_MAR_VACuum
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(RTO)";
		scope=0;
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\ARD\89th_CH252A_RTO_ARD.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			model="\optre_unsc_units\army\helmet";
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\ARD\89th_CH252A_RTO_ARD.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252A_RTO_dp: VES_CH252_MAR_VACuum_dp
	{
		dlc="89thJTF";
		author="Tas, Jake, and Vespade";
		displayName="[89th] CH252A (Silver)(RTO)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\ARD\89th_CH252A_RTO_ARD.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\ARD\89th_CH252A_RTO_ARD.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa"
			};
		};
	};
	//ODST Helmet
	class 89th_CH252D: OPTRE_UNSC_CH252D_Helmet
	{
		dlc="89thJTF";
		scope=0;
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Silver)";
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
			"89th_Gear\CH252_Basic\ARD\89th_CH252D_ARD.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
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
				"89th_Gear\CH252_Basic\ARD\89th_CH252D_ARD.paa",
				"V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO.paa"
			};
		};
	};
	class 89th_CH252D_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc="89thJTF";
		author="Tas, Geek, and Vespade";
		displayName="[89th] CH252D (Silver)[OFF]";
		CTAB_Camera="true";
		hiddenSelectionsTextures[]=
		{
			"89th_Gear\CH252_Basic\ARD\89th_CH252D_ARD.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"89th_Gear\CH252_Basic\ARD\89th_CH252D_ARD.paa"
			};
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class 89th_CH252A_Helmets
		{
			label="[89th] CH252A";
			author="89th Mod Team";
			options[]=
			{
				"seal",
				"special",
				"camo",
				"color",
				"visor"
				
			};
			class seal
			{
				label="Vaccum Seal";
				alwaysSelectable=1;
				values[]=
				{
					"open",
					"vac"
				};
				class open
				{
					label="Open-faced";
				};
				class vac
				{
					label="Vac Sealed";
				};
			};
			class special
			{
				label="Specialization";
				alwaysSelectable=1;
				values[]=
				{
					"marine",
					"corp",
					"rto"
				};
				class marine
				{
					label="Marine";
					image="89th_Core\Emblems\Anvil.paa";
				};
				class corp
				{
					label="Corpsman";
					image="89th_Core\Emblems\Corpsman.paa";
				};
				class rto
				{
					label="RTO";
					image="89th_Core\Emblems\RTO.paa";
				};
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
			class color
			{
				label="Visor Color";
				alwaysSelectable=1;
				values[]=
				{
					"blue",
					"silver",
					"gold",
					"black"
				};
				class blue
				{
					label="Blue";
					image="#(rgb,8,8,3)color(0.282,0.298,0.396,1)";
				};
				class silver
				{
					label="Silver";
					image="#(rgb,8,8,3)color(0.600,0.600,0.729,1)";
				}
				class gold
				{
					label="Gold";
					image="#(rgb,8,8,3)color(0.624,0.569,0.467,1)";
				};
				class black
				{
					label="Black";
					image="#(rgb,8,8,3)color(0.220,0.220,0.231,1)";
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
		class 89th_CH252D_Helmets
		{
			label="[89th] CH252D";
			author="89th Mod Team";
			options[]=
			{
				"camo",
				"color",
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
			class color
			{
				label="Visor Color";
				alwaysSelectable=1;
				values[]=
				{
					"blue",
					"silver",
					"gold",
					"black"
				};
				class blue
				{
					label="Blue";
					image="#(rgb,8,8,3)color(0.282,0.298,0.396,1)";
				};
				class silver
				{
					label="Silver";
					image="#(rgb,8,8,3)color(0.600,0.600,0.729,1)";
				}
				class gold
				{
					label="Gold";
					image="#(rgb,8,8,3)color(0.624,0.569,0.467,1)";
				};
				class black
				{
					label="Black";
					image="#(rgb,8,8,3)color(0.220,0.220,0.231,1)";
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
		//Marine Helmets
		class 89th_CH252A_SLV_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="ARD";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="ARD";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="ARD";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="ARD";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="ARD";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="ARD";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="ARD";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="ARD";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="DES";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="DES";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="DES";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="DES";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="DES";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="DES";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="DES";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="DES";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="SNW";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="SNW";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="SNW";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="SNW";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="SNW";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="SNW";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="SNW";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="SNW";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="URB";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="URB";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="URB";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="URB";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="URB";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="URB";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="URB";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="URB";
			color="black";
			visor="off";
		};
		class 89th_CH252A_SLV_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="WDL";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_SLV_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="WDL";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_GLD_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="WDL";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_GLD_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="WDL";
			color="gold";
			visor="off";
		};class 89th_CH252A_BLU_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="WDL";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_BLU_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="WDL";
			color="blue";
			visor="off";
		};class 89th_CH252A_BLK_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="WDL";
			color="black";
			visor="on";
		};
		class 89th_CH252A_BLK_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="marine";
			camo="WDL";
			color="black";
			visor="off";
		};
		//Corpsman Helmets
		class 89th_CH252A_M_SLV_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="ARD";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_M_SLV_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="ARD";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_M_GLD_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="ARD";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_M_GLD_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="ARD";
			color="gold";
			visor="off";
		};class 89th_CH252A_M_BLU_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="ARD";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_M_BLU_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="ARD";
			color="blue";
			visor="off";
		};class 89th_CH252A_M_BLK_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="ARD";
			color="black";
			visor="on";
		};
		class 89th_CH252A_M_BLK_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="ARD";
			color="black";
			visor="off";
		};
		class 89th_CH252A_M_SLV_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="DES";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_M_SLV_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="DES";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_M_GLD_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="DES";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_M_GLD_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="DES";
			color="gold";
			visor="off";
		};class 89th_CH252A_M_BLU_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="DES";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_M_BLU_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="DES";
			color="blue";
			visor="off";
		};class 89th_CH252A_M_BLK_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="DES";
			color="black";
			visor="on";
		};
		class 89th_CH252A_M_BLK_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="DES";
			color="black";
			visor="off";
		};
		class 89th_CH252A_M_SLV_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="SNW";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_M_SLV_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="SNW";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_M_GLD_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="SNW";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_M_GLD_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="SNW";
			color="gold";
			visor="off";
		};class 89th_CH252A_M_BLU_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="SNW";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_M_BLU_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="SNW";
			color="blue";
			visor="off";
		};class 89th_CH252A_M_BLK_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="SNW";
			color="black";
			visor="on";
		};
		class 89th_CH252A_M_BLK_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="SNW";
			color="black";
			visor="off";
		};
		class 89th_CH252A_M_SLV_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="URB";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_M_SLV_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="URB";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_M_GLD_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="URB";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_M_GLD_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="URB";
			color="gold";
			visor="off";
		};class 89th_CH252A_M_BLU_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="URB";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_M_BLU_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="URB";
			color="blue";
			visor="off";
		};class 89th_CH252A_M_BLK_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="URB";
			color="black";
			visor="on";
		};
		class 89th_CH252A_M_BLK_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="URB";
			color="black";
			visor="off";
		};
		class 89th_CH252A_M_SLV_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="WDL";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_M_SLV_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="WDL";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_M_GLD_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="WDL";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_M_GLD_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="WDL";
			color="gold";
			visor="off";
		};
		class 89th_CH252A_M_BLU_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="WDL";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_M_BLU_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="WDL";
			color="blue";
			visor="off";
		};
		class 89th_CH252A_M_BLK_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="WDL";
			color="black";
			visor="on";
		};
		class 89th_CH252A_M_BLK_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="corp";
			camo="WDL";
			color="black";
			visor="off";
		};
		//Marine Light Helmets
		class 89th_CH252A_Light_ARD
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="marine";
			camo="ARD";
		};
		class 89th_CH252A_Light_DES
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="marine";
			camo="DES";
		};
		class 89th_CH252A_Light_SNW
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="marine";
			camo="SNW";
		};
		class 89th_CH252A_Light_URB
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="marine";
			camo="URB";
		};
		class 89th_CH252A_Light_WDL
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="marine";
			camo="WDL";
		};
		//RTO VAC Helmets
		class 89th_CH252A_RTO_SLV_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="ARD";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_RTO_SLV_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="ARD";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_RTO_GLD_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="ARD";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_RTO_GLD_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="ARD";
			color="gold";
			visor="off";
		};class 89th_CH252A_RTO_BLU_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="ARD";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_RTO_BLU_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="ARD";
			color="blue";
			visor="off";
		};class 89th_CH252A_RTO_BLK_ARD
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="ARD";
			color="black";
			visor="on";
		};
		class 89th_CH252A_RTO_BLK_ARD_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="ARD";
			color="black";
			visor="off";
		};
		class 89th_CH252A_RTO_SLV_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="DES";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_RTO_SLV_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="DES";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_RTO_GLD_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="DES";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_RTO_GLD_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="DES";
			color="gold";
			visor="off";
		};class 89th_CH252A_RTO_BLU_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="DES";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_RTO_BLU_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="DES";
			color="blue";
			visor="off";
		};class 89th_CH252A_RTO_BLK_DES
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="DES";
			color="black";
			visor="on";
		};
		class 89th_CH252A_RTO_BLK_DES_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="DES";
			color="black";
			visor="off";
		};
		class 89th_CH252A_RTO_SLV_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="SNW";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_RTO_SLV_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="SNW";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_RTO_GLD_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="SNW";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_RTO_GLD_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="SNW";
			color="gold";
			visor="off";
		};class 89th_CH252A_RTO_BLU_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="SNW";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_RTO_BLU_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="SNW";
			color="blue";
			visor="off";
		};class 89th_CH252A_RTO_BLK_SNW
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="SNW";
			color="black";
			visor="on";
		};
		class 89th_CH252A_RTO_BLK_SNW_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="SNW";
			color="black";
			visor="off";
		};
		class 89th_CH252A_RTO_SLV_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="URB";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_RTO_SLV_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="URB";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_RTO_GLD_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="URB";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_RTO_GLD_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="URB";
			color="gold";
			visor="off";
		};class 89th_CH252A_RTO_BLU_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="URB";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_RTO_BLU_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="URB";
			color="blue";
			visor="off";
		};class 89th_CH252A_RTO_BLK_URB
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="URB";
			color="black";
			visor="on";
		};
		class 89th_CH252A_RTO_BLK_URB_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="URB";
			color="black";
			visor="off";
		};
		class 89th_CH252A_RTO_SLV_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="WDL";
			color="silver";
			visor="on";
		};
		class 89th_CH252A_RTO_SLV_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="WDL";
			color="silver";
			visor="off";
		};
		class 89th_CH252A_RTO_GLD_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="WDL";
			color="gold";
			visor="on";
		};
		class 89th_CH252A_RTO_GLD_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="WDL";
			color="gold";
			visor="off";
		};
		class 89th_CH252A_RTO_BLU_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="WDL";
			color="blue";
			visor="on";
		};
		class 89th_CH252A_RTO_BLU_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="WDL";
			color="blue";
			visor="off";
		};
		class 89th_CH252A_RTO_BLK_WDL
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="WDL";
			color="black";
			visor="on";
		};
		class 89th_CH252A_RTO_BLK_WDL_dp
		{
			model="89th_CH252A_Helmets";
			seal="vac";
			special="rto";
			camo="WDL";
			color="black";
			visor="off";
		};
		//Corpsman Light Helmets
		class 89th_CH252A_M_Light_ARD
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="corp";
			camo="ARD";
		};
		class 89th_CH252A_M_Light_DES
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="corp";
			camo="DES";
		};
		class 89th_CH252A_M_Light_SNW
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="corp";
			camo="SNW";
		};
		class 89th_CH252A_M_Light_URB
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="corp";
			camo="URB";
		};
		class 89th_CH252A_M_Light_WDL
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="corp";
			camo="WDL";
		};
		//RTO Light Helmets
		class 89th_CH252A_RTO_Light_ARD
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="rto";
			camo="ARD";
		};
		class 89th_CH252A_RTO_Light_DES
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="rto";
			camo="DES";
		};
		class 89th_CH252A_RTO_Light_SNW
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="rto";
			camo="SNW";
		};
		class 89th_CH252A_RTO_Light_URB
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="rto";
			camo="URB";
		};
		class 89th_CH252A_RTO_Light_WDL
		{
			model="89th_CH252A_Helmets";
			seal="open";
			special="rto";
			camo="WDL";
		};
		//ODST Helmets
		class 89th_CH252D_SLV_ARD
		{
			model="89th_CH252D_Helmets";
			camo="ARD";
			color="silver";
			visor="on";
		};
		class 89th_CH252D_SLV_ARD_dp
		{
			model="89th_CH252D_Helmets";
			camo="ARD";
			color="silver";
			visor="off";
		};
		class 89th_CH252D_GLD_ARD
		{
			model="89th_CH252D_Helmets";
			
			camo="ARD";
			color="gold";
			visor="on";
		};
		class 89th_CH252D_GLD_ARD_dp
		{
			model="89th_CH252D_Helmets";
			camo="ARD";
			color="gold";
			visor="off";
		};
		class 89th_CH252D_BLU_ARD
		{
			model="89th_CH252D_Helmets";
			camo="ARD";
			color="blue";
			visor="on";
		};
		class 89th_CH252D_BLU_ARD_dp
		{
			model="89th_CH252D_Helmets";
			camo="ARD";
			color="blue";
			visor="off";
		};
		class 89th_CH252D_BLK_ARD
		{
			model="89th_CH252D_Helmets";
			camo="ARD";
			color="black";
			visor="on";
		};
		class 89th_CH252D_BLK_ARD_dp
		{
			model="89th_CH252D_Helmets";
			camo="ARD";
			color="black";
			visor="off";
		};
		class 89th_CH252D_SLV_DES
		{
			model="89th_CH252D_Helmets";
			camo="DES";
			color="silver";
			visor="on";
		};
		class 89th_CH252D_SLV_DES_dp
		{
			model="89th_CH252D_Helmets";
			camo="DES";
			color="silver";
			visor="off";
		};
		class 89th_CH252D_GLD_DES
		{
			model="89th_CH252D_Helmets";
			
			camo="DES";
			color="gold";
			visor="on";
		};
		class 89th_CH252D_GLD_DES_dp
		{
			model="89th_CH252D_Helmets";
			camo="DES";
			color="gold";
			visor="off";
		};
		class 89th_CH252D_BLU_DES
		{
			model="89th_CH252D_Helmets";
			camo="DES";
			color="blue";
			visor="on";
		};
		class 89th_CH252D_BLU_DES_dp
		{
			model="89th_CH252D_Helmets";
			camo="DES";
			color="blue";
			visor="off";
		};
		class 89th_CH252D_BLK_DES
		{
			model="89th_CH252D_Helmets";
			camo="DES";
			color="black";
			visor="on";
		};
		class 89th_CH252D_BLK_DES_dp
		{
			model="89th_CH252D_Helmets";
			camo="DES";
			color="black";
			visor="off";
		};
		class 89th_CH252D_SLV_SNW
		{
			model="89th_CH252D_Helmets";
			camo="SNW";
			color="silver";
			visor="on";
		};
		class 89th_CH252D_SLV_SNW_dp
		{
			model="89th_CH252D_Helmets";
			camo="SNW";
			color="silver";
			visor="off";
		};
		class 89th_CH252D_GLD_SNW
		{
			model="89th_CH252D_Helmets";
			
			camo="SNW";
			color="gold";
			visor="on";
		};
		class 89th_CH252D_GLD_SNW_dp
		{
			model="89th_CH252D_Helmets";
			camo="SNW";
			color="gold";
			visor="off";
		};
		class 89th_CH252D_BLU_SNW
		{
			model="89th_CH252D_Helmets";
			camo="SNW";
			color="blue";
			visor="on";
		};
		class 89th_CH252D_BLU_SNW_dp
		{
			model="89th_CH252D_Helmets";
			camo="SNW";
			color="blue";
			visor="off";
		};
		class 89th_CH252D_BLK_SNW
		{
			model="89th_CH252D_Helmets";
			camo="SNW";
			color="black";
			visor="on";
		};
		class 89th_CH252D_BLK_SNW_dp
		{
			model="89th_CH252D_Helmets";
			camo="SNW";
			color="black";
			visor="off";
		};
		class 89th_CH252D_SLV_URB
		{
			model="89th_CH252D_Helmets";
			camo="URB";
			color="silver";
			visor="on";
		};
		class 89th_CH252D_SLV_URB_dp
		{
			model="89th_CH252D_Helmets";
			camo="URB";
			color="silver";
			visor="off";
		};
		class 89th_CH252D_GLD_URB
		{
			model="89th_CH252D_Helmets";
			
			camo="URB";
			color="gold";
			visor="on";
		};
		class 89th_CH252D_GLD_URB_dp
		{
			model="89th_CH252D_Helmets";
			camo="URB";
			color="gold";
			visor="off";
		};
		class 89th_CH252D_BLU_URB
		{
			model="89th_CH252D_Helmets";
			camo="URB";
			color="blue";
			visor="on";
		};
		class 89th_CH252D_BLU_URB_dp
		{
			model="89th_CH252D_Helmets";
			camo="URB";
			color="blue";
			visor="off";
		};
		class 89th_CH252D_BLK_URB
		{
			model="89th_CH252D_Helmets";
			camo="URB";
			color="black";
			visor="on";
		};
		class 89th_CH252D_BLK_URB_dp
		{
			model="89th_CH252D_Helmets";
			camo="URB";
			color="black";
			visor="off";
		};
		class 89th_CH252D_SLV_WDL
		{
			model="89th_CH252D_Helmets";
			camo="WDL";
			color="silver";
			visor="on";
		};
		class 89th_CH252D_SLV_WDL_dp
		{
			model="89th_CH252D_Helmets";
			camo="WDL";
			color="silver";
			visor="off";
		};
		class 89th_CH252D_GLD_WDL
		{
			model="89th_CH252D_Helmets";
			
			camo="WDL";
			color="gold";
			visor="on";
		};
		class 89th_CH252D_GLD_WDL_dp
		{
			model="89th_CH252D_Helmets";
			camo="WDL";
			color="gold";
			visor="off";
		};
		class 89th_CH252D_BLU_WDL
		{
			model="89th_CH252D_Helmets";
			camo="WDL";
			color="blue";
			visor="on";
		};
		class 89th_CH252D_BLU_WDL_dp
		{
			model="89th_CH252D_Helmets";
			camo="WDL";
			color="blue";
			visor="off";
		};
		class 89th_CH252D_BLK_WDL
		{
			model="89th_CH252D_Helmets";
			camo="WDL";
			color="black";
			visor="on";
		};
		class 89th_CH252D_BLK_WDL_dp
		{
			model="89th_CH252D_Helmets";
			camo="WDL";
			color="black";
			visor="off";
		};
	};
};