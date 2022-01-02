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

// BlueprintGeneratedClass Worker_SetOldState.Worker_SetOldState_C
// 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
class UWorker_SetOldState_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      State;                                                     // 0x00B0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      OldState;                                                  // 0x00D8(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Worker_SetOldState.Worker_SetOldState_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_Worker_SetOldState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif