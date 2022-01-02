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
//		Name   -> Function BP_WwiseStateTrigger.BP_WwiseStateTrigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_WwiseStateTrigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WwiseStateTrigger.BP_WwiseStateTrigger_C.OnTriggered");

	ABP_WwiseStateTrigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_WwiseStateTrigger.BP_WwiseStateTrigger_C.ExecuteUbergraph_BP_WwiseStateTrigger
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WwiseStateTrigger_C::ExecuteUbergraph_BP_WwiseStateTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WwiseStateTrigger.BP_WwiseStateTrigger_C.ExecuteUbergraph_BP_WwiseStateTrigger");

	ABP_WwiseStateTrigger_C_ExecuteUbergraph_BP_WwiseStateTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
