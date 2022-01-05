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
	 * BlueprintGeneratedClass BP_PiratePoster.BP_PiratePoster_C
	 * Size -> 0x0083 (FullSize[0x0440] - InheritedSize[0x03BD])
	 */
	class ABP_PiratePoster_C : public ABP_DoorMaster_C
	{
	public:
		unsigned char                                              UnknownData_HNT2[0x3];                                   // 0x03BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                MOD_SingleHinge_MoviePoster;                             // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWorldStateHandlerComponent*                         BonnieWorldState;                                        // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWorldStateHandlerComponent*                         FoxyWorldState;                                          // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWorldStateHandlerComponent*                         ChicaWorldState;                                         // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWorldStateHandlerComponent*                         FreddyWorldState;                                        // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<class FString, bool>                                  CharactersToGlow;                                        // 0x03F0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ReceiveBeginPlay();
		void UpdateGlow();
		void BndEvt__FreddyWorldState_K2Node_ComponentBoundEvent_4_OnObjectStateChanged__DelegateSignature(class UWorldStateHandlerComponent* Handler, bool bState);
		void BndEvt__ChicaWorldState_K2Node_ComponentBoundEvent_5_OnObjectStateChanged__DelegateSignature(class UWorldStateHandlerComponent* Handler, bool bState);
		void BndEvt__FoxyWorldState_K2Node_ComponentBoundEvent_6_OnObjectStateChanged__DelegateSignature(class UWorldStateHandlerComponent* Handler, bool bState);
		void BndEvt__BonnieWorldState_K2Node_ComponentBoundEvent_7_OnObjectStateChanged__DelegateSignature(class UWorldStateHandlerComponent* Handler, bool bState);
		void ExecuteUbergraph_BP_PiratePoster(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
