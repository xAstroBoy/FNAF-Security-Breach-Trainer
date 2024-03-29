﻿#pragma once

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
	 * BlueprintGeneratedClass FindClosestSeekerPath.FindClosestSeekerPath_C
	 * Size -> 0x0080 (FullSize[0x0128] - InheritedSize[0x00A8])
	 */
	class UFindClosestSeekerPath_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              PatrolPathKey;                                           // 0x00B0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              PatrolPointIndexKey;                                     // 0x00D8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              PatrolLocation;                                          // 0x0100(0x0028) Edit, BlueprintVisible

	public:
		void FindBestNextPoint(int32_t PointIndex, class APatrolPath_C* InputPin, const struct FVector& PointLocation, const struct FVector& PawnPosition, int32_t* BestNextPointIndex, struct FVector* BestNextPointLocation);
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_FindClosestSeekerPath(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
