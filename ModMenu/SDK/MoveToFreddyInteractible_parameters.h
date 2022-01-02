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
// Parameters
//---------------------------------------------------------------------------

// Function MoveToFreddyInteractible.MoveToFreddyInteractible_C.OnMoveFinished_0D6A96F54A9CABBACEB7D981B96EB764
struct UMoveToFreddyInteractible_C_OnMoveFinished_0D6A96F54A9CABBACEB7D981B96EB764_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         Result;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                               AIController;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MoveToFreddyInteractible.MoveToFreddyInteractible_C.OnRequestFailed_0D6A96F54A9CABBACEB7D981B96EB764
struct UMoveToFreddyInteractible_C_OnRequestFailed_0D6A96F54A9CABBACEB7D981B96EB764_Params
{
};

// Function MoveToFreddyInteractible.MoveToFreddyInteractible_C.ReceiveExecuteAI
struct UMoveToFreddyInteractible_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MoveToFreddyInteractible.MoveToFreddyInteractible_C.ExecuteUbergraph_MoveToFreddyInteractible
struct UMoveToFreddyInteractible_C_ExecuteUbergraph_MoveToFreddyInteractible_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
