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
	 * BlueprintGeneratedClass Worker_ReverseDirection.Worker_ReverseDirection_C
	 * Size -> 0x00E0 (FullSize[0x0188] - InheritedSize[0x00A8])
	 */
	class UWorker_ReverseDirection_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       TPHasProp;                                               // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_22EL[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              ForwardAlongSpline;                                      // 0x00B8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              DirectionAlongSpline;                                    // 0x00E0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              AtStartOfSpline;                                         // 0x0108(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              AtEndOfSpline;                                           // 0x0130(0x0028) Edit, BlueprintVisible
		bool                                                       InitialBool;                                             // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P4BR[0x3];                                   // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InitialFoat;                                             // 0x015C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBlackboardKeySelector                              PauseTask;                                               // 0x0160(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_Worker_ReverseDirection(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
