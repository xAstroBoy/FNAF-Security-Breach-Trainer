#pragma once

/**
 * Name: FNAFSB
 * Version: 1
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
	 * UserDefinedStruct S_Elevator_Airlock_Location.S_Elevator_Airlock_Location
	 * Size -> 0x0030
	 */
	struct FS_Elevator_Airlock_Location
	{
	public:
		unsigned char                                              Doors_41_04BA24064194ECAC16DD3499EB852CF5[0x10];         // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class FName>                                        Levels_12_DC0C3772429EA728E351358C8345CE72;              // 0x0010(0x0010) Edit, BlueprintVisible
		TArray<class FName>                                        LevelsVisible_30_718555F64E0E9C1837F4F39B1EC0C800;       // 0x0020(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
