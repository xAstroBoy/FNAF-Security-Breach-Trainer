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
	 * BlueprintGeneratedClass FindOtherDoor.FindOtherDoor_C
	 * Size -> 0x00C8 (FullSize[0x0170] - InheritedSize[0x00A8])
	 */
	class UFindOtherDoor_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              CurrentBackstageDoor;                                    // 0x00B0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              InvestigationLocationBB;                                 // 0x00D8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              WayPointLocationFirstBB;                                 // 0x0100(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              WayPointLocationSecondBB;                                // 0x0128(0x0028) Edit, BlueprintVisible
		float                                                      Distance;                                                // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Location;                                                // 0x0154(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ChosenWaypoint;                                          // 0x0160(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PairedWaypoint;                                          // 0x0168(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_FindOtherDoor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
