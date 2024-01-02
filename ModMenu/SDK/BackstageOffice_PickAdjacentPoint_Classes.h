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
	 * BlueprintGeneratedClass BackstageOffice_PickAdjacentPoint.BackstageOffice_PickAdjacentPoint_C
	 * Size -> 0x00D0 (FullSize[0x0178] - InheritedSize[0x00A8])
	 */
	class UBackstageOffice_PickAdjacentPoint_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              BackstageDoorManager;                                    // 0x00B0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              DoorLevel;                                               // 0x00D8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              DoorIndex;                                               // 0x0100(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetLocation;                                          // 0x0128(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              DoorManagers;                                            // 0x0150(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BackstageOffice_PickAdjacentPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
