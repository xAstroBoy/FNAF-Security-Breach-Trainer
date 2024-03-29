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
	 * BlueprintGeneratedClass FollowMainPath.FollowMainPath_C
	 * Size -> 0x0074 (FullSize[0x011C] - InheritedSize[0x00A8])
	 */
	class UFollowMainPath_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              DestinationNodeKey;                                      // 0x00B0(0x0028) Edit, BlueprintVisible
		float                                                      AcceptanceRadius;                                        // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EM3D[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFindNextPoint_C*                                    FindNextPoint;                                           // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBlackboardKeySelector                              PathIndexKey;                                            // 0x00E8(0x0028) Edit, BlueprintVisible
		struct FVector                                             Destination;                                             // 0x0110(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnMoveFinished_7D0AA3AC4EB43CAA4E635F8BC89D68DB(EPathFollowingResult Result, class AAIController* AIController);
		void OnRequestFailed_7D0AA3AC4EB43CAA4E635F8BC89D68DB();
		void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_FollowMainPath(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
