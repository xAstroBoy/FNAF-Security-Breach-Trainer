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
	 * BlueprintGeneratedClass PrizeCounter_RoxyAndMontySpawnCheck.PrizeCounter_RoxyAndMontySpawnCheck_C
	 * Size -> 0x0078 (FullSize[0x02E8] - InheritedSize[0x0270])
	 */
	class APrizeCounter_RoxyAndMontySpawnCheck_C : public APlayerTrigger
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTimeCheckComponent_C*                               TimeCheckComponent;                                      // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpawnAISceneComponent_C*                            MontySpawnComponent;                                     // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpawnAISceneComponent_C*                            RoxySpawnComponent;                                      // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       WasTriggered;                                            // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZFB4[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SeekerPatrolPathMonty[0x28];                             // 0x0298(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SeekerPatrolPathRoxy[0x28];                              // 0x02C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void OnTriggered();
		void ExecuteUbergraph_PrizeCounter_RoxyAndMontySpawnCheck(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
