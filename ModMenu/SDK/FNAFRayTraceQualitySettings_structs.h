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
	 * UserDefinedStruct FNAFRayTraceQualitySettings.FNAFRayTraceQualitySettings
	 * Size -> 0x0038
	 */
	struct FFNAFRayTraceQualitySettings
	{
	public:
		EFNAFQualityCommands                                       QualityCommand_2_C7DD91854562814E8D8E86B7724E319A;       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I9BV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Low_11_DB36ADC840CE017840C1D1AA7EBFA73A;                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              Medium_12_4646F7154FBB94FF5F4D02A8031478B9;              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              High_13_20A2DD094E903BC1888A79976F3D4226;                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
