class CfgVehicles {

	class B_Soldier_F;
	class H_Beret_8e;
	
	class B_lastmikoi_F : B_Soldier_F {
		_generalMacro = "B_lastmikoi_F"; //unsure what this does
		scope = 2;
		displayName = "lastmikoi";
		faction = 11eBP;
		vehicleClass = Men_11eBP_Spec;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_lastmikoi"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Special\data\rieper_lastmikoi_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	
	class B_Rieper_F : B_Soldier_F {
		_generalMacro = "B_Rieper_F"; //unsure what this does
		scope = 2;
		displayName = "Rieper";
		faction = 11eBP;
		vehicleClass = Men_11eBP_Spec;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_Rieper"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Special\data\rieper_rieper_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	
	class B_Berigz_F : B_Soldier_F {
		_generalMacro = "B_Berigz_F"; //unsure what this does
		scope = 2;
		displayName = "Berigz";
		faction = 11eBP;
		vehicleClass = Men_11eBP_Spec;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_Berigz"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Special\data\rieper_berigz_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	
	class B_8e_Parade_P_RO_F : B_Soldier_F {
		_generalMacro = "B_8e_Parade_P_RO_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa Parachutiste Ruban";
		faction = 11eBP;
		vehicleClass = Men_11eBP_Spec;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Parade_P_RO"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Special\data\rieper_marsouin_ruban_opex_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	
	class B_8e_Parade_PC_RO_F : B_Soldier_F {
		_generalMacro = "B_8e_Parade_PC_RO_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa Première Classe Ruban";
		faction = 11eBP;
		vehicleClass = Men_11eBP_Spec;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Parade_PC_RO"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Special\data\rieper_premiere_classe_ruban_opex_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	
	class B_8e_Parade_Cpl_RO_F : B_Soldier_F {
		_generalMacro = "B_8e_Parade_Cpl_RO_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa Caporal Ruban";
		faction = 11eBP;
		vehicleClass = Men_11eBP_Spec;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Parade_Cpl_RO"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Special\data\rieper_caporal_ruban_opex_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[]  ={};
		//backpack = "";
		linkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_8e","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	
	class B_8e_Parade_CplCf_RO_F : B_Soldier_F {
		_generalMacro = "B_8e_Parade_CplCf_RO_F"; //unsure what this does
		scope = 2;
		displayName = "8e RPIMa Caporal Chef Ruban";
		faction = 11eBP;
		vehicleClass = Men_11eBP_Spec;
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_8e_Parade_CplCf_RO"; //the uniform item
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"11eBP_Special\data\rieper_caporal_chef_ruban_opex_co.paa","11eBP_Parade\data\rieper_officier_2_co.paa"};
		
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