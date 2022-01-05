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
	 * UserDefinedStruct S_Elevator_Doors.S_Elevator_Doors
	 * Size -> 0x0020
	 */
	struct FS_Elevator_Doors
	{
	public:
		TArray<class APRE_ElevatorDoor_Master_C*>                  A_4_15EE3E3E4CAE2FE6A06FB2A76EFAE9C3;                    // 0x0000(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash
		TArray<class APRE_ElevatorDoor_Master_C*>                  B_5_1AE6811F450FC9C658C5C18C1F4BF37D;                    // 0x0010(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
