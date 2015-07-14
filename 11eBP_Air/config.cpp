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


#define true	1
#define false	0

enum {
	 //  = 2,	// Error parsing: Empty enum name
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

class CfgPatches {
	class 11eBP_Air {
		units[] = {"11eBP_C130_JE_F","11eBP_C130_JEC_F","11eBP_SA_330_F","11eBP_SA_330_SAN_F","11eBP_SA_330_Daguet_F","11eBP_SA_330_SAN_Daguet_F","11eBP_NH_90_F","11eBP_NH_90_Armed_F","11eBP_H135M_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F_Beta_Heli_Transport_02"};
		author = "Rieper";
		mail = "11eBP.arma@gmail.com";
	};
	
};

class CfgVehicles {

	// class C130J;

	// class 11eBP_C130_F : C130J {
		// _generalMacro =11eBP_C130_F;
		// side = TGuerrila;
		// faction = 11eBP;
		// vehicleClass = "Air";
		// displayName = "C130";
		// hiddenSelections[] = {"camo1", "camo2"};
		// hiddenSelectionsTextures[] = {"11eBP_Air\data\C130_rieper_body_co.paa","11eBP_Air\data\C130_rieper_wings_co.paa"};
		// maximumLoad = 20000;
		// transportMaxWeapons = 30;
		// transportMaxMagazines = 10000;
		// transportMaxBackpacks = 30;
		
	// };
	
	class I_Heli_Transport_02_F;

	class 11eBP_Puma_F : I_Heli_Transport_02_F {
		_generalMacro = 11eBP_Puma_F;
		side = TWest;
		faction = 11eBP;
		vehicleClass = "Air";
		displayName = "Puma";
		hiddenSelections[] = {"camo1", "camo2","camo3"};
		hiddenSelectionsTextures[] = {"11eBP_Air\data\puma_01_co.paa","11eBP_Air\data\puma_02_co.paa","11eBP_Air\data\puma_03_co.paa"};
		maximumLoad = 20000;
		transportMaxWeapons = 30;
		transportMaxMagazines = 10000;
		transportMaxBackpacks = 30;
		
	};
	
	class 11eBP_Puma_Medivac_F : I_Heli_Transport_02_F {
		_generalMacro =11eBP_Puma_Medivac_F;
		side = TWest;
		faction = 11eBP;
		vehicleClass = "Air";
		displayName = "Puma Médical";
		hiddenSelections[] = {"camo1", "camo2","camo3"};
		hiddenSelectionsTextures[] = {"11eBP_Air\data\puma_medivac_01_co.paa","11eBP_Air\data\puma_02_co.paa","11eBP_Air\data\puma_03_co.paa"};
		maximumLoad = 20000;
		transportMaxWeapons = 30;
		transportMaxMagazines = 10000;
		transportMaxBackpacks = 30;
		
	};
	
	class sab_C130_JE;
	class sab_C130_JEC;
	class RHS_C130J;
	
	class 11eBP_C130_JE_F : sab_C130_JE {
		_generalMacro =11eBP_C130_JE_F;
		vehicleClass = "Air";
		displayName = "C130 Transport";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Air\data\C130_rieper_body_co.paa","11eBP_Air\data\C130_rieper_wings_co.paa"};
		maximumLoad = 20000;
		transportMaxWeapons = 30;
		transportMaxMagazines = 10000;
		transportMaxBackpacks = 30;
		
	};
	
	class 11eBP_C130_JEC_F : sab_C130_JEC {
		_generalMacro =11eBP_C130_JEC_F;
		side = TWest;
		faction = 11eBP;
		vehicleClass = "Air";
		displayName = "C130 Cargo";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Air\data\C130_rieper_body_co.paa","11eBP_Air\data\C130_rieper_wings_co.paa"};
		maximumLoad = 20000;
		transportMaxWeapons = 30;
		transportMaxMagazines = 10000;
		transportMaxBackpacks = 30;
		
	};
	
	class 11eBP_C130_F : RHS_C130J {
		_generalMacro =11eBP_C130_F;
		side = TWest;
		faction = 11eBP;
		vehicleClass = "Air";
		displayName = "C130";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Air\data\C130_rieper_body_co.paa","11eBP_Air\data\C130_rieper_wings_co.paa"};
		maximumLoad = 20000;
		transportMaxWeapons = 30;
		transportMaxMagazines = 10000;
		transportMaxBackpacks = 30;
		
	};
	
	class BAF_Puma_CE_DG1;
	
