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
	 * BlueprintGeneratedClass FreddyBackroomPause.FreddyBackroomPause_C
	 * Size -> 0x00C8 (FullSize[0x02F0] - InheritedSize[0x0228])
	 */
	class AFreddyBackroomPause_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UArrowComponent*                                     Freddy_Spawn;                                            // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Vanny_Spawn;                                             // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              OGM_Back_Stage[0x28];                                    // 0x0250(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PathActor[0x28];                                         // 0x0278(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              GrateSequence[0x28];                                     // 0x02A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CatchSequence[0x28];                                     // 0x02C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ExecuteUbergraph_FreddyBackroomPause(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
