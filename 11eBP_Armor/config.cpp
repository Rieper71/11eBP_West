

#define true	1
#define false	0

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define private		0
#define protected		1
#define public		2

enum {
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

class DefaultEventhandlers;	// External class reference

class CfgPatches {
	class 11eBP_Armor {
		units[] = {"11eBP_Griffon_F","11eBP_Griffon_Daguet_F","11eBP_APC_F","11eBP_APC_Daguet_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Armor_F", "A3_Soft_F"};
		author = "Rieper";
		mail = "11eBP.arma@gmail.com";
	};
	
};

class WeaponFireGun;	// External class reference
class WeaponCloudsGun;	// External class reference
class WeaponFireMGun;	// External class reference
class WeaponCloudsMGun;	// External class reference
class RCWSOptics;	// External class reference

class CfgVehicles {

	// class 11eBP_Combat_H_F;

		// class 11eBP_Crew_H_F : 11eBP_Combat_H_F {
		// _generalMacro = "11eBP_Crew_H_F"; //unsure what this does
		// scope = 2;
		// displayName = "1erRHP Crew";
		// faction = 11eBP;
		
		// weapons[] = {};
		// respawnWeapons[] = {};
		// magazines[] = {};
		// respawnMagazines[]  ={};
		// linkedItems[] = {"H_HelmetCrew_I","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","11eBP_Vest_khk"};
		// respawnLinkedItems[] = { "H_HelmetCrew_I", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","11eBP_Vest_khk"};
	// };

	class B_APC_Wheeled_01_cannon_F;

	
	class 11eBP_APC_F : B_APC_Wheeled_01_cannon_F {
		_generalMacro =11eBP_APC_F;
		side = TWest;
		faction = 11eBP;
		vehicleClass = "Armored";
		displayName = "VBCI";
		crew = "11eBP_Crew_H_F";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"11eBP_Armor\data\apc_rieper_base_co.paa","11eBP_Armor\data\apc_rieper_adds_co.paa","11eBP_Armor\data\apc_rieper_tows_co.paa"};
		maximumLoad = 20000;
		transportMaxWeapons = 30;
		transportMaxMagazines = 10000;
		transportMaxBackpacks = 30;
		
	};
	
