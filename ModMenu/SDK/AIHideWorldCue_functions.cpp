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
//		Name   -> Function AIHideWorldCue.AIHideWorldCue_C.SetupWorldCue
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AAIHideWorldCue_C::SetupWorldCue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIHideWorldCue.AIHideWorldCue_C.SetupWorldCue");

	AAIHideWorldCue_C_SetupWorldCue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AIHideWorldCue.AIHideWorldCue_C.ResetWorldCue
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AAIHideWorldCue_C::ResetWorldCue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIHideWorldCue.AIHideWorldCue_C.ResetWorldCue");

	AAIHideWorldCue_C_ResetWorldCue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AIHideWorldCue.AIHideWorldCue_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AAIHideWorldCue_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIHideWorldCue.AIHideWorldCue_C.ReceiveBeginPlay");

	AAIHideWorldCue_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AIHideWorldCue.AIHideWorldCue_C.ExecuteUbergraph_AIHideWorldCue
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIHideWorldCue_C::ExecuteUbergraph_AIHideWorldCue(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIHideWorldCue.AIHideWorldCue_C.ExecuteUbergraph_AIHideWorldCue");

	AAIHideWorldCue_C_ExecuteUbergraph_AIHideWorldCue_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
