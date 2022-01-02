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
//		Name   -> Function TwoPlansTrigger.TwoPlansTrigger_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATwoPlansTrigger_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TwoPlansTrigger.TwoPlansTrigger_C.ReceiveBeginPlay");

	ATwoPlansTrigger_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function TwoPlansTrigger.TwoPlansTrigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATwoPlansTrigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TwoPlansTrigger.TwoPlansTrigger_C.OnTriggered");

	ATwoPlansTrigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function TwoPlansTrigger.TwoPlansTrigger_C.On Skip
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FName>                               SkippedTasks                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void ATwoPlansTrigger_C::On_Skip(TArray<struct FName>* SkippedTasks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TwoPlansTrigger.TwoPlansTrigger_C.On Skip");

	ATwoPlansTrigger_C_On_Skip_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SkippedTasks != nullptr)
		*SkippedTasks = params.SkippedTasks;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function TwoPlansTrigger.TwoPlansTrigger_C.ManualTrigger
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATwoPlansTrigger_C::ManualTrigger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TwoPlansTrigger.TwoPlansTrigger_C.ManualTrigger");

	ATwoPlansTrigger_C_ManualTrigger_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function TwoPlansTrigger.TwoPlansTrigger_C.ExecuteUbergraph_TwoPlansTrigger
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATwoPlansTrigger_C::ExecuteUbergraph_TwoPlansTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TwoPlansTrigger.TwoPlansTrigger_C.ExecuteUbergraph_TwoPlansTrigger");

	ATwoPlansTrigger_C_ExecuteUbergraph_TwoPlansTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
