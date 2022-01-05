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
	 * BlueprintGeneratedClass MoveToFreddyInteractible.MoveToFreddyInteractible_C
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	class UMoveToFreddyInteractible_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              FreddyInteractibleKey;                                   // 0x00B0(0x0028) Edit, BlueprintVisible

	public:
		void OnMoveFinished_0D6A96F54A9CABBACEB7D981B96EB764(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController);
		void OnRequestFailed_0D6A96F54A9CABBACEB7D981B96EB764();
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_MoveToFreddyInteractible(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
