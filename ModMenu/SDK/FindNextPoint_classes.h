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
	 * BlueprintGeneratedClass FindNextPoint.FindNextPoint_C
	 * Size -> 0x00AD (FullSize[0x0155] - InheritedSize[0x00A8])
	 */
	class UFindNextPoint_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              BB_PathIndex;                                            // 0x00B0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              BB_PathVector;                                           // 0x00D8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              BB_PreviousLocation;                                     // 0x0100(0x0028) Edit, BlueprintVisible
		TArray<int32_t>                                            PossibleLocations;                                       // 0x0128(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FPointStruct>                                LocalPoints;                                             // 0x0138(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class APatrolPath_C*                                       PatrolPoint;                                             // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NextPathPointIndex;                                      // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FailOnNoPath;                                            // 0x0154(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Find_Next_Point(class APawn* Controlled_Pawn, int32_t CurrentPathIndex, int32_t PreviousPathIndex, bool FinishAtEnd, int32_t* NextPathPointIndex, struct FVector* NextPointLocation, bool* FoundPoint);
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_FindNextPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
