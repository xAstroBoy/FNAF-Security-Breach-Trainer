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
	 * UserDefinedStruct TimeCheckValues_Struct.TimeCheckValues_Struct
	 * Size -> 0x0010
	 */
	struct FTimeCheckValues_Struct
	{
	public:
		int32_t                                                    StartHour_8_82D78BD840B2B53E187CA497B7BD33B1;            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StartMinute_9_C2C2147F405DDA8F681B2683EB1C247F;          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EndHour_10_236FCB3042FD1C6ACEF565A73CE8067A;             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EndMinute_11_D8E512D042D93DF3531127900DAEFCD0;           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
