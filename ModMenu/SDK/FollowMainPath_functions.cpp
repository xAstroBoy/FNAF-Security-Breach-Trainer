// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FollowMainPath.FollowMainPath_C.OnMoveFinished_7D0AA3AC4EB43CAA4E635F8BC89D68DB
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<AIModule_EPathFollowingResult>         Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AAIController*                               AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFollowMainPath_C::OnMoveFinished_7D0AA3AC4EB43CAA4E635F8BC89D68DB(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FollowMainPath.FollowMainPath_C.OnMoveFinished_7D0AA3AC4EB43CAA4E635F8BC89D68DB");

	UFollowMainPath_C_OnMoveFinished_7D0AA3AC4EB43CAA4E635F8BC89D68DB_Params params {};
	params.Result = Result;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FollowMainPath.FollowMainPath_C.OnRequestFailed_7D0AA3AC4EB43CAA4E635F8BC89D68DB
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UFollowMainPath_C::OnRequestFailed_7D0AA3AC4EB43CAA4E635F8BC89D68DB()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FollowMainPath.FollowMainPath_C.OnRequestFailed_7D0AA3AC4EB43CAA4E635F8BC89D68DB");

	UFollowMainPath_C_OnRequestFailed_7D0AA3AC4EB43CAA4E635F8BC89D68DB_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FollowMainPath.FollowMainPath_C.ReceiveAbortAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFollowMainPath_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FollowMainPath.FollowMainPath_C.ReceiveAbortAI");

	UFollowMainPath_C_ReceiveAbortAI_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FollowMainPath.FollowMainPath_C.ReceiveExecuteAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFollowMainPath_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FollowMainPath.FollowMainPath_C.ReceiveExecuteAI");

	UFollowMainPath_C_ReceiveExecuteAI_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FollowMainPath.FollowMainPath_C.ExecuteUbergraph_FollowMainPath
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFollowMainPath_C::ExecuteUbergraph_FollowMainPath(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FollowMainPath.FollowMainPath_C.ExecuteUbergraph_FollowMainPath");

	UFollowMainPath_C_ExecuteUbergraph_FollowMainPath_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
