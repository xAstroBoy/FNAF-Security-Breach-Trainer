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

// Function FollowMainPath.FollowMainPath_C.OnMoveFinished_7D0AA3AC4EB43CAA4E635F8BC89D68DB
struct UFollowMainPath_C_OnMoveFinished_7D0AA3AC4EB43CAA4E635F8BC89D68DB_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         Result;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                               AIController;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FollowMainPath.FollowMainPath_C.OnRequestFailed_7D0AA3AC4EB43CAA4E635F8BC89D68DB
struct UFollowMainPath_C_OnRequestFailed_7D0AA3AC4EB43CAA4E635F8BC89D68DB_Params
{
};

// Function FollowMainPath.FollowMainPath_C.ReceiveAbortAI
struct UFollowMainPath_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FollowMainPath.FollowMainPath_C.ReceiveExecuteAI
struct UFollowMainPath_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FollowMainPath.FollowMainPath_C.ExecuteUbergraph_FollowMainPath
struct UFollowMainPath_C_ExecuteUbergraph_FollowMainPath_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
