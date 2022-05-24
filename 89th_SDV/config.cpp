class CfgPatches
{
  class 89th_SDV_patches
  {
    requiredAddons[]=
    {
      "A3_Boat_F_Beta"
    };
    requiredVersion=0.1;
    units[]=
    {
      "89th_SDV"
    };
    weapons[]={};
  };
};
class DefaultEventHandlers;
class CfgVehicles
{
  class Ship_F;
  class Boat_F: Ship_F
  {
    class NewTurret;
    class Turrets;
    class EventHandlers;
    class AnimationSources;
    class ViewOptics;
  };
  class 89th_SDV_01_base_F: Boat_F
  {
    features="Randomization: No						<br />Camo selections: 1 - the whole body						<br />Script door sources: None						<br />Script animations: Doors, periscope						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: 1 and 2";
    author="$STR_A3_Bohemia_Interactive";
    class textureSources{};
    hiddenSelections[]={"camo"};
    hiddenSelectionsTextures[]=
    {
    "89th_SDV\Data\89th_sdv_co.paa"
    };
    mapSize=8.4499998;
    class SpeechVariants
    {
      class Default
      {
        speechSingular[]=
        {
          "veh_ship_submarine_s"
        };
        speechPlural[]=
        {
          "veh_ship_submarine_p"
        };
      };
    };
    textSingular="$STR_A3_nameSound_veh_ship_submarine_s";
    textPlural="$STR_A3_nameSound_veh_ship_submarine_p";
    nameSound="veh_ship_submarine_s";
    _generalMacro="SDV_01_base_F";
    displayName="$STR_A3_CfgVehicles_SDV_Base0";
    vehicleClass="Submarine";
    model="\A3\boat_f_beta\SDV_01\SDV_01_F.p3d";
    editorSubcategory="EdSubcat_Submersibles";
    picture="\A3\boat_f_beta\SDV_01\data\ui\portrait_SDV_ca.paa";
    Icon="\A3\boat_f_beta\SDV_01\data\ui\map_SDV_ca.paa";
    unitInfoType="RscOptics_SDV_driver";
    fuelCapacity=240;
    leftEngineEffect="LEngEffectsSmall";
    rightEngineEffect="REngEffectsSmall";
    class TransportWeapons
    {
    };
    class TransportMagazines
    {
    };
    class TransportItems
    {
      class _xx_FirstAidKit
      {
        name="FirstAidKit";
        count=2;
      };
    };
    memoryPointSupply="door_back_axis";
    supplyRadius=10;
    memoryPointTaskMarker="TaskMarker_1_pos";
    slingLoadCargoMemoryPoints[]=
    {
      "SlingLoadCargo1",
      "SlingLoadCargo2",
      "SlingLoadCargo3",
      "SlingLoadCargo4"
    };
    attenuationEffectType="TankAttenuation";
    insideSoundCoef=1;
    soundEngineOnInt[]=
    {
      "A3\Sounds_F\vehicles\boat\SDV\sdv-start2-ext",
      0.099999994,
      1
    };
    soundEngineOnExt[]=
    {
      "A3\Sounds_F\vehicles\boat\SDV\sdv-start2-ext",
      1,
      1,
      100
    };
    soundEngineOffInt[]=
    {
      "A3\Sounds_F\vehicles\boat\SDV\sdv-stop2-ext",
      0.099999994,
      1
    };
    soundEngineOffExt[]=
    {
      "A3\Sounds_F\vehicles\boat\SDV\sdv-stop2-ext",
      1,
      1,
      100
    };
    buildCrash0[]=
    {
      "A3\sounds_f\Vehicles\soft\noises\crash_building_01",
      1.7782794,
      1,
      200
    };
    buildCrash1[]=
    {
      "A3\sounds_f\Vehicles\soft\noises\crash_building_02",
      1.7782794,
      1,
      200
    };
    buildCrash2[]=
    {
      "A3\sounds_f\Vehicles\soft\noises\crash_building_03",
      1.7782794,
      1,
      200
    };
    buildCrash3[]=
    {
      "A3\sounds_f\Vehicles\soft\noises\crash_building_04",
      1.7782794,
      1,
      200
    };
    soundBuildingCrash[]=
    {
      "buildCrash0",
      0.25,
      "buildCrash1",
      0.25,
      "buildCrash2",
      0.25,
      "buildCrash3",
      0.25
    };
    WoodCrash0[]=
    {
      "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",
      1.7782794,
      1,
      200
    };
    WoodCrash1[]=
    {
      "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",
      1.7782794,
      1,
      200
    };
    WoodCrash2[]=
    {
      "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",
      1.7782794,
      1,
      200
    };
    WoodCrash3[]=
    {
      "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",
      1.7782794,
      1,
      200
    };
    WoodCrash4[]=
    {
      "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",
      1.7782794,
      1,
      200
    };
    WoodCrash5[]=
    {
      "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",
      1.7782794,
      1,
      200
    };
    soundWoodCrash[]=
    {
      "woodCrash0",
      0.16599999,
      "woodCrash1",
      0.16599999,
      "woodCrash2",
      0.16599999,
      "woodCrash3",
      0.16599999,
      "woodCrash4",
      0.16599999,
      "woodCrash5",
      0.16599999
    };
    ArmorCrash0[]=
    {
      "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",
      1.7782794,
      1,
      200
    };
    ArmorCrash1[]=
    {
      "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",
      1.7782794,
      1,
      200
    };
    ArmorCrash2[]=
    {
      "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",
      1.7782794,
      1,
      200
    };
    ArmorCrash3[]=
    {
      "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",
      1.7782794,
      1,
      200
    };
    soundArmorCrash[]=
    {
      "ArmorCrash0",
      0.25,
      "ArmorCrash1",
      0.25,
      "ArmorCrash2",
      0.25,
      "ArmorCrash3",
      0.25
    };
    class Sounds
    {
      class IdleOut
      {
        sound[]=
        {
          "A3\Sounds_F\vehicles\boat\SDV\SDV_engine_2",
          1,
          2.5,
          100
        };
        frequency="1";
        volume="engineOn* (thrust factor[1, 0])*0.1";
      };
      class Engine
      {
        sound[]=
        {
          "A3\Sounds_F\vehicles\boat\SDV\SDV_engine_2",
          1,
          3,
          300
        };
        frequency="0.70	+	(thrust *0.30)";
        volume="engineOn* thrust*0.1";
      };
      class LodnSroub
      {
        sound[]=
        {
          "A3\Sounds_F\vehicles\boat\SDV\lopatky1",
          1,
          2,
          200
        };
        frequency="0.85	+	(thrust *0.15)";
        volume="engineOn* thrust*0.3";
      };
      class WaternoiseOutW0
      {
        sound[]=
        {
          "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
          1,
          1,
          100
        };
        frequency="1";
        volume="(speed factor[3, 0]) * water";
      };
      class WaternoiseOutW1
      {
        sound[]=
        {
          "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-10-speed",
          1,
          1,
          200
        };
        frequency="1";
        volume="(speed factor[1, 4])";
      };
      class RainExt
      {
        sound[]=
        {
          "A3\Sounds_F\vehicles\noises\rain1_ext",
          1,
          1,
          100
        };
        frequency=1;
        volume="camPos * (rain - rotorSpeed/2) * 2";
      };
      class RainInt
      {
        sound[]=
        {
          "A3\Sounds_F\vehicles\noises\rain1_ext",
          1,
          1,
          100
        };
        frequency=1;
        volume="(1-camPos)*(rain - rotorSpeed/2)*2";
      };
    };
    class RenderTargets
    {
      class MDF1
      {
        renderTarget="rendertarget0";
        class PilotCameraView1
        {
          pointPosition="PIP0_pos";
          pointDirection="PIP0_dir";
          renderQuality=0;
          renderVisionMode=0;
          fov=0.5;
        };
        BBoxes[]=
        {
          "PIP_0_TL",
          "PIP_0_TR",
          "PIP_0_BL",
          "PIP_0_BR"
        };
      };
      class periscope
      {
        renderTarget="rendertarget1";
        class CameraView1
        {
          pointPosition="PIP1_pos";
          pointDirection="PIP1_dir";
          renderQuality=0;
          renderVisionMode=0;
          fov=0.69999999;
        };
        BBoxes[]=
        {
          "PIP_1_TL",
          "PIP_1_TR",
          "PIP_1_BL",
          "PIP_1_BR"
        };
      };
    };
    driverCompartments="Compartment1";
    cargoCompartments[]=
    {
      "Compartment2"
    };
    driverAction="driver_SDV";
    cargoAction[]=
    {
      "passenger_SDV",
      "passenger_SDV"
    };
    ejectDeadDriver=0;
    ejectDeadCargo=0;
    memoryPointsGetInCargo="pos cargo";
    memoryPointsGetInCargoDir="pos cargo dir";
    driverLeftHandAnimName="drivingwheel";
    driverRightHandAnimName="drivingwheel";
    getInAction="GetInLow";
    getOutAction="GetOutLow";
    cargoGetInAction[]=
    {
      "GetInLow"
    };
    cargoGetOutAction[]=
    {
      "GetOutLow"
    };
    driverOpticsModel="\A3\weapons_f_beta\reticle\reticle_SDV_driver";
    memoryPointDriverOptics="PIP0_dir";
    driverForceOptics=0;
    enableGPS=1;
    transportSoldier=2;
    typicalCargo[]=
    {
      "B_diver_F",
      "B_diver_F"
    };
    threat[]={0.1,0.1,0.1};
    armor=30;
    showNVGCargo[]={0};
    showNVGDriver=0;
    showNVGGunner=0;
    class ViewOptics: ViewOptics
    {
      visionMode[]=
      {
        "Normal",
        "NVG"
      };
    };
    precision=10;
    verticalTurnCoef=0.05;
    turnCoef=0.2;
    acceleration=60;
    maxSpeed=50;
    waterSpeedFactor=1;
    periscopeDepth=1.2;
    idleRpm=200;
    redRpm=2400;
    thrustDelay=2;
    formationX=15;
    formationZ=15;
    simulation="submarinex";
    overSpeedBrakeCoef=0.80000001;
    enginePower=300;
    engineShiftY=0.78;
    waterLeakiness=0;
    waterResistanceCoef=0.05;
    waterLinearDampingCoefX=2;
    waterLinearDampingCoefY=0.1;
    waterAngularDampingCoef=1;
    rudderForceCoef=0.2;
    rudderForceCoefAtMaxSpeed=0.2;
    class Exhausts
    {
      class Exhaust1
      {
        position="exhaust";
        direction="exhaust_dir";
        effect="ExhaustsEffectBig";
      };
    };
    waterEffectSpeed=25;
    engineEffectSpeed=5;
    leftDustEffect="DustEffectBottom";
    class AnimationSources: AnimationSources
    {
      class Doors
      {
        source="user";
        animPeriod=0;
        initPhase=1;
      };
      class periscope
      {
        source="user";
        animPeriod=0;
        initPhase=0;
      };
    };
    class UserActions
    {
      class CloseDriverdoor
      {
        displayName="$STR_A3_Hatch_close";
        displayNameDefault="$STR_A3_Hatch_close";
        position="drivingwheel_axis";
        radius=4;
        onlyForplayer=0;
        condition="this animationPhase ""door_1_1"" > 0.5 AND Alive(this) AND player in (crew this)";
        statement="this animate [""door_1_1"",0];this animate [""door_1_2"",0];this animate [""door_2_1"",0];this animate [""door_2_2"",0];";
      };
      class OpenDriverdoor: CloseDriverdoor
      {
        displayName="$STR_A3_Hatch_open";
        displayNameDefault="$STR_A3_Hatch_open";
        condition="this animationPhase ""door_1_1"" < 0.5 AND Alive(this) AND player in (crew this)";
        statement="this animate [""door_1_1"",1];this animate [""door_1_2"",1];this animate [""door_2_1"",1];this animate [""door_2_2"",1];";
      };
      class periscope_up
      {
        displayName="$STR_A3_periscope_up";
        displayNameDefault="$STR_A3_periscope_up";
        position="drivingwheel_axis";
        radius=4;
        onlyForplayer=0;
        condition="this animationPhase ""periscope"" > 0.5 AND Alive(this) AND gunner this == player";
        statement="this animate [""periscope"",0];this animate [""Antenna"",0];this animate [""HideScope"",0]; this animate [""display_on_R"",0];";
      };
      class periscope_down: periscope_up
      {
        displayName="$STR_A3_periscope_down";
        displayNameDefault="$STR_A3_periscope_down";
        condition="this animationPhase ""periscope"" < 0.5 AND Alive(this) AND gunner this == player";
        statement="this animate [""periscope"",3];this animate [""Antenna"",3];this animate [""HideScope"",3]; this animate [""display_on_R"",1];";
      };
    };
    class Turrets: Turrets
    {
      class CommanderTurret: NewTurret
      {
        gunnerCompartments="Compartment1";
        gunnerName="$STR_POSITION_GUNNER";
        proxyType="CPCommander";
        commanding=-1;
        ejectDeadGunner=0;
        body="ObsTurret";
        gun="ObsGun";
        animationSourceBody="ObsTurret";
        animationSourceGun="ObsGun";
        gunBeg="PIP1_dir";
        gunEnd="PIP1_pos";
        memoryPointGunnerOptics="PIP1_dir";
        weapons[]=
        {
          "Laserdesignator_mounted"
        };
        magazines[]=
        {
          "Laserbatteries"
        };
        soundServo[]=
        {
          "A3\sounds_f\dummysound",
          0.0099999998,
          1,
          10
        };
        gunnerAction="commander_SDV";
        gunnergetInAction="GetInLow";
        gunnergetOutAction="GetOutLow";
        memoryPointsGetInGunner="pos commander";
        memoryPointsGetInGunnerDir="pos commander dir";
        usePip=1;
        Laser=1;
        stabilizedInAxes=4;
        gunnerOpticsModel="\A3\weapons_f_beta\reticle\reticle_SDV";
        turretInfoType="RscOptics_SDV_periscope";
        gunnerForceOptics=0;
        LODTurnedIn=1100;
        LODTurnedOut=1100;
        outGunnerMayFire=1;
        startEngine=0;
        class ViewOptics: ViewOptics
        {
          initAngleX=0;
          minAngleX=0;
          maxAngleX=0;
          initAngleY=0;
          minAngleY=-180;
          maxAngleY=180;
          initFov=0.14;
          minFov=0.0175;
          maxFov=0.14;
          visionMode[]=
          {
            "Normal",
            "NVG",
            "Ti"
          };
          thermalMode[]={2,3,4};
        };
      };
    };
    class Library
    {
      libTextDesc="$STR_A3_CfgVehicles_SDV_Base_Library0";
    };
    extCameraPosition[]={0,1.5,-9};
    class HitPoints
    {
      class HitEngine
      {
        armor=0.5;
        material=10;
        name="engine";
        visual="";
        passThrough=0.2;
      };
      class HitBody
      {
        armor=10;
        material=-1;
        name="karoserie";
        visual="zbytek";
        passThrough=1;
      };
    };
    class MFD
    {
      class AirplaneHUD
      {
        enableParallax=0;
        borderLeft=0;
        borderRight=0;
        borderTop=0;
        borderBottom=0;
        color[]={0,0.5,0.40000001,1};
        class Bones
        {
          class PlaneW
          {
            type="fixed";
            pos[]={0.4975,0.48800001};
          };
          class Center
          {
            type="fixed";
            pos[]={0.4975,0.68300003};
          };
          class Limit0109
          {
            type="limit";
            limits[]={0.1,0.1,0.89999998,0.89999998};
          };
          class Velocity
          {
            type="vector";
            source="velocity";
            pos0[]={0.5,0.68300003};
            pos10[]={1.45,1.753};
          };
          class HorizonBankRot
          {
            type="rotational";
            source="horizonBank";
            center[]={0.4975,0.48800001};
            min=0.52359998;
            max=-0.52359998;
            minAngle=159.25;
            maxAngle=200.75;
            aspectRatio=1;
          };
          class HorizonBankRotFull
          {
            type="rotational";
            source="horizonBank";
            center[]={0,0};
            min=-3.1415999;
            max=3.1415999;
            minAngle=-180;
            maxAngle=180;
            aspectRatio=1;
          };
          class Level0
          {
            pos0[]={0.4975,0.5};
            pos10[]={1.4475,1.0700001};
            type="horizon";
            angle=0;
          };
          class LevelP5: Level0
          {
            angle=5;
          };
          class LevelM5: Level0
          {
            angle=-5;
          };
          class LevelP10: Level0
          {
            angle=10;
          };
          class LevelM10: Level0
          {
            angle=-10;
          };
          class LevelP15: Level0
          {
            angle=15;
          };
          class LevelM15: Level0
          {
            angle=-15;
          };
          class LevelP20: Level0
          {
            angle=20;
          };
          class LevelM20: Level0
          {
            angle=-20;
          };
          class LevelP25: Level0
          {
            angle=25;
          };
          class LevelM25: Level0
          {
            angle=-25;
          };
          class LevelP30: Level0
          {
            angle=30;
          };
          class LevelM30: Level0
          {
            angle=-30;
          };
          class LevelP35: Level0
          {
            angle=35;
          };
          class LevelM35: Level0
          {
            angle=-35;
          };
          class LevelP40: Level0
          {
            angle=40;
          };
          class LevelM40: Level0
          {
            angle=-40;
          };
          class LevelP45: Level0
          {
            angle=45;
          };
          class LevelM45: Level0
          {
            angle=-45;
          };
          class LevelP50: Level0
          {
            angle=50;
          };
          class LevelM50: Level0
          {
            angle=-50;
          };
          class LevelP55: Level0
          {
            angle=55;
          };
          class LevelM55: Level0
          {
            angle=-55;
          };
          class LevelP60: Level0
          {
            angle=60;
          };
          class LevelM60: Level0
          {
            angle=-60;
          };
          class LevelP65: Level0
          {
            angle=65;
          };
          class LevelM65: Level0
          {
            angle=-65;
          };
          class LevelP70: Level0
          {
            angle=70;
          };
          class LevelM70: Level0
          {
            angle=-70;
          };
          class LevelP75: Level0
          {
            angle=75;
          };
          class LevelM75: Level0
          {
            angle=-75;
          };
          class LevelP80: Level0
          {
            angle=80;
          };
          class LevelM80: Level0
          {
            angle=-80;
          };
          class LevelP85: Level0
          {
            angle=85;
          };
          class LevelM85: Level0
          {
            angle=-85;
          };
          class LevelP90: Level0
          {
            angle=90;
          };
          class LevelM90: Level0
          {
            angle=-90;
          };
        };
        class Draw
        {
          alpha=1;
          color[]={0.039999999,0,0};
          condition="on";
          class PlaneW
          {
            type="line";
            points[]=
            {

              {
                "PlaneW",
                {-0.029999999,0},
                1
              },

              {
                "PlaneW",
                {-0.0099999998,0},
                1
              },

              {
                "PlaneW",
                {0,0.0225263},
                1
              },

              {
                "PlaneW",
                {0.0099999998,0},
                1
              },

              {
                "PlaneW",
                {0.029999999,0},
                1
              },
              {},

              {
                "PlaneW",
                {-0.185,0},
                1
              },

              {
                "PlaneW",
                {-0.26499999,0},
                1
              },
              {},

              {
                "PlaneW",
                {0.185,0},
                1
              },

              {
                "PlaneW",
                {0.26499999,0},
                1
              }
            };
          };
          class Static
          {
            type="line";
            points[]={};
          };
          class Horizont
          {
            clipTL[]={0,0.15000001};
            clipBR[]={1,0.85000002};
            class Dimmed
            {
              class Level0
              {
                type="line";
                points[]=
                {

                  {
                    "Level0",
                    {0.1,0},
                    1
                  },

                  {
                    "Level0",
                    {-0.1,0},
                    1
                  },
                  {}
                  };
                };
                class LevelM5: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM5",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM5",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP5: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP5",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP5",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM10: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM10",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM10",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP10: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP10",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP10",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM15: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM15",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM15",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP15: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP15",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP15",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM20: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM20",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM20",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP20: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP20",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP20",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM25: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM25",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM25",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP25: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP25",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP25",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM30: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM30",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM30",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP30: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP30",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP30",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM35: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM35",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM35",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP35: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP35",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP35",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM40: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM40",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM40",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP40: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP40",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP40",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM45: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM45",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM45",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP45: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP45",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP45",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM50: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM50",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM50",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP50: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP50",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP50",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM55: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM55",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM55",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP55: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP55",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP55",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM60: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM60",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM60",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP60: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP60",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP60",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM65: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM65",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM65",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP65: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP65",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP65",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM70: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM70",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM70",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP70: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP70",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP70",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM75: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM75",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM75",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP75: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP75",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP75",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM80: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM80",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM80",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP80: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP80",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP80",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM85: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM85",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM85",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP85: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP85",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP85",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelM90: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelM90",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelM90",
                      {0.1,0},
                      1
                    }
                  };
                };
                class LevelP90: Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "LevelP90",
                      {-0.1,0},
                      1
                    },

