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
//		Name   -> Function EnableFreddyCallTrigger.EnableFreddyCallTrigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void AEnableFreddyCallTrigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EnableFreddyCallTrigger.EnableFreddyCallTrigger_C.OnTriggered");

	AEnableFreddyCallTrigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EnableFreddyCallTrigger.EnableFreddyCallTrigger_C.ExecuteUbergraph_EnableFreddyCallTrigger
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEnableFreddyCallTrigger_C::ExecuteUbergraph_EnableFreddyCallTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EnableFreddyCallTrigger.EnableFreddyCallTrigger_C.ExecuteUbergraph_EnableFreddyCallTrigger");

	AEnableFreddyCallTrigger_C_ExecuteUbergraph_EnableFreddyCallTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
