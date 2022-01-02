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
//		Name   -> Function JumbotronTrigger.JumbotronTrigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void AJumbotronTrigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JumbotronTrigger.JumbotronTrigger_C.OnTriggered");

	AJumbotronTrigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function JumbotronTrigger.JumbotronTrigger_C.VannyDisplaySeq
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AJumbotronTrigger_C::VannyDisplaySeq()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JumbotronTrigger.JumbotronTrigger_C.VannyDisplaySeq");

	AJumbotronTrigger_C_VannyDisplaySeq_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function JumbotronTrigger.JumbotronTrigger_C.OnDisplayStopped
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AJumbotronTrigger_C::OnDisplayStopped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JumbotronTrigger.JumbotronTrigger_C.OnDisplayStopped");

	AJumbotronTrigger_C_OnDisplayStopped_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function JumbotronTrigger.JumbotronTrigger_C.ExecuteUbergraph_JumbotronTrigger
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AJumbotronTrigger_C::ExecuteUbergraph_JumbotronTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JumbotronTrigger.JumbotronTrigger_C.ExecuteUbergraph_JumbotronTrigger");

	AJumbotronTrigger_C_ExecuteUbergraph_JumbotronTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