	class 11eBP_APC_Daguet_F : B_APC_Wheeled_01_cannon_F {
		_generalMacro =11eBP_APC_Daguet_F;
		side = TWest;
		faction = 11eBP;
		vehicleClass = "Armored";
		displayName = "VBCI Desert";
		crew = "11eBP_Crew_H_F";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"11eBP_Armor\data\apc_rieper_base_daguet_co.paa","11eBP_Armor\data\apc_rieper_adds_daguet_co.paa","11eBP_Armor\data\apc_rieper_tows_daguet_co.paa"};
		maximumLoad = 20000;
		transportMaxWeapons = 30;
		transportMaxMagazines = 10000;
		transportMaxBackpacks = 30;
		
	};
	
	
	class Car;	// External class reference
	
	class Car_F : Car {
		class NewTurret;	// External class reference
		class Sounds;	// External class reference
		
		class HitPoints {
			class HitLFWheel;	// External class reference
			class HitLBWheel;	// External class reference
			class HitLMWheel;	// External class reference
			class HitLF2Wheel;	// External class reference
			class HitRFWheel;	// External class reference
			class HitRBWheel;	// External class reference
			class HitRMWheel;	// External class reference
			class HitRF2Wheel;	// External class reference
			class HitBody;	// External class reference
			class HitEngine;	// External class reference
			class HitFuel;	// External class reference
		};
	};
	
	class Wheeled_APC_F : Car_F {
		class ViewOptics;	// External class reference
		class ViewCargo;	// External class reference
		
		class Sounds : Sounds {
			class Engine;	// External class reference
			class Movement;	// External class reference
		};
		class NewTurret;	// External class reference
		
		class Turrets {
			class MainTurret : NewTurret {
				class ViewOptics;	// External class reference
			};
		};
		class AnimationSources;	// External class reference
		class CommanderOptics;	// External class reference
	};
	
	class 11eBP_APC_base_F : Wheeled_APC_F {
		features = "Randomization: No						<br />Camo selections: 3 - top of hull, bottom of hull, turret						<br />Script door sources: None						<br />Script animations: HideTurret						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 8";
		mapSize = 9.7;
		author = "Rieper";
		_generalMacro = "11eBP_APC_base_F";
		accuracy = 0.25;	// accuracy needed to recognize type of this target
		attenuationEffectType = "TankAttenuation";
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1, 70};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_start", 0.446684, 1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_start", 0.562341, 1.0, 200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_stop", 0.446684, 1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_stop", 0.562341, 1.0, 200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1.0, 1, 200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1.0, 1, 200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1.0, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1.0, 1, 200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1.0, 1, 200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1.0, 1, 200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01", 1.0, 1, 200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1.0, 1, 200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1.0, 1, 200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1.0, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		
		class Sounds {
			class Idle_ext {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_01", 0.398107, 1, 200};
				frequency = "0.95	+	((rpm/	2200) factor[(100/	2200),(500/	2200)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2200) factor[(10/	2200),(50/	2200)])	*	((rpm/	2200) factor[(550/	2200),(500/	2200)]))";
			};
			
			class Engine {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_02", db-7, 1, 200};
				frequency = "0.8	+	((rpm/	2200) factor[(500/	2200),(730/	2200)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2200) factor[(450/	2200),(510/	2200)])	*	((rpm/	2200) factor[(730/	2200),(620/	2200)]))";
			};
			
			class Engine1_ext {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_03", db-6, 1, 200};
				frequency = "0.8	+	((rpm/	2200) factor[(630/	2200),(1000/	2200)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2200) factor[(600/	2200),(720/	2200)])	*	((rpm/	2200) factor[(1100/	2200),(840/	2200)]))";
			};
			
			class Engine2_ext {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_06", 0.562341, 1, 250};
				frequency = "0.8	+	((rpm/	2200) factor[(850/	2200),(1300/	2200)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2200) factor[(800/	2200),(1000/	2200)])	*	((rpm/	2200) factor[(1300/	2200),(1100/	2200)]))";
			};
			
			class Engine3_ext {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_07", 0.630957, 1, 300};
				frequency = "0.8	+	((rpm/	2200) factor[(1100/	2200),(1600/	2200)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2200) factor[(1100/	2200),(1270/	2200)])	*	((rpm/	2200) factor[(1550/	2200),(1380/	2200)]))";
			};
			
			class Engine4_ext {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_08", db-2, 1, 300};
				frequency = "0.8	+	((rpm/	2200) factor[(1400/	2200),(2000/	2200)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2200) factor[(1380/	2200),(1500/	2200)])	*	((rpm/	2200) factor[(2000/	2200),(1700/	2200)]))";
			};
			
			class Engine5_ext {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_10", db1, 1, 300};
				frequency = "0.8	+	((rpm/	2200) factor[(1700/	2200),(2200/	2200)])*0.1";
				volume = "engineOn*camPos*((rpm/	2200) factor[(1600/	2200),(2100/	2200)])";
			};
			
			class IdleThrust {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_01", db-3, 1, 200};
				frequency = "0.8	+	((rpm/	2200) factor[(100/	2200),(500/	2200)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2200) factor[(10/	2200),(50/	2200)])	*	((rpm/	2200) factor[(550/	2200),(500/	2200)]))";
			};
			
			class EngineThrust {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_02", db-1, 1, 200};
				frequency = "0.8	+	((rpm/	2200) factor[(500/	2200),(730/	2200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2200) factor[(450/	2200),(510/	2200)])	*	((rpm/	2200) factor[(730/	2200),(620/	2200)]))";
			};
			
			class Engine1_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_03", db1, 1, 200};
				frequency = "0.8	+	((rpm/	2200) factor[(630/	2200),(1000/	2200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2200) factor[(600/	2200),(720/	2200)])	*	((rpm/	2200) factor[(1100/	2200),(840/	2200)]))";
			};
			
			class Engine2_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_06", db2, 1, 250};
				frequency = "0.8	+	((rpm/	2200) factor[(850/	2200),(1300/	2200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2200) factor[(800/	2200),(1000/	2200)])	*	((rpm/	2200) factor[(1300/	2200),(1100/	2200)]))";
			};
			
			class Engine3_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_07", db2, 1, 350};
				frequency = "0.8	+	((rpm/	2200) factor[(1100/	2200),(1600/	2200)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2200) factor[(1100/	2200),(1270/	2200)])	*	((rpm/	2200) factor[(1550/	2200),(1380/	2200)]))";
			};
			
			class Engine4_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_08", db3, 1, 350};
				frequency = "0.8	+	((rpm/	2200) factor[(1400/	2200),(2000/	2200)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2200) factor[(1380/	2200),(1500/	2200)])	*	((rpm/	2200) factor[(2000/	2200),(1700/	2200)]))";
			};
			
			class Engine5_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_10", db4, 1, 400};
				frequency = "0.8	+	((rpm/	2200) factor[(1700/	2200),(2200/	2200)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2200) factor[(1600/	2200),(2100/	2200)])";
			};
			
			class Idle_int {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_01", 0.281838, 1};
				frequency = "0.8	+	((rpm/	2200) factor[(100/	2200),(500/	2200)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2200) factor[(10/	2200),(50/	2200)])	*	((rpm/	2200) factor[(550/	2200),(500/	2200)]))";
			};
			
			class Engine_int {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_02", db-10, 1};
				frequency = "0.8	+	((rpm/	2200) factor[(500/	2200),(730/	2200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2200) factor[(450/	2200),(510/	2200)])	*	((rpm/	2200) factor[(730/	2200),(620/	2200)]))";
			};
			
			class Engine1_int {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_03", db-9, 1};
				frequency = "0.8	+	((rpm/	2200) factor[(630/	2200),(1000/	2200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2200) factor[(600/	2200),(720/	2200)])	*	((rpm/	2200) factor[(1100/	2200),(840/	2200)]))";
			};
			
			class Engine2_int {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_06", 0.398107, 1};
				frequency = "0.8	+	((rpm/	2200) factor[(850/	2200),(1300/	2200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2200) factor[(800/	2200),(1000/	2200)])	*	((rpm/	2200) factor[(1300/	2200),(1100/	2200)]))";
			};
			
			class Engine3_int {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_07", db-7, 1};
				frequency = "0.8	+	((rpm/	2200) factor[(1100/	2200),(1600/	2200)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2200) factor[(1100/	2200),(1270/	2200)])	*	((rpm/	2200) factor[(1550/	2200),(1380/	2200)]))";
			};
			
			class Engine4_int {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_08", db-6, 1};
				frequency = "0.8	+	((rpm/	2200) factor[(1400/	2200),(2000/	2200)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2200) factor[(1380/	2200),(1500/	2200)])	*	((rpm/	2200) factor[(2000/	2200),(1700/	2200)]))";
			};
			
			class Engine5_int {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_10", 0.562341, 1};
				frequency = "0.8	+	((rpm/	2200) factor[(1700/	2200),(2200/	2200)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2200) factor[(1600/	2200),(2100/	2200)])";
			};
			
			class IdleThrust_int {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_01", db-9, 1};
				frequency = "0.8	+	((rpm/	2200) factor[(100/	2200),(500/	2200)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2200) factor[(10/	2200),(50/	2200)])	*	((rpm/	2200) factor[(550/	2200),(500/	2200)]))";
			};
			
			class EngineThrust_int {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_02", 0.398107, 1};
				frequency = "0.8	+	((rpm/	2200) factor[(500/	2200),(730/	2200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2200) factor[(450/	2200),(510/	2200)])	*	((rpm/	2200) factor[(730/	2200),(620/	2200)]))";
			};
			
			class Engine1_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_03", db-7, 1};
				frequency = "0.8	+	((rpm/	2200) factor[(630/	2200),(1000/	2200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2200) factor[(600/	2200),(720/	2200)])	*	((rpm/	2200) factor[(1100/	2200),(840/	2200)]))";
			};
			
			class Engine2_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_06", db-7, 1};
				frequency = "0.8	+	((rpm/	2200) factor[(850/	2200),(1300/	2200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2200) factor[(800/	2200),(1000/	2200)])	*	((rpm/	2200) factor[(1300/	2200),(1100/	2200)]))";
			};
			
			class Engine3_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_07", db-6, 1};
				frequency = "0.8	+	((rpm/	2200) factor[(1100/	2200),(1600/	2200)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2200) factor[(1100/	2200),(1270/	2200)])	*	((rpm/	2200) factor[(1550/	2200),(1380/	2200)]))";
			};
			
			class Engine4_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_08", db-6, 1};
				frequency = "0.8	+	((rpm/	2200) factor[(1400/	2200),(2000/	2200)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2200) factor[(1380/	2200),(1500/	2200)])	*	((rpm/	2200) factor[(2000/	2200),(1700/	2200)]))";
			};
			
			class Engine5_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_10", db-3, 1};
				frequency = "0.8	+	((rpm/	2200) factor[(1700/	2200),(2200/	2200)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2200) factor[(1600/	2200),(2100/	2200)])";
			};
			
			class NoiseInt {
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1", db-6, 1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			
			class NoiseExt {
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1", 0.630957, 1.0, 150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			
			class TiresRockOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", db0, 1.0, 60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			
			class TiresSandOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", db0, 1.0, 60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", db0, 1.0, 60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			
			class TiresMudOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", db0, 1.0, 60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", db0, 1.0, 60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", db0, 1.0, 60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", db2, 1.0, 90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			
			class TiresRockIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			
			class TiresSandIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			
			class TiresMudIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", db-6, 1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			
			class breaking_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", 0.562341, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.5])*(Speed Factor[2, 10])";
			};
			
			class acceleration_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.562341, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.2, 0.5])*(Speed Factor[10, 1])";
			};
			
			class turn_left_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.562341, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.5])*(Speed Factor[0, 10])";
			};
			
			class turn_right_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.562341, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.5])*(Speed Factor[0, 10])";
			};
			
			class breaking_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", db-6, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.5])*(Speed Factor[2, 10])";
			};
			
			class acceleration_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-6, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.2, 0.5])*(Speed Factor[10, 1])";
			};
			
			class turn_left_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-6, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.5])*(Speed Factor[0, 10])";
			};
			
			class turn_right_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-6, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.5])*(Speed Factor[0, 10])";
			};
			
			class breaking_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 0.199526, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.4, -0.6])*(Speed Factor[2, 6])";
			};
			
			class acceleration_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.199526, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.4, 0.6])*(Speed Factor[10, 1])";
			};
			
			class turn_left_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.199526, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.4, 0.6])*(Speed Factor[1, 10])";
			};
			
			class turn_right_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.199526, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.4, -0.6])*(Speed Factor[1, 10])";
			};
			
			class breaking_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 0.199526, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.4, -0.6])*(Speed Factor[2, 6])";
			};
			
			class acceleration_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.199526, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.4, 0.6])*(Speed Factor[10, 1])";
			};
			
			class turn_left_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.199526, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.4, 0.6])*(Speed Factor[1, 10])";
			};
			
			class turn_right_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.199526, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.4, -0.6])*(Speed Factor[1, 10])";
			};
		};
		thrustDelay = 0.25;
		brakeIdleSpeed = 1.78;
		maxSpeed = 105;	// max speed on level road, km/h
		fuelCapacity = 45;
		wheelCircumference = 3.805;
		waterLeakiness = 2.5;
		normalSpeedForwardCoef = 0.54;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 30;
		antiRollbarSpeedMin = 15;
		antiRollbarSpeedMax = 65;
		idleRpm = 500;
		redRpm = 2200;
		
		class complexGearbox {
			GearboxRatios[] = {"R1", -4.84, "N", 0, "D1", 3.43, "D2", 2.01, "D3", 1.42, "D4", 1, "D5", 0.83, "D6", 0.59};
			TransmissionRatios[] = {"High", 8};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 3.3;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 35.0;
		enginePower = 336;
		maxOmega = 230;
		peakTorque = 1630;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{(0/2200), (0/1630)}, {(1100/2200), (1200/1630)}, {(1250/2200), (1500/1630)}, {(1300/2200), (1630/1630)}, {(1350/2200), (1600/1630)}, {(1600/2200), (1400/1630)}, {(2200/2200), (1200/1630)}, {(5800/2200), (0/1630)}};
		changeGearMinEffectivity[] = {0.5, 0.15, 0.97, 0.97, 0.97, 0.97, 0.97, 0.985};
		switchTime = 0.1;
		latency = 1.4;
		
		class Wheels {
			class L1 {
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = 0.2;
				mass = 187.5;
				MOI = 60;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 45000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;
				sprungMass = 3090;
				springStrength = 111090;
				springDamperRate = 21275;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
			};
			
			class L2 : L1 {
				boneName = "wheel_1_2_damper";
				steering = 1;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			
			class L3 : L1 {
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				maxHandBrakeTorque = 300000;
			};
			
			class R1 : L1 {
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			
			class R2 : R1 {
				boneName = "wheel_2_2_damper";
				steering = 1;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
			
			class R3 : R1 {
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 300000;
			};
		};
		terrainCoef = 3.0;
		turnCoef = 3;
		canFloat = true;
		waterAngularDampingCoef = 10.0;
		waterPPInVehicle = 0;
		waterResistanceCoef = 0.5;
		engineShiftY = 0.5;
		armor = 250;
		armorStructural = 6;
		armorLights = 0.1;
		crewExplosionProtection = 0.999;
		damageResistance = 0.00719;
		cost = 1000000;
		driverAction = "driver_apcwheeled2_out";
		driverInAction = "driver_apcwheeled2_in";
		cargoAction[] = {"passenger_apc_narrow_generic01", "passenger_apc_narrow_generic02", "passenger_apc_generic03", "passenger_apc_narrow_generic03", "passenger_generic01_foldhands", "passenger_apc_generic04", "passenger_apc_generic01", "passenger_apc_generic02b"};
		hideWeaponsCargo = true;
		driverForceOptics = true;
		driverOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_F";
		memoryPointDriverOptics = "driverview";
		cargoIsCoDriver[] = {0};
		forceHideDriver = false;
		transportSoldier = 8;
		
		class ViewOptics : ViewOptics {
			visionMode[] = {"Normal", NVG};
			initFov = 0.85;
			minFov = 0.85;
			maxFov = 0.85;
		};
		
		class HitPoints : HitPoints {
			class HitBody : HitBody {
				armor = 1.0;
				material = -1;
				name = "karoserie";
				visual = "zbytek";
				passThrough = true;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.33;
			};
			
			class HitEngine : HitEngine {
				armor = 0.5;
				material = -1;
				name = "motor";
				passThrough = false;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				radius = 0.25;
			};
			
			class HitFuel : HitFuel {
				armor = 1.5;
				material = -1;
				name = "palivo";
				passThrough = true;
				minimalHit = 0.1;
				explosionShielding = 0.4;
				radius = 0.25;
			};
			
			class HitLFWheel : HitLFWheel {
				armor = 0.5;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.33;
			};
			
			class HitLMWheel : HitLMWheel {
				armor = 0.5;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.33;
			};
			
			class HitLF2Wheel : HitLF2Wheel {
				armor = 0.5;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.33;
			};
			
			class HitRFWheel : HitRFWheel {
				armor = 0.5;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.33;
			};
			
			class HitRMWheel : HitRMWheel {
				armor = 0.5;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.33;
			};
			
			class HitRF2Wheel : HitRF2Wheel {
				armor = 0.5;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.33;
			};
		};
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 120;
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"HMG_127_APC"};
				magazines[] = {"500Rnd_127x99_mag_Tracer_Green","500Rnd_127x99_mag_Tracer_Green","500Rnd_127x99_mag_Tracer_Green","500Rnd_127x99_mag_Tracer_Green"};
				soundServo[] = {"A3\sounds_f\dummysound", db-40, 1.0, 10};
				commanding = 2;
				minElev = -15;
				initElev = 0;
				maxElev = 30;
				gunnerAction = "crew_tank01_out";
				gunnerInAction = "crew_tank01_in";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				forceHideGunner = true;
				viewGunnerInExternal = true;
				castGunnerShadow = true;
				stabilizedInAxes = 3;
				gunnerForceOptics = true;
				inGunnerMayFire = true;
				outGunnerMayFire = false;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscWeaponRangeZeroing";
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "zasleh2";
				
				class ViewOptics : RCWSOptics {
					visionMode[] = {"Normal", "TI"};
				};
				
				class HitPoints {
					class HitTurret {
						armor = 0.5;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0.2;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.3;
					};
					
					class HitGun {
						armor = 0.3;
						material = -1;
						name = "zbran";
						visual = "";
						passThrough = false;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.15;
					};
				};
				
				class Turrets {};
			};
			
			class CommanderOptics : CommanderOptics {
				memoryPointGunnerOutOptics = "commanderview";
				memoryPointGunnerOptics = "commanderview";
				minElev = -10;
				maxElev = 30;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				weapons[] = {"SmokeLauncher"};
				magazines[] = {"SmokeLauncherMag"};
				soundServo[] = {"A3\sounds_f\dummysound", db-40, 1.0, 30};
				forceHideGunner = false;
				outGunnerMayFire = false;
				inGunnerMayFire = true;
				gunnerAction = "commander_apcwheeled2hi_out";
				gunnerInAction = "commander_apcwheeled2hi_in";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				turretInfoType = "RscWeaponRangeFinder";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_OPFOR_F";
				gunnerOutOpticsModel = "";
				gunnerOpticsEffect[] = {};
				
				class ViewGunner : ViewCargo {};
				
				class ViewOptics : ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.31;
					minFov = 0.034;
					maxFov = 0.31;
					visionMode[] = {"Normal", "TI"};
					thermalMode[] = {4, 5};
				};
				startEngine = false;
				stabilizedInAxes = 3;
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.8;
				viewGunnerInExternal = true;
				
				class HitPoints {
					class HitTurret {
						armor = 1;
						material = -1;
						name = "";
						visual = "";
						passThrough = false;
						minimalHit = 10;
						explosionShielding = 0;
						radius = 0;
					};
					
					class HitGun {
						armor = 1;
						material = -1;
						name = "";
						visual = "";
						passThrough = false;
						minimalHit = 10;
						explosionShielding = 0;
						radius = 0;
					};
				};
			};
		};
		
		class AnimationSources : AnimationSources {
			/*class muzzle_rot {
				source = "ammorandom";
				weapon = "GMG_40mm";
			};
			
			class muzzle_hide {
				source = "reload";
				weapon = "GMG_40mm";
			};*/
			
			class HideTurret {
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
		};
		
		class Damage {
			tex[] = {};
			mat[] = {"A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01.rvmat", "A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_damage.rvmat", "A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_destruct.rvmat", "A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02.rvmat", "A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_damage.rvmat", "A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_destruct.rvmat", "A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_int_01.rvmat", "A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_int_01_damage.rvmat", "A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_int_01_destruct.rvmat", "A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_int_02.rvmat", "A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_int_02_damage.rvmat", "A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_int_02_destruct.rvmat"};
		};
			
			class TransportMagazines {
				
	
				 
			};
			
			
			
			
			class TransportWeapons {
				
			};
		
		viewCargoShadowDiff = 0.05;
		viewCargoShadowAmb = 0.5;
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoGetInAction[] = {"GetInAMV_cargo"};
		cargoGetOutAction[] = {"GetOutLow"};
		
		class Exhausts {
			class Exhaust1 {
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffectAMV";
			};
		};
		engineStartSpeed = 5;
		
		class NVGMarkers {
			class NVGMarker01 {
				name = "nvg_marker";
				color[] = {0.03, 0.003, 0.003, 1};
				ambient[] = {0.003, 0.0003, 0.0003, 1};
				brightness = 0.001;
				blinking = true;
			};
		};
		explosionEffect = "FuelExplosionBig";
		engineEffectSpeed = 5.0;
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		
		class Reflectors {
			class Left {
				color[] = {1900, 1800, 1700};
				ambient[] = {5, 5, 5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.0;
				
				class Attenuation {
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			
			class Right : Left {
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			
			class Right2 : Right {
				position = "light_R_flare";
				useFlare = 1;
			};
			
			class Left2 : Left {
				position = "light_L_flare";
				useFlare = 1;
			};
			
			class Right3 : Right2 {
				position = "light_R_flare2";
				flareSize = 0.7;
				hitpoint = "Light_R2";
				selection = "Light_R2";
			};
			
			class Left3 : Left2 {
				position = "light_L_flare2";
				flareSize = 0.7;
				hitpoint = "Light_L2";
				selection = "Light_L2";
			};
		};
		aggregateReflectors[] = {{"Left", "Left2", "Left3", "Right", "Right2", "Right3"}};
		selectionFireAnim = "";
		
		class RenderTargets {
			class mirror_l {
				renderTarget = "mirror_l";
				
				class Camera {
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.7;
				};
			};
			
			class mirror_r {
				renderTarget = "mirror_r";
				
				class Camera {
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.7;
				};
			};
		};
		showNVGCommander = 1;
		showNVGGunner = 1;
		showNVGDriver = 1;
		numberPhysicalWheels = 6;
	};
	
	class 11eBP_Griffon_base_F : 11eBP_APC_base_F {
		side = TWest;
		faction = 11eBP;
		vehicleClass = "Armored";
		crew = "11eBP_Crew_H_F";
		typicalCargo[] = {"11eBP_Crew_H_F"};
	};
	
	class 11eBP_Griffon_F : 11eBP_Griffon_base_F {
		author = "Rieper";
		_generalMacro = "11eBP_Griffon_F";
		displayName = "Griffon";
		scope = public;
		model = "\A3\armor_f_beta\APC_Wheeled_02\APC_Wheeled_02_rcws_F.p3d";
		icon = "\A3\Armor_F_Beta\APC_Wheeled_02\Data\UI\map_APC_Wheeled_02_rcws_ca.paa";
		picture = "\A3\Armor_F_Beta\APC_Wheeled_02\Data\UI\APC_Wheeled_02_RCWS_CA.paa";
		
		class Library {
			libTextDesc = "$str_a3_CfgVehicles_apc_wheeled_02_library0";
		};
		unitInfoType = "RscUnitInfoTank";
		radarType = 8;
		driverCanSee = 4+8+2+32+16;
		gunnerCanSee = 4+2+8+32+16;
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"11eBP_Armor\data\11eBP_Griffon_ext_01_co.paa","11eBP_Armor\data\11eBP_Griffon_ext_02_co.paa", "11eBP_Armor\data\turret_co.paa"};
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {1.0, 0.6, 0.6};

	};


	class 11eBP_Griffon_Daguet_F : 11eBP_Griffon_base_F {
		author = "Rieper";
		_generalMacro = "11eBP_Griffon_Daguet_F";
		displayName = "Griffon Desert";
		scope = public;
		model = "\A3\armor_f_beta\APC_Wheeled_02\APC_Wheeled_02_rcws_F.p3d";
		icon = "\A3\Armor_F_Beta\APC_Wheeled_02\Data\UI\map_APC_Wheeled_02_rcws_ca.paa";
		picture = "\A3\Armor_F_Beta\APC_Wheeled_02\Data\UI\APC_Wheeled_02_RCWS_CA.paa";
		
		class Library {
			libTextDesc = "$str_a3_CfgVehicles_apc_wheeled_02_library0";
		};
		unitInfoType = "RscUnitInfoTank";
		radarType = 8;
		driverCanSee = 4+8+2+32+16;
		gunnerCanSee = 4+2+8+32+16;
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"11eBP_Armor\data\11eBP_Griffon_ext_daguet_01_co.paa","11eBP_Armor\data\11eBP_Griffon_ext_daguet_02_co.paa", "11eBP_Armor\data\turret_daguet_co.paa"};
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {1.0, 0.6, 0.6};

	};
};
