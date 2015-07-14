class CfgVehicles {

	class B_Soldier_F;

	class B_11eBP_Soldier_Base_F : B_Soldier_F {
		_generalMacro = "B_11eBP_Soldier_Base_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa CE long";
		faction = 11eBP;
		vehicleClass = Men_8eRPIMa;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Uniform_CE_ML"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"11eBP_Units\data\11eBP_uniforme_combat_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class B_8e_Soldier_CE_MC_F : B_Soldier_F {
		_generalMacro = "B_8e_Soldier_CE_MC_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa CE court";
		faction = 11eBP;
		vehicleClass = Men_8eRPIMa;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Uniform_CE_MC"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"11eBP_Units\data\11eBP_uniforme_combat_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
	};
	
	class B_8e_Soldier_Mixte_ML_F : B_Soldier_F {
		_generalMacro = "B_8e_Soldier_Mixte_ML_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa Mix long";
		faction = 11eBP;
		vehicleClass = Men_8eRPIMa;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Uniform_Mixte_ML"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"11eBP_Units\data\11eBP_uniforme_combat_daguet_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class B_8e_Soldier_Mixte_MC_F : B_Soldier_F {
		_generalMacro = "B_8e_Soldier_Mixte_MC_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa Mix court";
		faction = 11eBP;
		vehicleClass = Men_8eRPIMa;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Uniform_Mixte_MC"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"11eBP_Units\data\11eBP_uniforme_combat_daguet_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
	};
	
	class B_8e_Soldier_DA_ML_F : B_Soldier_F {
		_generalMacro = "B_8e_Soldier_DA_ML_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa DA long";
		faction = 11eBP;
		vehicleClass = Men_8eRPIMa;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Uniform_DA_ML"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"11eBP_Units\data\11eBP_uniforme_combat_full_daguet_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class B_8e_Soldier_DA_MC_F : B_Soldier_F {
		_generalMacro = "B_8e_Soldier_DA_MC_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa DA court";
		faction = 11eBP;
		vehicleClass = Men_8eRPIMa;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Uniform_DA_MC"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"11eBP_Units\data\11eBP_uniforme_combat_full_daguet_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
	};
	
	class B_8e_Soldier_CE_Medic_F : B_Soldier_F {
		_generalMacro = "B_8e_Soldier_CE_Medic_F"; //unsure what this does
		icon = "iconManMedic";
		scope = 2;
		displayName = "8e RPIMa CE Medic";
		faction = 11eBP;
		vehicleClass = Men_8eRPIMa;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Uniform_CE_Medic"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"11eBP_Units\data\11eBP_uniforme_combat_toubib_co.paa"};
		Attendant = true;
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class B_8e_Soldier_Mixte_Medic_F : B_Soldier_F {
		_generalMacro = "B_8e_Soldier_Mixte_Medic_F"; //unsure what this does
		icon = "iconManMedic";
		scope = 2;
		displayName = "8e RPIMa Mix Medic";
		faction = 11eBP;
		vehicleClass = Men_8eRPIMa;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Uniform_Mixte_Medic"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"11eBP_Units\data\11eBP_uniforme_combat_toubib_daguet_co.paa"};
		Attendant = true;
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class B_8e_Soldier_DA_Medic_F : B_Soldier_F {
		_generalMacro = "B_8e_Soldier_DA_Medic_F"; //unsure what this does
		icon = "iconManMedic";
		scope = 2;
		displayName = "8e RPIMa DA Medic";
		faction = 11eBP;
		vehicleClass = Men_8eRPIMa;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Uniform_DA_Medic"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"11eBP_Units\data\11eBP_uniforme_combat_toubib_full_daguet_co.paa"};
		Attendant = true;
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		backpack = "";
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	
	class B_1eRCP_Soldier_CE_Sniper_F : B_Soldier_F {
		_generalMacro = "B_1eRCP_Soldier_CE_Sniper_F"; //unsure what this does
		scope = 2;
		displayName = "1er RCP CE Sniper";
		faction = 11eBP;
		vehicleClass = Men_1erRCP;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_1eRCP_Uniform_CE_Sniper"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"11eBP_Units\data\11eBP_uniforme_combat_chasseur_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_sniper.p3d";
	};
	
	class B_1eRCP_Soldier_DA_Sniper_F : B_Soldier_F {
		_generalMacro = "B_1eRCP_Soldier_DA_Sniper_F"; //unsure what this does
		scope = 2;
		displayName = "1er RCP DA Sniper";
		faction = 11eBP;
		vehicleClass = Men_1erRCP;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_1eRCP_Uniform_DA_Sniper"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"11eBP_Units\data\11eBP_uniforme_combat_chasseur_daguet_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_sniper.p3d";
	};
	
};