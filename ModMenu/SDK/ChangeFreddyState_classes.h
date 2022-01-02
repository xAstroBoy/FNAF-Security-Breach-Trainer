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

// BlueprintGeneratedClass ChangeFreddyState.ChangeFreddyState_C
// 0x0031 (FullSize[0x00D9] - InheritedSize[0x00A8])
class UChangeFreddyState_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      StateKey;                                                  // 0x00B0(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<FreddyAIState_EFreddyAIState>          NewState;                                                  // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ChangeFreddyState.ChangeFreddyState_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_ChangeFreddyState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif