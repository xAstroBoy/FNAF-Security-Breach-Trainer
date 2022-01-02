﻿#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FollowSpline.FollowSpline_C
// 0x007C (FullSize[0x0124] - InheritedSize[0x00A8])
class UFollowSpline_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BBSplineManager;                                           // 0x00B0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BBMovementSpeed;                                           // 0x00D8(0x0028) (Edit, BlueprintVisible)
	struct FSplineFollowerContext                      SplineFollowContext;                                       // 0x0100(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0118(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FollowSpline.FollowSpline_C");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void Finish_Movement(class APawn* ControlledPawn);
	void ExecuteUbergraph_FollowSpline(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
