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
	 * UserDefinedStruct S_Elevator_Airlock.S_Elevator_Airlock
	 * Size -> 0x00A8
	 */
	struct FS_Elevator_Airlock
	{
	public:
		unsigned char                                              Buttons_12_25682BE14817A9391D593A95505BAAAA[0x10];       // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              ArrowIndicators_18_2DBE76F2482A2DAA9E6E9FBAB4BD9A5F[0x10]; // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FS_Elevator_Airlock_Location                        A_13_C073DD34469CB89235F773A6F1274593;                   // 0x0020(0x0030) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FS_Elevator_Airlock_Location                        B_14_F48A13D84EE431FD8792DAA5E41A4F34;                   // 0x0050(0x0030) Edit, BlueprintVisible, HasGetValueTypeHash
		unsigned char                                              ElevatorPrefab_21_88D6F6A446347CB4CDD912BAA1529B22[0x28]; // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
