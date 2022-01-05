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
	 * UserDefinedStruct S_Elevator_Levels.S_Elevator_Levels
	 * Size -> 0x0020
	 */
	struct FS_Elevator_Levels
	{
	public:
		TArray<class FName>                                        Levels_12_DC0C3772429EA728E351358C8345CE72;              // 0x0000(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<class FName>                                        LevelsVisible_30_718555F64E0E9C1837F4F39B1EC0C800;       // 0x0010(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
