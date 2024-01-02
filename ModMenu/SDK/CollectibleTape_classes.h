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
	 * BlueprintGeneratedClass CollectibleTape.CollectibleTape_C
	 * Size -> 0x0019 (FullSize[0x02D2] - InheritedSize[0x02B9])
	 */
	class ACollectibleTape_C : public ACollectible_C
	{
	public:
		unsigned char                                              UnknownData_FOQU[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       HasBeenCollected;                                        // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       progressSoundPlaying;                                    // 0x02D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CollectibleTapeHasBeenCollected(bool* Collected);
		void GetInteractibleType(EInteractibleType* Type, EInteractiblePressType* PressType);
		void CanPlayerInteract(bool* CanInteract, EConditionFailReason* CantReason);
		void ReceiveBeginPlay();
		void OnPlayerInteractCancel();
		void CancelInteract();
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature();
		void MakeVisible();
		void ExecuteUbergraph_CollectibleTape(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
