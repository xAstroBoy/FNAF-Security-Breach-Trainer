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
	 * UserDefinedStruct FogVolumeInfo.FogVolumeInfo
	 * Size -> 0x0054
	 */
	struct FFogVolumeInfo
	{
	public:
		float                                                      FogDensity_3_6B84B08B40E8F6366949E0A5D8558ABE;           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FogInscatteringColor_19_A09457F3453121D6BAC69F9BB24AA75C; // 0x0004(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FogMaxOpacity_22_C631F454418F9E31F3B683BBC0460B6F;       // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartDistance_9_155562FF4BFEC7CAE6B4B2AA5F3DE599;        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DLC_FogCutoffDistance_33_74832EE84B69C2CAAE31BABF0C06DB51; // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScatteringDistribution_18_9FC02B49419B893F53CF6785E37691ED; // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DLC_VolumetricEmissive_34_4630006447AE98F7D184ABB9FB82F522; // 0x0024(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InterpSpeed_28_5B37CB0647E7BAB4B2BF858BCD36F821;         // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DLC_VolumeFogDistance_35_0F83344142A7DC52C37AA787B9EBE67F; // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DLC_VolumeFogAlbedo_38_E60577F0475729876A1995B714C1148A; // 0x003C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DLC_ExtinctionScale_41_869CED6F4906E334CA4FC2976DAEB637; // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DLC_HeightFallOff_44_EC0085404008F681029067B065788696;   // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
