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
	 * BlueprintGeneratedClass PlayerInViewService.PlayerInViewService_C
	 * Size -> 0x00C7 (FullSize[0x0168] - InheritedSize[0x00A1])
	 */
	class UPlayerInViewService_C : public USightDetectionService_C
	{
	public:
		unsigned char                                              UnknownData_S9IB[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      StartSightTime;                                          // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayerIsVisible;                                         // 0x00B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0TBT[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AmountOfTimeSeen;                                        // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NYXK[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              AmountOfTimeSeenBB;                                      // 0x00C0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              PlayerVisibleBB;                                         // 0x00E8(0x0028) Edit, BlueprintVisible
		class AGregory_C*                                          Gregory;                                                 // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBlackboardKeySelector                              SeenLocationBB;                                          // 0x0118(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              PlayerActorKey;                                          // 0x0140(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void Sight_Setup(class USightComponent* SightComponent);
		void On_Sight_Changed(class AActor* UpdatedActor, bool bVisible);
		void Sight_Cleanup(class USightComponent* SightComponent);
		void ExecuteUbergraph_PlayerInViewService(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
