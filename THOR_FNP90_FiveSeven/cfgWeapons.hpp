class Rifle;
class Rifle_Base_F: Rifle
{
    class WeaponSlotsInfo;
};
class UGL_F;

class THOR_FNP90_base: Rifle_Base_F
{ 
    scope=0;
    magazines[]=
    {
        "THOR_FNP90_Mag",
        "THOR_FNP90_Mag_Tracer"
    };
    reloadAction="GestureReloadSMG_02";
    maxZeroing=600;
    cursor="smg";
    discreteDistance[]={100,200};
    discreteDistanceInitIndex=0;
    aiDispersionCoefY=8;
    aiDispersionCoefX=9;
    descriptionShort=$STR_THOR_FNP90_Desc;
    handAnim[]=
    {
        "OFP2_ManSkeleton",
        "\A3\Weapons_F_beta\Smgs\SMG_02\data\Anim\SMG_02.rtm"
    }; 
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: MuzzleSlot
        {
            linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
            compatibleItems[]=
            {
                "muzzle_snds_l"
            };
            iconPosition[]={0.079999998,0.40000001};
            iconScale=0.2;
        };
        class CowsSlot: CowsSlot
        {
            iconPosition[]={0.44999999,0.27000001};
            iconScale=0.2;
        };
        class PointerSlot: PointerSlot
        {
            iconPosition[]={0.28,0.40000001};
            iconScale=0.25;
        };
    };
    bullet1[]=
    {
        "A3\sounds_f\weapons\shells\9mm\metal_9mm_01",
        0.50118721,
        1,
        15
    };
    bullet2[]=
    {
        "A3\sounds_f\weapons\shells\9mm\metal_9mm_02",
        0.50118721,
        1,
        15
    };
    bullet3[]=
    {
        "A3\sounds_f\weapons\shells\9mm\metal_9mm_03",
        0.50118721,
        1,
        15
    };
    bullet4[]=
    {
        "A3\sounds_f\weapons\shells\9mm\metal_9mm_04",
        0.50118721,
        1,
        15
    };
    bullet5[]=
    {
        "A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",
        0.50118721,
        1,
        15
    };
    bullet6[]=
    {
        "A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",
        0.50118721,
        1,
        15
    };
    bullet7[]=
    {
        "A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",
        0.50118721,
        1,
        15
    };
    bullet8[]=
    {
        "A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",
        0.50118721,
        1,
        15
    };
    bullet9[]=
    {
        "A3\sounds_f\weapons\shells\9mm\grass_9mm_01",
        0.39810717,
        1,
        15
    };
    bullet10[]=
    {
        "A3\sounds_f\weapons\shells\9mm\grass_9mm_02",
        0.39810717,
        1,
        15
    };
    bullet11[]=
    {
        "A3\sounds_f\weapons\shells\9mm\grass_9mm_03",
        0.39810717,
        1,
        15
    };
    bullet12[]=
    {
        "A3\sounds_f\weapons\shells\9mm\grass_9mm_04",
        0.39810717,
        1,
        15
    };
    soundBullet[]=
    {
        "bullet1",
        0.082999997,
        "bullet2",
        0.082999997,
        "bullet3",
        0.082999997,
        "bullet4",
        0.082999997,
        "bullet5",
        0.082999997,
        "bullet6",
        0.082999997,
        "bullet7",
        0.082999997,
        "bullet8",
        0.082999997,
        "bullet9",
        0.082999997,
        "bullet10",
        0.082999997,
        "bullet11",
        0.082999997,
        "bullet12",
        0.082999997
    };
    opticsZoomMin=0.375;
    opticsZoomMax=1.1;
    opticsZoomInit=0.75;
    distanceZoomMin=100;
    distanceZoomMax=100;
    modes[]=
    {
        "Single",
        "FullAuto"
    };
    drySound[]=
    {
        "A3\Sounds_F\arsenal\weapons\SMG\Sting\Dry_Sting",
        0.25118864,
        1,
        10
    };
    reloadMagazineSound[]=
    {
        "A3\Sounds_F\arsenal\weapons\SMG\Sting\reload_sting",
        1,
        1,
        10
    };
    changeFiremodeSound[]=
    {
        "A3\Sounds_F\arsenal\weapons\SMG\Sting\firemode_Sting",
        0.25118864,
        1,
        5
    };
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_01",
					0.17782794,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",
					0.17782794,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_01",
					3.1622777,
					1,
					1800
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_02",
					3.1622777,
					1,
					1800
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_03",
					3.1622777,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin2",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_01",
					0.79432821,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_02",
					0.79432821,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_03",
					0.79432821,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
        reloadTime=0.054499999;
        dispersion=0.0011;
        recoil="recoil_single_smg_02";
        recoilProne="recoil_single_prone_smg_02";
        minRange=2;
        minRangeProbab=0.30000001;
        midRange=100;
        midRangeProbab=0.69999999;
        maxRange=150;
        maxRangeProbab=0.050000001;
        aiRateOfFire=2;
        aiRateOfFireDistance=300;
    };
	class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_01",
					0.56234133,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",
					0.56234133,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_01",
					3.1622777,
					1,
					1800
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_02",
					3.1622777,
					1,
					1800
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_03",
					3.1622777,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin2",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior",
							1.5848932,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_01",
					0.79432821,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_02",
					0.79432821,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_03",
					0.79432821,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
        reloadTime=0.044499999;
        dispersion=0.0011;
        recoil="recoil_auto_smg_02";
        recoilProne="recoil_auto_prone_smg_02";
        minRange=0;
        minRangeProbab=0.89999998;
        midRange=15;
        midRangeProbab=0.69999999;
        maxRange=30;
        maxRangeProbab=0.1;
        aiRateOfFire=1e-006;
        aiRateOfFireDistance=50;
    };
};
//Variants without integrated IR Laser
class THOR_FNP90_Railed: THOR_FNP90_base
{
    author="[THOR] Heron";
    _generalMacro="SMG_02_F";
    scope=2;
    model="\THOR_FNP90_FiveSeven\data\THOR_FNP90_TSRAIL.p3d";
 	class WeaponSlotsInfo: WeaponSlotsInfo
    {
        mass=60;
		// Sights to be used on M1913 Rail
    };
    inertia=0.40000001;
    dexterity=1.6;
    initSpeed=370;
	displayName=$STR_THOR_FNP90T;
    picture="\THOR_FNP90_FiveSeven\data\icons\THOR_P90.paa";
    UiPicture="\THOR_FNP90_FiveSeven\data\icons\THOR_P90.paa";
    class Library {
        libTextDesc=$STR_THOR_FNP90RAILED_Library;
    };
    descriptionShort=$STR_THOR_FNP90RAILED_Desc;
};

