#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct KeyBinding_Struct.KeyBinding_Struct
	 * Size -> 0x0060
	 */
	struct FKeyBinding_Struct
	{
	public:
		struct FKey                                                PC_Key1_2_90C533984F7518D145B295891C22711C;              // 0x0000(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FKey                                                PC_Key2_6_5EC2CC9140E3A1629DEFF1A12A1D85E5;              // 0x0018(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FKey                                                Gamepad_Key1_7_FC2FC6604514AAB6D44552BB69B04271;         // 0x0030(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FKey                                                Gamepad_Key2_8_D13A707C46E362F2C18F3A961B0A02AD;         // 0x0048(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
