﻿#pragma once

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
	 * BlueprintGeneratedClass CollectibleTape.CollectibleTape_C
	 * Size -> 0x0018 (FullSize[0x029A] - InheritedSize[0x0282])
	 */
	class ACollectibleTape_C : public ACollectible_C
	{
	public:
		unsigned char                                              UnknownData_73NL[0x6];                                   // 0x0282(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       HasBeenCollected_;                                       // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       progressSoundPlaying;                                    // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetInteractibleType(InteractibleType_EInteractibleType* Type, InteractiblePressType_EInteractiblePressType* PressType);
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
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
