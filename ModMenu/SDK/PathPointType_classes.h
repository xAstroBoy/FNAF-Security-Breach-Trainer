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
	 * BlueprintGeneratedClass PathPointType.PathPointType_C
	 * Size -> 0x0051 (FullSize[0x00F1] - InheritedSize[0x00A0])
	 */
	class UPathPointType_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              PatrolPathKey;                                           // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              PatrolPointIndexKey;                                     // 0x00C8(0x0028) Edit, BlueprintVisible
		EPatrolPointType                                           PointType;                                               // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
