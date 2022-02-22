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
	 * BlueprintGeneratedClass HeadAimService.HeadAimService_C
	 * Size -> 0x0038 (FullSize[0x00D0] - InheritedSize[0x0098])
	 */
	class UHeadAimService_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       AimWhileActive;                                          // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TV9O[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              HeadAimTargetActorKey;                                   // 0x00A8(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_HeadAimService(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
