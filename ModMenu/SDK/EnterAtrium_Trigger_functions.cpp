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
//		Name   -> Function EnterAtrium_Trigger.EnterAtrium_Trigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void AEnterAtrium_Trigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EnterAtrium_Trigger.EnterAtrium_Trigger_C.OnTriggered");

	AEnterAtrium_Trigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EnterAtrium_Trigger.EnterAtrium_Trigger_C.ExecuteUbergraph_EnterAtrium_Trigger
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEnterAtrium_Trigger_C::ExecuteUbergraph_EnterAtrium_Trigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EnterAtrium_Trigger.EnterAtrium_Trigger_C.ExecuteUbergraph_EnterAtrium_Trigger");

	AEnterAtrium_Trigger_C_ExecuteUbergraph_EnterAtrium_Trigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
