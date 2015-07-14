class CfgVehicles {

	class B_Soldier_F;
	class H_Beret_8e;
	
	class B_8e_Parade_P_F : B_Soldier_F {
		_generalMacro = "B_8e_Parade_P_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa Parachutiste";
		faction = 11eBP;
		vehicleClass = Men_Parade;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Parade_P"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Parade\data\rieper_marsouin_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	
	class B_8e_Parade_PC_F : B_Soldier_F {
		_generalMacro = "B_8e_Parade_PC_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa Première Classe";
		faction = 11eBP;
		vehicleClass = Men_Parade;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Parade_PC"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Parade\data\rieper_premiere_classe_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	
	class B_8e_Parade_Cpl_F : B_Soldier_F {
		_generalMacro = "B_8e_Parade_Cpl_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa Caporal";
		faction = 11eBP;
		vehicleClass = Men_Parade;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Parade_Cpl"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Parade\data\rieper_caporal_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	
	class B_8e_Parade_CplCf_F : B_Soldier_F {
		_generalMacro = "B_8e_Parade_CplCf_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa Caporal Chef";
		faction = 11eBP;
		vehicleClass = Men_Parade;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Parade_CplCf"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Parade\data\rieper_caporal_chef_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	
	class B_8e_Parade_Sgt_F : B_Soldier_F {
		_generalMacro = "B_8e_Parade_Sgt_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa Sergent";
		faction = 11eBP;
		vehicleClass = Men_Parade;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Parade_Sgt"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Parade\data\rieper_sergent_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	
	class B_8e_Parade_SgtCf_F : B_Soldier_F {
		_generalMacro = "B_8e_Parade_SgtCf_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa Sergent Chef";
		faction = 11eBP;
		vehicleClass = Men_Parade;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Parade_SgtCf"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Parade\data\rieper_sergent_chef_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	
	class B_8e_Parade_Adj_F : B_Soldier_F {
		_generalMacro = "B_8e_Parade_Adj_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa Adjudant";
		faction = 11eBP;
		vehicleClass = Men_Parade;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Parade_Adj"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Parade\data\rieper_adjudant_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	
	class B_8e_Parade_AdjCf_F : B_Soldier_F {
		_generalMacro = "B_8e_Parade_AdjCf_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa Adjudant Chef";
		faction = 11eBP;
		vehicleClass = Men_Parade;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Parade_AdjCf"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Parade\data\rieper_adjudant_chef_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};

	class B_8e_Parade_SLt_F : B_Soldier_F {
		_generalMacro = "B_8e_Parade_SLt_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa Sous Lieutenant";
		faction = 11eBP;
		vehicleClass = Men_Parade;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Parade_SLt"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Parade\data\rieper_sous_lieutenant_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	
	class B_8e_Parade_Lt_F : B_Soldier_F {
		_generalMacro = "B_8e_Parade_Lt_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa Lieutenant";
		faction = 11eBP;
		vehicleClass = Men_Parade;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Parade_Lt"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Parade\data\rieper_lieutenant_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	
	class B_8e_Parade_Cpt_F : B_Soldier_F {
		_generalMacro = "B_8e_Parade_Cpt_F"; //unsure what this does
		scope = 2;
		displayName = "Capitaine";
		faction = 11eBP;
		vehicleClass = Men_Parade;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Parade_Cpt"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Parade\data\rieper_capitaine_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	
};