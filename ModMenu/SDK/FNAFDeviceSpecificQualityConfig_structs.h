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
	 * UserDefinedStruct FNAFDeviceSpecificQualityConfig.FNAFDeviceSpecificQualityConfig
	 * Size -> 0x0013
	 */
	struct FFNAFDeviceSpecificQualityConfig
	{
	public:
		class FString                                              GPUSearchStr_4_D7CCA5F94A7B8C1D2C1A29B407CDF76A;         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		EFNAFVisualQualityLevel                                    VisualQuality_10_885AC6DF43E1D45527159980AB2545D8;       // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFNAFRayTraceQualityLevel                                  RaytraceQuality_9_27E3A3F348C0251FF0AB82AFE1F5EB74;      // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceMinSpec_13_C14874F34AE0E4265B2EA181F76A814F;        // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
