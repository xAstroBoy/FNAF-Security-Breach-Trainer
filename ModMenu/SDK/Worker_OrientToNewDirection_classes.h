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
	 * BlueprintGeneratedClass Worker_OrientToNewDirection.Worker_OrientToNewDirection_C
	 * Size -> 0x015C (FullSize[0x0204] - InheritedSize[0x00A8])
	 */
	class UWorker_OrientToNewDirection_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              DirectionAlongSpline;                                    // 0x00B0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              ForwardAlongSpline;                                      // 0x00D8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              AtStartOfSpline;                                         // 0x0100(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              AtEndOfSpline;                                           // 0x0128(0x0028) Edit, BlueprintVisible
		class AStaffBotWorker_SplineFollower_C*                    StaffBot;                                                // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTime;                                               // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XKCO[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AStaffBotWorkerPath_C*                               Path;                                                    // 0x0160(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LocalDistanceAlongPath;                                  // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R4KV[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              DistanceAlongPath;                                       // 0x0170(0x0028) Edit, BlueprintVisible
		struct FRotator                                            TargetRotation;                                          // 0x0198(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RotationInterpSpeed;                                     // 0x01A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TargetSet;                                               // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0SD1[0x7];                                   // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              PauseTask;                                               // 0x01B0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              BBTargetRotation;                                        // 0x01D8(0x0028) Edit, BlueprintVisible
		float                                                      TurnDirection;                                           // 0x0200(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ExecuteUbergraph_Worker_OrientToNewDirection(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
