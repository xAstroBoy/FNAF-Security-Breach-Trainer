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
	 * UserDefinedStruct FNAFDLSSQualitySettings.FNAFDLSSQualitySettings
	 * Size -> 0x0048
	 */
	struct FFNAFDLSSQualitySettings
	{
	public:
		FNAFQualityCommands_EFNAFQualityCommands                   QualityCommand_2_7AD4F910458809DFF96F8595CDD201C9;       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TTH8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Low_9_D167671A411CD2AD4E7DC199F5945061;                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              Medium_10_A15D0B434145ECDD521B40AFC8B98419;              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              High_11_77E6B0D24FD8CC59BB487CA85F5981AD;                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              Ultra_13_CDD5BC174C304AB7C93BEAB77F57B90A;               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
