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
	 * BlueprintGeneratedClass AttackDoor.AttackDoor_C
	 * Size -> 0x005A (FullSize[0x0102] - InheritedSize[0x00A8])
	 */
	class UAttackDoor_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              CurrentBackstageDoor;                                    // 0x00B0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              PathBlockedBB;                                           // 0x00D8(0x0028) Edit, BlueprintVisible
		bool                                                       CanDrainPower;                                           // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Force_Stop;                                              // 0x0101(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetDoorManager(class ABP_DoorMaster_C** Door);
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_AttackDoor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
