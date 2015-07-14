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
	class 11eBP_Sac {
		units[] = {"11eBP_sac_moyen_CE","11eBP_sac_moyen_medic_CE","11eBP_sac_lourd_CE"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_Acc", "A3_Characters_F_BLUFOR"};
		author = "Rieper";
		mail = "11eBP.arma@gmail.com";
	};
	
};

class cfgvehicles {
		
	class B_Kitbag_cbr;
	class B_Carryall_cbr;
	class B_Bergen_rgr;

	class 11eBP_sac_moyen_CE : B_Kitbag_cbr {
		scope = public;
		displayName = "Sac Moyen CE";
		vehicleClass = "Backpacks";
		//picture = "\R3F_uniformes\data\ui\icon_R3F_sac_moyen_CE_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"\11eBP_Sac\data\11ebp_sac_moyen_CE.paa"};
		maximumLoad = 300;
		transportMaxWeapons = 1;
		transportMaxMagazines = 12;
		mass = 50;
		class TransportMagazines {};
		class TransportItems {};
	};
	
	class 11eBP_sac_moyen_medic_CE : B_Bergen_rgr {
		scope = public;
		displayName = "Sac Toubib CE";
		vehicleClass = "Backpacks";
		//picture = "\R3F_uniformes\data\ui\icon_R3F_sac_moyen_medic_CE_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		hiddenSelectionsTextures[] = {"\11eBP_Sac\data\11ebp_sac_medic_CE.paa"};
		maximumLoad = 350;
		transportMaxWeapons = 1;
		transportMaxMagazines = 12;
		mass = 50;
		class TransportMagazines {};
		class TransportItems {};
	};
	
		class 11eBP_sac_lourd_CE : B_Carryall_cbr {
		scope = public;
		displayName = "Sac Lourd CE";
		vehicleClass = "Backpacks";
		//picture = "\R3F_uniformes\data\ui\icon_R3F_sac_lourd_CE_ca.paa";
		hiddenSelectionsTextures[] = {"\11eBP_Sac\data\11ebp_sac_lourd_CE.paa"};
		maximumLoad = 350;
		transportMaxWeapons = 1;
		transportMaxMagazines = 12;
		mass = 60;
		class TransportMagazines {};
		class TransportItems {};
	};
	
};