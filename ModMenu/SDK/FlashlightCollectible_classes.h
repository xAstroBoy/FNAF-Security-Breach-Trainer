﻿#pragma once

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
	 * BlueprintGeneratedClass FlashlightCollectible.FlashlightCollectible_C
	 * Size -> 0x0018 (FullSize[0x02D1] - InheritedSize[0x02B9])
	 */
	class AFlashlightCollectible_C : public ACollectible_C
	{
	public:
		unsigned char                                              UnknownData_5HRR[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Flashlight;                                              // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       FlashlightAvailable;                                     // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateUIOnTick(bool* Output);
		void OnCollect();
		void CanPlayerInteract(bool* CanInteract, EConditionFailReason* CantReason);
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void OnLoadCollected();
		void ExecuteUbergraph_FlashlightCollectible(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
