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
	 * UserDefinedStruct S_RacerInfo.S_RacerInfo
	 * Size -> 0x0024
	 */
	struct FS_RacerInfo
	{
	public:
		float                                                      LastLapTime_3_2B99ECE04C3EA6BBE41389AE004DD21F;          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LapNumber_7_9DB2B2E04F71E70DD27763A94B3A404A;            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LastCheckpoint_9_6C9CFE944E6C6EA4C4DBBAA1332492E0;       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Position_11_F82BCD0A4147A6C2E70455BE8AADD617;            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              LapTimes_15_248883CE42D365B1305900AA8B992A70;            // 0x0010(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t                                                    BestLapIndex_19_AC39282945BF5D8889D8DCB6E3F620BF;        // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
