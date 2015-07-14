class cfgWeapons {
	
	class ItemCore;
	class HeadgearItem;

	class H_Beret_8e : ItemCore {
		scope = public;
		weaponPoolAvailable = 1;
		displayName = "Beret 8eRPIMa";
		picture = "\11eBP_Berets\data\ui\icon_11eBP_beret_ca.paa";
		//model = "\A3\Characters_F_EBP\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"11eBP_Berets\data\rieper_beret02_co.paa"};
	
		class ItemInfo : HeadgearItem {
			mass = 2;
			allowedSlots[] = {801, 901, 701, 605};
			uniformModel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02.p3d";
			modelSides[] = {3, 1};
			armor = 3*0;
			passThrough = 0.9;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class H_Beret_1eRHP : ItemCore {
		scope = public;
		weaponPoolAvailable = 1;
		displayName = "Beret 1erRHP";
		picture = "\11eBP_Berets\data\ui\icon_11eBP_beret_ca.paa";
		//model = "\A3\Characters_F_EBP\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"11eBP_Berets\data\rieper_beret02_hussard_co.paa"};
	
		class ItemInfo : HeadgearItem {
			mass = 2;
			allowedSlots[] = {801, 901, 701, 605};
			uniformModel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02.p3d";
			modelSides[] = {3, 1};
			armor = 3*0;
			passThrough = 0.9;
			hiddenSelections[] = {"camo"};
		};
	};

	class H_Beret_2eREP : ItemCore {
		scope = public;
		weaponPoolAvailable = 1;
		displayName = "Beret 2eREP";
		picture = "\11eBP_Berets\data\ui\icon_11eBP_beret_ca.paa";
		//model = "\A3\Characters_F_EBP\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"11eBP_Berets\data\rieper_beret02_legion_co.paa"};
	
		class ItemInfo : HeadgearItem {
			mass = 2;
			allowedSlots[] = {801, 901, 701, 605};
			uniformModel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02.p3d";
			modelSides[] = {3, 1};
			armor = 3*0;
			passThrough = 0.9;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class H_Beret_Para : ItemCore {
		scope = public;
		weaponPoolAvailable = 1;
		displayName = "Beret Parachutiste";
		picture = "\11eBP_Berets\data\ui\icon_11eBP_beret_ca.paa";
		//model = "\A3\Characters_F_EBP\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"11eBP_Berets\data\rieper_beret02_para_co.paa"};
	
		class ItemInfo : HeadgearItem {
			mass = 2;
			allowedSlots[] = {801, 901, 701, 605};
			uniformModel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02.p3d";
			modelSides[] = {3, 1};
			armor = 3*0;
			passThrough = 0.9;
			hiddenSelections[] = {"camo"};
		};
	};
};