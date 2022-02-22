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
	 * BlueprintGeneratedClass SplineForkDetectService.SplineForkDetectService_C
	 * Size -> 0x000C (FullSize[0x00A4] - InheritedSize[0x0098])
	 */
	class USplineForkDetectService_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    RandomPathIndex;                                         // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void On_Overlap(class AActor* OverlappedActor, class AActor* OtherActor);
		void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_SplineForkDetectService(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
