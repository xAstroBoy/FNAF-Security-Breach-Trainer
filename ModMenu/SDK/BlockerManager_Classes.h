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
	 * BlueprintGeneratedClass BlockerManager.BlockerManager_C
	 * Size -> 0x003A (FullSize[0x0262] - InheritedSize[0x0228])
	 */
	class ABlockerManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UConditionalCheckComponent*                          ConditionalCheck;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Actors[0x10];                                            // 0x0240(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              ActorsToDestroy[0x10];                                   // 0x0250(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       MakeActorHidden;                                         // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       KeepHiddenOnState;                                       // 0x0261(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Hide_Actors(bool Unhide);
		void DestroyRemainingActors();
		void ReceiveTick(float DeltaSeconds);
		void DestroyManagedActors();
		void BndEvt__ConditionalCheck_K2Node_ComponentBoundEvent_0_OnConditionalCheckUpdated__DelegateSignature(class UConditionalCheckComponent* ConditionCheckComponent, bool bNewResult);
		void ExecuteUbergraph_BlockerManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
