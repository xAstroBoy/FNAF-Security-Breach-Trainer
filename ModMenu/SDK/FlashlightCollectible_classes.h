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
	 * BlueprintGeneratedClass FlashlightCollectible.FlashlightCollectible_C
	 * Size -> 0x0017 (FullSize[0x0299] - InheritedSize[0x0282])
	 */
	class AFlashlightCollectible_C : public ACollectible_C
	{
	public:
		unsigned char                                              UnknownData_9T9C[0x6];                                   // 0x0282(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Flashlight;                                              // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       FlashlightAvailable;                                     // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateUIOnTick(bool* Output);
		void OnCollect();
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void OnLoadCollected();
		void ExecuteUbergraph_FlashlightCollectible(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
