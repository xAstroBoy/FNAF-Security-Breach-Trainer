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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class MagicLeapAR.LuminARSessionFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_StartLuminARSession(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULuminARSessionConfig* Configuration);
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapAR.LuminARFrameFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_LuminARLineTrace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, TArray<struct FARTraceResult>* OutHitResults);
		MagicLeapAR_ELuminARTrackingState STATIC_GetTrackingState();
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapAR.LuminARImageTrackingFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULuminARImageTrackingFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class ULuminARCandidateImage* STATIC_AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary);
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapAR.LuminARSessionConfig
	 * Size -> 0x0098 (FullSize[0x0140] - InheritedSize[0x00A8])
	 */
	class ULuminARSessionConfig : public UARSessionConfig
	{
	public:
		unsigned char                                              UnknownData_86JE[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMagicLeapPlanesQuery                               PlanesQuery;                                             // 0x00B0(0x0060) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlaneQueryResults;                                    // 0x0110(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinPlaneArea;                                            // 0x0114(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bArbitraryOrientationPlaneDetection;                     // 0x0118(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8J3[0x3];                                   // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PlaneSearchExtents;                                      // 0x011C(0x000C) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>          PlaneQueryFlags;                                         // 0x0128(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDiscardZeroExtentPlanes;                                // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDefaultUseUnreliablePose;                               // 0x0139(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3XQP[0x6];                                   // 0x013A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapAR.LuminARLightEstimate
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class ULuminARLightEstimate : public UARBasicLightEstimate
	{
	public:
		TArray<float>                                              AmbientIntensityNits;                                    // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		TArray<float> GetAmbientIntensityNits();
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapAR.LuminARCandidateImage
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class ULuminARCandidateImage : public UARCandidateImage
	{
	public:
		bool                                                       bUseUnreliablePose;                                      // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bImageIsStationary;                                      // 0x0059(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QTTH[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)

	public:
		bool GetUseUnreliablePose();
		bool GetImageIsStationary();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
