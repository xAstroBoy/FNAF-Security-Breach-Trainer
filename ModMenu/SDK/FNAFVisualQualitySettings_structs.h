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
	 * UserDefinedStruct FNAFVisualQualitySettings.FNAFVisualQualitySettings
	 * Size -> 0x00E8
	 */
	struct FFNAFVisualQualitySettings
	{
	public:
		EFNAFQualityCommands                                       QualityCommand_3_69958D8743DD31385F09D39B833D904A;       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TOWW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PS4_13_B9B60FF847B8378E9569BB80554C703C;                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              PS5Low_37_D46E0FC54A7F04270DE94D975EC96551;              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              PS5High_36_F19484704FDEE0669B1FE3A0593D9C1C;             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              MinSpec780_31_DF3935F64E326F0D5567CA92BF9629DA;          // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              PCLow_22_CB99B1CE497FA318BE10A9B41446E0FA;               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              PCMedium_23_9F33F5B549A04D321D64128CB3187D50;            // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              PCHigh_24_2745C3334FA77CA9E3FABA9905B59A71;              // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              PCUltra_25_27D3E01C44C5E8740938EDA6A65E6027;             // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              XboxOneOriginal_53_F51D6DF34E481A4D988EB3ACE43B4B25;     // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              XboxOne_40_5DC206A549CC5759E0D7658559CA5D86;             // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              XSXLow_42_0CC4D0B64049EED6C25C16B4F02E56FB;              // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              XSXHigh_44_8A4E1C934D1DC081CDF1309866ACA7BD;             // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              XSSLow_49_FFCF06B847787D0829F4AF85606E8E26;              // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              XSSHigh_50_FD53F42A4797635CAF21CA9F9D555F76;             // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
