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
//		Name   -> Function LMMSplinePathwayManager.LMMSplinePathwayManager_C.OnTriggerPointHit
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALMMSplinePathwayManager_C::OnTriggerPointHit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LMMSplinePathwayManager.LMMSplinePathwayManager_C.OnTriggerPointHit");

	ALMMSplinePathwayManager_C_OnTriggerPointHit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LMMSplinePathwayManager.LMMSplinePathwayManager_C.Event_OnSplineEndReached
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALMMSplinePathwayManager_C::Event_OnSplineEndReached()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LMMSplinePathwayManager.LMMSplinePathwayManager_C.Event_OnSplineEndReached");

	ALMMSplinePathwayManager_C_Event_OnSplineEndReached_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LMMSplinePathwayManager.LMMSplinePathwayManager_C.ExecuteUbergraph_LMMSplinePathwayManager
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALMMSplinePathwayManager_C::ExecuteUbergraph_LMMSplinePathwayManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LMMSplinePathwayManager.LMMSplinePathwayManager_C.ExecuteUbergraph_LMMSplinePathwayManager");

	ALMMSplinePathwayManager_C_ExecuteUbergraph_LMMSplinePathwayManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
