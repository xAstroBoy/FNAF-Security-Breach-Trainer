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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass CameraManager.CameraManager_C
	 * Size -> 0x0060 (FullSize[0x0288] - InheritedSize[0x0228])
	 */
	class ACameraManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumberOfActiveCameras;                                // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LD4T[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCameraSSDStruct>                            Cameras;                                                 // 0x0240(0x0010) Edit, BlueprintVisible
		TArray<class ACamera_C*>                                   ActiveCameras;                                           // 0x0250(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    LastIndex;                                               // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EH83[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEngineShowFlagsSetting>                     LowQualitySettings;                                      // 0x0268(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FEngineShowFlagsSetting>                     HighQualitySettings;                                     // 0x0278(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void IsInView(class AActor* ActorToCheck, float ViewAngle, bool* InView);
		void AddToActiveCameras();
		void ReceiveTick(float DeltaSeconds);
		void StartManager();
		void EndManager();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_CameraManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
