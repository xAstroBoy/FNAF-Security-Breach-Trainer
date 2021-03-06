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
	 * BlueprintGeneratedClass FindClosestSplinePoint.FindClosestSplinePoint_C
	 * Size -> 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
	 */
	class UFindClosestSplinePoint_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              SplineManagerBB;                                         // 0x00B0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              LocationOnSplineBB;                                      // 0x00D8(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_FindClosestSplinePoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
