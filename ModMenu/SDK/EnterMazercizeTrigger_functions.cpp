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
//		Name   -> Function EnterMazercizeTrigger.EnterMazercizeTrigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void AEnterMazercizeTrigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EnterMazercizeTrigger.EnterMazercizeTrigger_C.OnTriggered");

	AEnterMazercizeTrigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EnterMazercizeTrigger.EnterMazercizeTrigger_C.ExecuteUbergraph_EnterMazercizeTrigger
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEnterMazercizeTrigger_C::ExecuteUbergraph_EnterMazercizeTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EnterMazercizeTrigger.EnterMazercizeTrigger_C.ExecuteUbergraph_EnterMazercizeTrigger");

	AEnterMazercizeTrigger_C_ExecuteUbergraph_EnterMazercizeTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
