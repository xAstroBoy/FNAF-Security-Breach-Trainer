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
	 * BlueprintGeneratedClass ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C
	 * Size -> 0x0019 (FullSize[0x0321] - InheritedSize[0x0308])
	 */
	class AShatteredChicaSpawnTrigger_C : public ATeleportSpawnTrigger_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UGameTypeCheckDestroy*                               GameTypeCheckDestroy;                                    // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          Sound;                                                   // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RequireTrigger;                                          // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ReceiveBeginPlay();
		void Event_Post_Spawn_Logic(class APawn* Pawn);
		void OnTriggered();
		void ExecuteUbergraph_ShatteredChicaSpawnTrigger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
