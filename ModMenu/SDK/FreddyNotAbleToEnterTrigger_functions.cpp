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
//		Name   -> Function FreddyNotAbleToEnterTrigger.FreddyNotAbleToEnterTrigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void AFreddyNotAbleToEnterTrigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyNotAbleToEnterTrigger.FreddyNotAbleToEnterTrigger_C.OnTriggered");

	AFreddyNotAbleToEnterTrigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyNotAbleToEnterTrigger.FreddyNotAbleToEnterTrigger_C.ExecuteUbergraph_FreddyNotAbleToEnterTrigger
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFreddyNotAbleToEnterTrigger_C::ExecuteUbergraph_FreddyNotAbleToEnterTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyNotAbleToEnterTrigger.FreddyNotAbleToEnterTrigger_C.ExecuteUbergraph_FreddyNotAbleToEnterTrigger");

	AFreddyNotAbleToEnterTrigger_C_ExecuteUbergraph_FreddyNotAbleToEnterTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
