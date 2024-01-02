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
	 * UserDefinedStruct FNAFGlobalVisualQualitySettings.FNAFGlobalVisualQualitySettings
	 * Size -> 0x0028
	 */
	struct FFNAFGlobalVisualQualitySettings
	{
	public:
		EFNAFQualityCommands                                       QualityCommand_3_69958D8743DD31385F09D39B833D904A;       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MBGM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DefaultValue_56_FD53F42A4797635CAF21CA9F9D555F76;        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              PS4_59_A03DA01C48C436D4E983BB9AB8B0AB5C;                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
