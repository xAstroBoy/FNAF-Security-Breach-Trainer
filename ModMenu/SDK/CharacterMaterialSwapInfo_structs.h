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
	 * UserDefinedStruct CharacterMaterialSwapInfo.CharacterMaterialSwapInfo
	 * Size -> 0x0048
	 */
	struct FCharacterMaterialSwapInfo
	{
	public:
		fnaf9_EFNAFAISpawnType                                     CharacterType_13_F6BE47E348A75053DB03529BB9D53D52;       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EPZK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Materials0_3_BF0994124A6E32451268EFBD8BD9CAE1[0x10];     // 0x0001(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Materials1_5_449341C4409ED1F3785CF0AB0987A74A[0x10];     // 0x0018(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Materials2_7_B5925E434BD88ECBBE5E8D90D5F5D2C7[0x10];     // 0x0028(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Materials3_9_5D049D1D488EFDE627ECA7952A58D941[0x10];     // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