//Variante mit M1913 Schiene
class THOR_FNP90: THOR_FNP90_Railed
{
	    model="\THOR_FNP90_FiveSeven\data\THOR_FNP90_SRAIL.p3d";
		displayName=$STR_THOR_FNP90;
	 	class WeaponSlotsInfo: WeaponSlotsInfo
    {
                // no sights as regular sight is installed here
		class CowsSlot: SlotInfo {      
			compatibleItems[]= {};
			iconPosition[] = {0.5, 0.35};
			iconScale = 0.2;
		};
		    class PointerSlot: PointerSlot {
            compatibleItems[]= {"acc_pointer_IR","acc_flashlight"};
            iconPosition[]={0.28,0.40000001};
            iconScale=0.25;
        };
		};
    class Library {
        libTextDesc=$STR_THOR_FNP90_Library;
    };
    descriptionShort=$STR_THOR_FNP90_Desc;
};

//Variants with integrated IR Laser
class THOR_FNP90_IR: THOR_FNP90_base{
    author="[THOR] Heron";
    _generalMacro="SMG_02_F";
    scope=2;
    model="\THOR_FNP90_FiveSeven\data\THOR_FNP90.p3d";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class PointerSlot: PointerSlot {
            compatibleItems[]= {"THOR_P90IntegratedIR"};
            iconPosition[]={0.28,0.40000001};
            iconScale=0.25;
        };
		class CowsSlot: SlotInfo {      
			compatibleItems[]= {};
			iconPosition[] = {0.5, 0.35};
			iconScale = 0.2;
		};
        class LinkedItems {
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "THOR_P90IntegratedIR";
            };
        };

        mass=60;
    };
    inertia=0.40000001;
    dexterity=1.6;
    initSpeed=370;
    displayName="$STR_THOR_FNP90IR";

    picture="\THOR_FNP90_FiveSeven\data\icons\THOR_P90.paa";
    UiPicture="\THOR_FNP90_FiveSeven\data\icons\THOR_P90.paa";
    class Library{
        libTextDesc=$STR_THOR_FNP90_IR_Library;
    };
    
    descriptionShort=$STR_THOR_FNP90_IR_Desc;
};

//Variante mit M1913 und intergriertem IR
class THOR_FNP90_Railed_IR: THOR_FNP90_Railed
{
	displayName=$STR_THOR_FNP90TIR;
	model="\THOR_FNP90_FiveSeven\data\THOR_FNP90_TRAIL.p3d";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class PointerSlot: PointerSlot {
            compatibleItems[]= {"THOR_P90IntegratedIR"};
            iconPosition[]={0.28,0.40000001};
            iconScale=0.25;
        };
        class LinkedItems {
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "THOR_P90IntegratedIR";
            };
        };

        mass=60;
    };
};

class ItemCore;
class ItemInfo;
class InventoryFlashLightItem_Base_F;
class THOR_P90IntegratedIR: ItemCore {
    scope=2;
    author="[THOR] Heron";
    displayName="P90 IR-Laser";
    descriptionUse=$STR_A3_IRL;
    picture="";
    model="\THOR_FNP90_FiveSeven\data\THOR_IR.p3d";
    descriptionShort=$STR_A3_IRL;
    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass=1;
        class Pointer{
            irLaserPos="laser dir";
            irLaserEnd="laser pos";
            irDistance=5;
        };
        class FlashLight{};
    };
    inertia=0.05;
};