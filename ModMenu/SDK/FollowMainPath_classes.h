#pragma once

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

// BlueprintGeneratedClass FollowMainPath.FollowMainPath_C
// 0x0074 (FullSize[0x011C] - InheritedSize[0x00A8])
class UFollowMainPath_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      DestinationNodeKey;                                        // 0x00B0(0x0028) (Edit, BlueprintVisible)
	float                                              AcceptanceRadius;                                          // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SF8J[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFindNextPoint_C*                            FindNextPoint;                                             // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      PathIndexKey;                                              // 0x00E8(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     Destination;                                               // 0x0110(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FollowMainPath.FollowMainPath_C");
		return ptr;
	}



	void OnMoveFinished_7D0AA3AC4EB43CAA4E635F8BC89D68DB(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_7D0AA3AC4EB43CAA4E635F8BC89D68DB();
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_FollowMainPath(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
