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
	 * BlueprintGeneratedClass FindHidingLocation.FindHidingLocation_C
	 * Size -> 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
	 */
	class UFindHidingLocation_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              OutHideActorKey;                                         // 0x00B0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              OutSearchLocationKey;                                    // 0x00D8(0x0028) Edit, BlueprintVisible

	public:
		void GetHideActor(TArray<class AActor*>* HideActors, class AAIController* AIController, class APawn* Pawn, class AActor** Actor);
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_FindHidingLocation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
