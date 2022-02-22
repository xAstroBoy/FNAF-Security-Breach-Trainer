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
	 * Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
	 * Size -> 0x0080 (FullSize[0x0270] - InheritedSize[0x01F0])
	 */
	class UMagicLeapImageTrackerComponent : public USceneComponent
	{
	public:
		class UTexture2D*                                          TargetImageTexture;                                      // 0x01F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LongerDimension;                                         // 0x0208(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsStationary;                                           // 0x020C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseUnreliablePose;                                      // 0x020D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72RR[0x2];                                   // 0x020E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSetImageTargetSucceeded;                               // 0x0210(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSetImageTargetFailed;                                  // 0x0220(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnImageTargetFound;                                      // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnImageTargetLost;                                       // 0x0240(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnImageTargetUnreliableTracking;                         // 0x0250(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YD3O[0x10];                                  // 0x0260(0x0010) MISSED OFFSET (PADDING)

	public:
		bool SetTargetAsync(class UTexture2D* ImageTarget);
		bool RemoveTargetAsync();
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets);
		bool STATIC_IsImageTrackingEnabled();
		int32_t STATIC_GetMaxSimultaneousTargets();
		void STATIC_EnableImageTracking(bool bEnable);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