	class 11eBP_SA_330_F : BAF_Puma_CE_DG1 {
		_generalMacro =11eBP_SA_330_F;
		side = TWest;
		faction = 11eBP;
		vehicleClass = "Air";
		displayName = "SA-330";
		hiddenSelections[] = {"_OFrP_330_skin01"};
		hiddenSelectionsTextures[] = {"11eBP_Air\data\11eBP_sa_330_co.paa"};
		maximumLoad = 20000;
		transportMaxWeapons = 30;
		transportMaxMagazines = 10000;
		transportMaxBackpacks = 30;
		
	};
	
	class 11eBP_SA_330_SAN_F : BAF_Puma_CE_DG1 {
		_generalMacro =11eBP_SA_330_SAN_F;
		side = TWest;
		faction = 11eBP;
		vehicleClass = "Air";
		displayName = "SA-330 SAN";
		hiddenSelections[] = {"_OFrP_330_skin01"};
		hiddenSelectionsTextures[] = {"11eBP_Air\data\11eBP_sa_330_san_co.paa"};
		maximumLoad = 20000;
		transportMaxWeapons = 30;
		transportMaxMagazines = 10000;
		transportMaxBackpacks = 30;
		
	};
	
	class 11eBP_SA_330_Daguet_F : BAF_Puma_CE_DG1 {
		_generalMacro =11eBP_SA_330_Daguet_F;
		side = TWest;
		faction = 11eBP;
		vehicleClass = "Air";
		displayName = "SA-330 Desert";
		hiddenSelections[] = {"_OFrP_330_skin01"};
		hiddenSelectionsTextures[] = {"11eBP_Air\data\11eBP_sa_330_daguet_co.paa"};
		maximumLoad = 20000;
		transportMaxWeapons = 30;
		transportMaxMagazines = 10000;
		transportMaxBackpacks = 30;
		
	};
	
	class 11eBP_SA_330_SAN_Daguet_F : BAF_Puma_CE_DG1 {
		_generalMacro =11eBP_SA_330_SAN_Daguet_F;
		side = TWest;
		faction = 11eBP;
		vehicleClass = "Air";
		displayName = "SA-330 SAN Desert";
		hiddenSelections[] = {"_OFrP_330_skin01"};
		hiddenSelectionsTextures[] = {"11eBP_Air\data\11eBP_sa_330_san_daguet_co.paa"};
		maximumLoad = 20000;
		transportMaxWeapons = 30;
		transportMaxMagazines = 10000;
		transportMaxBackpacks = 30;
		
	};
	
		class NH90_AAF;
	
		class 11eBP_NH_90_F : NH90_AAF {
		_generalMacro =11eBP_NH_90_F;
		side = TWest;
		faction = 11eBP;
		vehicleClass = "Air";
		displayName = "NH90";
		hiddenSelections[] = {"camo1","camo2","camo4"};
		hiddenSelectionsTextures[] = {"11eBP_Air\data\11eBP_GRouterHaul_co.paa","11eBP_Air\data\11eBP_GRupperTail_co.paa","11eBP_Air\data\11eBP_GRdoors_co.paa"};
		maximumLoad = 20000;
		transportMaxWeapons = 30;
		transportMaxMagazines = 10000;
		transportMaxBackpacks = 30;
		
	};
	
		class NH90Armed_AAF;
	
		class 11eBP_NH_90_Armed_F : NH90Armed_AAF {
		_generalMacro =11eBP_NH_90_Armed_F;
		side = TWest;
		faction = 11eBP;
		vehicleClass = "Air";
		displayName = "NH90 Armé";
		hiddenSelections[] = {"camo1","camo2","camo4"};
		hiddenSelectionsTextures[] = {"11eBP_Air\data\11eBP_GRouterHaul_co.paa","11eBP_Air\data\11eBP_GRupperTail_co.paa","11eBP_Air\data\11eBP_GRdoors_co.paa"};
		maximumLoad = 20000;
		transportMaxWeapons = 30;
		transportMaxMagazines = 10000;
		transportMaxBackpacks = 30;
		
	};
	
	class EC635;
	
	class 11eBP_H135M_F : EC635 {
		_generalMacro =11eBP_H135M_F;
		side = TWest;
		faction = 11eBP;
		vehicleClass = "Air";
		displayName = "H135M";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5", "camo6"};
		hiddenSelectionsTextures[] = {"11eBP_Air\data\outerHaul_co.paa",
									  "11eBP_Air\data\UpperParts_co.paa",
									  "11eBP_Air\data\Tail_co.paa",
									  "11eBP_Air\data\bawl_co.paa",
									  "11eBP_Air\data\SideDoors_co.paa",
									  "11eBP_Air\data\CargoDoors_co.paa"};
		maximumLoad = 20000;
		transportMaxWeapons = 30;
		transportMaxMagazines = 10000;
		transportMaxBackpacks = 30;
		
	};
	
};