                    {
                      "LevelP90",
                      {0.1,0},
                      1
                    }
                  };
                };
              };
            };
            class AltNumberASL
            {
              class Box
              {
                type="line";
                points[]=
                {

                  {
                    {0.75999999,0.50627899},
                    1
                  },

                  {
                    {0.83999997,0.50627899},
                    1
                  },

                  {
                    {0.83999997,0.466858},
                    1
                  },

                  {
                    {0.75999999,0.466858},
                    1
                  },

                  {
                    {0.75999999,0.50627899},
                    1
                  }
                };
              };
              class AltNumber
              {
                type="text";
                source="horizonDive";
                sourceScale=10;
                sourceLength=2;
                sourcePrecision=1;
                align="left";
                scale=1;
                pos[]=
                {
                  {0.82999998,0.466858},
                  1
                };
                right[]=
                {
                  {0.88999999,0.466858},
                  1
                };
                down[]=
                {
                  {0.82999998,0.50627899},
                  1
                };
              };
            };
          };
          topLeft="HUD_1_top_left";
          topRight="HUD_1_top_right";
          bottomLeft="HUD_1_bottom_left";
        };
        class HUD_Right: AirplaneHUD
        {
          borderLeft=0;
          borderRight=0;
          borderTop=0;
          borderBottom=0;
          color[]={0,0.5,0.40000001,1};
          class Bones
          {
            class PlaneW
            {
              type="fixed";
              pos[]={0.4975,0.48800001};
            };
            class Center
            {
              type="fixed";
              pos[]={0.4975,0.68300003};
            };
            class Limit0109
            {
              type="limit";
              limits[]={0.1,0.1,0.89999998,0.89999998};
            };
            class Velocity
            {
              type="vector";
              source="velocity";
              pos0[]={0.5,0.68300003};
              pos10[]={1.45,1.753};
            };
            class HorizonBankRot
            {
              type="rotational";
              source="horizonBank";
              center[]={0.4975,0.48800001};
              min=0.52359998;
              max=-0.52359998;
              minAngle=159.25;
              maxAngle=200.75;
              aspectRatio=1;
            };
            class HorizonBankRotFull
            {
              type="rotational";
              source="horizonBank";
              center[]={0,0};
              min=-3.1415999;
              max=3.1415999;
              minAngle=-180;
              maxAngle=180;
              aspectRatio=1;
            };
            class Level0
            {
              pos0[]={0.4975,0.5};
              pos10[]={1.4475,1.0700001};
              type="horizon";
              angle=0;
            };
            class LevelP5: Level0
            {
              angle=5;
            };
            class LevelM5: Level0
            {
              angle=-5;
            };
            class LevelP10: Level0
            {
              angle=10;
            };
            class LevelM10: Level0
            {
              angle=-10;
            };
            class LevelP15: Level0
            {
              angle=15;
            };
            class LevelM15: Level0
            {
              angle=-15;
            };
            class LevelP20: Level0
            {
              angle=20;
            };
            class LevelM20: Level0
            {
              angle=-20;
            };
            class LevelP25: Level0
            {
              angle=25;
            };
            class LevelM25: Level0
            {
              angle=-25;
            };
            class LevelP30: Level0
            {
              angle=30;
            };
            class LevelM30: Level0
            {
              angle=-30;
            };
            class LevelP35: Level0
            {
              angle=35;
            };
            class LevelM35: Level0
            {
              angle=-35;
            };
            class LevelP40: Level0
            {
              angle=40;
            };
            class LevelM40: Level0
            {
              angle=-40;
            };
            class LevelP45: Level0
            {
              angle=45;
            };
            class LevelM45: Level0
            {
              angle=-45;
            };
            class LevelP50: Level0
            {
              angle=50;
            };
            class LevelM50: Level0
            {
              angle=-50;
            };
            class LevelP55: Level0
            {
              angle=55;
            };
            class LevelM55: Level0
            {
              angle=-55;
            };
            class LevelP60: Level0
            {
              angle=60;
            };
            class LevelM60: Level0
            {
              angle=-60;
            };
            class LevelP65: Level0
            {
              angle=65;
            };
            class LevelM65: Level0
            {
              angle=-65;
            };
            class LevelP70: Level0
            {
              angle=70;
            };
            class LevelM70: Level0
            {
              angle=-70;
            };
            class LevelP75: Level0
            {
              angle=75;
            };
            class LevelM75: Level0
            {
              angle=-75;
            };
            class LevelP80: Level0
            {
              angle=80;
            };
            class LevelM80: Level0
            {
              angle=-80;
            };
            class LevelP85: Level0
            {
              angle=85;
            };
            class LevelM85: Level0
            {
              angle=-85;
            };
            class LevelP90: Level0
            {
              angle=90;
            };
            class LevelM90: Level0
            {
              angle=-90;
            };
          };
          class Draw
          {
            alpha=1;
            color[]={0.039999999,0,0};
            condition="on";
            class PlaneW
            {
              type="line";
              points[]=
              {

                {
                  "PlaneW",
                  {-0.029999999,0},
                  1
                },

                {
                  "PlaneW",
                  {-0.0099999998,0},
                  1
                },

                {
                  "PlaneW",
                  {0,0.0225263},
                  1
                },

                {
                  "PlaneW",
                  {0.0099999998,0},
                  1
                },

                {
                  "PlaneW",
                  {0.029999999,0},
                  1
                },
                {},

                {
                  "PlaneW",
                  {-0.185,0},
                  1
                },

                {
                  "PlaneW",
                  {-0.26499999,0},
                  1
                },
                {},

                {
                  "PlaneW",
                  {0.185,0},
                  1
                },

                {
                  "PlaneW",
                  {0.26499999,0},
                  1
                }
              };
            };
            class Static
            {
              type="line";
              points[]={};
            };
            class Horizont
            {
              clipTL[]={0,0.15000001};
              clipBR[]={1,0.85000002};
              class Dimmed
              {
                class Level0
                {
                  type="line";
                  points[]=
                  {

                    {
                      "Level0",
                      {0.1,0},
                      1
                    },

                    {
                      "Level0",
                      {-0.1,0},
                      1
                    },
                    {}
                    };
                  };
                  class LevelM5: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM5",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM5",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP5: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP5",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP5",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM10: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM10",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM10",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP10: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP10",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP10",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM15: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM15",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM15",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP15: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP15",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP15",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM20: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM20",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM20",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP20: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP20",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP20",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM25: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM25",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM25",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP25: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP25",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP25",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM30: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM30",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM30",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP30: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP30",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP30",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM35: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM35",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM35",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP35: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP35",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP35",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM40: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM40",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM40",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP40: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP40",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP40",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM45: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM45",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM45",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP45: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP45",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP45",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM50: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM50",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM50",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP50: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP50",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP50",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM55: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM55",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM55",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP55: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP55",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP55",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM60: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM60",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM60",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP60: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP60",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP60",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM65: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM65",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM65",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP65: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP65",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP65",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM70: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM70",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM70",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP70: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP70",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP70",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM75: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM75",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM75",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP75: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP75",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP75",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM80: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM80",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM80",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP80: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP80",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP80",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM85: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM85",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM85",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP85: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP85",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP85",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelM90: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelM90",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelM90",
                        {0.1,0},
                        1
                      }
                    };
                  };
                  class LevelP90: Level0
                  {
                    type="line";
                    points[]=
                    {

                      {
                        "LevelP90",
                        {-0.1,0},
                        1
                      },

                      {
                        "LevelP90",
                        {0.1,0},
                        1
                      }
                    };
                  };
                };
              };
              class AltNumberASL
              {
                class Box
                {
                  type="line";
                  points[]=
                  {

                    {
                      {0.75999999,0.50627899},
                      1
                    },

                    {
                      {0.83999997,0.50627899},
                      1
                    },

                    {
                      {0.83999997,0.466858},
                      1
                    },

                    {
                      {0.75999999,0.466858},
                      1
                    },

                    {
                      {0.75999999,0.50627899},
                      1
                    }
                  };
                };
                class AltNumber
                {
                  type="text";
                  source="horizonDive";
                  sourceScale=10;
                  sourceLength=2;
                  sourcePrecision=1;
                  align="left";
                  scale=1;
                  pos[]=
                  {
                    {0.82999998,0.466858},
                    1
                  };
                  right[]=
                  {
                    {0.88999999,0.466858},
                    1
                  };
                  down[]=
                  {
                    {0.82999998,0.50627899},
                    1
                  };
                };
              };
            };
            topLeft="HUD_2_top_left";
            topRight="HUD_2_top_right";
            bottomLeft="HUD_2_bottom_left";
          };
        };
        class Damage
        {
          tex[]={};
          mat[]=
          {
            "A3\boat_f_beta\SDV_01\data\SDV_ext.rvmat",
            "A3\boat_f_beta\SDV_01\data\SDV_ext_damage.rvmat",
            "A3\boat_f_beta\SDV_01\data\SDV_ext_destruct.rvmat",
            "A3\boat_f_beta\SDV_01\data\SDV_int.rvmat",
            "A3\boat_f_beta\SDV_01\data\SDV_int_damage.rvmat",
            "A3\boat_f_beta\SDV_01\data\SDV_int_destruct.rvmat"
          };
        };
        class Reflectors
        {
          class Left
          {
            color[]={0.80000001,0.89999998,1};
            ambient[]={1,1,1};
            position="L svetlo";
            direction="konec L svetla";
            hitpoint="L svetlo";
            selection="L svetlo";
            size=1;
            innerAngle=30;
            outerAngle=160;
            coneFadeCoef=8;
            intensity=500;
            useFlare=0;
            dayLight=0;
            flareSize=0.89999998;
            flareMaxDistance=85;
            class Attenuation
            {
              start=1;
              constant=0;
              linear=1;
              quadratic=0.5;
              hardLimitStart=45;
              hardLimitEnd=50;
            };
          };
          class Right: Left
          {
            position="P svetlo";
            direction="konec P svetla";
            hitpoint="P svetlo";
            selection="P svetlo";
          };
          class Right2: Right
          {
            position="P svetlo flare";
            useFlare=1;
          };
          class Left2: Left
          {
            position="L svetlo flare";
            useFlare=1;
          };
          class interior_light: Right
          {
            color[]={0.12,0.079999998,0.039999999};
            ambient[]={0,0,0};
            position="interior_light";
            direction="interior_light";
            hitpoint="P svetlo";
            selection="P svetlo";
            size=1;
            innerAngle=180;
            outerAngle=360;
            coneFadeCoef=8;
            intensity=0.30000001;
            useFlare=0;
            dayLight=1;
            class Attenuation
            {
              start=0.69999999;
              constant=0;
              linear=0;
              quadratic=200;
              hardLimitStart=5;
              hardLimitEnd=10;
            };
          };
        };
        aggregateReflectors[]=
        {

          {
            "Left",
            "Right",
            "Left2",
            "Right2"
          },

          {
            "interior_light"
          }
        };
      };

          class 89th_SDV: 89th_SDV_01_base_F
          {
            author="$STR_A3_Bohemia_Interactive";
            class SimpleObject
            {
              eden=1;
              animate[]=
              {

                {
                  "drivingwheel",
                  0
                },

                {
                  "hidescope",
                  0
                },

                {
                  "damagehide",
                  0
                },

                {
                  "vrtule",
                  0
                },

                {
                  "steering",
                  0
                },

                {
                  "hidedrivingwheel",
                  0
                },

                {
                  "damagehidedrivingwheel",
                  0
                },

                {
                  "elevating",
                  0
                },

                {
                  "drivingwheel_elev",
                  0
                },

                {
                  "hidedrivingwheel_elev",
                  0
                },

                {
                  "damagehidedrivingwheel_elev",
                  0
                },

                {
                  "elevatingflapfl",
                  0
                },

                {
                  "elevatingflapfr",
                  0
                },

                {
                  "obsturret",
                  0
                },

                {
                  "hideobsturret",
                  0
                },

                {
                  "obsgun",
                  0
                },

                {
                  "antenna",
                  0
                },

                {
                  "damagehideantenna",
                  0
                },

                {
                  "door_1_1",
                  1
                },

                {
                  "hidedoor_1_1",
                  0
                },

                {
                  "damagehidedoor_1_1",
                  0
                },

                {
                  "door_1_2",
                  1
                },

                {
                  "hidedoor_1_2",
                  0
                },

                {
                  "damagehidedoor_1_2",
                  0
                },

                {
                  "door_2_1",
                  1
                },

                {
                  "hidedoor_2_1",
                  0
                },

                {
                  "damagehidedoor_2_1",
                  0
                },

                {
                  "door_2_2",
                  1
                },

                {
                  "hidedoor_2_2",
                  0
                },

                {
                  "damagehidedoor_2_2",
                  0
                },

                {
                  "gauges",
                  0
                },

                {
                  "indicatorcompass_1",
                  0
                },

                {
                  "indicatorcompass_2",
                  0
                },

                {
                  "fuel",
                  1
                },

                {
                  "indicatorvertspeed",
                  0
                },

                {
                  "display_on",
                  0
                },

                {
                  "display_on_r",
                  0
                },

                {
                  "ind_alt_1_10m",
                  -0.80000001
                },

                {
                  "ind_alt_1_100m",
                  -0.80000001
                },

                {
                  "ind_alt_2_10m",
                  -0.80000001
                },

                {
                  "ind_alt_2_100m",
                  -0.80000001
                },

                {
                  "ind_horizondive_1",
                  0
                },

                {
                  "horizondive_1",
                  0
                },

                {
                  "ind_horizondive_2",
                  0
                },

                {
                  "ind_horizonbank_1",
                  -0.0099999998
                },

                {
                  "ind_horizonbank_2",
                  -0.0099999998
                },

                {
                  "ind_rpm",
                  0
                }
              };
              hide[]=
              {
                "zasleh",
                "l svetlo",
                "p svetlo",
                "zadni svetlo",
                "brzdove svetlo",
                "clan",
                "podsvit pristroju",
                "poskozeni"
              };
              verticalOffset=1.874;
              verticalOffsetWorld=-0.80599999;
              init="[this, '', []] call bis_fnc_initVehicle";
            };
            editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_SDV_01_F.jpg";
            _generalMacro="B_SDV_01_F";
            scope=2;
            crew="B_diver_F";
            faction="BLU_F";
            side=1;
            typicalCargo[]=
            {
              "B_Soldier_F",
              "B_Soldier_F"
            };
            hiddenSelectionsTextures[]=
            {
              "\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"
            };
          };
        };
