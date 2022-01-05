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
	 * BlueprintGeneratedClass ChaseAnimationMusicManTeleportSpawnTrigger.ChaseAnimationMusicManTeleportSpawnTrigger_C
	 * Size -> 0x0075 (FullSize[0x03A0] - InheritedSize[0x032B])
	 */
	class AChaseAnimationMusicManTeleportSpawnTrigger_C : public AAnimationMusicManTeleportSpawnTrigger_C
	{
	public:
		unsigned char                                              UnknownData_YR0Q[0x5];                                   // 0x032B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       End_Animation_Trigger1;                                  // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraOverrideComponent_C*                          CameraOverrideComponent;                                 // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       End_Animation_Trigger;                                   // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              DJMM_Sequence[0x28];                                     // 0x0350(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MusicHandler[0x28];                                      // 0x0378(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void Event_Post_Spawn_Logic(class APawn* Pawn);
		void End_Animation_Sequence();
		void BndEvt__End_Animation_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnTriggered();
		void BndEvt__End_Animation_Trigger1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ExecuteUbergraph_ChaseAnimationMusicManTeleportSpawnTrigger(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
